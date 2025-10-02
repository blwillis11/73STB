#include "script_component.hpp"

class CfgPatches {
    class 73STB_Weapons {
        name = COMPONENT_NAME;
		units[] = 
        {
        }; 
        weapons[] = {
            "STB73_BR55HBM1_DMR",
            "STB73_M247",
            "STB73_M392_DMR",
            "STB73_M395_DMR",
            "STB73_M395S_DMR",
            "STB73_M45",
            "STB73_M45A",
            "STB73_M45ATAC",
            "STB73_M45TAC",
            "STB73_M45E",
            "STB73_M6DS_Carbine_Foregrip",
            "STB73_M7_SMG",
            "STB73_M7_SMG_salmon",
            "STB73_M90A",
            "STB73_MA37BGL",
            "STB73_MA37B",
            "STB73_MA37K",
            "STB73_MA5B",
            "STB73_MA5BGL",
            "STB73_MA5K",
            "STB73_SRS99AM",
            "STB73_SRS99AM_Stealth",
            "STB73_M96_LAW",
            "STB73_Fang",
            "STB73_Fang2",
            "STB73_BR55HBM1_CQC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"19_UNSC_Weapons",
            "OPTRE_FunctionsLibrary",
			"OPTRE_Weapons",
			"ACE_Javelin",
			"ace_missileguidance",
            "NSWep_Weapons",
            "CBA_Main",
            "73STB_Main"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "data\XtdGearModels.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

class ace_missileguidance_type_Sidewinder;
class STB73_ace_missileguidance_type_M41_AA: ace_missileguidance_type_Sidewinder
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

    #include "data\SMG\smgammo.hpp"
    #include "data\DMR\dmrammo.hpp"
    #include "data\LMG\lmgammo.hpp"
    #include "data\Launcher\launcherammo.hpp"
    #include "data\Sniper\sniperammo.hpp"
    #include "data\BR\brammo.hpp"
    #include "data\Shotgun\shotgunammo.hpp"
    #include "data\AR\arammo.hpp"
    #include "data\sidearm\sidearmammo.hpp"

};

class cfgMagazines
{
    #include "data\SMG\smgmagazine.hpp"
    #include "data\DMR\dmrmagazine.hpp"
    #include "data\LMG\lmgmagazine.hpp"
    #include "data\Launcher\launchermagazine.hpp"
    #include "data\Sniper\snipermagazine.hpp"
    #include "data\BR\brmagazine.hpp"
    #include "data\Shotgun\shotgunmagazine.hpp"
    #include "data\AR\armagazine.hpp"
    #include "data\sidearm\sidearmmagazine.hpp"

};

class cfgMagazineWells{
	class STB73_rockets{
		STB73_Magazines[] = {
			"STB73_HEAT",
			"STB73_HEAP",
			"STB73_HEAA"
		};
	};
	class STB73_ar{
		STB73_Magazines[] = {
			"STB73_32Rnd_762x51_Mag",
			"STB73_32Rnd_762x51_Mag_Tracer",
			"STB73_32Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
	class STB73_ar32rnd_uw{
		STB73_Magazines[] = {
			"STB73_32Rnd_762x51_Mag_UW_Tracer",
			"STB73_32Rnd_762x51_Mag_UW"
		};
	};
	class STB73_ar60rnd{
		STB73_Magazines[] = {
			"STB73_60Rnd_762x51_Mag",
			"STB73_60Rnd_762x51_Mag_Tracer",
			"STB73_60Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
	class STB73_LMG{
		STB73_Magazines[] = {
			"STB73_200rnd_M247_Mag",
			"STB73_200rnd_M247_Mag_Tracer",
			"STB73_200rnd_M247_Mag_Tracer_Yellow",
			"STB73_100rnd_M247_Mag",
			"STB73_100rnd_M247_Mag_Tracer",
			"STB73_100rnd_M247_Mag_Tracer_Yellow"
		};
	};
	class STB73_DMR{
		STB73_Magazines[] = {
			"STB73_15Rnd_10x40_Mag",
			"STB73_15Rnd_10x40_Mag_Tracer",
			"STB73_15Rnd_10x40_Mag_Tracer_Yellow",
			"STB73_15Rnd_10x40_HVAP_Mag",
			"STB73_15Rnd_10x40_HVAP_Mag_Tracer",
			"STB73_15Rnd_10x40_HVAP_Mag_Tracer_Yellow"
		};
	};
	class STB73_BR55{
		STB73_Magazines[] = {
            "STB73_95x40_36Rnd",
            "STB73_95x40_36Rnd_T_G",
            "STB73_95x40_36Rnd_T_R",
            "STB73_95x40_36Rnd_T_IR"
		};
	};
	class STB73_BR55HB{
		STB73_Magazines[] = {
            "STB73_36Rnd_95x40_HPSAP_Mag",
            "STB73_36Rnd_95x40_HPSAP_Mag_Tracer"
		};
	};
	class STB73_M6D{
		STB73_Magazines[] = {
			"STB73_40Rnd_127x40_Drum_Black_Tracer",
			"STB73_26Rnd_127x40_Mag_Black_Tracer",
			"STB73_16Rnd_127x40_Mag_Black_Tracer",
			"STB73_12Rnd_127x40_Mag_Black_Tracer",
			"STB73_12Rnd_127x40_Mag_Black_Tracer_Narq"
		};
	};
	class STB73_M7_SMG{
		STB73_Magazines[] = {
			"STB73_48Rnd_5x23Caseless_FMJ_Mag",
			"STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"STB73_60Rnd_5x23Caseless_FMJ_Mag",
			"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"STB73_48Rnd_5x23Caseless_NARQ_Mag"
		};
	};
	class STB73_shotgun{
		STB73_Magazines[] = {
			"STB73_6Rnd_8Gauge_Pellets",
			"STB73_6Rnd_8Gauge_Slugs",
			"STB73_12Rnd_8Gauge_Pellets",
			"STB73_12Rnd_8Gauge_Slugs",
			"STB73_6Rnd_8Gauge_HEDP",
			"STB73_12Rnd_8Gauge_HEDP"
		};
	};
	class STB73_shotgun_Bulldog{
		STB73_Magazines[] = {
			"STB73_24Rnd_12Gauge_Pellets",
			"STB73_24Rnd_12Gauge_Slugs",
			"STB73_24Rnd_12Gauge_HE",
			"STB73_24Rnd_12Gauge_Smoke",

		};
	};
	class STB73_sidearm{
		STB73_Magazines[] = {
			"STB73_12Rnd_10x31_SAP_Mag",
			"STB73_12Rnd_10x31_SAP_Mag_Tracer",
			"STB73_12Rnd_10x31_NARQ_Mag",
			"STB73_12Rnd_10x31_NARQ_Mag_Tracer"
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
    STB73_M96_LAW_Loaded[] = {"STB73_M96_LAW","STB73_M96_LAW_Used"};
};


class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadHVAP1="GestureReloadHVAP1";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class NoActions: ManActions
		{
			GestureReloadHVAP1[]=
			{
				"GestureReloadHVAP1",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadHVAP1: Default
		{
			file="z\73STB\addons\weapons\anims\hvap1reload.rtm";
			looped=0;
			speed=0.28;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			LeftHandIKCurve[]={0.0015625,0.25, 0.15,0, 0.95,0, 1,1};
			RightHandIKCurve[]={1,1, 0.05,0, 0.95,0, 1,1};
		};
	};
};