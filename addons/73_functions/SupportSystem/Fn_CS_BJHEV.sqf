/*

OPTRE_fnc_CS_ODSTHEV

Author: Big_Wilk; modified by Cipher

Description: Creates coustom group of units and places them in HEV over a location.
Modifications: made compatible with HEV patch, improved readability and optimized

Note: Drop takes approximately 45 seconds from execution to complete (all units on the ground and out of pods)

Command: Call
Return: spawned group

Parameters: 
0: Array or Number (Units to be droped in): 1. Array of classnames of units to be spawned: ["class","class"] 2. Number of units to be randomly spawned: 6 [Default: [] ]
1: Position (Over which HEVs will be created): 1. position: [0,0,0] [Default: [0,0,0] ]
2: Array of string (String should be map marker names): 1. ["MarkerOne","MarkerTwo","Wp3"] [Default: [] ]
3: String (What is to be done on end waypoint): Options: "cycle" (group goes back to first waypoint), "garrison" (group garrisons nearest buildings), "patrol" (creates random patrols for groups around last waypoint), "" (group does nothing at last waypoint) [Default: "garrison" ]
4: Side (side of units created): Options: West, East, Independent, Civillain [Default: WEST ]


Example 1: [["OPTRE_UNSC_ODST_Soldier_Scout","OPTRE_UNSC_ODST_Soldier_Scout_AT"],["MarkerOne","MarkerTwo","Wp3"],"",west] call OPTRE_fnc_CS_ODSTHEV
Result: Drops two 

*/

if (!isServer) exitWith {};

params [
	["_units",1],
	["_pos",[0,0,0]],
	["_wayPoints",[]],
	["_endWaypoint","garrison"],
	["_side",EAST]
];

if (_pos isEqualTo [0,0,0]) exitWith {};

private _units = switch (typeName (_this select 0)) do {
	case "ARRAY": {(_this select 0)};
	case "SCALAR": {
		private _selectedUnitTypes = [];		
		for "_i" from 1 to (_this select 0) do {
						
			private _randomUnitType = selectRandom [
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
			];

			_selectedUnitTypes pushBack _randomUnitType;
		};
		_selectedUnitTypes
	};
	default { ["OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT","OPTRE_Ins_BJ_Soldier_URB_TeamLeader","OPTRE_Ins_BJ_Soldier_URB_Marksman","OPTRE_Ins_BJ_Soldier_URB_Corpsman"] };
};

private _group = [[0,0,0], _side, _units,[],[],[],[],[],0] call BIS_fnc_spawnGroup;	
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
	] call OPTRE_fnc_HEV; 
} call CBA_fnc_directCall;


private _wayPoint =_group addWaypoint [_pos, 0];

_wayPoints apply {
	private _wayPointPos = getMarkerPos _x; 
	if (str _wayPointPos != "[0,0,0]") then {
		private _wayPointX = _group addWaypoint [_wayPointPos, 0];
	};
};


if (count _wayPoints > 0 AND _endWaypoint != "") then {
	switch (_endWaypoint) do {
		case "cycle": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "CYCLE";
		};
		case "garrison": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "MOVE";	
			_wayPointX setWaypointStatements ["true", "0 = [(group this), (getPos this), 75, 2, false] call CBA_fnc_taskDefend"];
		}; 
		case "patrol": {
			private _wayPointX = _group addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "MOVE";	
			_wayPointX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3,6,9]] call CBA_fnc_taskPatrol;"];
		};
	};
};

allCurators apply {
	_x addCuratorEditableObjects [_unitsInGroup, true];
};

_group