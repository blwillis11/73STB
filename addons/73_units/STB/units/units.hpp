class O_Soldier_F;
class 73_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;

    author = "73rd S-4 Team";
    side = 1;
    faction = "73_odst";
    editorCategory = "73_odst";
    editorSubcategory = "73_STB_EdSubCat";

    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};

class 73_Crewman: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman";

    editorSubcategory = "73_Mechanized_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_Mech_BDU_Medium_Woodland_NC";
    backpack = "";

    weapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"73_Mech_Pouches_Engineer_Medium_B","73_CH252_Mech_Crew_Base","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_Mech_Pouches_Engineer_Medium_B","73_CH252_Mech_Crew_Base","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_Crewman_Officer: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman Officer";

    editorSubcategory = "73_Mechanized_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_Mech_BDU_Light_Woodland";
    backpack = "";

    weapons[] = {"73_M7_SMG", "Throw", "Put"};
    respawnWeapons[] = {"73_M7_SMG", "Throw", "Put"};

    linkedItems[] = {"73_Mech_Pouches_Engineer_Medium_B","73_CH252_Mech_Crew_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_Mech_Pouches_Engineer_Medium_B","73_CH252_Mech_Crew_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_Aviator_Officer: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Aviator Officer";

    editorSubcategory = "73_Aviation_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_air_Dress_Uniform";
    backpack = "73_Rucksack_invis";

    weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
    respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_Aviator: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Aviator";

    editorSubcategory = "73_Aviation_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_H2A_g";
    backpack = "73_Rucksack_invis";

    weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
    respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};
class 73_STB_ODST_Grenadier: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Grenadier";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";
    weapons[] = {"OPTRE_MA37BGL","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37BGL","OPTRE_Smartfinder", "Throw", "Put"};
    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Demo","73_CH252D_Helmet_STB_Standard","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Demo","73_CH252D_Helmet_STB_Standard","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
    items[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_STB_ODST_Rifleman: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Rifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_STB_ODST_AT: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST AT";

    facewear = "";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack_hev";

    weapons[] = {"OPTRE_MA37B","73_M41_SSR", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","73_M41_SSR", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_STB_ODST_Autorifleman: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Autorifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_M247", "Throw", "Put"};
    respawnWeapons[] = {"73_M247", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Autorifleman","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Autorifleman","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_200rnd_M247_Mag","73_200rnd_M247_Mag","73_200rnd_M247_Mag","73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_200rnd_M247_Mag","73_200rnd_M247_Mag","73_200rnd_M247_Mag","73_200rnd_M247_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Sniper: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Sniper";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_SRS99AM", "Throw", "Put"};
    respawnWeapons[] = {"73_SRS99AM", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Sniper","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Sniper","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Marksman: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Marksman";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_M392_DMR", "Throw", "Put"};
    respawnWeapons[] = {"73_M392_DMR", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Marksman","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Marksman","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
    respawnMagazines[] = {"73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Scout: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Scout";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_M392_DMR", "Throw", "Put"};
    respawnWeapons[] = {"73_M392_DMR", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Scout","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Scout","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
    respawnMagazines[] = {"73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","73_15Rnd_10x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

    items[] = {"ACE_EarPlugs","73_BiofoamItem_Light","73_BiofoamItem_Light","73_BiofoamItem_Light","73_BiofoamItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light"};
    respawnItems[] = {"ACE_EarPlugs","73_BiofoamItem_Light","73_BiofoamItem_Light","73_BiofoamItem_Light","73_BiofoamItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light","73_MediGelItem_Light"};
};

class 73_STB_ODST_Officer: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Officer";
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_ODST_Dress_Uniform";
    backpack = "73_Rucksack_invis";

    weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
    respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_STB_ODST_Demo: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Demo";
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 1;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"MA_M7_SMG", "Throw", "Put"};
    respawnWeapons[] = {"MA_M7_SMG", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Demo","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Demo","73_CH252D_Helmet_STB_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Medic: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Medic";
    facewear = "";

    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_SORC_SORC","73_CH252D_Helmet_STB_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_SORC_SORC","73_CH252D_Helmet_STB_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Team_Lead: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Team Lead";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_STB_ODST_Squad_Lead: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Battalion ODST Squad Lead";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_rucksack";

    weapons[] = {"OPTRE_MA37B", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_Batt_Standard_Basic","73_CH252D_Helmet_STB_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};