#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON3
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT3_NAME);
		units[] = {};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"