class CfgWeapons {
    class TCP_V_M43A_GungnirL_3_Brown;
    class TCP_V_M43A_GungnirS_3_Brown;
    class TCP_V_M43A_BaseSec_3_Brown;


    class STB73_CEArmour: TCP_V_M43A_GungnirL_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Heavy";
    };
    class STB73_CEArmourPouch: TCP_V_M43A_GungnirS_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Medium)";
    };
    class STB73_CEArmourNSV2: TCP_V_M43A_BaseSec_3_Brown
    {
        author=AUTHOR;
        scope=2;
        displayName="[10thMEB] Marine Armour (Light)";
        descriptionShort="CE Armour";
    };
    class TCP_H_boonieHat_Folded_Right_Olive;
    class TCP_H_Helmet_CH43A_Brown;
    class TCP_H_Helmet_ECH43A_Brown_Yellow;

    class STB73_CEBoonie: TCP_H_boonieHat_Folded_Right_Olive
    {
        author="73rd S-4 Team";
        displayName="[10thMEB] Boonie Hat (camo)";
    };
    class STB73_CH43A_Helmet: TCP_H_Helmet_CH43A_Brown
    {
        author="73rd S-4 Team";
        scope=2;
        displayName="[10thMEB] CH43/A Marine Helmet";
    };
    class STB73_ECH43A_Helmet: TCP_H_Helmet_ECH43A_Brown_Yellow
    {
        author="73rd S-4 Team";
        scope=2;
        displayName="[10thMEB] ECH43/A Marine Helmet";
    };
    class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland;

    class STB73_CEUniform_U_B: TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland
    {
        scope=2;
        allowedSlots[]=
        {
            "BACKPACK_SLOT"
        };
        displayName="[73] CBUU Marine Uniform";
        class ItemInfo
        {
            uniformModel="-";
            uniformClass="STB73_CEUniform_inf_B";
            containerClass="Supply90";
            mass=80;
        };
    };
};
