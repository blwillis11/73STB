class Turrets;
class MainTurret;

class B_T_MBT_01_mlrs_F;
class STB73_MAP119_Porcupine : B_T_MBT_01_mlrs_F
{
    displayName="[OCLF] MAP119 Porcupine";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Artillery_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    crew = "OCLF_Crewman";
    hiddenSelectionsTextures[] = {
        "\z\73STB\addons\oclf\data\vics\MAP\MBT_01_body_olive_CO.paa",
        "\z\73STB\addons\oclf\data\vics\MAP\MBT_01_MLRS_olive_co.paa",
        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    textureSources[] = 
    {
    };
    class Turrets:Turrets
    {
        class MainTurret:MainTurret
        {
            magazines[] = {
                "STB73_12Rnd_230mm_rockets"
            };
            weapons[] = {
                "STB73_MLRS_230mm_rockets"
            };
        };
    };
};

class B_T_MBT_01_arty_F;
class STB73_MAP118_SPH_Alpaca : B_T_MBT_01_arty_F
{
    displayName="[OCLF] MAP118 SPH Alpaca";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Artillery_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    crew = "OCLF_Crewman";
    hiddenSelectionsTextures[] = {
        "\z\73STB\addons\oclf\data\vics\MAP\MBT_01_body_olive_CO.paa",
        "\z\73STB\addons\oclf\data\vics\MAP\MBT_01_scorcher_olive_co.paa",
        "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    textureSources[] = 
    {
    };
    class Turrets:Turrets
    {
        class MainTurret:MainTurret
        {
            magazines[] = {
                "STB73_12Rnd_105mm_Con",
                "6Rnd_155mm_Mo_smoke"
            };
            weapons[] = {
                "STB73_mortar_155mm_AMOS"
            };
        };
    };
};
