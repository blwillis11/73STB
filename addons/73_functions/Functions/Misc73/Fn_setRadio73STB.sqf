params ["_team", "_additional", "_setAdditonal", "_teamLead", "_Platoon"];
//Platoon Codes
_AlphaOnePlatoon = 100;
_AlphaTwoPlatoon = 200;
_AlphaThreePlatoon = 300;
_ChairForce = 400;
_MechForce = 500;
_BravoOnePlatoon = 600;
_BravoTwoPlatoon = 700;
_BravoThreePlatoon = 800;

//Roles
_MemberRole = 100;
_MedicRole = 200;
_TeamLeadRole = 300;
_RtoRole = 400;

_FreqTeam = [];
// SR channel 1 = 120.1
// SR channel 2 = 120.2
// SR channel 3 = 120.3
// Overflow SR channel = 120.4
// Medic SR Ad = 220.1
// Platoon net = 120
// Air net = 35
// Ground LR  = 70
// First Platoon

switch (_Platoon) do
{
	case _AlphaOnePlatoon: 
	{ 
		_FreqTeam = ["111.1", "111.2", "111.3", "111.4", "111.5", "111", "70", "61"];
	};
	case _AlphaTwoPlatoon: 
	{ 
		_FreqTeam = ["112.1", "112.2", "112.3", "112.4", "112.5", "112", "70", "61"];
	};
	case _AlphaThreePlatoon: 
	{ 
		_FreqTeam = ["113.1", "113.2", "113.3", "113.4", "113.5", "113", "70", "61"];
	};
	case _BravoOnePlatoon: 
	{ 
		_FreqTeam = ["120.1", "120.2", "120.3", "120.4", "120.5", "120", "70", "61"];
	};
	case _BravoTwoPlatoon: 
	{ 
		_FreqTeam = ["121.1", "121.2", "121.3", "121.4", "121.5", "121", "70", "61"];
	};
	case _BravoThreePlatoon: 
	{ 
		_FreqTeam = ["122.1", "122.2", "122.3", "122.4", "122.5", "122", "70", "61"];
	};
	case _ChairForce: 
	{ 
		_FreqTeam = ["260", "230", "111", "112", "113", "120", "121", "122"];
	};
	case _MechForce: 
	{ 
		_FreqTeam = ["360", "330", "111", "112", "113", "120", "121", "122"];
	};
};

if (playerSide in [west]) then {
	player linkItem "TFAR_anprc152";
	sleep 2;
	// _FreqTeam is array of team frequencies
	[(call TFAR_fnc_activeSwradio), 1, (_FreqTeam select 0)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 2, (_FreqTeam select 1)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 3, (_FreqTeam select 2)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 4, (_FreqTeam select 3)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwRadio), -1] call TFAR_fnc_setAdditionalSwChannel;
	[(call TFAR_fnc_activeSwRadio), _team] call TFAR_fnc_setSwChannel;
	   // set additonals if required
	   // Medic
	if (_setAdditonal == _MedicRole) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
	};
	   // Team leader
	if (_setAdditonal == _TeamLeadRole) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 6, (_FreqTeam select 5)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 7, (_FreqTeam select 6)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
	};
	   // JTAC
	if (_setAdditonal == _RtoRole) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 6, (_FreqTeam select 5)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 7, (_FreqTeam select 6)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 8, (_FreqTeam select 7)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
	};

	if (_Platoon == _AlphaOnePlatoon) then {
		if (_setAdditonal == _TeamLeadRole) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF", "Plt 1 MedNet", "Plt 1 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF", "Plt 1 MedNet", "Plt 1 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF", "Plt 1 MedNett"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == _AlphaTwoPlatoon) then {
		if (_setAdditonal == _TeamLeadRole ) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF", "Plt 2 MedNet", "Plt 2 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF", "Plt 2 MedNet", "Plt 2 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF", "Plt 2 MedNet", "Plt 2 Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == _AlphaThreePlatoon) then {
		if (_setAdditonal == _TeamLeadRole) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 3 OF", "Plt 3 MedNet", "Plt 3 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 3 OF", "Plt 3 MedNet", "Plt 3 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 3 OF", "Plt 3 MedNet"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 3 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};

	if (_Platoon == _ChairForce) then {
		[true, ["Air Net 1", "Air Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	if (_Platoon == _MechForce) then {
		[true, ["Mech Net 1", "Mech Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	if (_Platoon == _BravoOnePlatoon) then {
		if (_setAdditonal == _TeamLeadRole) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF", "Plt 1 MedNet", "Plt 1 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF", "Plt 1 MedNet", "Plt 1 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF", "Plt 1 MedNet"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == _BravoTwoPlatoon) then {
		if (_setAdditonal == _TeamLeadRole ) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF", "Plt 2 MedNet", "Plt 2 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF", "Plt 2 MedNet", "Plt 2 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF", "Plt 2 MedNet"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == _BravoThreePlatoon) then {
		if (_setAdditonal == _TeamLeadRole) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 3 OF", "Plt 3 MedNet", "Plt 3 Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _RtoRole) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 3 OF", "Plt 3 MedNet", "Plt 3 Net", "Cmpy Net", "Air Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MedicRole) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 3 OF", "Plt 3 MedNet"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == _MemberRole) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 3 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
};