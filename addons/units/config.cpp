#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches {
    class STB73_Units {
        name = Q(COMPONENT_NAME);
		units[] = 
        {
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"STB73_Main",
			"STB73_Weapons",
			"STB73_Armor"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
