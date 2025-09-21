params ["_vehicle"];

if (speed _vehicle <= 50) exitWith {};

hint "ACTIVATING AIR BRAKES";

if (_vehicle getVariable ["STB73_Airbrakes_Active", false]) exitWith {};

_vehicle setVariable ["STB73_Airbrakes_Active", true];
_vehicle setVariable ["STB73_Afterburners_Engaged", false];
_vehicle setVariable ["STB73_Thrusters_Engaged", false];

if (_vehicle getVariable ["STB73_AnimateThrusters", false]) then {
	_vehicle spawn STB73_fnc_ThrusterDeAnimate;
};

if (!(isNil "STB73_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	STB73_ThrustersEH = nil;
};

STB73_ThrustersEH = addMissionEventHandler ["EachFrame", {
	if (diag_frameNo % 2 == 0) exitWith {}; // Every other Frame
	private _vehicle = (_thisArgs#0);
	if (speed _vehicle > 50) then {
		private _speed = -(STB73_ThrusterMultiplier/diag_fps);
		[_vehicle, _speed] call STB73_fnc_changeSpeed;
	} else {
		_vehicle setVariable ["STB73_Airbrakes_Active", false];
		removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	};
}, [_vehicle]];