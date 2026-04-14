params ["_unit"];

if (CBRN_KillSwitch) exitWith {
	["CBRN Kill switch (%1) was activated, preventing 'fn_getProtectionLevel.sqf' from running!", CBRN_KillSwitch] call CBRN_fnc_debugMessage;
};

// Initialize protection variables
_faceCovered = false;
_hasFilter = false;
_hasHood = false;
_bodyCovered = false;

// Custom lists only need to be appended once, ideally in init script, not here.// DONE
// CBRN_allLevel1suits append (call compile (CBRN_CustomSuits));
// CBRN_allLevel1Masks append (call compile (CBRN_CustomGasMasks));
// CBRN_allLevel0facecovers append (call compile (CBRN_CustomFacecovers));

// Retrieve gear and configurations 
_glasses = goggles _unit;// (goggles player in CBRN_allLevel1Masks)
_uniform = uniform _unit;
_helmet = headgear _unit;
_nvg = hmd _unit;

_glassesProtection = gettext (configFile >> "cfgGlasses" >> _glasses >> "CBRN_protectionLevel");
_uniformProtection = gettext (configFile >> "cfgWeapons" >> _uniform >> "CBRN_protectionLevel");
_helmetProtection = gettext (configFile >> "cfgWeapons" >> _helmet >> "CBRN_protectionLevel");
_nvgProtection = gettext (configFile >> "cfgWeapons" >> _nvg >> "CBRN_protectionLevel");

// Protection levels based on config
// Body coverage
if (["8", _glassesProtection] call BIS_fnc_instring || ["8", _uniformProtection] call BIS_fnc_inString) then {
	_bodyCovered = true;
};

// Hood presence
if (["4", _glassesProtection] call BIS_fnc_instring || ["4", _nvgProtection] call BIS_fnc_inString ||
["4", _uniformProtection] call BIS_fnc_instring || ["4", _helmetProtection] call BIS_fnc_inString) then {
	_hasHood = true;
};

// Filter protection
if (["2", _glassesProtection] call BIS_fnc_instring || ["2", _nvgProtection] call BIS_fnc_inString ||
["2", _uniformProtection] call BIS_fnc_instring || ["2", _helmetProtection] call BIS_fnc_inString) then {
	_hasFilter = true;
};

// face coverage
if (["1", _glassesProtection] call BIS_fnc_instring || ["1", _nvgProtection] call BIS_fnc_inString ||
["1", _uniformProtection] call BIS_fnc_instring || ["1", _helmetProtection] call BIS_fnc_inString) then {
	_faceCovered = true;
};

// Custom equipment checks
if (_uniform in CBRN_allLevel1suits) then {
	_bodyCovered = true;
};
if (_uniform in CBRN_allLevel2suits) then {
	_bodyCovered = true;
	_hasHood = true;
};
if ((_glasses in CBRN_allLevel1Masks) or (_nvg in CBRN_allLevel1Masks) or (_helmet in CBRN_allLevel1Masks)) then {
	_hasFilter = true;
	_faceCovered = true;
};
if ((_glasses in CBRN_allLevel0facecovers) or (_nvg in CBRN_allLevel0facecovers) or (_helmet in CBRN_allLevel0facecovers)) then {
	_faceCovered = true;
};

// empty uniform check
if (_uniform == "") then {
	_bodyCovered = false;
};

// Check if unit is inside a CBRN sealed vehicle
// CBRN_CBRNVehicles: ARRAY of vehicle classnames
private _isInCBRNVeh = false;

if (!isNull _unit && {
	vehicle _unit != _unit
}) then {
	private _veh = vehicle _unit;

	if (!isNil "CBRN_CBRNVehicles" && {
		(typeOf _veh) in CBRN_CBRNVehicles
	}) then {
		_isInCBRNVeh = true;
	};
};

// Return contamination protection level based on criteria
switch true do {
	case (_isInCBRNVeh): {
		3
	};
	case (_faceCovered && _hasFilter && _hasHood && _bodyCovered): {
		2
	};
	case (_faceCovered && _hasFilter): {
		1
	};
	case (_faceCovered): {
		0
	};
	default {
		-1
	};
};