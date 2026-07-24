/*
	    File: fn_convertOCIAmmo.sqf
	
	    Converts any magazine beginning with OCI_
	    into its STB73_ equivalent while preserving ammo count.
	
	    Example:
	        OCI_200rnd_762x51_Mag
	        ->
	        STB73_200rnd_762x51_Mag
*/

params ["_unit"];
// Only convert ammo for player-controlled units
if !isPlayer _unit exitWith {};

// Exclude Zeus/Curator controllers
if not isNull (getAssignedCuratorLogic _unit) exitWith {};

private _mags = magazinesAmmoFull _unit;

private _converted = [];

{
	_x params ["_magClass", "_ammo"];

	if (_magClass find "OCI_" == 0) then {
		private _replacement =
		"STB73_" + (_magClass select [4]);

		if (isClass (configFile >> "CfgMagazines" >> _replacement)) then {
			_converted pushBack [_magClass, _replacement, _ammo];
		};
	};
}
forEach _mags;

{
	_x params ["_oldMag"];

	_unit removeMagazines _oldMag;
}
forEach (_converted arrayIntersect _converted apply {
	_x select 0
});

{
	_x params ["", "_newMag", "_ammo"];

	_unit addMagazine [_newMag, _ammo];
}
forEach _converted;