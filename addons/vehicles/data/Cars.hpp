class VES_HDV134_Resupply;

class STB73_HDV134_Resupply:VES_HDV134_Resupply
{
    displayName="[73] HDV-134 Buffalo [Resupply]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
     class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    crew = "STB73_Marine_Rifleman";
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "Resupply";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT;

class STB73_HDV134_TT:VES_HDV134_TT
{
    displayName="[73] HDV-134 Buffalo [TT]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "TT";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT_C;

class STB73_HDV134_TT_C:VES_HDV134_TT_C
{
    displayName="[73] HDV-134 Buffalo [TT-C]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "TT-C";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};



class VES_M12;

class STB73_M12 : VES_M12
{
    displayName="[73] M12 FAV Warthog [Unarmed]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";
                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "FAV Unarmed";
            cost = 0;
            priority = 1;
        };
    };
};

class VES_M12_LRV;

class STB73_M12_LRV : VES_M12_LRV
{
    displayName="[73] M12 LRV Warthog [M41 LAAG]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV LAAG";
            cost = 1;
            priority = 1;
        };
    };
};
class VES_M12G1_LRV;

class STB73_M12G1_LRV : VES_M12G1_LRV
{
    displayName="[73] M12 LRV Warthog [M68 ALIM]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV ALIM";
            cost = 1;
            priority = 1;
        };
    };
};
class VES_M12A1_LRV;

class STB73_M12A1_LRV : VES_M12A1_LRV
{
    displayName="[73] M12 LRV Warthog [ATGM]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";
                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV ATGM";
            cost = 1;
            priority = 1;
        };
    };
};
class VES_M12R_AA;

class STB73_M12R_AA : VES_M12R_AA
{
    displayName="[73] M12 LRV Warthog [M79 AA]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV AA";
            cost = 1;
            priority = 1;
        };
    };
};
class VES_M12_APC;
class STB73_M12_APC : VES_M12_APC
{
    displayName="[73] M12 APC Warthog";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "APC";
            cost = 0;
            priority = 1;
        };
    };
};
class VES_M813_TT;

class STB73_M813_TT : VES_M813_TT
{
    displayName="[73] M813 TT Warthog";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "TT";
            cost = 0;
            priority = 1;
        };
    };
};
class OPTRE_M12_TD_ins;

class STB73_M914_TD : OPTRE_M12_TD_ins
{
    displayName="[73] M914 Tank Destroyer Warthog";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Marine_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "TD";
            cost = 0;
            priority = 1;
        };
    };
};

class OPTRE_M274_ATV;

class STB73_M274_ATV:OPTRE_M274_ATV
{
   canBeTransported = 1;
   transportVehicleMass = 1000;  // Mongoose mass (approx.)
   displayName="[73] M274 Mongoose";
   author= AUTHOR;
   faction = "STB73_STB";
   editorCategory = "STB73_STB";
   editorSubcategory = "STB73_Cars_EdSubCat";
   scopeCurator=2;
   scope=2;
   side=1;
   crew = "STB73_Marine_Rifleman";
   class VehicleTransport
   {
        class Cargo
        {
            parachuteClass			= "B_Parachute_02_F";	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
   };
};
