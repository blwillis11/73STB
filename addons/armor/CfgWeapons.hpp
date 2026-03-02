class CfgWeapons
{
    class VestItem;
    class ItemInfo;
    class TCP_V_M43D_ODST_4_Base;
    class TCP_V_M43D_Breacher_4_Base;
    class TCP_V_M43D_Sharpshooter_4_Base;
    class TCP_V_M43A_BaseSec_3_Base;
    
    NEW_VEST_43A(Aviator)

    STB73_Vest_ODST(Black,Company,"[73] M43/D [ODST] [Company]")
    STB73_Vest_Sharpshooter(Black,Company,"[73] M43/D [Sharpshooter] [Company]")
    STB73_Vest_Breacher(Black,Company,"[73] M43/D [Breacher] [Company]")

    TCP_WEP_CLASS_DEF
    WEP_UNI_CLASS(Urban)
    WEP_UNI_CLASS(Woodland)
    WEP_UNI_CLASS(Arctic)
    WEP_UNI_CLASS(Arid)
    WEP_UNI_CLASS(Tropic)
    WEP_UNI_CLASS(Black)
    WEP_UNI_CLASS(Grey)
    WEP_UNI_CLASS(Green)
    WEP_UNI_CLASS(Olive)
    WEP_UNI_CLASS(Tan)
    WEP_UNI_CLASS(White)


    class TCP_H_Helmet_ECH55D_Black_Black;
    class TCP_H_Helmet_ECH55D_Black_Black_DP;

    ECH55D_HELMET(Standard,Black,Officer)
    ECH55D_HELMET(Standard,Red,SORC)
    ECH55D_HELMET(Standard,Gold,NCO)
    ECH55D_HELMET(Standard,Blue,Enlisted)

    class Uniform_Base;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class CH252D_Helmet;
    class CH252D_Helmet_dp;
    class VES_CH252_WDL_Crew;
    class UniformItem;
    
    class OPTRE_FC_VX19_Helmet;
    class STB73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author="73rd S-4 Team";
        displayName="[73] VX19 Flight Helmet [Aviator]";
        ace_hearing_protection = 0.80;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73_VX19_aviator_co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "optre_fc_units\marines\data\h3_pilothelmet.rvmat",
            "optre_fc_units\marines\data\h3_pilothelmet_visor.rvmat"
        };
        class XtdGearInfo
        {
            Model="STB73_ACE_VX19_Helmet";
            Roles="Aviator";
        };
    };
    class STB73_VX19_Helmet_Senior: STB73_VX19_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author="73rd S-4 Team";
        displayName="[73] VX19 Flight Helmet [Sr Aviator]";
        ace_hearing_protection = 0.80;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73_VX19_senioraviator_co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
        class XtdGearInfo
        {
            Model="STB73_ACE_VX19_Helmet";
            Roles="Sr Aviator";
        };
    };

    class H_Beret_02;
    class STB73_beret: H_Beret_02
    {
        displayName = "[73] Beret";
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73Beret_co.paa"
        };
    };
};
