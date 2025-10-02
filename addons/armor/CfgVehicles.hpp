class CfgVehicles
{
    class ContainerSupply;
    class STB73_vest_supply: ContainerSupply
    {
        maximumLoad = VEST_MAXLOAD;
    };

    class MA_M52D_Rucksack;
    class STB73_Rucksack: MA_M52D_Rucksack
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack";
        scope= 2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\backpack\Backpack_CO.paa",
            "z\73STB\addons\armor\data\backpack\Straps_co.paa"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Standard";
        };
        maximumLoad = 250;
    };
    class STB73_Rucksack_med: MA_M52D_Rucksack
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Medic]";
        scope= 2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\backpack\Backpack_CO.paa",
            "z\73STB\addons\armor\data\backpack\Straps_co.paa"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Medic";
        };
        maximumLoad = 300;
    };
    class STB73_Rucksack_hev: MA_M52D_Rucksack
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Heavy]";
        scope= 2;
        scopeArsenal=2;
        maximumLoad = 300;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\backpack\Backpack_CO.paa",
            "z\73STB\addons\armor\data\backpack\Straps_co.paa"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Heavy";
        };
    };

    class 19thANPRC419;
    class STB73_ANPRC_rto: 19thANPRC419
    {
        displayName = "[73] AN/PRC-419 [RTO]";
        author="73rd S-4 Team";
        scope=2;
        scopeArsenal=2;
        maximumLoad = 250;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "AN/PRC RTO";
        };
    };

    class STB73_Rucksack_rto: MA_M52D_Rucksack
    {
        displayName = "[73] ODST Rucksack [RTO]";
        author="73rd S-4 Team";
        scope=2;
        scopeArsenal=2;
        maximumLoad = 250;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\backpack\Backpack_CO.paa",
            "z\73STB\addons\armor\data\backpack\Straps_co.paa"
        };
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "RTO";
        };
    };
    class STB73_Rucksack_heavy_rto: MA_M52D_Rucksack
    {
        displayName = "[73] ODST Rucksack [Heavy RTO]";
        author="73rd S-4 Team";
        scope=2;
        scopeArsenal=2;
        maximumLoad = 300;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\backpack\Backpack_CO.paa",
            "z\73STB\addons\armor\data\backpack\Straps_co.paa"
        };
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Heavy RTO";
        };
    };
    //*****************************************************************************************************************************\\	
    class STB73_Rucksack_invis: MA_M52D_Rucksack
    {
        displayName = "[73] No Backpack";
        model = "\A3\weapons_f\empty";
        scope= 2;
        scopeArsenal=2;
        maximumLoad = 250;
        hiddenSelectionsTextures[]=
        {
            "",
            ""
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Invis";
        };
    };
    class STB73_Rucksack_invis_rto: STB73_Rucksack_invis
    {
        displayName = "[73] No Backpack (RTO)";
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        maximumLoad = 250;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Invis RTO";
        };
    };
};
