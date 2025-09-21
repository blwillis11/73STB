class OPTRE_FC_CH255_Helmet_Visor;

class 73_CH255_Helmet_Visor: OPTRE_FC_CH255_Helmet_Visor
{
    displayName="[OCLF] CH255 Army Helmet";
    author="73rd S-4 Team";
    scope=2;
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "73_innie\OCLF\data\OCLF_helmet_CO.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\OPTRE_FC_Units\Marines\h3_helmet.p3d";
        mass=30;
        modelSides[]={6};
        passThrough=0.15000001;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "73_innie\OCLF\data\OCLF_helmet_CO.paa"
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.1;
            };
        };
    };
};
class OPTRE_CH255_Security_Advanced_Type_2_Helmet_Black;
class 73_CH255_Helmet_Lancer: OPTRE_CH255_Security_Advanced_Type_2_Helmet_Black
{
    scope=2;
    displayName="[OCLF] CH255 Lancer Helmet";
    author="73rd S-4 Team";
    hiddenSelections[]=
    {
        "camo_helmet",
        "camo_attachments",
        "camo_visor",
        "visor_big"
    };
    hiddenSelectionsTextures[]=
    {
        "OPTRE_UNSC_Units\Army\data\security\camos\Black\CH252_Helmet_co.paa",
        "OPTRE_UNSC_Units\Army\data\security\camos\Black\CH252_Attachments_co.paa",
        "OPTRE_UNSC_Units\Army\data\security\CH252_Visor_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        uniformModel="\OPTRE_UNSC_Units\Army\CH255_Security_Advanced.p3d";
        mass=40;
        modelSides[]={6};
        passThrough=0.15000001;
        hiddenSelections[]=
        {
            "camo_helmet",
            "camo_attachments",
            "camo_visor",
            "visor_big"
        };
        hiddenSelectionsTextures[]=
        {
			"OPTRE_UNSC_Units\Army\data\security\camos\Black\CH252_Helmet_co.paa",
			"OPTRE_UNSC_Units\Army\data\security\camos\Black\CH252_Attachments_co.paa",
			"OPTRE_UNSC_Units\Army\data\security\CH252_Visor_co.paa"
        };
        allowedFacewear[] =
        {
            "G_Balaclava_blk"
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=10;
                passThrough=0.1;
            };
        };
    };
};

