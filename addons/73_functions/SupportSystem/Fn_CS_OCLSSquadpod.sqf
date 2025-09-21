params [
	["_pos", [0, 0, 0]],
	["_wayPoints", []],
	["_endWaypoint", "garrison"],
	["_side", east]
];

if (_pos isEqualTo [0, 0, 0]) exitWith {};

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

[_mainprojectile, _position, _projectile] spawn {
	params ["_mainprojectile", "_position", "_projectile"];
	while { (alive _mainprojectile) && (((getPosATL _mainprojectile) # 2) > 500) } do {
		_mainprojectile setVelocity ((_position vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
	};
};

[[_projectile], {
	params ["_projectile"];
	_FloodLight = "#lightpoint" createVehicleLocal [0, 0, 0];
	_FloodLight attachTo [_projectile, [0, 0, 0]];
	_FloodLight setLightColor [0, 0.2, 1];
	_FloodLight setLightAmbient [0, 0.2, 1];
	_FloodLight setLightBrightness 3;
	_FloodLight setLightDayLight true;

	waitUntil {
		!alive _projectile
	};
	deleteVehicle _floodLight;
}] remoteExec ["spawn"];

[_mainprojectile, _position, _side, _projectile, _selection] spawn {
	params ["_mainprojectile", "_position", "_side", "_projectile", "_selection"];

	_positionATL=_position;
	waitUntil {
		if (alive _mainprojectile) then {
			_positionATL=getPosATL _mainprojectile;
		};
		!alive _mainprojectile;
	};

	[[_positionATL], {
		params ['_position'];
		_positionATL = _position;
		_positionATL set [2, 2];

		private _ps1 = "#particlesource" createVehicleLocal _positionATL;
		_ps1 setParticleParams [
			"\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject",
			1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [0.1, 1],
			[[1, 1, 1, 1]],
		[0, 1], 1, 0, "", "", _ps1];
		_ps1 setParticleRandom [0, [5, 5, 0], [5, 5, 5], 0, 1.5, [0, 0, 0, 0], 0, 0];
		_ps1 setParticleCircle [5, [0, 5, 5]];
		_ps1 setDropInterval 0.01;

		_ps1 spawn {
			sleep 1;
			deleteVehicle _this;
		};
	}] remoteExec ["spawn"];

	_craterpos = _positionATL;
	_craterpos set [2, 0];

	deleteVehicle _projectile;
	_projectile = createvehicle ["UNSC_drop_Bunker_OPEN", _craterpos, [], 0, "CAN_COLLIDE"];
	_projectile setDir (random 360);
	_projectile setPos getPos _projectile;
	_projectile setVectorUp surfaceNormal position _projectile;

	_GroundCrack = createvehicle ["land_RoadCrack_01_4x4_F", _craterpos, [], 0, "CAN_COLLIDE"];
	_GroundCrack setVectorUp surfaceNormal position _GroundCrack;
	_GroundCrack enableSimulationGlobal false;
	_GroundCrack setObjectScale (3+(random 2));

	[[_projectile], {
		params ["_projectile"];
		_FloodLight = "#lightpoint" createVehicleLocal [0, 0, 0];
		_FloodLight attachTo [_projectile, [0, 0, 0]];
		_FloodLight setLightColor [0, 0.2, 1];
		_FloodLight setLightAmbient [0, 0.2, 1];
		_FloodLight setLightBrightness 0.25;
		_FloodLight setLightDayLight true;

		waitUntil {
			!alive _projectile
		};
		deleteVehicle _floodLight;
	}] remoteExec ["spawn"];

	_position = _CraterPos;

	_spawnforward = _projectile modelToWorld [0, 0, 0.5];
	_spawn = _spawnforward;
	_list = [
		["OPTRE_UNSC_Army_Soldier_AA_Specialist_WDL",
			"OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL",
			"OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL",
			"OPTRE_UNSC_Army_Soldier_Autorifleman_WDL",
			"OPTRE_UNSC_Army_Soldier_Breacher_WDL",
			"OPTRE_UNSC_Army_Soldier_Demolitions_WDL",
			"OPTRE_UNSC_Army_Soldier_Marksman_WDL",
			"OPTRE_UNSC_Army_Soldier_Engineer_WDL",
			"OPTRE_UNSC_Army_Soldier_forwardobserver_WDL",
			"OPTRE_UNSC_Army_Soldier_Grenadier_WDL",
			"OPTRE_UNSC_Army_Soldier_Medic_WDL",
			"OPTRE_UNSC_Army_Soldier_radioman_WDL",
			"OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL",
			"OPTRE_UNSC_Army_Soldier_Rifleman_BR_WDL",
			"OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL",
			"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL",
			"OPTRE_UNSC_Army_Soldier_Sniper_WDL",
			"OPTRE_UNSC_Army_Soldier_SquadLead_WDL",
		"OPTRE_UNSC_Army_Soldier_TeamLead_WDL"]
	];

	_class = _list;

	_listout=[];
	for "_i" from 1 to (8 + (random 2)) do{
		_listout pushBack (selectRandom _list);
	};

	_speechdoor = "Bunkerdrop_door_"+(selectRandom ["1", "2", "3", "4"]);
	[_projectile, [_speechdoor, 500]] remoteExec ["say3D", 0];

	[_spawn, _side, _listout, _projectile] spawn {
		params ["_spawn", "_side", "_listout", "_projectile"];

		sleep 0.1;

		_EliteUnit = [_spawn, _side, _listout] call BIS_fnc_spawnGroup;
		_EliteUnit deleteGroupWhenEmpty true;

		{
			[_x, _EliteUnit] spawn {
				params ["_Curator", "_EliteUnit"];

				_units = units _EliteUnit;
				{
					[_Curator, [[_x], false]] remoteExec ["addcuratorEditableObjects", 0];
				} forEach _units;
			};
		} forEach allCurators;

		_randomPosAroundplayer = [[[(getPosATL _projectile), 50]], []] call BIS_fnc_randomPos;
		(leader _EliteUnit) doMove (_randomPosAroundplayer);
	};
};
private _wayPoint =_EliteUnit addWaypoint [_pos, 0];

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
			_wayPointX setWaypointStatements ["true", "[(group this), (getPos this), 300, 7, 'MOVE', 'AWARE', 'YELLOW', 'LIMITED', 'STAG COLUMN', 'this spawn CBA_fnc_searchNearby', [3, 6, 9]] call CBA_fnc_taskPatrol;
			"];
		};
	};
};