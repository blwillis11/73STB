params ["_unit", "_name", "_slot", "_assigned", "_weapon"];

// --- Because slotItemChanged is a global eventHandler, we need to make sure we are only updating this once clientSide!
if !(local _unit) exitWith {};

// --- A weapon will always be considered in this EH if the slotItem is a weapon accessory
if (_weapon isEqualTo "") exitWith {};

// --- get weapon accessories
private _weaponAccessories = _unit weaponAccessories _weapon;

// --- If weapon has no accessories, there's no need to run this function
// --- This stops the script from running a second time when the weapon is added before the attachments are brought back
private _weaponAccessoriesExisting = [];
{
	if !(_x isEqualTo "") then
	{
		_weaponAccessoriesExisting pushBack _x
	};
} forEach _weaponAccessories;

if ((count _weaponAccessoriesExisting) isEqualTo 0) exitWith {};

// --- Path to weaponTypes class
private _weaponTypesPath = (configFile >> "CfgWeapons" >> _weapon >> "TCP_weaponTypes");

// --- get all slot paths that can manipulate the weapon
private _weaponTypeTriggersConfigs = "true" configClasses _weaponTypesPath;

// --- if there are no slot paths returned, we can exit now
if !((count _weaponTypeTriggersConfigs) > 0) exitWith {};

// --- get names for each slot path
private _weaponTypeTriggers = _weaponTypeTriggersConfigs apply {
	configName _x
};

// --- Map of slot numbers and strings
private _slotMap = createHashMapFromArray
[
	[101, "MuzzleSlot"],
	[201, "CowsSlot"],
	[301, "PointerSlot"],
	[302, "UnderBarrelSlot"]
];

// --- get path for slotType according to EH
private _slotType = _slotMap get _slot;

// --- If the slotType doesn't correspond with a class in the weaponTypes config, we can exit
if !(_slotType in _weaponTypeTriggers) exitWith {};

// --- get slotCfg from slotType
private _slotCfg = (_weaponTypesPath >> _slotType);

// --- find all weaponType suffixes compatible with _weapon
private _weaponTypesConfigs = configProperties [_slotCfg, "isClass _x"];
private _weaponTypes = _weaponTypesConfigs apply {
	configName _x
};

// --- find all weaponTypes using the compatibleItems class and add to array
private _weaponTypesTrue = [];
if (_assigned) then {
	{
		private _compatibleItemsConfigs = configProperties [(_slotCfg >> _x >> "compatibleItems"), "true", true];
		private _compatibleItems = _compatibleItemsConfigs apply {
			configName _x
		};

		if (_name in _compatibleItems) exitWith {
			_weaponTypesTrue pushBack _x;
		};

		       // --- Check for indirect / inherited compatibility
		private _isKindOfCompatible =
		{
			if (_name isKindOf [_x, (configFile >> "CfgWeapons")]) exitWith {
				true
			};
		} forEach _compatibleItems;

		if _isKindOfCompatible exitWith
		{
			_weaponTypesTrue pushBack _x;
		};
	} forEach _weaponTypes;
};
// --- Construct className for new weapon using suffix from weaponType
private _baseWeapon = getText (configFile >> "CfgWeapons" >> _weapon >> "baseWeapon");

// 
// --- When swapping the equipment, this function will be called again by the EH!
// 

// --- Check to see if any of the potentially added suffixes already exist
private _suffixesPresent = _weaponTypes apply {
	_x in _weapon
};
private _suffixPresent = true in _suffixesPresent;
private _itemCompatible = (count _weaponTypesTrue) > 0;

// --- if a compatible item has been assigned, and the suffix is present, the weapon class has already been updated!
if (_assigned and _itemCompatible and _suffixPresent) exitWith {
	// systemChat "Compatible Item; Class already updated!"
};

// --- if an incompatible item has been assigned, and the suffix is not present, the weapon class has already been updated!
if (_assigned and !(_itemCompatible) and !(_suffixPresent)) exitWith {
	// systemChat "Incompatible Item; No update!";
};

// --- if item is unassigned, and the suffix is not present, the weapon class has already been updated!
if (!(_assigned) and !(_suffixPresent)) exitWith {
	// systemChat "Unassigned Compatible Item; Class already updated!";
};

systemChat str [_assigned, _suffixPresent];

// --- Return new equipment className using true types, if none present use base
_weaponTypesTrue insert [0, [_baseWeapon]];
systemChat str _weaponTypesTrue;
private _newWeapon = _weaponTypesTrue joinString "_";

// --- Collect weapon accessories for copying to new weapon
private _weaponInfo = (_unit weaponsInfo [_weapon, true]) # 0;
private _magazine = (_weaponInfo # 5);
if !(isNil "_magazine") then
{
	private _ammo = (_weaponInfo # 6);
	_weaponAccessories pushBack [_magazine, _ammo];
};

// --- Remove old weapon
_unit removeWeapon _weapon;

// --- Add new weapon and select it
_unit addWeapon _newWeapon;
_unit selectWeapon _newWeapon;

// --- Remove automatically loaded magazine from weapon, and store information to re-add later
private _autoMagAmmo = _unit ammo _newWeapon;
private _autoMagClass = currentMagazine _unit;
// _unit removeWeaponItem [_newWeapon, _autoMagClass]; // Overwritten below, so technically doesn't need to occur

// --- Replace all accessories (and original magazine!)
{
	if (_x isNotEqualTo "") then {
		_unit addWeaponItem [_newWeapon, _x, true];
	};
} forEach _weaponAccessories;

// --- Re-add the magazine removed earlier
_unit addMagazine [_autoMagClass, _autoMagAmmo];