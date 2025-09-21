if !isServer exitWith {};

_logic = _this select 0;
_units = [];

waitUntil {
	isNull _logic
}; // pelican colour set or module deleted
if (isNull _logic) exitWith {}; // exit if module is deleted

0 = [
	(getPos _logic),
	((_logic getVariable ["waypoints", ""]) call OPTRE_fnc_StringToArrayOfString),
	(_logic getVariable ["finalWaypoint", ""]),
	east
] call OPTRE_fnc_CS_OCLSSquadDrop;

deleteVehicle _logic;