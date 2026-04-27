class O_Soldier_F;
class 73_COP_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;
    
    author = "Capt. A. Grayson";
    side = 0;
    faction = "73_COP";
    editorCategory = "73_COP_EdCat";
    
    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};

class 73_COP_Cult_Bomber: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Bomber";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 1;
    canDeactivateMines = 1;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Bomber_backpack";

    weapons[] = {"STB73_M6J_TCP_muzzle_flash_127_01_acc_flashlight_TCP_optic_M81ERO_TCP_bipod_handGuard_M6G","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M6J_TCP_muzzle_flash_127_01_acc_flashlight_TCP_optic_M81ERO_TCP_bipod_handGuard_M6G","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_24Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer"};
    respawnMagazines[] = {"STB73_24Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer","STB73_36Rnd_127x30_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Crewman: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Crewman";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_COP_U_O_T_Soldier_F";
    backpack = "";

    weapons[] = {"STB73_M7_SMG_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M7_SMG_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"V_Chestrig_oli","ReconCloaks_H_MaskingHood_ghex","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"V_Chestrig_oli","ReconCloaks_H_MaskingHood_ghex","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag"};
    respawnMagazines[] = {"STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag","STB73_60Rnd_5x23Caseless_FMJ_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Platoon_Lead: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Platoon Lead";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Platoon_Lead_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Green","TCP_H_Helmet_CH43A_Green","ReconCloaks_NV_Hood_Down_tna","G_CBRN_S10"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Green","TCP_H_Helmet_CH43A_Green","ReconCloaks_NV_Hood_Down_tna","G_CBRN_S10"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Friar_Lead: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Friar Lead";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Friar_Lead_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Black","ReconCloaks_H_Hood_blk","ReconCloaks_NV_Hood_Down_blk","G_CBRN_B_black"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Black","ReconCloaks_H_Hood_blk","ReconCloaks_NV_Hood_Down_blk","G_CBRN_B_black"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_SF_MG: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SF MG";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Cult_SF_MG_backpack";

    weapons[] = {"STB73_HMG_M250_TCP_muzzle_snds_523_02_TCP_optic_M81ERO_Blue","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_HMG_M250_TCP_muzzle_snds_523_02_TCP_optic_M81ERO_Blue","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_2_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_2_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};

    magazines[] = {"OPTRE_50Rnd_127x99_M250_Box","OPTRE_50Rnd_127x99_M250_Box","OPTRE_50Rnd_127x99_M250_Box"};
    respawnMagazines[] = {"OPTRE_50Rnd_127x99_M250_Box","OPTRE_50Rnd_127x99_M250_Box","OPTRE_50Rnd_127x99_M250_Box"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Prophet_Bodyguard: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Prophet Bodyguard";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Arctic";
    backpack = "73_COP_Prophet_Bodyguard_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_White","TCP_H_Helmet_CH43A_White","ReconCloaks_NV_Hood_Down_blk","MK50"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_White","TCP_H_Helmet_CH43A_White","ReconCloaks_NV_Hood_Down_blk","MK50"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Grenadier: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Grenadier";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Grenadier_backpack";

    weapons[] = {"NSWep_BR55HBM1GL_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"NSWep_BR55HBM1GL_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"36Rnd_95x40_br_55","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL"};
    respawnMagazines[] = {"36Rnd_95x40_br_55","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","NSWep_95x40x60_KURTZ_T_C","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL","PHEN_FSPLUS_ChemGrenade_RiotCSGasGrenade_40mm_3GL"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Company_Lead: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Company Lead";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Arid";
    backpack = "73_COP_Cult_Company_Lead_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Brown","TCP_H_Beret_Tan","ReconCloaks_NV_Hood_Down_snd","MK50"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Brown","TCP_H_Beret_Tan","ReconCloaks_NV_Hood_Down_snd","MK50"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Prophet_Lead: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Prophet Lead";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Arctic";
    backpack = "73_COP_Prophet_Lead_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_White","ReconCloaks_H_Hood_blk","G_CBRN_B_black"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_White","ReconCloaks_H_Hood_blk","G_CBRN_B_black"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Sniper: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Sniper";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Sniper_backpack";

    weapons[] = {"STB73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_N_Optic_E","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_N_Optic_E","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_Olive","ReconCloaks_H_SniperHoodSpec_taiga","NSWep_NVG","TCP_G_BalaclavaTacticalGlasses_Green_Red"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_Olive","ReconCloaks_H_SniperHoodSpec_taiga","NSWep_NVG","TCP_G_BalaclavaTacticalGlasses_Green_Red"};

    magazines[] = {"STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC"};
    respawnMagazines[] = {"STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC","STB73_M232_145x114x4_APFSDS_TC"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_SF_TeamLead: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SF TeamLead";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Cult_SF_TeamLead_backpack";

    weapons[] = {"STB73_BR55HBM1_DMR_NSWep_BR55M1_Suppressor_NSWep_BR55_Flashlight_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_DMR_NSWep_BR55M1_Suppressor_NSWep_BR55_Flashlight_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_BaseSec_3_2_Black","TCP_H_Helmet_ECH43A_Black_Red","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};
    respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_2_Black","TCP_H_Helmet_ECH43A_Black_Red","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer_IR"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer_IR"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Rifleman: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Rifleman";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Rifleman_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_SL: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SL";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_U_B_CTRG_Soldier_F";
    backpack = "73_COP_Cult_SL_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_MaskingHood_dazzle_tna","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_MaskingHood_dazzle_tna","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_SF_Rifleman: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SF Rifleman";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Cult_SF_Rifleman_backpack";

    weapons[] = {"STB73_BR55HBM1_DMR_NSWep_BR55M1_Suppressor_NSWep_BR55_Flashlight_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_DMR_NSWep_BR55M1_Suppressor_NSWep_BR55_Flashlight_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_GungnirL_3_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};
    respawnLinkedItems[] = {"TCP_V_M43A_GungnirL_3_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer_IR"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag_Tracer_IR"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_SF_Marksman: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SF Marksman";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Cult_SF_Marksman_backpack";

    weapons[] = {"STB73_M392_DMR_TCP_muzzle_snds_523_02_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_M392_DMR_TCP_muzzle_snds_523_02_TCP_optic_M27RCO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_2_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_2_2_Black","TCP_H_Helmet_ECH43A_Black_Black","OPTRE_NVG_HUL3_Gray","TCP_G_BalaclavaTacticalGlasses_Black_Black"};

    magazines[] = {"STB73_15Rnd_762x51_Mag"};
    respawnMagazines[] = {"STB73_15Rnd_762x51_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_Medic: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Medic";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_Medic_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_ghex","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_ghex","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Cult_MG: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult MG";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Woodland";
    backpack = "73_COP_Cult_MG_backpack";

    weapons[] = {"STB73_GMG_M247A1_TCP_optic_M81ERO", "Throw", "Put"};
    respawnWeapons[] = {"STB73_GMG_M247A1_TCP_optic_M81ERO", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Olive","ReconCloaks_H_Hood_tna","NSWep_NVG","G_CBRN_M04_Hood"};

    magazines[] = {"STB73_200rnd_762x51_Mag_Tracer_Yellow","STB73_200rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[] = {"STB73_200rnd_762x51_Mag_Tracer_Yellow","STB73_200rnd_762x51_Mag_Tracer_Yellow"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_COP_Friar_Bodyguard: 73_COP_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Friar Bodyguard";
    
    editorSubcategory = "73_COP_Men_EdSubCat";
    
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_COP_STB73_U_B_TacShirt_Full_Gloves_Bloused_Kneepads_Black";
    backpack = "73_COP_Friar_Bodyguard_backpack";

    weapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};
    respawnWeapons[] = {"STB73_BR55HBM1_CQC_NSWep_BR55M1_FlashHider_NSWep_BR55_Flashlight_TCP_optic_M81ERO","Knife_kukri", "Throw", "Put"};

    linkedItems[] = {"TCP_V_M43A_Light_3_Black","TCP_H_Helmet_CH43A_Black","ReconCloaks_NV_Hood_Down_blk","G_CBRN_B_black"};
    respawnLinkedItems[] = {"TCP_V_M43A_Light_3_Black","TCP_H_Helmet_CH43A_Black","ReconCloaks_NV_Hood_Down_blk","G_CBRN_B_black"};

    magazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};
    respawnMagazines[] = {"STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag","STB73_95x40_36Rnd_Mag"};

    items[] = {""};
    respawnItems[] = {""};
};
