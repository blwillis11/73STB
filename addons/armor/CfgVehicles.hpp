class CfgVehicles
{
    class ContainerSupply;
    class STB73_vest_supply: ContainerSupply
    {
        maximumLoad = VEST_MAXLOAD;
    };

    #include "data/cfg/VehBackpacks.hpp"

    TCP_VEH_CLASS_DEF
    VEH_UNI_CLASS(Arctic)
    VEH_UNI_CLASS(Arid)
    VEH_UNI_CLASS(Black)
    VEH_UNI_CLASS(Green)
    VEH_UNI_CLASS(Gray)
    VEH_UNI_CLASS(Olive)
    VEH_UNI_CLASS(Tan)
    VEH_UNI_CLASS(Tropic)
    VEH_UNI_CLASS(Tundra)
    VEH_UNI_CLASS(Urban)
    VEH_UNI_CLASS(White)
    VEH_UNI_CLASS(Woodland)
	class ItemInfo;
	class UniformItem;
    class OPTRE_Rucksack;
    class TCP_equipmentTypes;

    //*****************************************************************************************************************************\\	
    class OPTRE_UNSC_Rucksack;
    class STB73_Rucksack_invis: OPTRE_UNSC_Rucksack
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
