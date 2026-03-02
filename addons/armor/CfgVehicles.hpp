class CfgVehicles
{
    class ContainerSupply;
    class STB73_vest_supply: ContainerSupply
    {
        maximumLoad = VEST_MAXLOAD;
    };
    TCP_VEH_CLASS_DEF
    VEH_UNI_CLASS(urban)
    VEH_UNI_CLASS(woodland)
    VEH_UNI_CLASS(arctic)
    VEH_UNI_CLASS(arid)
    VEH_UNI_CLASS(tropic)
    VEH_UNI_CLASS(black)
    VEH_UNI_CLASS(grey)
    VEH_UNI_CLASS(green)
    VEH_UNI_CLASS(olive)
    VEH_UNI_CLASS(tan)
    VEH_UNI_CLASS(white)

    class MA_M56S_BDU_Base;
	class MA_M56S_Rucksack;
	class MA_M52D_Rucksack;
	class MA_M56S_Rucksack_Medic;
	class MA_M56S_Rucksack_ODST_Radio;
	class weapons_f;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class ItemInfo;
	class UniformItem;

    class OPTRE_ILCS_Rucksack_Black;
    class STB73_Rucksack: OPTRE_ILCS_Rucksack_Black
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            "z\73STB\addons\armor\data\backpack\odst_Ruck.rvmat"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Standard";
        };
        maximumLoad = 300;
    };
    class OPTRE_ILCS_Rucksack_Medical;
    class STB73_Rucksack_med: OPTRE_ILCS_Rucksack_Medical
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Medic]";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            "z\73STB\addons\armor\data\backpack\odst_Ruck.rvmat"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Medic";
        };
        maximumLoad = 350;
    };
    
    class OPTRE_ILCS_Rucksack_Heavy;
    class STB73_Rucksack_hev: OPTRE_ILCS_Rucksack_Heavy
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Heavy]";
        scope= 2;
        scopeArsenal=2;
        maximumLoad = 350;
        hidenSelectionsMaterials[]=
        {
            "z\73STB\addons\armor\data\backpack\odst_Ruck.rvmat"
        };
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Heavy";
        };
    };

    class STB73_Rucksack_rto: STB73_Rucksack
    {
        displayName = "[73] ODST Rucksack [RTO]";
        author="73rd S-4 Team";
        scope=2;
        scopeArsenal=2;
        maximumLoad = 300;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=25000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "RTO";
        };
    };

    class STB73_Rucksack_rto_broken: STB73_Rucksack_rto
    {
        displayName = "[73] ODST Rucksack [RTO] (Broken)";
        tf_encryptionCode="";
        tf_dialog="";
        tf_subtype="";
        tf_range=0;
        scope=1;
        scopeArsenal=1;
        tf_dialogUpdate="";
        tf_hasLRradio=0;
        class XtdGearInfo
        {
            model = "";
            Role = "";
        };
    };
    //*****************************************************************************************************************************\\	
    class STB73_Rucksack_invis: STB73_Rucksack
    {
        displayName = "[73] No Backpack";
        model = "\A3\weapons_f\empty";
        scope= 2;
        scopeArsenal=2;
        maximumLoad = 150;
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
        maximumLoad = 150;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        class XtdGearInfo
        {
            model = "STB73_ACE_Rucksack";
            Role = "Invis RTO";
        };
    };
};
