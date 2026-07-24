#include "script_component.hpp"
functions = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

functions = true;

#define MACRO_SCRIPT "[ace map markers preinit.sqf] "
[
	"z\73STB\addons\functions\mapMarkers\clearMarker.sqf", 
	"QUI_fnc_ClearMarker"
] call CBA_fnc_compileFunction;

if(OPTRE_Debug_Mode) then {
	diag_log format["[OPTRE-ACE placedown/pickup] Loading OPTRE:ACE placedown/pickup Scripts"];
};

[
	"OPTRE_FunctionsLibrary\ace\placedown_pickup\functions\place_down.sqf", 
	"OPTRE_ace_fnc_place_down_vic"
] call CBA_fnc_compileFunction;

[
	"OPTRE_FunctionsLibrary\ace\placedown_pickup\functions\pick_up.sqf", 
	"OPTRE_ace_fnc_pick_up_vic"
] call CBA_fnc_compileFunction;


if(OPTRE_Debug_Mode) then {
	diag_log format["[OPTRE-ACE placedown/pickup] Done loading OPTRE:ACE placedown/pickup Scripts"];
};

[
	    "STB73_JumpPack_Setting_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	    "CHECKBOX", // setting type
	    ["JumpPacks Enabled", "Hard admin override for JumpPacks"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	    "73rd Aux Mod", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	    true, // data for this setting
	    true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STB73_JumpPack_Enabled = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;