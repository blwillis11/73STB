_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {
	case (_veh isKindOf "OPTRE_M808B_base"
	or _veh isKindOf "OPTRE_M808B2"
	or _veh isKindOf "OPTRE_M808BM_Base"
	or _veh isKindOf "OPTRE_M808B_Arty_Base"
	or _veh isKindOf "STB73_M875") : {
		_veh attachTo [_pelican, [0, -9.5, -1.3]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S"
	or _veh isKindOf "OPTRE_M808L"
	or _veh isKindOf "STB73_M808BM_MBT"
	or _veh isKindOf "STB73_M808B2_MBT"
	or _veh isKindOf "STB73_M808BMk2") :
	{
		_veh attachTo [_pelican, [0, -9.5, -1.75]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV"
	or _veh isKindOf "OPTRE_M12_LRV"
	or _veh isKindOf "OPTRE_M12G1_LRV"
	or _veh isKindOf "OPTRE_M12R_AA"
	or _veh isKindOf "OPTRE_M813_TT"
	or _veh isKindOf "OPTRE_M12_FAV_APC"
	or _veh isKindOf "STB73_M12_LRV"
	or _veh isKindOf "STB73_M12G1_LRV"
	or _veh isKindOf "STB73_M813_TT") : {
		_veh attachTo [_pelican, [0, -6.5, -1.0]];
		// 0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV" or _veh isKindOf "STB73_M12") : {
		_veh attachTo [_pelican, [0, -6.5, -0.5]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M494") : {
		_veh attachTo [_pelican, [0, -7.2, -1.67105]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "SDV_01_base_F") : {
		_veh attachTo [_pelican, [0, -7.5, -.25]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "STB73_Space_Crate_Pallet_Large_Base") : {
		_veh attachTo [_pelican, [0, -6.75, -1]];
		_veh setDir 180;
		_loaded = true;
	};
	case (
	_veh isKindOf "DMNS_M511_Springbok_IFV"
	or _veh isKindOf "DMNS_M511_Springbok_MGS"
	or _veh isKindOf "DMNS_M511_Springbok_AA"
	) : {
		_veh attachTo [_pelican, [0, -9, -0.85]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "DMNS_M511_Springbok_APC") : {
		_veh attachTo [_pelican, [0, -9, -0.72]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican, [0, -4.8, -0.1]];
		_loaded = true;
		_veh setDir 180;
	};
};

if (_loaded) then {
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [_veh], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	// hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};