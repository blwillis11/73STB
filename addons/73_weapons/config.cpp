class CfgPatches
{
    class 73_weapons
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
        }; 
        weapons[] = 
        {
        "73_BR55HBM1_DMR",
        "73_M247",
        "73_M392_DMR",
        "73_M395_DMR",
        "73_M395S_DMR",
        "73_M45",
        "73_M45A",
        "73_M45ATAC",
        "73_M45TAC",
        "73_M45E",
        "73_M6DS_Carbine_Foregrip",
        "73_M7_SMG",
        "73_M7_SMG_salmon",
        "73_M90A",
        "73_MA37BGL",
        "73_MA37B",
        "73_MA37K",
        "73_MA5B",
        "73_MA5BGL",
        "73_MA5K",
        "73_SRS99AM",
        "73_SRS99AM_Stealth",
        "73_M96_LAW",
        "73_Fang",
        "73_Fang2",
        "73_BR55HBM1_CQC"
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
			"19_UNSC_Weapons",
            "OPTRE_FunctionsLibrary",
			"OPTRE_Weapons",
			"ACE_Javelin",
			"ace_missileguidance",
            "NSWep_Weapons",
            "CBA_Main"
			
        };
    };
};

#include "XtdGear\XtdGearModels.hpp"

class CfgFunctions {
    class STB73_Weapons
    {
        class Functions
        {

            class Init
            {
                postInit=1;
                file="73_weapons\functions\fn_init.sqf";
            };
        };
    };
    
};

class ace_missileguidance_type_Sidewinder;
class 73_ace_missileguidance_type_M41_AA: ace_missileguidance_type_Sidewinder
{
	enabled=1;
	canVanillaLock=0;
	pitchRate=30;
	yawRate=30;
	defaultSeekerType="IR";
	seekerTypes[]=
	{
		"IR"
	};
	defaultSeekerLockMode="LOAL";
	seekerLockModes[]=
	{
		"LOAL"
	};
	defaultNavigationType="AugmentedProportionalNavigation";
	navigationTypes[]=
	{
		"AugmentedProportionalNavigation"
	};
	defaultAttackProfile="DIR";
	attackProfiles[]=
	{
		"DIR"
	};
	flareDistanceFilter=100;
	flareAngleFilter=1.6;
	seekLastTargetPos=1;
	seekerAngle=90;
	seekerMinRange=10;
	seekerMaxRange=5000;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class OPTRE_ace_missileguidance_type_M41_Thermal;
class cfgAmmo {

