/*
	OPTRE_fnc_
	
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

waitUntil {
	!isNil {
		_logic getVariable "BJ_Man_8"
	} || isNull _logic
}; // pelican colour set or module deleted
if (isNull _logic) exitWith {}; // exit if module is deleted

{
	_unit = _logic getVariable [_x, "none"];
	if (_unit != "" AND _unit != "none") then {
		if (_unit == "random") then {
			_units pushBack (
			[
				"OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR",
				"OPTRE_Ins_BJ_Soldier_URB_TeamLeader",
				"OPTRE_Ins_BJ_Soldier_URB_Scout",
				"OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman",
				"OPTRE_Ins_BJ_Soldier_URB_Grenadier",
				"OPTRE_Ins_BJ_Soldier_URB_Marksman",
				"OPTRE_Ins_BJ_Soldier_URB_Demolitions",
				"OPTRE_Ins_BJ_Soldier_URB_Corpsman",
				"OPTRE_Ins_BJ_Soldier_URB_Shield",
				"OPTRE_Ins_BJ_Soldier_URB_Engineer2",
				"OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT"
			] call BIS_fnc_selectRandom
			);
		} else {
			_units pushBack _unit;
		};
	};
} forEach ["BJ_Man_1", "BJ_Man_2", "BJ_Man_3", "BJ_Man_4", "BJ_Man_5", "BJ_Man_6", "BJ_Man_7", "BJ_Man_8"];

deleteVehicle _logic;

0 = [
	_units,
	(getPos _logic),
	((_logic getVariable ["waypoints", ""]) call OPTRE_fnc_StringToArrayOfString),
	(_logic getVariable ["finalWaypoint", ""]),
	east
] call OPTRE_fnc_CS_BJHEV;

deleteVehicle _logic;