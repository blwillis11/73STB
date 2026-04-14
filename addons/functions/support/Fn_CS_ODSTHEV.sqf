/*
	
	OPTRE_fnc_CS_ODSTHEV
	
	Author: Big_Wilk; modified by Cipher
	
	Description: Creates coustom group of units and places them in HEV over a location.
	Modifications: made compatible with HEV patch, improved readability and optimized
	
	Note: drop takes approximately 45 seconds from execution to complete (all units on the ground and out of pods)
	
	Command: call
	Return: spawned group
	
	Parameters: 
	0: Array or Number (Units to be droped in): 1. Array of classnames of units to be spawned: ["class", "class"] 2. Number of units to be randomly spawned: 6 [default: [] ]
	1: position (Over which HEVs will be created): 1. position: [0, 0, 0] [default: [0, 0, 0] ]
	2: Array of string (String should be map marker names): 1. ["MarkerOne", "MarkerTwo", "Wp3"] [default: [] ]
	3: String (What is to be done on end waypoint): Options: "cycle" (group goes back to first waypoint), "garrison" (group garrisons nearest buildings), "patrol" (creates random patrols for groups around last waypoint), "" (group does nothing at last waypoint) [Default: "garrison" ]
	4: side (side of units created): Options: west, east, independent, Civillain [default: west ]
	
	
	Example 1: [["OPTRE_UNSC_ODST_Soldier_Scout", "OPTRE_UNSC_ODST_Soldier_Scout_AT"], ["MarkerOne", "MarkerTwo", "Wp3"], "", west] call OPTRE_fnc_CS_ODSTHEV
	Result: Drops two 
	
*/

if (!isServer) exitWith {};

params [
	["_units", 1],
	["_pos", [0, 0, 0]],
	["_wayPoints", []],
	["_endWaypoint", "garrison"],
	["_side", east]
];

if (_pos isEqualTo [0, 0, 0]) exitWith {};

private _units = switch (typeName (_this select 0)) do {
	case "ARRAY": {
		(_this select 0)
	};
	case "SCALAR": {
		private _selectedUnitTypes = [];
		for "_i" from 1 to (_this select 0) do {
			private _randomUnitType = selectRandom [
				"STB73_STB_ODST_Grenadier",
				"STB73_STB_ODST_Rifleman",
				"STB73_STB_ODST_AT",
				"STB73_STB_ODST_Autorifleman",
				"STB73_STB_ODST_Sniper",
				"STB73_STB_ODST_Marksman",
				"STB73_STB_ODST_Scout",
				"STB73_STB_ODST_Demo",
				"STB73_STB_ODST_Medic",
				"STB73_STB_ODST_Team_Lead",
				"STB73_STB_ODST_Squad_Lead"
			];

			_selectedUnitTypes pushBack _randomUnitType;
		};
		_selectedUnitTypes
	};
	default {
		["STB73_STB_ODST_AT", "STB73_STB_ODST_Team_Lead", "STB73_STB_ODST_Marksman", "STB73_STB_ODST_Medic"]
	};
};

diag_log format ["CS_ODSTHEV: params units=%1 pos=%2 waypoints=%3 endWP=%4 side=%5", _units, _pos, _wayPoints, _endWaypoint, _side];

// log unit count and check that each className exists in CfgVehicles
diag_log format ["CS_ODSTHEV: unit count=%1", (count _units)];
diag_log format ["CS_ODSTHEV: unit list=%1", _units];
private _missingClasses = [];
{
	private _cname = _x;
	if !(isClass (configFile >> "CfgVehicles" >> _cname)) then {
		_missingClasses pushBack _cname;
	};
} forEach _units;
if (_missingClasses isNotEqualTo []) then {
	diag_log format ["CS_ODSTHEV: missing classes in CfgVehicles=%1", _missingClasses];
};

private _group = [[0, 0, 0], _side, _units, [], [], [], [], [], 0] call BIS_fnc_spawnGroup;
if (isNull _group) then {
	diag_log "CS_ODSTHEV: spawnGroup returned null";
};
if (isNull _group) exitWith {};
diag_log format ["CS_ODSTHEV: spawned group %1", _group];
private _unitsInGroup = units _group;

_unitsInGroup apply {
	private _spawnPos = [_pos, 50] call CBA_fnc_randPos;
	_x setPos [(_spawnPos select 0), (_spawnPos select 1), 10000];
};

(leader _group) setPos [(_pos select 0), (_pos select 1), 10000];

{
	[
		_pos,
		_unitsInGroup,
		"No Ship",
		5,
		1,
		1,
		2500,
		2000,
		1000,
		500,
		200,
		true,
		true,
		300,
		true
	] call STB73_fnc_HEV;
} call CBA_fnc_directCall;

private _wayPoint =_group addWaypoint [_pos, 0];

_wayPoints apply {
	private _wayPointPos = getMarkerPos _x;
	if (str _wayPointPos != "[0, 0, 0]") then {
		private _wayPointX = _group addWaypoint [_wayPointPos, 0];
	};
};

if (count _wayPoints > 0 AND _endWaypoint != "") then {
	switch (_endWaypoint) do {
		case "cycle": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select -1)), 0];
			_wayPointX setWaypointType "CYCLE";
		};
		case "garrison": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select -1)), 0];
			_wayPointX setWaypointType "MOVE";
			_wayPointX setWaypointStatements ["true", "0 = [(group this), (getPos this), 75, 2, false] call CBA_fnc_taskDefend"];
		};
		case "patrol": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select -1)), 0];
			_wayPointX setWaypointType "MOVE";
			_wayPointX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3, 6, 9]] call CBA_fnc_taskPatrol;
			"];
		};
	};
};

allCurators apply {
	_x addCuratorEditableObjects [_unitsInGroup, true];
};

_group