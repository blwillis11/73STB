#include "script_component.hpp"

class CfgPatches {
    class 73STB_Weapons {
        name = COMPONENT_NAME;
		units[] = 
        {
        }; 
        weapons[] = {
            "STB73_BR55HBM1_DMR",
            "STB73_M392_DMR",
            "STB73_M45",
            "STB73_M45E",
            "STB73_M6C",
            "STB73_M6G",
            "STB73_M6G2",
            "STB73_M8_FlareGun",
            "STB73_M6J",
            "STB73_M7_SMG",
			"STB73_LMG_M731",
            "STB73_MA37GL",
            "STB73_MA37",
            "STB73_MA40GL",
            "STB73_MA40",
            "STB73_MA37K",
			"STB73_MA5A",
			"STB73_MA5AGL",
            "STB73_MA5B",
            "STB73_MA5BGL",
			"STB73_MA5C",
			"STB73_MA5CGL",
            "STB73_MA5K",
            "STB73_SRS99AM_Stealth",
            "STB73_M96_LAW",
            "STB73_Fang",
            "STB73_Fang2",
            "STB73_BR55HBM1_CQC",
			"STB73_HMG_M250",
			"STB73_GMG_M247A1"
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

    #include "data\ammo\ammo.hpp"

};

class cfgMagazines
{
    #include "data\ammo\magazines.hpp"

};

class cfgMagazineWells{
	class STB73_rockets{
		STB73_Magazines[] = {
			"STB73_HEAT",
			"STB73_HEAP",
			"STB73_HEAA"
		};
	};
	class STB73_15Rnd_762x51_MagWell{
		STB73_Magazines[] = {
			"STB73_15Rnd_762x51_Mag",
			"STB73_15Rnd_762x51_Mag_Tracer",
			"STB73_15Rnd_762x51_Mag_Tracer_Yellow",
			"STB73_15Rnd_762x51_Mag_Tracer_IR",
			"STB73_15Rnd_762x51_Mag_Dual"
		};
	};
	class STB73_32Rnd_762x51_MagWell{
		STB73_Magazines[] = {
			"STB73_32Rnd_762x51_Mag",
			"STB73_32Rnd_762x51_Mag_Tracer",
			"STB73_32Rnd_762x51_Mag_Tracer_Yellow",
			"STB73_32Rnd_762x51_Mag_Tracer_IR",
			"STB73_32Rnd_762x51_Mag_Dual"
		};
	};
	class STB73_60Rnd_762x51_MagWell{
		STB73_Magazines[] = {
			"STB73_60Rnd_762x51_Mag",
			"STB73_60Rnd_762x51_Mag_Tracer",
			"STB73_60Rnd_762x51_Mag_Tracer_Yellow",
			"STB73_60Rnd_762x51_Mag_Tracer_IR",
			"STB73_60Rnd_762x51_Mag_Dual"
		};
	};
	class STB73_1Rnd_40mm_MagWell{
		STB73_Magazines[] = {
			"STB73_1Rnd_40mm_Shell_Signal_Green",
			"STB73_1Rnd_40mm_Shell_Signal_Red",
			"STB73_1Rnd_40mm_Shell_Signal_White",
			"STB73_1Rnd_40mm_Shell_Signal_Yellow",
			"STB73_1Rnd_40mm_Shell_HE",
			"STB73_1Rnd_40mm_Shell_TD",
			"STB73_1Rnd_40mm_Shell_Smoke_Blue",
			"STB73_1Rnd_40mm_Shell_Smoke_Green",
			"STB73_1Rnd_40mm_Shell_Smoke_Red",
			"STB73_1Rnd_40mm_Shell_Smoke_White",
			"STB73_1Rnd_40mm_Shell_Smoke_Yellow",
			"STB73_1Rnd_40mm_Shell_Smoke_Orange",
			"STB73_1Rnd_40mm_Shell_Smoke_Purple"
		};
	};
	class STB73_100Rnd_762x51_MagWell{
		STB73_Magazines[] = {
			"STB73_100rnd_762x51_Mag",
			"STB73_100rnd_762x51_Mag_Tracer",
			"STB73_100rnd_762x51_Mag_Tracer_Yellow",
			"STB73_100rnd_762x51_Mag_Tracer_IR"
		};
	};
	class STB73_200Rnd_762x51_MagWell{
		STB73_Magazines[] = {
			"STB73_200rnd_762x51_Mag",
			"STB73_200rnd_762x51_Mag_Tracer",
			"STB73_200rnd_762x51_Mag_Tracer_Yellow",
			"STB73_200rnd_762x51_Mag_Tracer_IR"
		};
	};
	class STB73_15Rnd_762x51_DMR_MagWell{
		STB73_Magazines[] = {
			"STB73_15Rnd_762x51_Mag",
			"STB73_15Rnd_762x51_Mag_Tracer",
			"STB73_15Rnd_762x51_Mag_Tracer_Yellow",
			"STB73_15Rnd_762x51_Mag_Tracer_IR",
			"STB73_15Rnd_762x51_HVAP_Mag",
			"STB73_15Rnd_762x51_HVAP_Mag_Tracer",
			"STB73_15Rnd_762x51_HVAP_Mag_Tracer_Yellow",
			"STB73_15Rnd_762x51_HVAP_Mag_Tracer_IR",
			"STB73_15Rnd_762x51_BTHP_Mag",
			"STB73_15Rnd_762x51_BTHP_Mag_Tracer",
			"STB73_15Rnd_762x51_BTHP_Mag_Tracer_Yellow",
			"STB73_15Rnd_762x51_BTHP_Mag_Tracer_IR"
		};
	};
	class STB73_36Rnd_95x40_MagWell{
		STB73_Magazines[] = {
            "STB73_95x40_36Rnd_Mag",
            "STB73_95x40_36Rnd_Mag_Tracer",
            "STB73_95x40_36Rnd_Mag_Tracer_Yellow",
            "STB73_95x40_36Rnd_Mag_Tracer_IR"
		};
	};
	class STB73_48Rnd_5x23Caseless_MagWell{
		STB73_Magazines[] = {
			"STB73_48Rnd_5x23Caseless_FMJ_Mag",
			"STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow",
			"STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer_IR",
			"STB73_48Rnd_5x23Caseless_NARQ_Mag",
			"STB73_48Rnd_5x23Caseless_NARQ_Mag_Tracer",
		};
	};
	class STB73_60Rnd_5x23Caseless_MagWell{
		STB73_Magazines[] = {
			"STB73_60Rnd_5x23Caseless_FMJ_Mag",
			"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow",
			"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer_IR"
		};
	};
	class STB73_1Rnd_12Gauge_MagWell
	{
		STB73_Magazines[] = {
			"STB73_1Rnd_12Gauge_Pellets",
			"STB73_1Rnd_12Gauge_Slugs",
			"STB73_1Rnd_12Gauge_Smoke"
		};
	};
	class STB73_12Rnd_127x30_MagWell{
		STB73_Magazines[] = {
			"STB73_12Rnd_127x30_SAP_Mag",
			"STB73_12Rnd_127x30_SAP_Mag_Tracer",
			"STB73_12Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"STB73_12Rnd_127x30_SAP_Mag_Tracer_IR",
			"STB73_12Rnd_127x30_NARQ_Mag",
			"STB73_12Rnd_127x30_NARQ_Mag_Tracer"
		};
	};
	class STB73_24Rnd_127x30_MagWell{
		STB73_Magazines[] = {
			"STB73_24Rnd_127x30_SAP_Mag",
			"STB73_24Rnd_127x30_SAP_Mag_Tracer",
			"STB73_24Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"STB73_24Rnd_127x30_SAP_Mag_Tracer_IR"
		};
	};
	class STB73_36Rnd_127x30_MagWell{
		STB73_Magazines[] = {
			"STB73_36Rnd_127x30_SAP_Mag",
			"STB73_36Rnd_127x30_SAP_Mag_Tracer",
			"STB73_36Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"STB73_36Rnd_127x30_SAP_Mag_Tracer_IR"
		};
	};
	class STB73_4Rnd_145x114_MagWell{
		STB73_Magazines[] = {
			"STB73_M232_145x114x4_APFSDS",
			"STB73_M232_145x114x4_APFSDS_TG",
			"STB73_M232_145x114x4_APFSDS_TR",
			"STB73_M232_145x114x4_APFSDS_TC",
			"STB73_M232_145x114x4_APFSDS_TIR",
			"STB73_M233_145x114x4_APFSDS",
			"STB73_M233_145x114x4_APFSDS_TG",
			"STB73_M233_145x114x4_APFSDS_TR",
			"STB73_M233_145x114x4_APFSDS_TC",
			"STB73_M233_145x114x4_APFSDS_TIR"
		};
	};
	class STB73_8Rnd_145x114_MagWell{
		STB73_Magazines[] = {
			"STB73_M232_145x114x8_APFSDS",
			"STB73_M232_145x114x8_APFSDS_TG",
			"STB73_M232_145x114x8_APFSDS_TR",
			"STB73_M232_145x114x8_APFSDS_TC",
			"STB73_M232_145x114x8_APFSDS_TIR",
			"STB73_M233_145x114x8_APFSDS",
			"STB73_M233_145x114x8_APFSDS_TG",
			"STB73_M233_145x114x8_APFSDS_TR",
			"STB73_M233_145x114x8_APFSDS_TC",
			"STB73_M233_145x114x8_APFSDS_TIR"
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
