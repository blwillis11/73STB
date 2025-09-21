class CfgPatches 
{ 
    class 73_covie
    { 
        author = "73rd S-4 Team";
		name = "73rd STB Aux";
		units[] = 
        {
			"73_Type26B_Banshee",
			"73_Type26B_Ultra_Banshee",
			"73_Type26N_Banshee",
			"73_Type27_Banshee"
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
			"OPTRE_FC_Vehicles",
			"OPTRE_FC_Units"
        }; 
    }; 
}; 

//Ace Extended

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class 73_Cov
    { 
        displayName = "[73] Covenant";
        priority = 3; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "73_covie\UI\73odst.paa"; //Custom Icon 
    };  
};

class CfgEditorCategories
{
	class 73_Cov // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Covenant"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};

class CfgEditorSubcategories
{
	class 73_CovAir // Category class, you point to it in editorSubcategory property
	{
		displayName = "Air"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};

class CfgVehicles
{
	#include "data\vehicles.hpp"
};

// #include "data\Units\groups.hpp"