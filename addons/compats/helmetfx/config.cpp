#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT_NAME);
        units[] = {};
		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON), 
            QUOTE(helmetfx_main),
            QUOTE(TCP_Characters_BLUFOR_UNSC_Marines_Headgear_helmet_ECH55D)
        };
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgWeapons.hpp"