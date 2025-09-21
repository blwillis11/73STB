class CfgPatches
{
	class 73_patch_ace_medical
	{
		author="73rd S-4 Team";
		addonRootClass="73_misc";
		requiredAddons[]=
		{
			"73_misc",
			"ace_medical_treatment",
			"kat_pharma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"73_epinephrineItem",
			"73_MorphineItem",
			"73_BiofoamItem",
			"73_MediGelItem",
			"73_BiofoamItem_Light",
			"73_MediGelItem_Light",
			"73_adenosineItem",
			"ACE_tourniquetItem"
		};
		weapons[]=
		{
			"73_Morphine",
			"73_PolyHemoglobinIV_2000",
			"73_PolyHemoglobinIV_1000",
			"73_PolyHemoglobinIV_500",
			"73_PolyHemoglobinIV_250",
			"73_MedKit",
			"73_Biofoam",
			"73_Medigel",
			"73_Biofoam_Light",
			"73_Medigel_Light",
			"ACE_tourniquet",
			"73_epinephrine",
			"73_adenosine",
			"ACE_splint"
		};
	};
};
class CfgFunctions
{
    class overwrite_medicalTreatment {
        tag = "ace_medical_treatment";
        class ace_medical_treatment{
            class tourniquetRemove
            {
                file="73_misc\functions\fn_tourniquetRemove.sqf";
            };
        };
    };
    class STB73
    {
        class Medical
        {
            file="73_misc\functions";
            class endPressure
            {
            };
            class canPressure
            {
            };
            class doPressure
            {
            };
            class biomed
            {
            };
            class medkit
            {
            };
        };

    };
};
class CfgWeapons
{
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;

	class ACE_splint: ACE_ItemCore
    {
        displayName="[73] Bone-Knitting Polymer";
    };
	class 73_Morphine: ACE_Morphine
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Polypseudomorphine";
		picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model="\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort="A sedative that numbs pain in very small doses.";
		descriptionUse="Injection eases the pain of the patient.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class ACE_adenosine;
	class 73_adenosine: ACE_adenosine
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Narcolytic Metabolase";
		descriptionShort="Consumes analgesic agents in the patient.";
		descriptionUse="Injection will help wake someone up.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class ACE_bloodIV;
	class 73_PolyHemoglobinIV_2000: ACE_bloodIV
    {
        scope=2;
        displayName="[73] 2000cc Polymerized Hemoglobin";
        descriptionShort="2000cc of Poly-Hemo";
        descriptionUse="Gives Poly-Hemo (2000cc)";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=12;
        };
    };
	class 73_PolyHemoglobinIV_1000: ACE_bloodIV
	{
		scope=2;
		displayName="[73] 1000cc Polymerized Hemoglobin";
		descriptionShort="1000cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (1000cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=6;
		};
	};
	class ACE_bloodIV_500;
	class 73_PolyHemoglobinIV_500: ACE_bloodIV_500
	{
		scope=2;
		displayName="[73] 500cc Polymerized Hemoglobin";
		descriptionShort="500cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (500cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class ACE_bloodIV_250;
	class 73_PolyHemoglobinIV_250: ACE_bloodIV_250
	{
		scope=2;
		displayName="[73] 250cc Polymerized Hemoglobin";
		descriptionShort="250cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (250cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1.5;
		};
	};
	class OPTRE_Biofoam;
	class 73_MedKit: OPTRE_Biofoam
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Medkit";
		picture="\OPTRE_weapons\items\icons\medkit.paa";
		model="\OPTRE_Weapons\items\MedKit.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=32;
		};
	};
	class 73_Biofoam: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class OPTRE_Medigel;
	class 73_Medigel: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Optican Medigel";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class 73_Biofoam_Light: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Light Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class 73_Medigel_Light: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Light Optican Medigel";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_tourniquet: ACE_ItemCore
	{
		scope=2;
		displayName="[73] Suit Constriction System";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0;
		};
	};
	class ACE_epinephrine;
    class 73_epinephrine: ACE_epinephrine
    {
        author="73rd S-4 Team";
        displayName="[73] Stim-Pak";
        descriptionShort="A Strong stimulant.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=0.1;
        };
    };
};
class CfgVehicles
{
	class ACE_morphineItem;
	class OPTRE_BiofoamItem;
	class OPTRE_MediGelItem;
	class ACE_epinephrineItem;
	class ACE_adenosineItem;

