params ["_veh", "_pelican"];

private _loaded = false;
private _vehClass = typeOf _veh;

// --- CfgVehicles Parameters
private _tcpOPTRECompatPath = configFile >> "CfgVehicles" >> _vehClass >> "TCP_Compat_OPTRE";
private _offsetOPTRE = getArray (_tcpOPTRECompatPath >> "magLockOffset");
private _reversedOPTRE = getNumber (_tcpOPTRECompatPath >> "magLockReversed");

if (_offsetOPTRE isNotEqualTo []) then {
	_veh attachTo [_pelican, _offsetOPTRE];
	if (_reversedOPTRE isNotEqualTo 0) then {
		_veh setDir 180
	};
	_loaded = true;
};

// --- Check ADDON OPTIONS if CfgVehicles parameters fail
if (!_loaded) then {
	private _cbaVehArray = parseSimpleArray TCP_Compat_OPTRE_Maglock_Custom;
	{
		_x params [["_class", ""], ["_offset", [0, 0, 0]], ["_reversed", false], ["_gearInterlock", false]];
		if (_vehClass isKindOf _class) exitWith {
			_veh attachTo [_pelican, _offset];
			if (_reversed) then {
				_veh setDir 180
			};
			_loaded = true;
		};
	} forEach _cbaVehArray;
};

// --- Fallback to built in offsets if no config / addon option matched
if (!_loaded) then {
	private _offset = switch (_vehClass) do {
		// Supply vehicles
		case "OPTRE_m1087_stallion_unsc": {
			[0, -6, 0.4]
		};
		case "OPTRE_m1015_mule_unsc": {
			[0, -4.9, 0.4]
		};
		case "OPTRE_M12_FAV_APC": {
			[0, -3.2, 0.4]
		};

		// Warthog
		case "OPTRE_M12_FAV": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_FAV_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_FAV_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_FAV_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_FAV_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_M12_LRV": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_LRV_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_LRV_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_LRV_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12_LRV_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_M12A1_LRV": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12A1_LRV_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12A1_LRV_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12A1_LRV_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12A1_LRV_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_M12G1_LRV": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12G1_LRV_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12G1_LRV_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12G1_LRV_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12G1_LRV_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_M12R_AA": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12R_AA_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12R_AA_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12R_AA_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M12R_AA_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_M813_TT": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M813_TT_black": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M813_TT_Marine": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M813_TT_snow": {
			[0, -4.9, 0.1]
		};
		case "OPTRE_M813_TT_tan": {
			[0, -4.9, 0.1]
		};

		case "OPTRE_UNSC_falcon_black": {
			[0, -6, -0.1]
		};
		case "OPTRE_UNSC_falcon_green": {
			[0, -6, -0.1]
		};
		case "OPTRE_UNSC_falcon_snow": {
			[0, -6, -0.1]
		};
		case "OPTRE_UNSC_falcon_tan": {
			[0, -6, -0.1]
		};

		default {
			[0, -4.9, 0.1]
		};
	};
	_veh attachTo [_pelican, _offset];
	_loaded = true;
};

_loaded