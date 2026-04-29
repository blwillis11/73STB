class CfgVehicles {
    class B_Soldier_base_F;
    class STB73_UnitBase: B_Soldier_base_F
    {
        scope = 0;
        scopeCurator = 0;

        author = AUTHOR;
        side = 1;
        faction = "STB73_odst";
        editorCategory = "STB73_odst";
        editorSubcategory = "STB73_STB_EdSubCat";
        camouflage = 0.6;

        uniformClass = "STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Urban_SlimSleeve";

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

        uniformClass = "STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black_SlimSleeve";
        backpack = "STB73_B_RTO_1_Black";

        weapons[] = {"STB73_MA5k","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5k","OPTRE_Smartfinder", "Throw", "Put"};

        linkedItems[] = {"STB73_M43A_Aviator_Black","STB73_VX19_Helmet_Base","ItemMap","ItemcTab","ItemRadio","ItemCompass","TCP_Watch"};
        respawnLinkedItems[] = {"STB73_M43A_Aviator_Black","STB73_VX19_Helmet_Base","ItemMap","ItemcTab","ItemRadio","ItemCompass","TCP_Watch"};

        magazines[] = {"STB73_60Rnd_762x51_Mag_Tracer"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag_Tracer"};

        items[] = {""};
        respawnItems[] = {""};
    };
    class STB73_ODST_Light: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Unarmored Light";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "STB73_U_B_TacShirt_QuarterRoll_Unzipped_Urban";
        backpack = "";

        weapons[] = {"","", "Throw", "Put"};
        respawnWeapons[] = {"","", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_Light_Black_Standard","","ItemMap","","ItemRadio","ItemCompass","TCP_Watch"};
        respawnLinkedItems[] = {"STB73_M43D_Light_Black_Standard","","ItemMap","","ItemRadio","ItemCompass","TCP_Watch"};

        magazines[] = {""};
        respawnMagazines[] = {""};

        items[] = {""};
        respawnItems[] = {""};
    };
    class STB73_STB_ODST_Grenadier: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Grenadier";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;
        
        backpack = "STB73_B_Grenadier_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5AGL","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5AGL","OPTRE_Smartfinder", "Throw", "Put"};
        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemAndroid","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemAndroid","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        items[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_Rifleman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Rifleman_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5A", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5A", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_AT: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST AT";

        facewear = "";
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Assaulter_2_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5A","STB73_M41_SSR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5A","STB73_M41_SSR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_HEAT","STB73_HEAT","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_HEAT","STB73_HEAT","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
    };

    class STB73_STB_ODST_Autorifleman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Autorifleman_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_LMG_M731", "Throw", "Put"};
        respawnWeapons[] = {"STB73_LMG_M731", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Sniper: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Sniper_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_SRS99AM_Stealth", "Throw", "Put"};
        respawnWeapons[] = {"STB73_SRS99AM_Stealth", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_M233_145x114x8_APFSDS_TC","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_M233_145x114x8_APFSDS_TC","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Marksman: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Marksman";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Marksman_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_M392_DMR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
        respawnMagazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Scout: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Scout";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Marksman_2_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_M392_DMR", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
        respawnMagazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

        items[] = {"ACE_EarPlugs","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light"};
        respawnItems[] = {"ACE_EarPlugs","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_BiofoamItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light","STB73_MediGelItem_Light"};
    };

    class STB73_STB_ODST_Officer: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Officer";
        facewear = "";
        
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "STB73_ODST_Dress_Uniform";
        backpack = "STB73_Rucksack_invis";

        weapons[] = {"STB73_M6C","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M6C","OPTRE_Smartfinder", "Throw", "Put"};

        linkedItems[] = {"STB73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","TCP_Watch"};
        respawnLinkedItems[] = {"STB73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","TCP_Watch"};

        magazines[] = {"STB73_12Rnd_127x30_SAP_Mag"};
        respawnMagazines[] = {"STB73_12Rnd_127x30_SAP_Mag"};

        items[] = {""};
        respawnItems[] = {""};
    };

    class STB73_STB_ODST_Demo: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Demo";
        facewear = "";
        
        attendant = 0;
        engineer = 0;
        canDeactivateMines = 1;

        backpack = "STB73_B_Engineer_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_M7_SMG", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag"};
        respawnMagazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag","STB73_12Rnd_127x30_SAP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Medic: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Medic";
        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Medic_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5A", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5A", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Team_Lead: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Team Lead";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_NCO_1_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5A", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5A", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };

    class STB73_STB_ODST_Squad_Lead: STB73_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] ODST Squad Lead";
        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_NCO_2_M43_Medium_Rucksack_Black";

        weapons[] = {"STB73_MA5A", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5A", "Throw", "Put"};

        linkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_M43D_ODST_2_Black_Standard","STB73_H_ECH55D_Standard_Blue","ItemMap","ItemRadio","ItemCompass","TCP_Watch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

        items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    };
};