	class 73_MorphineItem: ACE_morphineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Polypseudomorphine";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Morphine
			{
				name="73_Morphine";
				count=1;
			};
		};
		mass=1;
	};
	class 73_adenosineItem: ACE_adenosineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Narcolytic Metabolase";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_adenosine
			{
				name="73_adenosine";
				count=1;
			};
		};
		mass=1;
	};
	class 73_BiofoamItem: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Biofoam
			{
				name="73_Biofoam";
				count=1;
			};
		};
		mass=35;
	};
	class 73_MediGelItem: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Medigel
			{
				name="73_Medigel";
				count=1;
			};
		};
		mass=35;
	};
	class 73_BiofoamItem_Light: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Biofoam_Light
			{
				name="73_Biofoam_Light";
				count=1;
			};
		};
		mass=2;
	};
	class 73_MediGelItem_Light: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Medigel_Light
			{
				name="73_Medigel_Light";
				count=1;
			};
		};
		mass=2;
	};
	class Item_Base_F;
	class ACE_tourniquetItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Suit Constriction System";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=1;
			};
		};
		mass=0;
	};
	class 73_epinephrineItem: ACE_epinephrineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Stim-Pak";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_epinephrine
			{
				name="73_epinephrine";
				count=1;
			};
		};
		mass=1;
	};
};
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
		class 73_Morphine: Morphine
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
		class 73_adenosine: Adenosine
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
		class 73_epinephrine: Epinephrine
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
		class 73_MedKit: 73_Morphine
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
		class 73_PolyHemoglobinIV_2000: BloodIV
		{
			volume=2000;
		};
		class 73_PolyHemoglobinIV_1000: BloodIV
		{
			volume=1000;
		};
		class 73_PolyHemoglobinIV_500: BloodIV
		{
			volume=500;
		};
		class 73_PolyHemoglobinIV_250: BloodIV
		{
			volume=250;
		};
		class 73_MedKit: BloodIV
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
		class 73_Biofoam: OPTRE_Biofoam
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
		class FirstAidKit: 73_Biofoam
		{
		};
		class 73_Medigel: OPTRE_Medigel
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
		class 73_Biofoam_Light: OPTRE_Biofoam
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
		class 73_Medigel_Light: OPTRE_Medigel
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
		class 73_MedKit: OPTRE_Biofoam
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
	class Adenosine;
	class BloodIV;
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
//	class ApplyTourniquet;
//	class RemoveTourniquet;
	class BasicBandage;
	class Adrenaline;
	class CPR;
	class 73_holdpressure: CPR
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
	class 73_Morphine: Morphine
	{
		displayName="[73] Take Polypseudomorphine";
		displayNameProgress="Injecting Polypseudomorphine...";
		items[]=
		{
			"73_Morphine"
		};
		treatmentTime=1;
	};
	class 73_adenosine: 73_Morphine
	{
		displayName="[73] Take Narcolytic Metabolase";
		displayNameProgress="Injecting Narcolytic Metabolase...";
		items[]=
		{
			"73_adenosine"
		};
		treatmentTime=1;
	};
	class 73_epinephrine: 73_Morphine
	{
		displayName="[73] Take Stim-Pak";
		displayNameProgress="Injecting Stim-Pak...";
		items[]=
		{
			"73_epinephrine"
		};
		treatmentTime=1;
	};
	class 73_PolyHemoglobinIV_2000: BloodIV
	{
		displayName="[73] 2000cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 2000cc...";
		items[]=
		{
			"73_PolyHemoglobinIV_2000"
		};
	};
	class 73_PolyHemoglobinIV_1000: BloodIV
	{
		displayName="[73] 1000cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 1000cc...";
		items[]=
		{
			"73_PolyHemoglobinIV_1000"
		};
	};
	class 73_PolyHemoglobinIV_500: BloodIV
	{
		displayName="[73] 500cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 500cc...";
		items[]=
		{
			"73_PolyHemoglobinIV_500"
		};
	};
	class 73_PolyHemoglobinIV_250: BloodIV
	{
		displayName="[73] 250cc Polymerized Hemoglobin";
		displayNameProgress="Pushing 250cc...";
		items[]=
		{
			"73_PolyHemoglobinIV_250"
		};
	};
	class 73_Medigel: OPTRE_Medigel
	{
		displayName="[73] Apply Corpsman Medigel";
		displayNameProgress="Spreading lots of Medigel...";
		items[]=
		{
			"73_Medigel"
		};
		callbackSuccess="STB73_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class 73_Biofoam: OPTRE_Biofoam
	{
		displayName="[73] Inject Corpsman Biofoam";
		displayNameProgress="Injecting lots of Biofoam...";
		items[]=
		{
			"73_Biofoam"
		};
		callbackSuccess="STB73_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class 73_Medigel_Light: OPTRE_Medigel
	{
		displayName="[73] Apply Medigel";
		displayNameProgress="Spreading Medigel...";
		items[]=
		{
			"73_Medigel_Light"
		};
		category="bandage";
		callbackSuccess="STB73_fnc_biomed";
	};
	class 73_Biofoam_Light: OPTRE_Biofoam
	{
		displayName="[73] Inject Biofoam";
		displayNameProgress="Injecting Biofoam...";
		items[]=
		{
			"73_Biofoam_Light"
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
	class 73_MedKit: OPTRE_Medigel
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
			"73_MedKit"
		};
		callbackStart="";
		callbackSuccess="STB73_fnc_medkit";
	};
	class FirstAidKit: 73_Biofoam
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