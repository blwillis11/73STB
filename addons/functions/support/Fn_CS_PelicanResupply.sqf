/*
	
	Rewrite of the following function: OPTRE_fnc_CS_PelicanDropSupplys for the 73rd STB
	OPTRE_fnc_CS_PelicanDropSupplys
	
	Author: Big_Wilk
	
	Description: Creates a pelican that will drop supply pods or vehicles at the requested location. Our module: Module_OPTRE_PelicanSupplyDrop also uses this script. 
	
	Command: call
	Return: array (of (objects) supply pods dropped by pelicans.)   
	Syntax: _spawnedPod = [Parameters] call OPTRE_fnc_CS_PelicanDropSupplys;
	
	Parameters: 
	0: Position, STRING OR OBJECT: (Can be Object, World Position or Map Marker. Example, 1. Car1, 2. [0, 0, 0], 3. "MyMapMarker")
	1: Array or STRING: (( Arrays: Spawns Pods, max No. is 6) ( String: ClassNames spawn vehicles, max No. 1) default is: 6 random pods)
	Array Short Cuts Can Be used:
	 "Sniper":   "OPTRE_Ammo_SupplyPod_Sniper"
	 "Medical":   "OPTRE_Ammo_SupplyPod_Medical"
	 "AR":   "OPTRE_Ammo_SupplyPod_AR"
	 "LMG":   "OPTRE_Ammo_SupplyPod_LMG"
	 "SMG":   "OPTRE_Ammo_SupplyPod_SMG" 
	 "Pistol":   "OPTRE_Ammo_SupplyPod_Pistol"
	 "Shotgun":   "OPTRE_Ammo_SupplyPod_Shotgun" 
	 "Launcher":  "OPTRE_Ammo_SupplyPod_Launcher" 
	 "DMR":   "OPTRE_Ammo_SupplyPod_DMR"
	};
	 "Empty":   "OPTRE_Ammo_SupplyPod_Empty" 
	 "BR":   "OPTRE_Ammo_SupplyPod_BR" 
	Example 1: ["BR", "BR", "BR"] will drop Battle Riffle Pods. 
	Example 2: ["Empty", "BR"] will drop one customisable pod and one Battle Riffle Pod. Custom pods gear is defined in the code parameter. 
	Example 3: ["", "", "", "", "", ""] would result in 6 random supply pods. 
	Example 4: ["OPTRE_Ammo_SupplyPod_Sniper", "Sniper", -1] would result in 2 sniper pods and one random pod. 
	Example 5: "OPTRE_M12_LRV" would result in a warthog been droped.
	2: Number: (The direction from the position defined in 0 that the pelican will spawn. default is: random 360)
	3: Number: (The distance in M that in the direction of 2 that the pelican will spawn. default is: 3000m)
	4: String: (How the pelican is painted options: "marine", "tan", "green", "black", "insurrection". Default is: "marine".)
	5: Number: (The Height the Pelican flys at. default is: 100) 
	5: side: (side the pelican is on options: west, east, civilian, independent. default is: west)
	6: Number: (The direction the pelican flys of to de-spawns after dropping its supplys. default is: default is Direciton of Aproach -180)
	7: String: (This string will be turned into code and call on each "EMPTY" drop pod or any vehicle spawned. Inside the script _THIS refers to the vehicle / pod been spawned. Example: "_this addMagazineCargoGlobal ['Laserbatteries', 2]; _this addWeaponCargoGlobal ['Laserdesignator', 1];". Default is: "")
	
	Demo Mission: None
	Media: None
	Notes: All parameters are optional apart from 0. Code entered into 7 will be run on server only, commands such as addMagazineCargoGlobal should be used (not addMagazineCargo) in 7. 
	
// Examples with Just Postions: 
	Example 1A:
	_podsDroped = [player] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Pods dropped close to players location
	
	Example 1B:
	_podsDroped = ["NameOfMapMarker"] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Pods dropped close to a map marker called "NameOfMapMarker" location
	
	Example 1C:
	_podsDroped = [[0, 0, 0]] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Pods dropped close to position: [0, 0, 0]
	
// Examples with custom weapons pods
	Example 2A:
	_podsDroped = [player, [-1, -1, -1, -1, -1, -1]] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Drops 6 random pods.
	
	Example 2B:
	_podsDroped = ["NameOfMapMarker", ["OPTRE_Ammo_SupplyPod_Sniper", "Sniper", -1]] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Drops 2 sniper pods and one random pod. 
	
	Example 2C:
	_podsDroped = [[0, 0, 0], ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1]] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Drops two "OPTRE_Ammo_SupplyPod_Sniper" pods, a random pods and two "Shotgun" pods.
	
	Example 2D:
	_podsDroped = [[0, 0, 0], "OPTRE_M12_LRV"] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: Drops a warthog. (only one vehicle can be entered, entry must be string, works best with OPTRE vehicles).
	
// More Examples
	Example3:
	_podsDroped = [MyCar, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 180] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican will spawn to the south the of MyCar. 
	
	Example4:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican will spawn 1000m to the north the of MyCar.
	
	Example5:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican will spawn 1000m to the north the of MyCar.
	
	Example6:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000, "black"] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican spawned will be have a "black" paint job.
	
	Example7:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000, "black", 125] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican flying height will 125m
	
	Example8:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000, "black", 125, west] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican spawned is on side west.
	
	Example9:
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1], 0, 1000, "black", 125, west, 45] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: The pelican fly's out to east to despawn after droping its boxes.
	
	Example10: 
	_podsDroped = [player, ["OPTRE_Ammo_SupplyPod_Sniper", "Shotgun", -1, "Empty", "Empty", "Empty"], 0, 1000, "black", 125, west, 45, "_this addMagazineCargoGlobal ['Laserbatteries', 2]; _this addWeaponCargoGlobal ['Laserdesignator', 1];"] call OPTRE_fnc_CS_PelicanDropSupplys;
	Result: the "empty" box(s) spawned has custom code executed on it. in this example 2 Laserbatteries and one 1 Laserdesignator ().
	
	MP: Server 
*/