    #include "SMG\smgammo.hpp"
    #include "DMR\dmrammo.hpp"
    #include "LMG\lmgammo.hpp"
    #include "Launcher\launcherammo.hpp"
    #include "Sniper\sniperammo.hpp"
    #include "BR\brammo.hpp"
    #include "Shotgun\shotgunammo.hpp"
    #include "AR\arammo.hpp"
    #include "sidearm\sidearmammo.hpp"

};

class cfgMagazines
{
    #include "SMG\smgmagazine.hpp"
    #include "DMR\dmrmagazine.hpp"
    #include "LMG\lmgmagazine.hpp"
    #include "Launcher\launchermagazine.hpp"
    #include "Sniper\snipermagazine.hpp"
    #include "BR\brmagazine.hpp"
    #include "Shotgun\shotgunmagazine.hpp"
    #include "AR\armagazine.hpp"
    #include "sidearm\sidearmmagazine.hpp"

};

class cfgMagazineWells{
	class 73_rockets{
		73_Magazines[] = {
			"73_HEAT",
			"73_HEAP",
			"73_HEAA"
		};
	};
	class 73_ar{
		73_Magazines[] = {
			"73_32Rnd_762x51_Mag",
			"73_32Rnd_762x51_Mag_Tracer",
			"73_32Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
	class 73_ar32rnd_uw{
		73_Magazines[] = {
			"73_32Rnd_762x51_Mag_UW_Tracer",
			"73_32Rnd_762x51_Mag_UW"
		};
	};
	class 73_ar60rnd{
		73_Magazines[] = {
			"73_60Rnd_762x51_Mag",
			"73_60Rnd_762x51_Mag_Tracer",
			"73_60Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
	class 73_LMG{
		73_Magazines[] = {
			"73_200rnd_M247_Mag",
			"73_200rnd_M247_Mag_Tracer",
			"73_200rnd_M247_Mag_Tracer_Yellow",
			"73_100rnd_M247_Mag",
			"73_100rnd_M247_Mag_Tracer",
			"73_100rnd_M247_Mag_Tracer_Yellow"
		};
	};
	class 73_DMR{
		73_Magazines[] = {
			"73_15Rnd_10x40_Mag",
			"73_15Rnd_10x40_Mag_Tracer",
			"73_15Rnd_10x40_Mag_Tracer_Yellow",
			"73_15Rnd_10x40_HVAP_Mag",
			"73_15Rnd_10x40_HVAP_Mag_Tracer",
			"73_15Rnd_10x40_HVAP_Mag_Tracer_Yellow"
		};
	};
	class 73_BR55{
		73_Magazines[] = {
            "73_95x40_36Rnd",
            "73_95x40_36Rnd_T_G",
            "73_95x40_36Rnd_T_R",
            "73_95x40_36Rnd_T_IR"
		};
	};
	class 73_BR55HB{
		73_Magazines[] = {
            "73_36Rnd_95x40_HPSAP_Mag",
            "73_36Rnd_95x40_HPSAP_Mag_Tracer"
		};
	};
	class 73_M6D{
		73_Magazines[] = {
			"73_40Rnd_127x40_Drum_Black_Tracer",
			"73_26Rnd_127x40_Mag_Black_Tracer",
			"73_16Rnd_127x40_Mag_Black_Tracer",
			"73_12Rnd_127x40_Mag_Black_Tracer",
			"73_12Rnd_127x40_Mag_Black_Tracer_Narq"
		};
	};
	class 73_M7_SMG{
		73_Magazines[] = {
			"73_48Rnd_5x23Caseless_FMJ_Mag",
			"73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"73_60Rnd_5x23Caseless_FMJ_Mag",
			"73_60Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"73_48Rnd_5x23Caseless_NARQ_Mag"
		};
	};
	class 73_shotgun{
		73_Magazines[] = {
			"73_6Rnd_8Gauge_Pellets",
			"73_6Rnd_8Gauge_Slugs",
			"73_12Rnd_8Gauge_Pellets",
			"73_12Rnd_8Gauge_Slugs",
			"73_6Rnd_8Gauge_HEDP",
			"73_12Rnd_8Gauge_HEDP"
		};
	};
	class 73_shotgun_Bulldog{
		73_Magazines[] = {
			"73_24Rnd_12Gauge_Pellets",
			"73_24Rnd_12Gauge_Slugs",
			"73_24Rnd_12Gauge_HE",
			"73_24Rnd_12Gauge_Smoke",

		};
	};
	class 73_sidearm{
		73_Magazines[] = {
			"73_12Rnd_10x31_SAP_Mag",
			"73_12Rnd_10x31_SAP_Mag_Tracer",
			"73_12Rnd_10x31_NARQ_Mag",
			"73_12Rnd_10x31_NARQ_Mag_Tracer"
		};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class WeaponSlotsInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CBA_DisposableLaunchers {
    73_M96_LAW_Loaded[] = {"73_M96_LAW","73_M96_LAW_Used"};
};

class CfgWeapons {
	class BaseSoundModeType;
	class Single;
	class FullAuto;


    #include "SMG\smg.hpp"
    #include "DMR\dmr.hpp"
    #include "LMG\lmg.hpp"
    #include "Launcher\launcher.hpp"
    #include "Sniper\sniper.hpp"
    #include "BR\br.hpp"
    #include "Shotgun\shotgun.hpp"
    #include "AR\ar.hpp"
    #include "Sidearm\sidearm.hpp"

    class OPTRE_102R_Turret;
    	class 73_COGV_Support_Rocket: OPTRE_102R_Turret
    	{
    		displayName="COG-V Rocket";
    		descriptionShort="Support Launcher";
    		magazineReloadTime=1;
    		magazines[]=
    		{
    			"OPTRE_M41_Twin_Smoke_B",
    			"OPTRE_M41_Twin_Smoke_G",
    			"OPTRE_M41_Twin_Smoke_O",
    			"OPTRE_M41_Twin_Smoke_P",
    			"OPTRE_M41_Twin_Smoke_R",
    			"OPTRE_M41_Twin_Smoke_W",
    			"OPTRE_M41_Twin_Smoke_Y"
    		};
    	};
    };
};
