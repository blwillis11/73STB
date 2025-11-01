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
