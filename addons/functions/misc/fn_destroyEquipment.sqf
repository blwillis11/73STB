/*
    Destroy Equipment

    This handles the "Break Sensitive Equipment" ace interaction for downed/dead players
*/


params["_unit","_state"];
if(!(isPlayer _unit)) exitWith {};

[_unit,0,["ACE_MainActions","Break Sensitive Equipment"]] call ace_interact_menu_fnc_removeActionFromObject;

if(!(_state)) exitWith {
    [_unit,0,["ACE_MainActions","Break Sensitive Equipment"]] call ace_interact_menu_fnc_removeActionFromObject;
};

_action = ["Break Sensitive Equipment","Break Sensitive Equipment","",{
	_target unassignItem "ItemCTab";
	_target removeItem "ItemCTab";
	_target unassignItem "ItemAndroid";
	_target removeItem "ItemAndroid";
	{
        if(!(_x isKindOf ["ItemRadio", configFile >> "CfgWeapons"])) then {continue;};
	    _target unassignItem _x;
	    _target removeItem _x;
	} forEach assignedItems _target;
	_lrTypeBroken = "";
	_backpack = backpack _target;
	if(_backpack isKindOf "STB73_Rucksack_rto") then {
	    _lrTypeBroken = "STB73_Rucksack_rto_broken";
	};
	if(_lrTypeBroken == "") exitWith {[_target,0,["ACE_MainActions","Break Sensitive Equipment"]] call ace_interact_menu_fnc_removeActionFromObject;};
	[_target,_lrTypeBroken] spawn {
	    params["_target","_lrTypeBroken"];
	    _backpackItems = backpackItems _target;
        removeBackpackGlobal _target;
	    _target addBackpackGlobal _lrTypeBroken;
	    waitUntil { !isNull backpackContainer _target };
	    {_target addItemToBackpack _x;} forEach _backpackItems;
	};
	[_target,0,["ACE_MainActions","Break Sensitive Equipment"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject"];
},{true}] call ace_interact_menu_fnc_createAction;
[_unit, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;