class CfgVehicles {
    class STB73_UnitBase;
    class STB73_PKBase: STB73_UnitBase
    {
        faction = "STB73_PK";
        editorCategory = "STB73_PK";
        editorSubcategory = "STB73_Infantry_EdSubCat";
        side = 2;

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Gray_SlimSleeve";
    };
    class STB73_Peacekeeper_RTO_Operator: STB73_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Peacekeeper RTO Operator";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_RTO_1_ANPRC171_Roll_White";

        weapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_Peacekeeper_Medic: STB73_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Peacekeeper Medic";

        facewear = "";

        attendant = 1;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Medic_1_M43_Medium_Rucksack_Medical_Roll_White";

        weapons[] = {"STB73_M7_SMG","", "Throw", "Put"};
        respawnWeapons[] = {"STB73_M7_SMG","", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_medical","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_medical","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","HandGrenade","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","STB73_48Rnd_5x23Caseless_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};

        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
    class STB73_Peacekeeper_Rifleman: STB73_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Peacekeeper Rifleman";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Rifleman_1_M43_Medium_Rucksack_Roll_White";

        weapons[] = {"STB73_MA5B","","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
    class STB73_Peacekeeper_Team_Lead: STB73_PKBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73] Peacekeeper Team Lead";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        backpack = "STB73_B_Rifleman_1_M43_Medium_Rucksack_Patrol_Roll_White";

        weapons[] = {"STB73_MA5B","","OPTRE_Binoculars", "Throw", "Put"};
        respawnWeapons[] = {"STB73_MA5B","","OPTRE_Binoculars", "Throw", "Put"};

        linkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"TCP_V_M43A_BaseSec_3_White","UNSCAC_Base","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
        respawnMagazines[] = {"STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","STB73_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};

        items[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
        respawnItems[] = {"ACE_EarPlugs","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    };
};
