#include "script_component.hpp"

class CfgPatches {
    class Vehicles {
        name = COMPONENT_NAME;
		units[] = 
        {
            "73_M494_Oryx",//Load/unload
            "73_IFV76",//Load/unload
            "73_IFV76_A",//Load/unload
            "73_M875",//Load/unload
            "73_HDV134_Resupply",//Load/unload
            "73_HDV134_TT",//Load/unload
            "73_HDV134_TT_C",//Load/unload
            "73_M19_GMG",//Load/unload
            "73_M19_HMG",//Load/unload
            "73_M808BM_MBT",//Load/unload
            "73_D77_TC_Pelican",
            "73_M12",//Load/unload
            "73_M12_LRV",//Load/unload
            "73_M12G1_LRV",//Load/unload
            "73_M12A1_LRV",//Load/unload
            "73_M12R_AA",//Load/unload
            "73_M12_APC",//Load/unload
            "73_M813_TT",//Load/unload
            "73_UNSC_falcon_S",
            "73_UNSC_falcon",
            "73_UNSC_MH_144_Falcon",
            "73_UNSC_MH_144S_Falcon",
            "73_AV22_Sparrowhawk",
            "73_AV22A_Sparrowhawk",
            "73_AV22B_Sparrowhawk",
            "73_AV22C_Sparrowhawk",
            "73_M413_MGS",//Load/unload
            "73_M412_IFV",//Load/unload
            "73_F29_Nandao_VTOL",
            "73_YSS_1000_A_VTOL_Single",
            "73_Shortsword_01_F",
            "73_JT_RM2_Longsword_dynamicLoadout_F",
            "73_M511_Springbok_APC",//Load/unload
            "73_M511_Springbok_IFV",//Load/unload
            "73_M511_Springbok_MGS",//Load/unload
            "73_M511_Springbok_AA",//Load/unload
            "73_AV14_Hornet_CAS",
            "73_AV14_Hornet_CAP",
            "73_SDV_ODST",
            "73_M274_ATV",
            "73_M808BMk2",//Load/unload
            "73_M914_TD",//Load/unload
            "73_Hammerhead_Repair",//Load/unload
            "73_POGV_RCWS",
            "73_COGV_RCWS",
            "73_Iguana_APC",//Load/unload
            "73_Iguana_Medical_APC",//Load/unload
            "73_Komodo",//Load/unload
            "73_Merkava",//Load/unload
            "73_cart"
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "DMNS_Armour"
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
