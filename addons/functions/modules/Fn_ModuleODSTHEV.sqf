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
				] call BIS_fnc_selectRandom
			);
		} else {
			// If unit classname is not present in CfgVehicles, attempt to map malformed names
			// (for example: "73_STB_ODST_Marksman" -> "STB73_STB_ODST_Marksman") by
			// searching our known ODST pool for a matching substring.
			private _odstPool = [
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

			if !(isClass (configFile >> "CfgVehicles" >> _unit)) then {
				private _fixIdx = _odstPool findIf { ((toLower _x) find (toLower _unit)) != -1 };
				if (_fixIdx != -1) then {
					_unit = _odstPool select _fixIdx;
					diag_log format ["ModuleODSTHEV: normalized unit '%1' -> '%2'", _x, _unit];
				};
			};

			_units pushBack _unit;
		};
	};
} forEach ["ODST_Man_1","ODST_Man_2","ODST_Man_3","ODST_Man_4","ODST_Man_5","ODST_Man_6","ODST_Man_7","ODST_Man_8"];

[
	_units,
	(getPos _logic),
	((_logic getVariable ["waypoints",""]) call OPTRE_fnc_StringToArrayOfString),
	(_logic getVariable ["finalWaypoint",""]),
	WEST
] call STB73_fnc_CS_ODSTHEV;

if (!isNull _logic) then { deleteVehicle _logic };
