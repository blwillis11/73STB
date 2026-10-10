#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);
        units[] = {};
		// Used for forcing load order
		requiredAddons[] = {
            QUOTE(ADDON),
            QUOTE(STB73_Weapons)
        };
	};
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"