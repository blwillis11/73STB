#include "script_component.hpp"

class CfgPatches {
    class STB73_Peacekeeper {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_Peacekeeper_RTO_Operator",
            "STB73_Peacekeeper_Medic",
            "STB73_Peacekeeper_Rifleman",
            "STB73_Peacekeeper_Team_Lead"
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