if !isServer exitWith {};

_pos = switch (typeName (_this select 0)) do {
	case "ARRAY": {
		(_this select 0)
	};
	case "STRING": {
		(getMarkerPos (_this select 0))
	};
	case "OBJECT": {
		getPos (_this select 0)
	};
	default {
		[0, 0, 0]
	};
};
_podArrayString = [_this, 1, [-1, -1, -1, -1, -1, -1]] call BIS_fnc_param;
_dir = [_this, 2, (random 360)] call BIS_fnc_param;
_dis = [_this, 3, 3000] call BIS_fnc_param;
_style = [_this, 4, "marine"] call BIS_fnc_param;
_flyInHeight = [_this, 5, 100] call BIS_fnc_param;
_side = [_this, 6, west] call BIS_fnc_param;
_exitDir = [_this, 7, (_dir - 180)] call BIS_fnc_param;
_code = compile ([_this, 8, ""] call BIS_fnc_param);
_gunner = false;
_podArray = [];

_className = switch _style do {
	case "standard": {
		"STB73_D77_TC_Pelican"
	};
};

_SpawnPos = [[(_pos select 0), (_pos select 1), _flyInHeight], _dis, _dir] call OPTRE_fnc_MathsTriangulatePos;
_pelicanArray = [_SpawnPos, (_dir - 180), _className, _side] call BIS_fnc_spawnVehicle;
_pelican = _pelicanArray select 0;
_pelicanGroup = _pelicanArray select 2;
_everyThingSpawned = units _pelicanGroup + [_pelican];
{
	_x setVariable ["OPTRE_AllSpawned", _everyThingSpawned, false]
} forEach [_pelican, driver _pelican];
_pelican flyInHeight _flyInHeight;
_pelican setVehicleLock "LOCKEDPLAYER";

