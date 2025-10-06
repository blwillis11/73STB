#include "script_component.hpp"

class CfgPatches {
    class 73STB_Innie {
        name = COMPONENT_NAME;
		units[] = 
        {
            "STB73_OCLF_Soldier_Rifleman",
            "STB73_OCLF_Soldier_Medic",
            "STB73_OCLF_Soldier_Rifleman_AT",
            "STB73_OCLF_Soldier_Rifleman_AA",
            "STB73_OCLF_Soldier_AutoRifleman",
            "STB73_OCLF_Soldier_Breacher",
            "STB73_OCLF_Soldier_Grenadier",
            "STB73_OCLF_Soldier_SquadLead",
            "STB73_OCLF_Soldier_Grenadier",
            "STB73_OCLF_Soldier_Radioman",
            "STB73_OCLF_Soldier_Sniper",
            "STB73_OCLF_Soldier_Scout",
            "STB73_OCLF_SpecOps_Rifleman",
            "STB73_M12_FAV_ins",
            "STB73_M12_LRV_MG_ins",
            "STB73_M12_LRV_TD_ins",
            "STB73_M12_LRV_AA_ins",
            "STB73_M12_LRV_VBIED_ins",
            "STB73_m1015_mule_repair_ins",
            "STB73_m1015_mule_fuel_ins",
            "STB73_m1015_mule_medical_ins",
            "STB73_m1015_mule_cover_ins",
            "STB73_m1015_mule_ins",
            "STB73_M222R_INS",
            "STB73_M222_INS",
            "STB73_M705AA_Earwig_INS",
            "STB73_M413_MGS_INS",
            "STB73_M412_IFV_INS",
            "STB73_M221_INS",
            "STB73_M220_INS",
            "STB73_M493_M37_Ins",
            "STB73_M494_INS",
            "STB73_M492_INS",
            "STB73_m1015_mule_mlr_ins",
            "STB73_M501A_INS",
            "STB73_catfish_ins_mg",
            "STB73_catfish_ins",
            "STB73_INS_UH_144S_Falcon_DAP",
            "STB73_INS_UH_144_Falcon_DAP",
            "STB73_ins_falcon",
            "STB73_AV22_Sparrowhawk_ins",
            "STB73_AV22A_Sparrowhawk_ins",
            "STB73_AV22B_Sparrowhawk_ins",
            "STB73_AV22C_Sparrowhawk_ins",
            "STB73_Pelican_unarmed_ins",
            "STB73_UNSC_hornet_ins",
            "STB73_Plane_Swallow_ins",
            "STB73_Plane_Starling_ins",
            "STB73_Plane_Shrike_ins",
            "STB73_M700_MBT_INS",
            "STB73_M808B_INS",
            "STB73_Static_FG75",
            "STB73_AU_44_INS_Mortar",
            "STB73_Static_AA_Ins",
            "STB73_Static_M41_Ins",
            "STB73_AIE_486H_Static_HMG",
            "STB73_Static_M247T_Tripod",
            "STB73_M37_Static_HMG"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "73STB_Main",
            "OPTRE_Misc",
            "OPTRE_Vehicles",
            "OPTRE_Vehicles_Tracked",
            "OPTRE_Vehicles_Air",
            "OPTRE_Weapons",
            "OPTRE_FunctionsLibrary",
            "OPTRE_MJOLNIR"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};
class UniformItem;
class HitPoints;
class HitFace;
class HitNeck;
class HitHead;
class HitPelvis;
class HitAbdomen;
class HitDiaphragm;
class HitChest;
class HitBody;
class HitArms;
class HitHands;
class HitLegs;
class HeadgearItem;

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
