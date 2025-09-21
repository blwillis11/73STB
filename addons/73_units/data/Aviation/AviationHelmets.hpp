class 73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] VX19 Flight Helmet [Aviator]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Aviation\VX19Helmets\73_VX19_aviator_co.paa",
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
        Model="73_ACE_VX19_Helmet";
        Roles="Aviator";
    };
};
class 73_VX19_Helmet_Senior: 73_VX19_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] VX19 Flight Helmet [Sr Aviator]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Aviation\VX19Helmets\73_VX19_senioraviator_co.paa",
        "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
    };
    class XtdGearInfo
    {
        Model="73_ACE_VX19_Helmet";
        Roles="Sr Aviator";
    };
};
