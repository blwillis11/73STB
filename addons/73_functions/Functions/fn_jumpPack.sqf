params ["_held"];
private ["_held","_velC","_vel","_pos","_height","_arrayDir","_dir","_addDir"];

_backpack = backpack player;
if ((_backpack != "STB73_JumpPack_on"  AND _backpack != "STB73_JumpPack")) exitWith {};
if !(STB73_JumpPack_Enabled) exitWith {hint "JumpPacks are currently disabled by an admin";};

if ((player getVariable ["ace_medical_isUnconscious", false]) or (not (alive player)) or (vehicle player != player)) exitWith {};


if (not _held) exitWith {
    STB73_JumpPack_ON = false;
    WMO_Enabled = true;
    playSound "OPTRE_Sounds_Jetpack_End";
    _backpackItems = backpackItems player;
    removeBackpack player;
    player addBackpack "STB73_JumpPack";
    {player addItemToBackpack _x;} forEach _backpackItems;
    if(not (isNil "STB73_JumpPack_Effects")) then {
        {deleteVehicle _x;} forEach STB73_JumpPack_Effects;
    };
    STB73_JumpPack_Effects = nil;
    if(not (isNil "STB73_JumpPackWaiting")) then {
        if(STB73_JumpPackWaiting) exitWith {};
    };
    if(not isTouchingGround player and (vehicle player == player)) then {
        waitUntil{
            uiSleep .1;
            [(getPosASL player),velocity (vehicle player)] call STB73_fnc_RoofStuckCheck;
            (isTouchingGround player);
        };
    };
    STB73_JumpPackWaiting = false;
    if (!isNil "STB73_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",STB73_JumpPack_keyDownEH];};
    STB73_JumpPack_keyDownEH = nil;
    //player switchMove "";
};

if(stance player == "PRONE") exitWith {player playMoveNow "AmovPercMstpSrasWrflDnon";};

_heat = player getVariable ["STB73_JumpPack_heat",0];
_fuel = player getVariable ["STB73_JumpPack_fuel",1];
if(_heat >= 1 and _fuel <= 0) exitWith {};

if(isNil "STB73_JumpPack_UI") then {
    // Control Variables
    82 cutRsc ["JumpPackUI","PLAIN"];
    _dialog = uiNamespace getVariable "STB73_JumpPack_UI";
     uiNamespace setVariable ["STB73_JumpPack_UI_heat",(_dialog displayCtrl 37202)];
     uiNamespace setVariable ["STB73_JumpPack_UI_fuel",(_dialog displayCtrl 37204)];
     uiNamespace setVariable ["STB73_JumpPack_UI_heat2",(_dialog displayCtrl 37206)];

    // Fuel Variables
    _heat = player getVariable ["STB73_JumpPack_heat",0];
    _fuel = player getVariable ["STB73_JumpPack_fuel",1];

    (uiNamespace getVariable "STB73_JumpPack_UI_heat") progressSetPosition _heat;
    (uiNamespace getVariable "STB73_JumpPack_UI_heat2") progressSetPosition _heat;
    (uiNamespace getVariable "STB73_JumpPack_UI_fuel")  progressSetPosition _fuel;

    player setVariable ["STB73_JumpPack_heat",_heat,false];
    player setVariable ["STB73_JumpPack_fuel",_fuel,false];
};

if(isNil "STB73_JumpPack_ON") then {
    STB73_JumpPack_ON = false;
};

if(STB73_JumpPack_ON) exitWith {};
playSound "OPTRE_Sounds_Jetpack_StartUp";
player playMoveNow "PlayerStand";
STB73_JumpPack_ON = true;
WMO_Enabled = false;

_backpackItems = backpackItems player;
removeBackpack player;
player addBackpack "STB73_JumpPack_on";
{player addItemToBackpack _x;} forEach _backpackItems;

if(isNil "STB73_JumpPack_Effects") then {
    _fireSparks1 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks1 setParticleClass "LaptopSparks";
    _fireSparks1 attachTo [vehicle player,[0.225,-0.1,1.5]];
    _fireSparks2 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks2 setParticleClass "LaptopSparks";
    _fireSparks2 attachTo [vehicle player,[-0.225,-0.1,1.5]];

    STB73_JumpPack_Effects = [_fireSparks1,_fireSparks2];
};

[] call STB73_fnc_EventHandlers;

while {STB73_JumpPack_ON} do {
	_heat = player getVariable ["STB73_JumpPack_heat",0];
	_fuel = player getVariable ["STB73_JumpPack_fuel",1];

	// Normal Fuel & Heat Changes
	_newHeat = _heat + 0.035;
    _newFuel = _fuel - 0.01;

    _pos = getPosATL player;
    _vel = velocity player;
    _yInc = (_vel select 2);
    if(!([(getPosASL player),_vel] call STB73_fnc_RoofStuckCheck)) then {
        if (not (isTouchingGround player)) then {
            if(_yInc < 0) then {
                // Half Fuel & Heat Changes
	            _newHeat = _heat + 0.01;
	            _newFuel = _fuel - 0.0035;
                if(_yInc < -1.5) then {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
                } else {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 0.8];
                };
            } else {
                if(_yInc > 4) then {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
                } else {
	                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 2];
	            };
	        };
	    } else {
	        player setVelocity [_vel select 0,_vel select 1,1.6];
	    };
	};

    player setVariable ["STB73_JumpPack_heat",_newHeat,false];
	player setVariable ["STB73_JumpPack_fuel",_newFuel,false];

	(uiNamespace getVariable "STB73_JumpPack_UI_heat") progressSetPosition _newHeat;
    (uiNamespace getVariable "STB73_JumpPack_UI_heat2") progressSetPosition _newHeat;
    (uiNamespace getVariable "STB73_JumpPack_UI_fuel") progressSetPosition _newFuel;

    if(_newFuel <= 0 or _newHeat >= 1) then {
        STB73_JumpPack_ON = false;
        playSound "OPTRE_Sounds_Jetpack_End";
        _backpackItems = backpackItems player;
        removeBackpack player;
        player addBackpack "STB73_JumpPack";
        {player addItemToBackpack _x;} forEach _backpackItems;
        if(not (isNil "STB73_JumpPack_Effects")) then {
            {deleteVehicle _x;} forEach STB73_JumpPack_Effects;
        };
        STB73_JumpPack_Effects = nil;
    };

    playSound "OPTRE_Sounds_Jetpack_LoopShort";
    uiSleep .1;
};


//  JumpPack Refueling Handler
uiSleep 1;
[] spawn STB73_fnc_JumpPackRefuel;