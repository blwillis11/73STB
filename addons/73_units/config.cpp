class CfgPatches
{ 
    class 73_units
    { 
        author = "73rd S-4 Team";
		name = "73rd STB Aux";
		units[] = 
        {
			"73_STB_ODST_Rifleman",
			"73_STB_ODST_Autorifleman",
			"73_STB_ODST_Grenadier",
			"73_STB_ODST_Demo",
			"73_STB_ODST_Medic",
			"73_STB_ODST_Sniper",
			"73_STB_ODST_Marksman",
			"73_STB_ODST_Officer",
			"73_STB_ODST_AT",
			"73_STB_ODST_Scout",
			"73_STB_ODST_Team_Lead",
			"73_STB_ODST_Squad_Lead",
			"73_Crewman",
			"73_Crewman_Officer",
			"73_Aviator",
			"73_Aviator_Officer"
        };
        weapons[] = 
        {
        };
		vehicles[] =
		{

		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        {		
			"OPTRE_UNSC_Units",
			"MA_Armor",
			"OPTRE_FC_Units"
        };
    };
};

//Ace Extended
#include "data\XtdGear\XtdGearModels.hpp"

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class 73_STB
    { 
        displayName = "[73] Shock Trooper Battalion Assets";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "73_units\UI\73odstSTB.paa"; //Custom Icon
    };
    class 73_odst
    {
        displayName = "[73] Shock Trooper Battalion ODST";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "73_units\UI\73odstSTB.paa"; //Custom Icon
    };
    class 73_10MEB
    {
        displayName = "[73] 10th Marine Expeditionary Forces";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "73_units\UI\10thMEBLogo.paa"; //Custom Icon
    };
};
class CfgEditorCategories
{
	class 73_STB // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Shock Trooper Battalion Assets"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
	class 73_odst // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Shock Trooper Battalion ODST"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
	class 73_10MEB // Category class, you point to it in editorCategory property
	{
		displayName = "[73] 10th Marine Expeditionary Forces"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
    class 73_Objects
    {
        displayName = "[73] Objects";
    };
};

class CfgEditorSubcategories
{
    class 73_APCs_EdSubCat
    {
        displayName = "APCs";
    };
    class 73_Crates
    {
        displayName = "Crates";
        vehicleClass = "73_Objects";
    };
    class 73_Cars_EdSubCat
    {
        displayName = "Cars";
    };
    class 73_Helicopters_EdSubCat
    {
        displayName = "Helicopters";
    };
    class 73_Aviation_EdSubCat
    {
        displayName = "Aviation";
    };
    class 73_Planes_EdSubCat
    {
        displayName = "Planes";
    };
    class 73_Mechanized_EdSubCat
    {
        displayName = "Mechanized";
    };
    class 73_STB_EdSubCat
    {
        displayName = "Troopers [Batt]";
    };
    class 73_Infantry_EdSubCat
    {
        displayName = "Infantry";
    };
    class 73_Tanks_EdSubCat
    {
        displayName = "Tanks";
    };
    class 73_Artillery_EdSubCat
    {
        displayName = "Artillery";
    };
	class supply_pods // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Pods"; // Name visible in the list
	};
	class 73_Utility_EdSubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "Utility"; // Name visible in the list
	};
};
class CfgUnitInsignia
{
	 class 73_Insignia
     {
         displayName = "73rd STB"; // Name displayed in Arsenal
         author = "Salmon"; // Author displayed in Arsenal
         texture = "73_units\UI\73odst.paa"; // Image path
     };
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
};
class ItemInfo;
class UniformItem;
class VestItem;
class HeadgearItem;
class HitpointsProtectionInfo;

class CfgWeapons 
{
	class Uniform_Base;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class H_Beret_02;
	class CH252D_Helmet;
    class CH252D_Helmet_dp;
    class VES_CH252_WDL_Crew;
    class OPTRE_FC_VX19_Helmet;

//ODST Uniform
	#include "data\ODST\ODSTUniforms.hpp"
	#include "data\Aviation\AviationUniforms.hpp"
	#include "data\Mechanized\MechUniforms.hpp"
//Dress Gear
	#include "data\Dress Gear\DressUniforms.hpp"

//ODST Vest
	#include "data\ODST\ODSTM52Vest.hpp"
	#include "data\ODST\ODSTM52VestCus.hpp"

//Aviation Vest
    #include "data\Aviation\AviationVest.hpp"

//Aviation Vest
    #include "data\Mechanized\MechVest.hpp"


//Infantry helmets
	#include "data\ODST\ODSTCH252DSTBHelmet.hpp"
	#include "data\ODST\ODSTCH252DCusHelmet.hpp"
//Mechanized Helmets
	#include "data\Mechanized\MechHelmet.hpp"
//Aviation Helmets
    #include "data\Aviation\AviationHelmets.hpp"
};
class CfgVehicles
{
	class MA_M56S_BDU_Base;
	class MA_M56S_Rucksack;
	class MA_M52D_Rucksack;
	class MA_M56S_Rucksack_Medic;
	class MA_M56S_Rucksack_ODST_Radio;
	class weapons_f;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class ItemInfo;
	class UniformItem;

//Dress Uniform
	#include "data\Dress Gear\DressUniformsVeh.hpp"
//ODST Uniform
	#include "data\ODST\ODSTUniformsVeh.hpp"
//Aviation Uniform
    #include "data\Aviation\AviationUniformsVeh.hpp"
//Mechanized Uniform
    #include "data\Mechanized\MechUniformsVeh.hpp"

//ODST Backpack
	#include "data\ODST\ODSTBackpack.hpp"

    #include "STB\units\units.hpp"
};

class CfgGroups
{
    class WEST
    {
        #include "STB\groups\groups.hpp"
    }

};