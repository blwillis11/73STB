/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)
	
	Description:
	Enable afterburners on selected vehicle
	
	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for
	
	Returns:
	NONE
*/

params ["_vehicle"];

if (_vehicle getVariable ["STB73_Afterburners_Engaged", false]) exitWith {
	hint "DISENGAGING AFTERBURNERS, RETURNING TO FORWARD THRUSTERS";
	_vehicle setVariable ["STB73_Afterburners_Engaged", false];

	if (!(isNil "STB73_ThrustersEH")) then {
		removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
		STB73_ThrustersEH = nil;
	};

	[_vehicle, true] call STB73_fnc_engageForwardThruster;
};

if (!(_vehicle getVariable ["STB73_Thrusters_Engaged", false])) exitWith {};

hint "DISENGAGING FORWARD THRUSTERS";
_vehicle setVariable ["STB73_Thrusters_Engaged", false];

if (!(isNil "STB73_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	STB73_ThrustersEH = nil;
};