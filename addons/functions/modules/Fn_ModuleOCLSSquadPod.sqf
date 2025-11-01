if !isServer exitWith {};

_logic = _this select 0;
_units = [];

// Wait until the module object exists. The original waited for isNull which
// could return true too early; waitUntil expects a condition block without extra braces.
waitUntil { !isNull _logic }; // wait until module is present (pelican colour set or other init)

if (isNull _logic) exitWith {}; // exit if module is deleted during wait

// Capture required data from the module into locals before deleting the object.
private _dropPos = getPos _logic;
private _dropWaypoints = ((_logic getVariable ["waypoints", ""]) call OPTRE_fnc_StringToArrayOfString);
private _dropFinalWP = (_logic getVariable ["finalWaypoint", ""]);

[
	_dropPos,
	_dropWaypoints,
	_dropFinalWP,
	east
] call STB73_fnc_CS_OCLSSquadPod;

// Only delete the module object if it still exists
if (!isNull _logic) then { deleteVehicle _logic };