_pelican addEventHandler ["HandleDamage", {
	if isServer then {
		if ((_this select 2) == 1) then {
			{
				detach _x;
			} forEach attachedObjects (_this select 0);
			{
				_x addCuratorEditableObjects [((_this select 0) getVariable ["OPTRE_AllSpawned", []]), true];
			} forEach allCurators;
			{
				(_this select 0) removeAllEventHandlers _x;
			} forEach ["GetOut", "HandleDamage", "Killed"];
		};
	};
}];
driver _pelican addEventHandler ["Killed", {
	if isServer then {
		{
			detach _x;
		} forEach attachedObjects (_this select 0);
		{
			_x addCuratorEditableObjects [((_this select 0) getVariable ["OPTRE_AllSpawned", []]), true];
		} forEach allCurators;
		{
			(_this select 0) removeAllEventHandlers _x;
		} forEach ["GetOut", "HandleDamage", "Killed"];
	};
}];
_pelican addEventHandler ["GetOut", {
	if isServer then {
		if ((_this select 1) == "driver") then {
			{
				detach _x;
			} forEach attachedObjects (_this select 0);
			{
				_x addCuratorEditableObjects [((_this select 0) getVariable ["OPTRE_AllSpawned", []]), true];
			} forEach allCurators;
			{
				(_this select 0) removeAllEventHandlers _x;
			} forEach ["GetOut", "HandleDamage", "Killed"];
		};
	};
}];

