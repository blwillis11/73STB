class OPTRE_cart;

class STB73_cart:OPTRE_cart
{
    displayName="[73] Maintenance/Tow Cart";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Utility_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Aviator";
    hiddenSelectionsTextures[] = {
        "OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa"
    };
    ace_rearm_defaultSupply = 10000;
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Tow Cart";
            Type = "Utility";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa""]]",
            };
        };
    };
};
