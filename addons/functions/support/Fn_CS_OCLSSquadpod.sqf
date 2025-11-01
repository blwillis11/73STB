params [
	["_pos", [0, 0, 0]],
	["_wayPoints", []],
	["_endWaypoint", "garrison"],
	["_side", east]
];

// Only proceed if we actually have a valid position
if (!(_pos isEqualTo [0, 0, 0])) then {

	// Ensure this runs on the server. If called on a client, forward the call to the server.
	if (!isServer) then {
		diag_log format ["CS_OCLSSquadpod: called on client, forwarding to server with pos=%1", _pos];
		[_pos, _wayPoints, _endWaypoint, _side] remoteExecCall ["STB73_fnc_CS_OCLSSquadPod", 2, false];
	} else {
		diag_log format ["CS_OCLSSquadpod: starting on server with pos=%1 waypoints=%2 endWP=%3 side=%4", _pos, _wayPoints, _endWaypoint, _side];

_position = (ASLToATL _pos);

_spawnpos = _position vectorAdd [random [-500, 0, 500], random [-500, 0, 500], 1500];

_mainprojectile=createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
_mainprojectile setShotParents [player, player];

_angle = [(_position vectorFromTo _spawnpos)#0, (_position vectorFromTo _spawnpos)#1, ((_position vectorFromTo _spawnpos)#2)];

_projectile = createvehicle ["UNSC_drop_Bunker_Closed", [0, 0, 0], [], 0, "NONE"];
_projectile setDir (random 360);
_projectile setPos getPos _projectile;
_projectile setPosATL (getPosATL _mainprojectile);
[_projectile, _mainprojectile] call BIS_fnc_attachToRelative;
_projectile allowDamage false;

// create a local floodlight attached to the drop object on clients (so players see it)
[_projectile, {
	params ["_projectile"];
	if (!(hasInterface) or (isDedicated)) exitWith {};
	private _FloodLight = "#lightpoint" createVehicleLocal [0, 0, 0];
	_FloodLight attachTo [_projectile, [0, 0, 0]];
	_FloodLight setLightColor [0, 0.2, 1];
	_FloodLight setLightAmbient [0, 0.2, 1];
	_FloodLight setLightBrightness 3;
	_FloodLight setLightDayLight true;

	waitUntil { !alive _projectile };
	deleteVehicle _FloodLight;
}] remoteExec ["spawn", 0];

// --- continuation: run impact/crater/troop spawn logic inline (synchronous) ---
// Wait until the main projectile has finished (landed/destroyed)
waitUntil { if (alive _mainprojectile) then { _position = getPosATL _mainprojectile }; !alive _mainprojectile };

	_positionATL = _position;
	waitUntil { if (alive _mainprojectile) then { _positionATL = getPosATL _mainprojectile }; !alive _mainprojectile };

	// particle burst at drop impact (run on clients so they see it)
	[_positionATL, {
		params ["_posLocal"];
		if (!(hasInterface) or (isDedicated)) exitWith {};
		if !isArray _posLocal exitWith {};
		private _psPos = _posLocal;
		_psPos set [2, 2];
		private _ps1 = "#particlesource" createVehicleLocal _psPos;
		_ps1 setParticleParams ["\\A3\\Data_F\\ParticleEffects\\Pstone\\Pstone", "", "SpaceObject", 1, 10, [0,0,0], [0,0,10], 1, 20, 1, 0.2, [0.1,1], [[1,1,1,1]], [0,1], 1, 0, "", "", _ps1];
		_ps1 setParticleRandom [0, [5,5,0], [5,5,5], 0, 1.5, [0,0,0,0], 0, 0];
		_ps1 setParticleCircle [5, [0,5,5]];
		_ps1 setDropInterval 0.01;
		_ps1 spawn { sleep 1; deleteVehicle _this; };
	}] remoteExec ["spawn", 0];

	// create crater and open bunker
	private _craterpos = _positionATL; _craterpos set [2, 0];
	deleteVehicle _projectile;
	_projectile = createVehicle ["UNSC_drop_Bunker_OPEN", _craterpos, [], 0, "CAN_COLLIDE"];
	_projectile setDir (random 360);
	_projectile setPos getPos _projectile;
	_projectile setVectorUp surfaceNormal position _projectile;

	private _GroundCrack = createVehicle ["land_RoadCrack_01_4x4_F", _craterpos, [], 0, "CAN_COLLIDE"];
	_GroundCrack setVectorUp surfaceNormal position _GroundCrack;
	_GroundCrack enableSimulationGlobal false;
	_GroundCrack setObjectScale (3 + (random 2));

	// create a small, persistent floodlight on the bunker
	private _floodLight2 = "#lightpoint" createVehicleLocal [0,0,0];
	_floodLight2 attachTo [_projectile, [0,0,0]];
	_floodLight2 setLightColor [0,0.2,1];
	_floodLight2 setLightAmbient [0,0.2,1];
	_floodLight2 setLightBrightness 0.25;
	_floodLight2 setLightDayLight true;

	// schedule cleanup of the floodlight when the bunker is deleted
	// create a small, persistent floodlight on the bunker (run on clients)
	[_projectile, {
		params ["_projectile"];
		if (!(hasInterface) or (isDedicated)) exitWith {};
		private _floodLight2 = "#lightpoint" createVehicleLocal [0,0,0];
		_floodLight2 attachTo [_projectile, [0,0,0]];
		_floodLight2 setLightColor [0,0.2,1];
		_floodLight2 setLightAmbient [0,0.2,1];
		_floodLight2 setLightBrightness 0.25;
		_floodLight2 setLightDayLight true;

		waitUntil { !alive _projectile };
		deleteVehicle _floodLight2;
	}] remoteExec ["spawn", 0];

	// determine spawn point for troops and build class list
	private _spawnforward = _projectile modelToWorld [0, 0, 0.5];
	private _spawn = _spawnforward;
	private _list = [
		"STB73_OCLF_Soldier_Rifleman",
		"STB73_OCLF_Soldier_Medic",
		"STB73_OCLF_Soldier_Rifleman_AT",
		"STB73_OCLF_Soldier_Rifleman_AA",
		"STB73_OCLF_Soldier_AutoRifleman",
		"STB73_OCLF_Soldier_Breacher",
		"STB73_OCLF_Soldier_Grenadier",
		"STB73_OCLF_Soldier_SquadLead",
		"STB73_OCLF_Soldier_Grenadier",
		"STB73_OCLF_Soldier_Radioman",
		"STB73_OCLF_Soldier_Sniper",
		"STB73_OCLF_Soldier_Scout"
	];

	private _listout = [];
	for "_i" from 1 to (8 + (random 2)) do { _listout pushBack (selectRandom _list) };

	private _speechdoor = "Bunkerdrop_door_" + (selectRandom ["1","2","3","4"]);
	[_projectile, [_speechdoor, 500]] remoteExec ["say3D", 0];

	// spawn the elite group on the machine running this script (should be server)
	diag_log format ["CS_OCLSSquadpod: spawning group with list=%1 side=%2 spawn=%3", _listout, _side, _spawn];
	private _EliteUnit = nil;

	// Try to spawn the group directly. BIS_fnc_spawnGroup will return nil on failure.
	_EliteUnit = [_spawn, _side, _listout] call BIS_fnc_spawnGroup;
	if (_EliteUnit == nil) then {
		diag_log format ["CS_OCLSSquadpod: BIS_fnc_spawnGroup returned nil for list=%1", _listout];
	} else {
		diag_log format ["CS_OCLSSquadpod: spawned group=%1 units=%2", _EliteUnit, (count units _EliteUnit)];
		_EliteUnit deleteGroupWhenEmpty true;

		// delayed server-side sanity check (will appear in server RPT)
		(_EliteUnit) spawn {
			params ["_g"];
			sleep 3;
			private _us = units _g;
			diag_log format ["CS_OCLSSquadpod: delayed check group=%1 unit_count=%2 unit_list=%3", _g, (count _us), _us];
		};

		// Register units as curator-editable for all curators
		private _units = units _EliteUnit;
		{
			private _unit = _x;
			[_unit, [[_unit], false]] remoteExec ["addcuratorEditableObjects", 0];
		} forEach _units;
		{
			private _unit = _x;
			[_unit, [[_unit], false]] remoteExec ["addcuratorEditableObjects", 0];
		} forEach allCurators;

		// Move leader to a random nearby position
		private _randomPosAroundplayer = [[[(getPosATL _projectile), 50]], []] call BIS_fnc_randomPos;
		(leader _EliteUnit) doMove _randomPosAroundplayer;
	};

	// schedule bunker cleanup after 60s (remove crew then delete) via CBA helper
	[{ _p = _this#0; if (alive _p) then { deleteVehicleCrew _p; deleteVehicle _p; } }, [_projectile], 60] call CBA_fnc_waitAndExecute;

// give the group a waypoint at the requested marker position (if group exists)
if (_EliteUnit == nil) exitWith {};
private _wayPoint = _EliteUnit addWaypoint [_pos, 0];

_wayPoints apply {
	private _wayPointPos = getMarkerPos _x;
	if (str _wayPointPos != "[0, 0, 0]") then {
		private _wayPointX = _EliteUnit addWaypoint [_wayPointPos, 0];
	};
};

if (count _wayPoints > 0 AND _endWaypoint != "") then {
	switch (_endWaypoint) do {
		case "cycle": {
			private _wayPointX = _EliteUnit addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "CYCLE";
		};
		case "garrison": {
			private _wayPointX = _EliteUnit addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "MOVE";
			_wayPointX setWaypointStatements ["true", "0 = [(group this), (getPos this), 75, 2, false] call CBA_fnc_taskDefend"];
		};
		case "patrol": {
			private _wayPointX = _EliteUnit addWaypoint [(getMarkerPos (_wayPoints select (count _wayPoints - 1))), 0];
			_wayPointX setWaypointType "MOVE";
			_wayPointX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3, 6, 9]] call CBA_fnc_taskPatrol;"];
		};
	};
};

};
};
