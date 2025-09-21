class CfgPatches
{
    class 73_innie
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_OCLF_Soldier_Rifleman",
            "73_OCLF_Soldier_Medic",
            "73_OCLF_Soldier_Rifleman_AT",
            "73_OCLF_Soldier_Rifleman_AA",
            "73_OCLF_Soldier_AutoRifleman",
            "73_OCLF_Soldier_Breacher",
            "73_OCLF_Soldier_Grenadier",
            "73_OCLF_Soldier_SquadLead",
            "73_OCLF_Soldier_Grenadier",
            "73_OCLF_Soldier_Radioman",
            "73_OCLF_Soldier_Sniper",
            "73_OCLF_Soldier_Scout",
            "73_OCLF_SpecOps_Rifleman",
            "73_OCLF_Officer",
            "73_M12_FAV_ins",
            "73_M12_LRV_MG_ins",
            "73_M12_LRV_TD_ins",
            "73_M12_LRV_AA_ins",
            "73_M12_LRV_VBIED_ins",
            "73_m1015_mule_repair_ins",
            "73_m1015_mule_fuel_ins",
            "73_m1015_mule_medical_ins",
            "73_m1015_mule_cover_ins",
            "73_m1015_mule_ins",
            "73_M222R_INS",
            "73_M222_INS",
            "73_M705AA_Earwig_INS",
            "73_M413_MGS_INS",
            "73_M412_IFV_INS",
            "73_M221_INS",
            "73_M220_INS",
            "73_M493_M37_Ins",
            "73_M494_INS",
            "73_M492_INS",
            "73_m1015_mule_mlr_ins",
            "73_M501A_INS",
            "73_catfish_ins_mg",
            "73_catfish_ins",
            "73_INS_UH_144S_Falcon_DAP",
            "73_INS_UH_144_Falcon_DAP",
            "73_ins_falcon",
            "73_AV22_Sparrowhawk_ins",
            "73_AV22A_Sparrowhawk_ins",
            "73_AV22B_Sparrowhawk_ins",
            "73_AV22C_Sparrowhawk_ins",
            "73_Pelican_unarmed_ins",
            "73_UNSC_hornet_ins",
            "73_Plane_Swallow_ins",
            "73_Plane_Starling_ins",
            "73_Plane_Shrike_ins",
            "73_M700_MBT_INS",
            "73_M808B_INS",
            "73_Static_FG75",
            "73_AU_44_INS_Mortar",
            "73_Static_AA_Ins",
            "73_Static_M41_Ins",
            "73_AIE_486H_Static_HMG",
            "73_Static_M247T_Tripod",
            "73_M37_Static_HMG"
        }; 
        weapons[] = 
        {
        }; 
		vehicles[] =
		{
		};
		ammo[] = 
		{
			""
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        {
			"73_Units"
        };
    };
};
class cfgFactionClasses
{
    class 73_OCLF
    {
        displayName = "[73] Outer Colony Liberation Front";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
};
class CfgEditorCategories
{
	class 73_OCLF // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Outer Colony Liberation Front"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};
class CfgEditorSubcategories
{
    class 73_SpecOps_EdSubCat
    {
        displayName = "Special Forces";
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
class CfgWeapons
{
//marine

    #include "\73_innie\OCLF\OCLFVest.hpp"
    #include "\73_innie\OCLF\OCLFHelmet.hpp"
    #include "\73_innie\OCLF\OCLFUniform.hpp"
};

class CfgVehicles
{
    #include "\73_innie\OCLF\OCLFUnits.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFAA.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFAPC.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFArtillery.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFBoats.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFCars.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFHelicopters.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFPlanes.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFTanks.hpp"
    #include "\73_innie\OCLF\Vehicles\OCLFTurret.hpp"
};
class CfgGroups
{
    #include "\73_innie\OCLF\OCLFGroups.hpp"
};