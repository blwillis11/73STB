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

    class STB73_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic : TCP_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base {
        author=AUTHOR;
        scope= 1;
        scopeArsenal= 1;
        scopeCurator = 1;
        CBRN_protectionLevel="4 + 8";
        hiddenSelectionsTextures[] = {
            QP(data\uniform\Medic\CBUU_FieldTop_CO.paa),
            QP(data\uniform\Medic\CBUU_Pants_CO.paa),
            QP(data\uniform\Medic\CBUU_Gloves_CO.paa)
            };
        uniformClass = QUOTE(STB73_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
    };
	class ItemInfo;
	class UniformItem;
    class OPTRE_Rucksack;
    class TCP_equipmentTypes;

    TCP_BACKPACK_ROLE(Ammo_Bearer_1)
    STB73_BACKPACK_ROLE_HIGH(Ammo_Bearer_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Ammo_Bearer_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Ammo_Bearer_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Ammo_Bearer_1,White)
    STB73_HARDCASE_ROLE_HIGH(Ammo_Bearer_1)

    TCP_BACKPACK_ROLE(Assaulter_1)
    STB73_BACKPACK_ROLE_LOW(Assaulter_1,Black)
    STB73_BACKPACK_ROLE_LOW(Assaulter_1,Olive)
    STB73_BACKPACK_ROLE_LOW(Assaulter_1,Tan)
    STB73_BACKPACK_ROLE_LOW(Assaulter_1,White)
    STB73_HARDCASE_ROLE_LOW(Assaulter_1)

    TCP_BACKPACK_ROLE(Assaulter_2)
    STB73_BACKPACK_ROLE_HIGH(Assaulter_2,Black)
    STB73_BACKPACK_ROLE_HIGH(Assaulter_2,Olive)
    STB73_BACKPACK_ROLE_HIGH(Assaulter_2,Tan)
    STB73_BACKPACK_ROLE_HIGH(Assaulter_2,White)
    STB73_HARDCASE_ROLE_HIGH(Assaulter_2)

    TCP_BACKPACK_ROLE(Autorifleman_1)
    STB73_BACKPACK_ROLE_LOW(Autorifleman_1,Black)
    STB73_BACKPACK_ROLE_LOW(Autorifleman_1,Olive)
    STB73_BACKPACK_ROLE_LOW(Autorifleman_1,Tan)
    STB73_BACKPACK_ROLE_LOW(Autorifleman_1,White)
    STB73_HARDCASE_ROLE_LOW(Autorifleman_1)

    TCP_BACKPACK_ROLE(Autorifleman_2)
    STB73_BACKPACK_ROLE_HIGH(Autorifleman_2,Black)
    STB73_BACKPACK_ROLE_HIGH(Autorifleman_2,Olive)
    STB73_BACKPACK_ROLE_HIGH(Autorifleman_2,Tan)
    STB73_BACKPACK_ROLE_HIGH(Autorifleman_2,White)
    STB73_HARDCASE_ROLE_HIGH(Autorifleman_2)

    TCP_BACKPACK_ROLE(Breacher_1)
    STB73_BACKPACK_ROLE_HIGH(Breacher_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Breacher_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Breacher_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Breacher_1,White)
    STB73_HARDCASE_ROLE_HIGH(Breacher_1)

    TCP_BACKPACK_ROLE(Engineer_1)
    STB73_BACKPACK_ROLE_HIGH(Engineer_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Engineer_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Engineer_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Engineer_1,White)
    STB73_HARDCASE_ROLE_HIGH(Engineer_1)

    TCP_BACKPACK_ROLE(Grenadier_1)
    STB73_BACKPACK_ROLE_HIGH(Grenadier_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Grenadier_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Grenadier_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Grenadier_1,White)
    STB73_HARDCASE_ROLE_HIGH(Grenadier_1)

    TCP_BACKPACK_ROLE(Grenadier_2)
    STB73_BACKPACK_ROLE_LOW(Grenadier_2,Black)
    STB73_BACKPACK_ROLE_LOW(Grenadier_2,Olive)
    STB73_BACKPACK_ROLE_LOW(Grenadier_2,Tan)
    STB73_BACKPACK_ROLE_LOW(Grenadier_2,White)
    STB73_HARDCASE_ROLE_LOW(Grenadier_2)

    TCP_BACKPACK_ROLE(Marksman_1)
    STB73_BACKPACK_ROLE_LOW(Marksman_1,Black)
    STB73_BACKPACK_ROLE_LOW(Marksman_1,Olive)
    STB73_BACKPACK_ROLE_LOW(Marksman_1,Tan)
    STB73_BACKPACK_ROLE_LOW(Marksman_1,White)
    STB73_HARDCASE_ROLE_LOW(Marksman_1)

    TCP_BACKPACK_ROLE(Marksman_2)
    STB73_BACKPACK_ROLE_LOW(Marksman_2,Black)
    STB73_BACKPACK_ROLE_LOW(Marksman_2,Olive)
    STB73_BACKPACK_ROLE_LOW(Marksman_2,Tan)
    STB73_BACKPACK_ROLE_LOW(Marksman_2,White)
    STB73_HARDCASE_ROLE_LOW(Marksman_2)

    TCP_BACKPACK_ROLE(Medic_1)
    STB73_BACKPACK_ROLE_HIGH(Medic_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Medic_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Medic_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Medic_1,White)
    STB73_HARDCASE_ROLE_HIGH(Medic_1)

    TCP_BACKPACK_ROLE(Medic_2)
    STB73_BACKPACK_ROLE_HIGH(Medic_2,Black)
    STB73_BACKPACK_ROLE_HIGH(Medic_2,Olive)
    STB73_BACKPACK_ROLE_HIGH(Medic_2,Tan)
    STB73_BACKPACK_ROLE_HIGH(Medic_2,White)
    STB73_HARDCASE_ROLE_HIGH(Medic_2)

    TCP_BACKPACK_ROLE(NCO_1)
    STB73_BACKPACK_ROLE_HIGH(NCO_1,Black)
    STB73_BACKPACK_ROLE_HIGH(NCO_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(NCO_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(NCO_1,White)
    STB73_HARDCASE_ROLE_HIGH(NCO_1)

    TCP_BACKPACK_ROLE(NCO_2)
    STB73_BACKPACK_ROLE_LOW(NCO_2,Black)
    STB73_BACKPACK_ROLE_LOW(NCO_2,Olive)
    STB73_BACKPACK_ROLE_LOW(NCO_2,Tan)
    STB73_BACKPACK_ROLE_LOW(NCO_2,White)
    STB73_HARDCASE_ROLE_LOW(NCO_2)

    TCP_BACKPACK_ROLE(Rifleman_1)
    STB73_BACKPACK_ROLE_LOW(Rifleman_1,Black)
    STB73_BACKPACK_ROLE_LOW(Rifleman_1,Olive)
    STB73_BACKPACK_ROLE_LOW(Rifleman_1,Tan)
    STB73_BACKPACK_ROLE_LOW(Rifleman_1,White)
    STB73_HARDCASE_ROLE_LOW(Rifleman_1)

    TCP_BACKPACK_ROLE(Rifleman_2)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_2,Black)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_2,Olive)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_2,Tan)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_2,White)
    STB73_HARDCASE_ROLE_HIGH(Rifleman_2)

    TCP_BACKPACK_ROLE(Rifleman_3)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_3,Black)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_3,Olive)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_3,Tan)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_3,White)
    STB73_HARDCASE_ROLE_HIGH(Rifleman_3)

    TCP_BACKPACK_ROLE(Rifleman_4)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_4,Black)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_4,Olive)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_4,Tan)
    STB73_BACKPACK_ROLE_HIGH(Rifleman_4,White)
    STB73_HARDCASE_ROLE_HIGH(Rifleman_4)

    TCP_BACKPACK_ROLE(RTO_1)
    STB73_BACKPACK_ROLE_HIGH(RTO_1,Black)
    STB73_BACKPACK_ROLE_HIGH(RTO_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(RTO_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(RTO_1,White)
    STB73_HARDCASE_ROLE_HIGH(RTO_1)

    TCP_BACKPACK_ROLE(Sapper_1)
    STB73_BACKPACK_ROLE_HIGH(Sapper_1,Black)
    STB73_BACKPACK_ROLE_HIGH(Sapper_1,Olive)
    STB73_BACKPACK_ROLE_HIGH(Sapper_1,Tan)
    STB73_BACKPACK_ROLE_HIGH(Sapper_1,White)
    STB73_HARDCASE_ROLE_HIGH(Sapper_1)

    TCP_BACKPACK_ROLE(Sniper_1)
    STB73_BACKPACK_ROLE_LOW(Sniper_1,Black)
    STB73_BACKPACK_ROLE_LOW(Sniper_1,Olive)
    STB73_BACKPACK_ROLE_LOW(Sniper_1,Tan)
    STB73_BACKPACK_ROLE_LOW(Sniper_1,White)
    STB73_HARDCASE_ROLE_LOW(Sniper_1)

    TCP_BACKPACK_ROLE(Sniper_2)
    STB73_BACKPACK_ROLE_HIGH(Sniper_2,Black)
    STB73_BACKPACK_ROLE_HIGH(Sniper_2,Olive)
    STB73_BACKPACK_ROLE_HIGH(Sniper_2,Tan)
    STB73_BACKPACK_ROLE_HIGH(Sniper_2,White)
    STB73_HARDCASE_ROLE_HIGH(Sniper_2)

    TCP_NO_BACKPACK(EM39_MLBE_Hardcase)
    TCP_BACKPACK(EM39_MLBE_Hardcase,Roll)
    TCP_BACKPACK(EM39_MLBE_Hardcase,Patrol)
    TCP_BACKPACK_BUTTPACK(EM39_MLBE_Hardcase,Patrol,Roll)

    TCP_NO_BACKPACK_M43(M43_Medium_Rucksack)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Roll)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Patrol)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Assault)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Engineer)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Field)
    TCP_BUTTPACK_M43(M43_Medium_Rucksack,Medical)
    TCP_BACKPACK_BUTTPACK_M43(M43_Medium_Rucksack,Patrol,Roll)
    TCP_BACKPACK_BUTTPACK_M43(M43_Medium_Rucksack,Assault,Roll)
    TCP_BACKPACK_BUTTPACK_M43(M43_Medium_Rucksack,Engineer,Roll)
    TCP_BACKPACK_BUTTPACK_M43(M43_Medium_Rucksack,Field,Roll)
    TCP_BACKPACK_BUTTPACK_M43(M43_Medium_Rucksack,Medical,Roll)

    TCP_NO_BACKPACK(M2_Buttpack)
    TCP_NO_BACKPACK(M35_Hydration_Pack)
    TCP_NO_BACKPACK(EM39_MLBE_Buttpack)

    STB73_NO_BACKPACK_1(M2_Buttpack,Black,150)
    STB73_NO_BACKPACK_1(M35_Hydration_Pack,Black,150)
    STB73_NO_BACKPACK_1(EM39_MLBE_Buttpack,Black,150)
    STB73_NO_BACKPACK_1(M2_Buttpack,Olive,150)
    STB73_NO_BACKPACK_1(M35_Hydration_Pack,Olive,150)
    STB73_NO_BACKPACK_1(EM39_MLBE_Buttpack,Olive,150)
    STB73_NO_BACKPACK_1(M2_Buttpack,Tan,150)
    STB73_NO_BACKPACK_1(M35_Hydration_Pack,Tan,150)
    STB73_NO_BACKPACK_1(EM39_MLBE_Buttpack,Tan,150)
    STB73_NO_BACKPACK_1(M2_Buttpack,White,150)
    STB73_NO_BACKPACK_1(M35_Hydration_Pack,White,150)
    STB73_NO_BACKPACK_1(EM39_MLBE_Buttpack,White,150)

    STB73_EM39_BACKPACK_ONLY(EM39_MLBE_Hardcase,Black,200)
    STB73_EM39_BACKPACK_MOS_ONLY(EM39_MLBE_Hardcase,Patrol,Black,250)
    STB73_EM39_BACKPACK_MOS_ROLL_ONLY(EM39_MLBE_Hardcase,Patrol,Roll,Black,300)
    STB73_EM39_BACKPACK_ROLL_ONLY(EM39_MLBE_Hardcase,Roll,Black,250)

    STB73_NO_BACKPACK_2(Medic_1,Medic,200)

    STB73_M43_RUCKSACK_VARS

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
