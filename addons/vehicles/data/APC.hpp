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
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0, -7.2, -1.57105};
        magLockReversed = 1; // Rotates the vehicle 180 degrees when mag-locked
        magLockGearInterlock = 1; // Disallows the mag-locked vehicle from being unloaded when gear are down
    };
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


class DMNS_M511_Springbok_APC;

class STB73_M511_Springbok_APC : DMNS_M511_Springbok_APC
{
    displayName="[73] M511-Springbok Transport";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0, -9, -0.72};
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
            vehicle = "Springbok";
            Type = "APC";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\m511_m247h_co.paa""]]",
            };
        };
    };
};

class DMNS_M511_Springbok_IFV;
class STB73_M511_Springbok_IFV : DMNS_M511_Springbok_IFV
{
    displayName="[73] M511-Springbok IFV";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0, -9, -0.85};
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
            vehicle = "Springbok";
            Type = "IFV";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_ifv_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_aa_co.paa""]]",
            };
        };
    };
};
class DMNS_M511_Springbok_MGS;
class STB73_M511_Springbok_MGS : DMNS_M511_Springbok_MGS
{
    displayName="[73] M511-Springbok MGS";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0, -9, -0.85};
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
            vehicle = "Springbok";
            Type = "MGS";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_mgs_co.paa""]]",
            };
        };
    };
};
class DMNS_M511_Springbok_AA;
class STB73_M511_Springbok_AA : DMNS_M511_Springbok_AA
{
    displayName="[73] M511-Springbok AA";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_STB_ODST_Rifleman";
    class TCP_Compat_OPTRE
    {
        magLockOffset[] = {0, -9, -0.85};
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
            vehicle = "Springbok";
            Type = "AA";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_aa_co.paa""]]",
            };
        };
    };
};

