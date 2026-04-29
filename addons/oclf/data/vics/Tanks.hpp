class OPTRE_M700_Viper_UNSC;

class CC_M700_Innie:OPTRE_M700_Viper_UNSC
{
    displayName="[CC] M700 Viper Light Tank";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    armor=450;
    crew = "OCLF_Crewman";
    class ace_cargo {
        class cargo {
            class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Tracks";
                
                amount = 4;
            };
        };
    };
    hiddenSelectionsTextures[] = {
        "P:\y\CC\addons\oclf\data\vics\Viper\Decal_ca.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\camoPolar_ca.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorBody_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorTurret_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\ExteriorExtra_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Lights_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Exterior2_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Glass_ca.paa",
        "P:\y\CC\addons\oclf\data\vics\Viper\ExteriorERA_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior1_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior2_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\Interior3_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\InteriorLights_co.paa",
        "\OPTRE_Vehicles_Tracked2\M700_Viper\data\MFD_co.paa",
        "#(argb,8,8,3)color(1.000,0.295,0.306,0.000,co)",
        "#(argb,8,8,3)color(1.000,0.295,0.306,0.000,co)"
    };
    textureSources[] = 
    {
    };
};