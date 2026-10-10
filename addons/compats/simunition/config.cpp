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
            QUOTE(training_mag_common)
        };
		skipWhenMissingDependencies = 1;
	};
};