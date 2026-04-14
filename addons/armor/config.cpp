#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches {
    class STB73_armor {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TCP_Characters",
            "STB73_Main"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "data\XtdGear.hpp"

class CfgUnitInsignia {
    class STB73_logo_insignia {
        displayName = "73rd STB Insignia";
        author = AUTHOR;
        texture = "z\73STB\addons\armor\data\insignia\73rd_stb_insignia_co.paa";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
    };
    class STB73_ACO_logo_insignia {
        displayName = "73rd STB ACo Insignia";
        author = AUTHOR;
        texture = "z\73STB\addons\armor\data\insignia\aco_patch_co.paa";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
    };
};