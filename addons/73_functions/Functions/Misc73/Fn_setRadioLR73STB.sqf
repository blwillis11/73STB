params ["_Role"];
_radio = call TFAR_fnc_activeLRRadio;

_RoleJTAC = 100;
_RolePL = 200;
_RoleFL = 300;
_RoleArmor = 400;
_RolePilots = 500;

_FreqTeam = [];

if (_radio isEqualTo {}) exitWith {};

// LR70 company net
// LR61 JTAC air
// LR51 JTAC armor
// LR42 Zeus
// LR 60 Air internal

switch (_Role) do
{
	case _RoleJTAC: 
	{ 
		_FreqTeam = ["61", "51", "42"];
		[(call TFAR_fnc_activeLrRadio), 1, (_FreqTeam select 0)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 2, (_FreqTeam select 1)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 3, (_FreqTeam select 2)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 1] call TFAR_fnc_setAdditionalLrChannel;
		//61 left ear 51 on right ear
		// stereo settings:
		// 0 – both.
		// 1 – left.
		// 2 – right.
		[(call TFAR_fnc_activeLrRadio), 1] call TFAR_fnc_setLrStereo;
		[(call TFAR_fnc_activeLrRadio), 2] call TFAR_fnc_setAdditionalLrStereo;
		[false, ["JTAC Air", "JTAC Armor", "Zeus Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	case _RolePL: 
	{ 
		_FreqTeam = ["70", "42"];
		[(call TFAR_fnc_activeLrRadio), 1, (_FreqTeam select 0)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 2, (_FreqTeam select 1)] call TFAR_fnc_SetChannelFrequency;
		[false, ["Cmpy Net", "Zeus Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	case _RoleFL: 
	{ 
		_FreqTeam = ["60","61","42"];
		[(call TFAR_fnc_activeLrRadio), 1, (_FreqTeam select 0)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 2, (_FreqTeam select 1)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 3, (_FreqTeam select 2)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 1] call TFAR_fnc_setAdditionalLrChannel;
		
		[(call TFAR_fnc_activeLrRadio), 1] call TFAR_fnc_setLrStereo;
		[(call TFAR_fnc_activeLrRadio), 2] call TFAR_fnc_setAdditionalLrStereo;
		[false, ["Air Internal", "JTAC Air", "Zeus Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	case _RoleArmor: 
	{ 
		_FreqTeam = ["51","42"];
		[(call TFAR_fnc_activeLrRadio), 1, (_FreqTeam select 0)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 2, (_FreqTeam select 1)] call TFAR_fnc_SetChannelFrequency;
		[false, ["JTAC Armor", "Zeus Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	case _RolePilots: 
	{ 
		_FreqTeam = ["60","42"];
		[(call TFAR_fnc_activeLrRadio), 1, (_FreqTeam select 0)] call TFAR_fnc_SetChannelFrequency;
		[(call TFAR_fnc_activeLrRadio), 2, (_FreqTeam select 1)] call TFAR_fnc_SetChannelFrequency;
		[false, ["Air Internal", "Zeus Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
};