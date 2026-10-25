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

#include "CfgWeapons.hpp"

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
  class compatibleItems
  {
    STB73_optic_A7Scope = 1;
    STB73_optic_2D_A7Scope = 1;
  };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
  class compatibleItems
  {
    STB73_optic_A7Scope = 1;
    STB73_optic_2D_A7Scope = 1;
  };
};