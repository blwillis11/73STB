class OPTRE_M494;
class STB73_M494_Oryx: OPTRE_M494
{
    displayName="[73] M494 Oryx";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Tracks";
                amount = 2;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Oryx";
            Type = "Standard";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_A_CO"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_T_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa""]]",
            };
        };
    };
};

class OPTRE_M493_AIE;
class STB73_M494_Oryx_AIE: OPTRE_M493_AIE
{
    displayName="[73] M494 Oryx (AIE)";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Tracks";
                amount = 2;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "STB73_M494_Oryx_AIE";
            Type = "APC (AIE)";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_armor_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_main_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_turret_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\scorpion_mg_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\Texture\oryx_decal_ca.paa""]]",
            };
        };
    };
};

class OPTRE_M411_APC_UNSC;
class STB73_M411_APC:OPTRE_M411_APC_UNSC
{
    displayName="[73] M411 Bison APC";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0,-6,-3.1};
        magLockReversed = 1; // Rotates the vehicle 180 degrees when mag-locked
        magLockGearInterlock = 1; // Disallows the mag-locked vehicle from being unloaded when gear are down
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "STB73_M411_APC";
            Type = "APC";
            cost = 3;

            priority = 1;
            liveries[]= {
             "[""Standard"",[""OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa""]]",
            };
        };
    };
};
class OPTRE_M412_IFV_UNSC;
class STB73_M412_IFV:OPTRE_M412_IFV_UNSC
{
    displayName="[73] M412 Bison IFV";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "STB73_M412_IFV";
            Type = "IFV";
            cost = 3;

            priority = 1;
            liveries[]= {
             "[""Standard"",[""OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa""]]",
            };
        };
    };
};
class OPTRE_M413_MGS_UNSC;
class STB73_M413_MGS:OPTRE_M413_MGS_UNSC
{
    displayName="[73] M413 Bison MGS";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "STB73_M413_MGS";
            Type = "MGS";
            cost = 3;

            priority = 1;
            liveries[]= {
             "[""Standard"",[""OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa""]]",
            };
        };
    };
};