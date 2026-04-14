#include "script_component.hpp"

class CfgPatches {
    class STB73_Marines {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_Marine_Rifleman_AT",
            "STB73_Marine_Rifleman",
            "STB73_Marine_Marksman",
            "STB73_Marine_RTO_Operator",
            "STB73_Marine_Medic",
            "STB73_Marine_Grenadier",
            "STB73_Marine_Autorifleman",
            "STB73_Marine_Sniper",
            "STB73_ECH_Marine_Rifleman_AT",
            "STB73_ECH_Marine_Rifleman",
            "STB73_ECH_Marine_Marksman",
            "STB73_ECH_Marine_RTO_Operator",
            "STB73_ECH_Marine_Medic",
            "STB73_ECH_Marine_Grenadier",
            "STB73_ECH_Marine_Autorifleman",
            "STB73_ECH_Marine_Sniper"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"STB73_Main",
			"STB73_Units"
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
