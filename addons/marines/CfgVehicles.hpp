class CfgVehicles {
    class STB73_UnitBase;
    class STB73_10MEBBase: STB73_UnitBase
    {
        faction = "STB73_10MEB";
        editorCategory = "STB73_10MEB";
        editorSubcategory = "STB73_Infantry_EdSubCat";
    };
    class STB73_ECH_10MEBBase: STB73_10MEBBase
    {
        faction = "STB73_10MEB";
        editorCategory = "STB73_10MEB";
        editorSubcategory = "STB73_ECH_Infantry_EdSubCat";
    };
    class STB73_Marine_Rifleman_AT: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Rifleman [AT]";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","STB73_MPRL", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","STB73_MPRL", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourPouch","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};
        respawnLinkedItems[] = {"STB73_CEArmourPouch","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_Marine_Marksman: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Marksman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourNSV2","STB73_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmourNSV2","STB73_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};

        magazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_Marine_RTO_Operator: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack_radio";

        weapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_Marine_Medic: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Medic";

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourPouch","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};
        respawnLinkedItems[] = {"STB73_CEArmourPouch","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_Marine_Grenadier: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Grenadier";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"1Rnd_HE_Grenade_shell","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_Marine_Rifleman: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_Marine_Team_Lead: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_Marine_Autorifleman: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};

        magazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_Marine_Sniper: STB73_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_CH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

        magazines[] = {"STB73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_ECH_Marine_Rifleman_AT: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Rifleman [AT]";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","STB73_MPRL", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","STB73_MPRL", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourPouch","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};
        respawnLinkedItems[] = {"STB73_CEArmourPouch","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMUA"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_ECH_Marine_Marksman: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Marksman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M392_DMR","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourNSV2","STB73_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmourNSV2","STB73_CEBoonie","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};

        magazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","STB73_15Rnd_762x51_Mag","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_ECH_Marine_RTO_Operator: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack_radio";

        weapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_ECH_Marine_Medic: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Medic";

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmourPouch","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};
        respawnLinkedItems[] = {"STB73_CEArmourPouch","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMM"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_ECH_Marine_Grenadier: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Grenadier";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5BGL","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"1Rnd_HE_Grenade_shell","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_ECH_Marine_Rifleman: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_ECH_Marine_Team_Lead: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","OPTRE_M6B","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_ECH_Marine_Autorifleman: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Autorifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_LMG_M731","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMUA"};

        magazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","STB73_100rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
    class STB73_ECH_Marine_Sniper: STB73_ECH_10MEBBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Marine Sniper";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland";
        backpack = "MA_MArine_Rucksack";

        weapons[] = {"STB73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_SRS99AM","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};
        respawnLinkedItems[] = {"STB73_CEArmour","STB73_ECH43A_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAMSNI"};

        magazines[] = {"STB73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"STB73_M232_145x114x4_APFSDS","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"ACE_EarPlugs","FirstAidKit"};
        respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
    };
};
