#include "script_component.hpp"

class CfgPatches {
    class STB73_Vehicles {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_M494_Oryx",
            "STB73_M494_Oryx_AIE",
            "STB73_M411_APC",
            "STB73_M412_IFV",
            "STB73_M413_MGS",
            "STB73_SDV_ODST", 
            "STB73_Boat_Transport",
            "STB73_HDV134_Resupply",
            "STB73_HDV134_TT",
            "STB73_HDV134_TT_C",
            "STB73_M12",
            "STB73_M12_LRV",
            "STB73_M12G1_LRV",
            "STB73_M813_TT",
            "STB73_M274_ATV",
            "STB73_OQ40_Minibee",
            "STB73_AV14_Hornet_CAS",
            "STB73_AV14_Hornet_CAP",
            "STB73_D77H_SOCOM_Pelican",
            "STB73_UNSC_falcon_S",
            "STB73_UNSC_falcon",
            "STB73_UNSC_MH_144_Falcon",
            "STB73_UNSC_MH_144S_Falcon",
            "STB73_AV22_Sparrowhawk",
            "STB73_AV22A_Sparrowhawk",
            "STB73_AV22B_Sparrowhawk",
            "STB73_AV22C_Sparrowhawk",
            "STB73_AV18_Dragonfly",
            "STB73_F29_Nandao_VTOL",
            "STB73_YSS_1000_A_VTOL_Single",
            "STB73_Shortsword_01_F",
            "STB73_JT_RM2_Longsword_dynamicLoadout_F",
            "STB73_M875",
            "STB73_M808BM_MBT",
            "STB73_M808B2_MBT",
            "STB73_M808BMk2",
            "STB73_cart"
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
			"STB73_Functions"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};
class EventHandlers;

// configs go here
#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
