#include "script_component.hpp"

class CfgPatches {
    class 73STB_Units {
        name = COMPONENT_NAME;
		units[] = 
        {
			"STB73_STB_ODST_Rifleman",
			"STB73_STB_ODST_Autorifleman",
			"STB73_STB_ODST_Grenadier",
			"STB73_STB_ODST_Demo",
			"STB73_STB_ODST_Medic",
			"STB73_STB_ODST_Sniper",
			"STB73_STB_ODST_Marksman",
			"STB73_STB_ODST_Officer",
			"STB73_STB_ODST_AT",
			"STB73_STB_ODST_Scout",
			"STB73_STB_ODST_Team_Lead",
			"STB73_STB_ODST_Squad_Lead",
			"STB73_Aviator"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"73STB_main",
			"OPTRE_UNSC_Units",
			"MA_Armor",
			"OPTRE_FC_Units"
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
#include "CfgGroups.hpp"
