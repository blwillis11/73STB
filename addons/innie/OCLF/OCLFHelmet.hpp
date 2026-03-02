class OPTRE_FC_CH255_Helmet_Visor;

class STB73_CH255_Helmet_Visor: OPTRE_FC_CH255_Helmet_Visor
{
    displayName="[OCLF] CH255 Army Helmet";
    author= AUTHOR;
    scope=2;
    class ItemInfo: HeadgearItem
    {
        uniformModel="\OPTRE_FC_Units\Marines\h3_helmet.p3d";
        mass=30;
        modelSides[]={6};
        passThrough=0.15000001;
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
class STB73_CH255_Helmet_Lancer: OPTRE_CH255_Security_Advanced_Type_2_Helmet_Black
{
    scope=2;
    displayName="[OCLF] CH255 Lancer Helmet";
    author= AUTHOR;
    class ItemInfo: HeadgearItem
    {
        uniformModel="\OPTRE_UNSC_Units\Army\CH255_Security_Advanced.p3d";
        mass=40;
        modelSides[]={6};
        passThrough=0.15000001;
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

