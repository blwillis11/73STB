#include "script_component.hpp"

class CfgPatches {
    class STB73_Objects {
        name = COMPONENT_NAME;
		units[] = 
        {
			"STB73_SupplyPod_VehicleAmmo",
			"STB73_SupplyPod_VehicleRepair",
			"STB73_SupplyPod_VehicleRefuel",
			"STB73_SupplyPod_Medical",
			"STB73_SupplyPod_Emptypod",
			"STB73_SupplyPod_SMG",
			"STB73_SupplyPod_EOD",
			"STB73_SupplyPod_AT",
			"STB73_SupplyPod_Autorifles",
			"STB73_SupplyPod_Sniper",
			"STB73_SupplyPod_Marksman",
			"STB73_SupplyPod_CQB",
			"STB73_SupplyPod_ARGL",
			"STB73_SupplyPod_AR",
			"STB73_BriefScreen",
			"STB73_TraitSelectConsole",
			"STB73_Space_Crate_Pallet_Large_Base",
			"STB73_Space_Crate_Pallet_Large_RRR",
			"STB73_Space_Crate_Pallet_Large_Ammo",
			"STB73_Space_Crate_Refuel_Olive",
			"STB73_Space_Crate_Repair_Olive",
			"STB73_Space_Crate_Resupply_Olive",
			"STB73_Space_Crate_Rifles_Olive",
			"STB73_Space_Crate_Medical_Olive",
			"STB73_Space_Crate_CQB_Olive",
			"STB73_Space_Crate_Explosives_Olive",
			"STB73_Crate_Small_Base_Olive",
			"STB73_Crate_Small_Rifleman_Olive",
			"STB73_Crate_Small_Medical_Olive",
			"STB73_Crate_Small_Marksman_Olive",
			"STB73_Crate_Small_AutoRifleman_Olive",
			"STB73_Crate_Small_SMG_Olive",
			"STB73_Crate_Small_Grenadier_Olive",
			"STB73_Crate_Small_CQB_Olive",
			"STB73_Crate_Small_Sniper_Olive",
			"STB73_Crate_Small_AT_Olive",
			"STB73_Crate_Small_EOD_Olive",
			"Land_STB73_FlagPole_01_ODST",
			"Land_STB73_FlagPole_02_ODST"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"STB73_Main",
            "OPTRE_Misc",
            "DMNS_Core",
            "NSWep_Core",
            "STB73_Weapons"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

class ACE_Actions;
class ACE_MainActions;

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
