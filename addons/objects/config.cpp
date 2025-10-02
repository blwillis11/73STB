#include "script_component.hpp"

class CfgPatches {
    class 73STB_Objects {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_SupplyPod_NEWACE_Medical",
			"STB73_SupplyPod_Mortar_Ammo",
			"STB73_SupplyPod_Mortar",
			"STB73_SupplyPod_StaticHMG",
			"STB73_SupplyPod_StaticHMGAmmo",
			"STB73_SupplyPod_StaticGMG",
			"STB73_SupplyPod_StaticGMGAmmo",
			"STB73_SupplyPod_VehicleAmmo",
			"STB73_SupplyPod_VehicleRepair",
			"STB73_SupplyPod_VehicleRefuel",
			"STB73_supply_ARGL",
			"STB73_supply_Breacher",
			"STB73_supply_Marksman",
			"STB73_supply_Sniper",
			"STB73_supply_Autorifles",
			"STB73_supply_ATLauncher",
			"STB73_supply_ExplosivesPack",
			"STB73_supply_TACResupply",
			"STB73_supply_Squad",
			"STB73_supply_Emptypod",
			"STB73_supply_Light"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"73STB_main",
            "OPTRE_Misc",
            "DMNS_Core",
            "NSWep_Core",
            "73STB_weapons"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
