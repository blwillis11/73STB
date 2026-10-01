#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON
	{
		addonRootClass = QUOTE(ADDON);

		name = QUOTE(SUBCOMPONENT_NAME);
		units[] = {
			Q(DOUBLES(PFACTION,Soldier)),
			Q(DOUBLES(PFACTION,Soldier_A)),
			Q(DOUBLES(PFACTION,Soldier_AR)),
			Q(DOUBLES(PFACTION,Soldier_Medic)),
			Q(DOUBLES(PFACTION,Soldier_Engineer)),
			Q(DOUBLES(PFACTION,Soldier_Exp)),
			Q(DOUBLES(PFACTION,Soldier_GL)),
			Q(DOUBLES(PFACTION,Soldier_M)),
			Q(DOUBLES(PFACTION,Soldier_AA)),
			Q(DOUBLES(PFACTION,Soldier_AT)),
			Q(DOUBLES(PFACTION,Soldier_Officer)),
			Q(DOUBLES(PFACTION,Soldier_Repair)),
			Q(DOUBLES(PFACTION,Soldier_LAT)),
			Q(DOUBLES(PFACTION,Soldier_Unarmed)),
			Q(DOUBLES(PFACTION,Soldier_SL)),
			Q(DOUBLES(PFACTION,Soldier_TL)),
			Q(DOUBLES(PFACTION,Soldier_Lite)),
			Q(DOUBLES(PFACTION,Soldier_UAV)),
			Q(DOUBLES(PFACTION,Soldier_Sniper)),
			Q(DOUBLES(PFACTION,Soldier_Spotter)),
			Q(DOUBLES(PFACTION,Soldier_Support)),
			Q(DOUBLES(PFACTION,Soldier_AAR)),
			Q(DOUBLES(PFACTION,Soldier_AMG)),
			Q(DOUBLES(PFACTION,Soldier_AAA)),
			Q(DOUBLES(PFACTION,Soldier_AAT)),
			Q(DOUBLES(PFACTION,Soldier_GMG)),
			Q(DOUBLES(PFACTION,Soldier_MG)),
			Q(DOUBLES(PFACTION,Soldier_Mort)),
			Q(DOUBLES(PFACTION,Soldier_AMort))
		};

		// Used for forcing load order
		requiredAddons[] = {QUOTE(ADDON)};
	};
};

#include "CfgVehicles.hpp"
