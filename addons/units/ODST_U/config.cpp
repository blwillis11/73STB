#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT_NAME);
		units[] = {
			Q(DOUBLES(PFACTION,Aviator)),
			Q(DOUBLES(PFACTION,Light)),
			Q(DOUBLES(PFACTION,Grenadier)),
			Q(DOUBLES(PFACTION,Rifleman)),
			Q(DOUBLES(PFACTION,AT)),
			Q(DOUBLES(PFACTION,Autorifleman)),
			Q(DOUBLES(PFACTION,Sniper)),
			Q(DOUBLES(PFACTION,Marksman)),
			Q(DOUBLES(PFACTION,Scout)),
			Q(DOUBLES(PFACTION,Officer)),
			Q(DOUBLES(PFACTION,Demo)),
			Q(DOUBLES(PFACTION,SORC)),
			Q(DOUBLES(PFACTION,Team_Lead)),
			Q(DOUBLES(PFACTION,Squad_Lead))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgVehicles.hpp"
