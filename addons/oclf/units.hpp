class O_Soldier_F;
class OCLF_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;
    
    author = "2ndLt. B. Salmon";
    side = 0;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    
    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = 
    {
        "",1,
        "TCP_G_TacticalGlasses_Red",.5,
        "TCP_G_BalaclavaTacticalGlasses_Black_Red",.5
    };
    allowedHeadgear[] = {""};
    headgearList[] = {""};
};

class OCLF_Rifleman: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Rifleman";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Rifleman_Woodland: OCLF_Rifleman
{
    displayName = "[OCLF] Rifleman (Woodland)";
    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";
};
class OCLF_Rifleman_Arid: OCLF_Rifleman
{
    displayName = "[OCLF] Rifleman (Arid)";
    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";
};
class OCLF_Rifleman_Arctic: OCLF_Rifleman
{
    displayName = "[OCLF] Rifleman (Arctic)";
    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
    backpack = "STB73_B_M43_Medium_Rucksack_White";
    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Arctic","OCLF_H_Helmet_CH43A_Arctic","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
};
class OCLF_Rifleman_Tropic: OCLF_Rifleman
{
    displayName = "[OCLF] Rifleman (Tropic)";
    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";
    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Tropic","OCLF_H_Helmet_CH43A_Tropic","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
};

class OCLF_Rifleman_AT: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Rifleman (AT)";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "STB73_M41_SSR", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "STB73_M41_SSR", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_Twin_HEAT", "STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_Twin_HEAT", "STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};
class OCLF_Rifleman_AA: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Rifleman (AA)";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "STB73_M41_SSR_AA", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "STB73_M41_SSR_AA", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_Twin_HEAA", "STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_Twin_HEAA", "STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Marksman: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Marksman";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_M392_TCP_optic_M43RCO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M392_TCP_optic_M43RCO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Grenadier: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Grenadier";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37GL_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","TCP_1Rnd_40_Shell_HE","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Medic: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Medic";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"STB73_MA37K_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37K_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Autorifleman: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Autorifleman";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"STB73_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Rifleman_BR: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Rifleman (BR)";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"STB73_BR45_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR45_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch",""};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Light_Rifleman: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Rifleman (Light)";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Unarmed: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Unarmed";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"", "Throw", "Put"};
    respawnWeapons[] = {"", "Throw", "Put"};

    linkedItems[] = {"","","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"","","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};
    respawnMagazines[] = {"TCP_M21_Smoke","TCP_M21_Smoke"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Sniper: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Sniper";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"STB73_SRS99_TCP_optic_Oracle_N", "Throw", "Put"};
    respawnWeapons[] = {"STB73_SRS99_TCP_optic_Oracle_N", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};
    respawnMagazines[] = {"STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","STB73_4Rnd_127x99_Mag_APFSDS","TCP_M21_Smoke","TCP_M21_Smoke"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Spotter: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Spotter";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";
    weapons[] = {"STB73_BR45_TCP_optic_M27RCO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR45_TCP_optic_M27RCO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_Light_1_Standard","TCP_H_boonieHat_Folded_Left_Olive","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","TCP_M21_Smoke","TCP_M21_Smoke"};
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_SquadLead: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Squad Leader";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_TeamLead: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Team Leader";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_M43_Medium_Rucksack_Green";

    weapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_MA37_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","STB73_32Rnd_762x51_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_RTO: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] RTO";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "STB73_B_RTO_1_ANPRC171_Olive";

    weapons[] = {"STB73_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};

class OCLF_Officer: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Officer";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
    backpack = "";

    weapons[] = {"STB73_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"OCLF_V_M43A_Light_3_Standard","TCP_H_Beret_Red","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch"};

    magazines[] = {"STB73_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_12Rnd_127x30_SAP_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};
class OCLF_Crewman: OCLF_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[OCLF] Crewman";
    
    editorSubcategory = "OCLF_Infantry_EdSubCat";
    
    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    backpack = "";

    weapons[] = {"STB73_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M7_SMG_TCP_optic_M11VERO", "Throw", "Put"};

    linkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};
    respawnLinkedItems[] = {"OCLF_V_M43A_BaseSec_2_Standard","OCLF_H_Helmet_CH43A_Standard","ItemMap","TFAR_pnr1000a","ItemCompass","ItemWatch","TCP_G_BalaclavaTacticalGlasses_Olive_Red"};

    magazines[] = {"STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};
    respawnMagazines[] = {"STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","TCP_M21_Smoke","TCP_M21_Smoke","TCP_M9I_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","FirstAidKit"};
};