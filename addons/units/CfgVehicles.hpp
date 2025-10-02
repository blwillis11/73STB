class CfgVehicles {
    class O_Soldier_F;
    class STB73_UnitBase: O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;

        author = "73rd S-4 Team";
        side = 1;
        faction = "STB73_odst";
        editorCategory = "STB73_odst";
        editorSubcategory = "STB73_STB_EdSubCat";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
    };
    class STB73_Aviator: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Aviator Officer";

        editorSubcategory = "STB73_Aviation_EdSubCat";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Black";
        backpack = "";

        weapons[] = {"STB73_MA5k","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5k","OPTRE_Smartfinder", "Throw", "Put"};

        linkedItems[] = {"","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"STB73_60RND_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"STB73_60RND_762x51_Mag_Tracer_Yellow"};

        items[] = {""};
        respawnItems[] = {""};
    };
    class STB73_STB_ODST_Grenadier: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Grenadier";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";
        weapons[] = {"STB73_MA37BGL","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37BGL","OPTRE_Smartfinder", "Throw", "Put"};
        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
        items[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_Rifleman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_MA37B", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37B", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_AT: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST AT";

        facewear = "";
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack_hev";

        weapons[] = {"STB73_MA37B","STB73_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37B","STB73_M41_SSR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_HEAT","STB73_HEAT","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_HEAT","STB73_HEAT","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_Autorifleman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_M247", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M247", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","STB73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Sniper: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_SRS99AM", "Throw", "Put"};
        respawnWeapons[] = {"STB73_SRS99AM", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Marksman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Marksman";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_M392_DMR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
        respawnMagazines[] = {"STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Scout: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Scout";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_M392_DMR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
        respawnMagazines[] = {"STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","STB73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

        items[] = {"ACE_EarPlugs","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light"};
        respawnItems[] = {"ACE_EarPlugs","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light"};
    };

    class STB73_STB_ODST_Officer: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Officer";
        facewear = "";
        
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "STB73_ODST_Dress_Uniform";
        backpack = "STB73_Rucksack_invis";

        weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

        linkedItems[] = {"STB73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"STB73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
        respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

        items[] = {""};
        respawnItems[] = {""};
    };

    class STB73_STB_ODST_Demo: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Demo";
        facewear = "";
        
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 1;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_M7_SMG", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_H_ECH55D_Standard_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer","STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
        respawnMagazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer","STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Medic: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Medic";
        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_MA37B", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37B", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Team_Lead: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Team Lead";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_Rucksack";

        weapons[] = {"STB73_MA37B", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37B", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Squad_Lead: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Battalion ODST Squad Lead";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Urban";
        backpack = "STB73_rucksack";

        weapons[] = {"STB73_MA37B", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA37B", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_Black","STB73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","STB73_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };
};
