#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		addonRootClass = QUOTE(MAIN_ADDON);

		name = QUOTE(COMPONENT_NAME);
		units[] = {};
		// Used for forcing load order
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
        skipWhenMissingDependencies = 1;
	};
};