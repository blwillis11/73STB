#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON2
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT2_NAME);
		units[] = {
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgGroups.hpp"
