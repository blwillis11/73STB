#include "script_component.hpp"

class CfgPatches {
    class STB73_Medical {
        name = Q(COMPONENT_NAME);
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
			"kat_pharma",
			"aor_medical_ace",
			"TCP_Compat_ACE_Medical_Damage"
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

class ACE_Medical_Injuries
{
	class damageTypes
	{
		class STB73_plasmaBurn
		{
			class AOR_PlasmaBurn
			{
				weighting[]=
				{
					{0,1}
				};
			};
			class AOR_PlasmaAvulsion
			{
				weighting[]=
				{
					{1.5,1},
					{1.1,0}
				};
			};
			delete Avulsion;
			delete ThermalBurn;
		};
	};
};
class ACE_Medical_Treatment
{
	class Medication
	{
		class Morphine;
		class Epinephrine;
		class Adenosine;
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
		class TCP_ACE_BiomedicalFoam;
		class TCP_ACE_Medigel;
		class STB73_Biofoam: TCP_ACE_BiomedicalFoam
		{};
		class FirstAidKit: STB73_Biofoam
		{};
		class STB73_Medigel: TCP_ACE_Medigel
		{};
		class STB73_Biofoam_Light: STB73_Biofoam
		{};
		class STB73_Medigel_Light: STB73_Medigel
		{};
		class STB73_MedKit: STB73_Biofoam
		{};
	};
};
class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class BloodIV;
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
	class STB73_Medigel: BasicBandage
	{
		displayName="Apply Corpsman Medigel";
		displayNameProgress="Spreading lots of Medigel...";
		items[]=
		{
			"STB73_Medigel"
		};
		callbackSuccess="STB73_fnc_bigBiomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class STB73_Biofoam: BasicBandage
	{
		displayName="Inject Corpsman Biofoam";
		displayNameProgress="Injecting lots of Biofoam...";
		items[]=
		{
			"STB73_Biofoam"
		};
		callbackSuccess="STB73_fnc_bigBiomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class STB73_Medigel_Light: BasicBandage
	{
		displayName="Apply Light Medigel";
		displayNameProgress="Spreading Medigel...";
		items[]=
		{
			"STB73_Medigel_Light"
		};
		category="bandage";
		callbackSuccess="STB73_fnc_biomed";
	};
	class STB73_Biofoam_Light: BasicBandage
	{
		displayName="Inject Light Biofoam";
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
		displayName="Constrict Suit";
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
		displayName="Deconstrict Suit";
		displayNameProgress="Loosening suit constriction...";
		items[]={};
		condition = "([_patient, _bodyPart] call ace_medical_treatment_fnc_hasTourniquetAppliedTo)";
		callbackSuccess="ACE_MEDICAL_TREATMENT_fnc_tourniquetRemove";
	};
	class STB73_MedKit: BasicBandage
	{
		displayName="MedKit";
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
		displayName="First Aid Kit";
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
