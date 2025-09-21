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

// if (_vehicle getVariable ["STB73_Afterburners_Usable",false]) exitWith{};

if (_vehicle getVariable ["STB73_Afterburners_Engaged", false]) exitWith {};

if (_vehicle getVariable ["STB73_Thrusters_Engaged", false]) exitWith {
	[_vehicle] call STB73_fnc_engageAfterburners;
};
[_vehicle] call STB73_fnc_engageForwardThruster;