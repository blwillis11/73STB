class O_Soldier_F;
class 73_UNSC_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;
    
    author = "1stLt. B. Salmon";
    side = 1;
    faction = "73_UNSC";
    editorCategory = "73_UNSC_EdCat";
    
    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};

class 73_UNSC_73_ODST_Grenadier: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Grenadier";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Grenadier_backpack";

    weapons[] = {"OPTRE_MA37BGL","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37BGL","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Demo","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Demo","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_3Rnd_Smoke_Grenade_shell","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_3Rnd_Smoke_Grenade_shell","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Rifleman: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Rifleman";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Rifleman_backpack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_AT: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST AT";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_AT_backpack";

    weapons[] = {"OPTRE_MA37B","73_MPRL","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","73_MPRL","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Autorifleman: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Autorifleman";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Autorifleman_backpack";

    weapons[] = {"OPTRE_M73","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M73","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Autorifleman","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Autorifleman","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Sniper: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Sniper";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Sniper_backpack";

    weapons[] = {"73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_K_ARD_Optic_S","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_K_ARD_Optic_S","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Sniper","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Sniper","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73__Crewman: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73]  Crewman";
    
    editorSubcategory = "73_UNSC_Mechanized_EdSubCat";
    
    facewear = "G_Combat";
    
    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_MA_Marine_BDU_Medium_Woodland";
    backpack = "";

    weapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","VES_CH252_WDL_Crew","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","VES_CH252_WDL_Crew","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Marksman: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Marksman";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "G_Tactical_Clear";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Marksman_backpack";

    weapons[] = {"73_MRS10_DMR_muzzle_snds_L_optic_AMS","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"73_MRS10_DMR_muzzle_snds_L_optic_AMS","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Marksman","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Marksman","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
    respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73__Crewman_Officer: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73]  Crewman Officer";
    
    editorSubcategory = "73_UNSC_Mechanized_EdSubCat";
    
    facewear = "G_Combat";
    
    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_MA_Marine_BDU_Light_Woodland";
    backpack = "";

    weapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_UNSC_73_Crewman: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman";
    
    editorSubcategory = "73_UNSC_Aviation_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_19th_H2A_g";
    backpack = "73_UNSC_73_Crewman_backpack";

    weapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"19th_invisible_Vest","OPTRE_FC_VX19_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"19th_invisible_Vest","OPTRE_FC_VX19_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};

class 73_UNSC_73_Crewman_Officer: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman Officer";
    
    editorSubcategory = "73_UNSC_Aviation_EdSubCat";
    
    facewear = "G_Tactical_Clear";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_air_Dress_Uniform";
    backpack = "73_UNSC_73_Crewman_Officer_backpack";

    weapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};

class 73_UNSC_73_ODST_Officer: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Officer";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_ODST_Dress_Uniform";
    backpack = "73_UNSC_73_ODST_Officer_backpack";

    weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
    respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_UNSC_73_ODST_Demo: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Demo";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 1;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Demo_backpack";

    weapons[] = {"MA_M7_SMG","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"MA_M7_SMG","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Demo","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Demo","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Medic: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Medic";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Medic_backpack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Medic","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Medic","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_UNSC_73_ODST_Team_Lead: 73_UNSC_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Team Lead";
    
    editorSubcategory = "73_UNSC_ODST_EdSubCat";
    
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_UNSC_73_uniform";
    backpack = "73_UNSC_73_ODST_Team_Lead_backpack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M56_Standard","73_Odst_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};
