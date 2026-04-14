#include "script_component.hpp"

class CfgPatches {
    class STB73_Medical {
        name = COMPONENT_NAME;
		units[] = 
        {
			"STB73_epinephrineItem",
			"STB73_MorphineItem",
			"STB73_BiofoamItem",
			"STB73_MediGelItem",
			"STB73_BiofoamItem_Light",
			"STB73_MediGelItem_Light",
			"STB73_adenosineItem",
			"ACE_tourniquetItem"
        }; 
        weapons[] = {
			"STB73_Morphine",
			"STB73_PolyHemoglobinIV_2000",
			"STB73_PolyHemoglobinIV_1000",
			"STB73_PolyHemoglobinIV_500",
			"STB73_PolyHemoglobinIV_250",
			"STB73_MedKit",
			"STB73_Biofoam",
			"STB73_Medigel",
			"STB73_Biofoam_Light",
			"STB73_Medigel_Light",
			"ACE_tourniquet",
			"STB73_epinephrine",
			"STB73_adenosine",
			"ACE_splint"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"STB73_Main",
			"ace_medical_treatment",
			"kat_pharma"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};


// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"

class ACE_Medical_Treatment
{
	class Morphine;

	class Epinephrine;
	class OPTRE_Biofoam;
	class OPTRE_Medigel;
	class Adenosine;
	class Medication
	{
		painReduce=0;
		hrIncreaseLow[]={0,0};
		hrIncreaseNormal[]={0,0};
		hrIncreaseHigh[]={0,0};
		timeInSystem=120;
		timeTillMaxEffect=30;
		maxDose=4;
		onOverDose="";
		viscosityChange=0;
		class STB73_Morphine: Morphine
		{
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 4;
            dose = 1;
            incompatibleMedication[] = {};
            viscosityChange = -10;
		};
		class STB73_adenosine: Adenosine
		{
            painReduce = 0;
            hrIncreaseLow[] = {-7, -10};
            hrIncreaseNormal[] = {-15, -30};
            hrIncreaseHigh[] = {-15, -35};
            timeInSystem = 120;
            timeTillMaxEffect = 15;
            maxDose = 5;
            dose = 1;
            incompatibleMedication[] = {};
		};
		class STB73_epinephrine: Epinephrine
		{
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 9;
            dose = 1;
            incompatibleMedication[] = {};
		};
		class STB73_MedKit: STB73_Morphine
		{
			painReduce=0;
			hrIncreaseLow[]={0};
			hrIncreaseNormal[]={0};
			hrIncreaseHigh[]={0};
			timeInSystem=0;
			timeTillMaxEffect=120;
			maxDose=12;
			incompatibleMedication[]={};
			viscosityChange=-1;
		};
	};
	class IV
	{
	    class BloodIV;
		class STB73_PolyHemoglobinIV_2000: BloodIV
		{
			volume=2000;
		};
		class STB73_PolyHemoglobinIV_1000: BloodIV
		{
			volume=1000;
		};
		class STB73_PolyHemoglobinIV_500: BloodIV
		{
			volume=500;
		};
		class STB73_PolyHemoglobinIV_250: BloodIV
		{
			volume=250;
		};
		class STB73_MedKit: BloodIV
		{
			volume=2000;
		};
	};
	class Bandaging
	{
		class PackingBandage
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class FieldDressing
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class ElasticBandage
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class QuikClot
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class STB73_Biofoam: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsion: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=3;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
		class FirstAidKit: STB73_Biofoam
		{
		};
		class STB73_Medigel: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsion: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=1.5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
		class STB73_Biofoam_Light: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsion: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=3;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
		class STB73_Medigel_Light: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsion: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=2;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=1.5;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
		class STB73_MedKit: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Avulsion: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionMinor: Avulsion
			{
				effectiveness=20;
			};
			class AvulsionMedium: Avulsion
			{
				effectiveness=20;
			};
			class AvulsionLarge: Avulsion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=20;
			};
			class Crush: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=20;
			};
			class CrushLarge: Crush
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=20;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=20;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=20;
			};
			class punctureWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=20;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=20;
			};
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class BloodIV;
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
//	class ApplyTourniquet;
//	class RemoveTourniquet;
	class BasicBandage;
	class CPR;
	class STB73_holdpressure: CPR
    {
        displayName="Hold Pressure";
        displayNameProgress="Holding Pressure...";
        icon="";
        category="advanced";
        treatmentLocations=0;
        allowedSelections[]=
        {
            "head",
            "body"
        };
        allowSelfTreatment=0;
        medicRequired=0;
        treatmentTime=30;
        condition="[_medic, _patient, _bodyPart] call STB73_fnc_canpressure";
        callbackFailure="STB73_fnc_endpressure";
        callbackSuccess="STB73_fnc_endpressure";
        callbackProgress="[_medic, _patient, _bodyPart] call STB73_fnc_canpressure";
        callbackStart="STB73_fnc_doPressure";
        animationMedicProne="AinvPknlMstpSnonWnonDr_medic0";
        consumeItem=0;
        allowedUnderwater=1;
    };
	class STB73_Morphine: Morphine
	{
		displayName="[73] Take Polypseudomorphine";
		displayNameProgress="Injecting Polypseudomorphine...";
		items[]=
		{
			"STB73_Morphine"
		};
		treatmentTime=1;
	};
	class STB73_adenosine: STB73_Morphine
	{
		displayName="[73] Take Narcolytic Metabolase";
		displayNameProgress="Injecting Narcolytic Metabolase...";
		items[]=
		{
			"STB73_adenosine"
		};
		treatmentTime=1;
	};
	class STB73_epinephrine: STB73_Morphine
	{
		displayName="[73] Take Stim-Pak";
		displayNameProgress="Injecting Stim-Pak...";
		items[]=
		{
			"STB73_epinephrine"
		};
		treatmentTime=1;
	};
	class STB73_PolyHemoglobinIV_2000: BloodIV
	{
		displayName="[73] 2000cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 2000cc...";
		items[]=
		{
			"STB73_PolyHemoglobinIV_2000"
		};
	};
	class STB73_PolyHemoglobinIV_1000: BloodIV
	{
		displayName="[73] 1000cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 1000cc...";
		items[]=
		{
			"STB73_PolyHemoglobinIV_1000"
		};
	};
	class STB73_PolyHemoglobinIV_500: BloodIV
	{
		displayName="[73] 500cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 500cc...";
		items[]=
		{
			"STB73_PolyHemoglobinIV_500"
		};
	};
	class STB73_PolyHemoglobinIV_250: BloodIV
	{
		displayName="[73] 250cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 250cc...";
		items[]=
		{
			"STB73_PolyHemoglobinIV_250"
		};
	};
	class STB73_Medigel: OPTRE_Medigel
	{
		displayName="[73] Apply Corpsman Medigel";
		displayNameProgress="Spreading lots of Medigel...";
		items[]=
		{
			"STB73_Medigel"
		};
		callbackSuccess="STB73_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class STB73_Biofoam: OPTRE_Biofoam
	{
		displayName="[73] Inject Corpsman Biofoam";
		displayNameProgress="Injecting lots of Biofoam...";
		items[]=
		{
			"STB73_Biofoam"
		};
		callbackSuccess="STB73_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class STB73_Medigel_Light: OPTRE_Medigel
	{
		displayName="[73] Apply Light Medigel";
		displayNameProgress="Spreading Medigel...";
		items[]=
		{
			"STB73_Medigel_Light"
		};
		category="bandage";
		callbackSuccess="STB73_fnc_biomed";
	};
	class STB73_Biofoam_Light: OPTRE_Biofoam
	{
		displayName="[73] Inject Light Biofoam";
		displayNameProgress="Injecting Biofoam...";
		items[]=
		{
			"STB73_Biofoam_Light"
		};
		category="bandage";
		callbackSuccess="STB73_fnc_biomed";
	};
	class ApplyTourniquet: BasicBandage
	{
		displayName="[73] Constrict Suit";
		displayNameProgress="Activating suit constriction...";
		icon = "\z\addons\medical_gui\ui\tourniquet.paa";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		items[]=
		{
			"ACE_tourniquet"
		};
		condition= "!([_patient, _bodyPart] call ace_medical_treatment_fnc_hasTourniquetAppliedTo)";
		callbackSuccess="ace_medical_treatment_fnc_tourniquet";
		treatmentTime=3;
		consumeItem=0;
		litter[] = {};
		allowedUnderwater = 1;
	};
	class RemoveTourniquet: ApplyTourniquet
	{
		displayName="[73] Deconstrict Suit";
		displayNameProgress="Loosening suit constriction...";
		items[]={};
		condition = "([_patient, _bodyPart] call ace_medical_treatment_fnc_hasTourniquetAppliedTo)";
		callbackSuccess="ACE_MEDICAL_TREATMENT_fnc_tourniquetRemove";
	};
	class STB73_MedKit: OPTRE_Medigel
	{
		displayName="[73] MedKit";
		displayNameProgress="Applying Medkit....";
		icon="";
		consumeItem=1;
		treatmentTime=10;
		medicRequired=0;
		allowSelfTreatment=0;
		category="advanced";
		items[]=
		{
			"STB73_MedKit"
		};
		callbackStart="";
		callbackSuccess="STB73_fnc_medkit";
	};
	class FirstAidKit: STB73_Biofoam
	{
		displayName="[73] First Aid Kit";
		displayNameProgress="Applying First Aid Kit";
		icon="";
		condition="";
		consumeItem=1;
		treatmentTime=5;
		allowSelfTreatment=1;
		items[]=
		{
			"FirstAidKit"
		};
	};
};