if (typeName _podArrayString == "ARRAY") then {
	_dropPosSupPods = [_pos, 100, (_dir - 180)] call OPTRE_fnc_MathsTriangulatePos;
	_wpDrop = _pelicanGroup addWaypoint [_dropPosSupPods, 0];
	_wpDrop setWaypointStatements ["true", "if isServer then {
		_count = 0;
		{
			_time = (_count * 0.25);
			[_x, _time] spawn STB73_fnc_CS_MonitorSupplyPodDrop;
			_count = _count + 1;
		} forEach (vehicle this getVariable ""STB73_CS_SupPods"");
		vehicle this setVariable [""STB73_CS_SupPods"", [], false];
	};
"];
_wpDrop setWaypointType "MOVE";
_wpDrop setWaypointBehaviour "CARELESS";
_wpDrop setWaypointCombatMode "RED";
_wpDrop setWaypointCompletionRadius 0;

_count = 0;
{
	if (_count < 6) then {
		_podClass = if (_x in ["STB73_SupplyPod_Sniper", "STB73_SupplyPod_Medical", "STB73_SupplyPod_AR", "STB73_SupplyPod_Autorifles", "STB73_SupplyPod_SMG", "STB73_SupplyPod_CQB", "STB73_SupplyPod_ARGL", "STB73_SupplyPod_AT", "STB73_SupplyPod_Marksman", "STB73_SupplyPod_Autorifles", "STB73_SupplyPod_Medical"]) then {
			_x;
		} else {
			(switch _x do {
				case "Sniper": {
					"STB73_SupplyPod_Sniper"
				};
				case "Medical": {
					"STB73_SupplyPod_Medical"
				};
				case "AR": {
					"STB73_SupplyPod_AR"
				};
				case "LMG": {
					"STB73_SupplyPod_Autorifles"
				};
				case "SMG": {
					"STB73_SupplyPod_SMG"
				};
				case "CQB": {
					"STB73_SupplyPod_CQB"
				};
				case "Grenadier": {
					"STB73_SupplyPod_ARGL"
				};
				case "Launcher": {
					"STB73_SupplyPod_AT"
				};
				case "Marksman": {
					"STB73_SupplyPod_Marksman"
				};
				case "EOD": {
					"STB73_SupplyPod_EOD"
				};
				case "Empty": {
					"STB73_SupplyPod_Emptypod"
				};
				default {
					(["STB73_SupplyPod_Sniper", "STB73_SupplyPod_Medical", "STB73_SupplyPod_AR", "STB73_SupplyPod_Autorifles", "STB73_SupplyPod_SMG", "STB73_SupplyPod_CQB", "STB73_SupplyPod_ARGL", "STB73_SupplyPod_AT", "STB73_SupplyPod_Marksman", "STB73_SupplyPod_EOD", "STB73_SupplyPod_Emptypod"] call BIS_fnc_selectRandom)
				};
			})
		};
		_pod = _podClass createVehicle [0, 0, 0];
		_pod disableCollisionWith _pelican;
		_pod attachTo [_pelican, (switch _count do {
			case 0: {
				[-1.1, -5.7, -.2]
			};
			case 1: {
				[ 1.1, -5.7, -.2]
			};
			case 2: {
				[-1.1, -4.7, -.2]
			};
			case 3: {
				[ 1.1, -4.7, -.2]
			};
			case 4: {
				[-1.1, -3.7, -.2]
			};
			case 5: {
				[ 1.1, -3.7, -.2]
			};
		})];
		if (typeName _x == "STRING") then {
			if (_x == "Empty") then {
				{
					_pod call _code;
				};
			};
		};
		_podArray pushBack _pod;
		_count = _count + 1;
	};
} forEach _podArrayString;
} else {
_pad = createVehicle ["Land_HelipadEmpty_F", _pos, [], 0, "FLY"];
_pelican setVariable ["OPTRE_LANDPAD", _pad, false];

_Aproach = [[(_pos select 0), (_pos select 1), _flyInHeight], 1000, _dir] call OPTRE_fnc_MathsTriangulatePos;
_wpDropAproach = _pelicanGroup addWaypoint [_Aproach, 0];
_wpDropAproach setWaypointStatements ["true", "(vehicle this) flyInHeight 12;
"];
_wpDropAproach setWaypointType "MOVE";
_wpDropAproach setWaypointBehaviour "CARELESS";
_wpDropAproach setWaypointCombatMode "RED";

_wpDrop = _pelicanGroup addWaypoint [_pos, 0];
_wpDrop setWaypointStatements ["_pelican = vehicle this;
	_pelican land 'LAND';
	(((getPos _pelican) select 2) < 15);
	", "if isServer then {
		_pelican = vehicle this;
		{
			_pod = _x;
			detach _pod;
			{
				_x addCuratorEditableObjects [[_pod], true];
			} forEach allCurators;
		} forEach (_pelican getVariable ""STB73_CS_SupPods"");
		_pelican setVariable [""STB73_CS_SupPods"", objNull, false];
		_pelican flyInHeight 60;
		_pelican land 'none';
	};
"];
_wpDrop setWaypointType "MOVE";
_wpDrop setWaypointBehaviour "CARELESS";
_wpDrop setWaypointCombatMode "RED";
_wpDrop setWaypointSpeed "LIMITED";

_veh = createVehicle [_podArrayString, [(_pos select 0), (_pos select 1), 1000], [], 0, "FLY"];
_podArray pushBack _veh;
_veh call _code;
[_veh, _pelican] call STB73_Fnc_PelicanAttachToPoints;
};

_endPos = [_pos, (2 * _dis), _exitDir] call OPTRE_fnc_MathsTriangulatePos;

_wpFinal = _pelicanGroup addWaypoint [_endPos, 0];
_wpFinal setWaypointStatements ["true", "if isServer then {
	_veh = vehicle this;
	{
		_veh removeAllEventHandlers _x;
	} forEach ['GetOut', 'HandleDamage', 'killed'];
	{
		deleteVehicle _x;
	} forEach [_veh] + thisList + [_veh getVariable [""OPTRE_LANDPAD"", objNull]];
};
"];
_wpFinal setWaypointType "MOVE";
_wpFinal setWaypointBehaviour "CARELESS";
_wpFinal setWaypointCombatMode "RED";
_wpFinal setWaypointSpeed "FULL";

_pelican setVariable ["STB73_CS_SupPods", _podArray, false];

_podArray;