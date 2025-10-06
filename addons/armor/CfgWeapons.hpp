class CfgWeapons
{
    NEW_VEST_43D(ODST)
    NEW_VEST_43D(Sharpshooter)
    NEW_VEST_43D(Breacher)
    NEW_VEST_43A(BaseSec)

    class TCP_H_Helmet_ECH55D_Black_Black;
    class TCP_H_Helmet_ECH55D_Black_Black_DP;

    ECH55D_HELMET(Standard,Black)


    class OPTRE_FC_VX19_Helmet;
    class STB73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author="73rd S-4 Team";
        displayName="[73] VX19 Flight Helmet [Aviator]";
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
