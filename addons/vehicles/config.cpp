#include "script_component.hpp"

class CfgPatches {
    class STB73_Vehicles {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_M494_Oryx",//Load/unload
            "STB73_M511_Springbok_APC",//Load/unload
            "STB73_M511_Springbok_IFV",//Load/unload
            "STB73_M511_Springbok_MGS",//Load/unload
            "STB73_M511_Springbok_AA",//Load/unload
            "STB73_SDV_ODST", //Load/unload
            "STB73_Boat_Transport",//ViV only
            "STB73_HDV134_Resupply",//Load/unload
            "STB73_HDV134_TT",//Load/unload
            "STB73_HDV134_TT_C",//Load/unload
            "STB73_M12",//Load/unload
            "STB73_M12_LRV",//Load/unload
            "STB73_M12G1_LRV",//Load/unload
            "STB73_M813_TT",//Load/unload
            "STB73_M274_ATV", //ViV only
            "STB73_OQ40_Minibee",
            "STB73_AV14_Hornet_CAS",
            "STB73_AV14_Hornet_CAP",
            "STB73_D77_TC_Pelican",
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
            "STB73_M875",//Load/unload
            "STB73_M808BM_MBT",//Load/unload
            "STB73_M808B2_MBT",//Load/unload
            "STB73_M808BMk2",//Load/unload
            "STB73_cart"
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "DMNS_Armour",
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
