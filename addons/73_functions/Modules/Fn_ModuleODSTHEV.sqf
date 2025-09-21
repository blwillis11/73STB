/*
STB73_fnc_

Author: Big_Wilk

Description: 

Command: spawn
Return: true 
Syntax: 

Parameters: 

Demo Mission: none 
Media: none

Example 1:

Example 2:

MP: Server Only

*/

if !isServer exitWith {};

_logic = _this select 0;
_units = [];

waitUntil {!isNil {_logic getVariable "ODST_Man_8"} || isNull _logic}; // pelican colour set or module deleted 
if (isNull _logic) exitWith {}; // exit if module is deleted

{
	_unit = _logic getVariable [_x,"none"]; 
	if (_unit != "" AND _unit != "none") then {
		if ( _unit == "random") then {
			_units pushBack (
				[
					"73_STB_ODST_Grenadier",
					"73_STB_ODST_Rifleman",
					"73_STB_ODST_AT",
					"73_STB_ODST_Autorifleman",
					"73_STB_ODST_Sniper",
					"73_STB_ODST_Marksman",
					"73_STB_ODST_Scout",
					"73_STB_ODST_Demo",
					"73_STB_ODST_Medic",
					"73_STB_ODST_Team_Lead",
					"73_STB_ODST_Squad_Lead"
				] call BIS_fnc_selectRandom
			);
		} else {
			_units pushBack _unit;
		};
	};
} forEach ["ODST_Man_1","ODST_Man_2","ODST_Man_3","ODST_Man_4","ODST_Man_5","ODST_Man_6","ODST_Man_7","ODST_Man_8"];

deleteVehicle _logic;

0 = [
	_units,
	(getPos _logic),
	((_logic getVariable ["waypoints",""]) call OPTRE_fnc_StringToArrayOfString),
	(_logic getVariable ["finalWaypoint",""]),
	WEST
] call OPTRE_fnc_CS_ODSTHEV;

deleteVehicle _logic;