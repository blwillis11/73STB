
class Land_TCP_Space_Crate_Pallet_Large_01_Olive;
class Land_TCP_GasCanister_01_Brown;
class ThingX;
class UserActions;

class Items_base_F : ThingX
{
    class UserActions : UserActions
    {
        class STB73_LoadIntoNearestVehicle
        {
            displayName = "Load into Vehicle";
            displayNameDefault = "Load into Vehicle";
            textToolTip = "Load this pallet into the nearest compatible vehicle";
            position = "";
            showWindow = 0;
            radius = 5;
            priority = 3;
            onlyForPlayer = 1;
            condition = "(vehicle player == player) AND (isNull (isVehicleCargo this)) AND (({vehicleCargoEnabled _x} count (nearestObjects [this, [""Car"", ""Plane"", ""Helicopter""], 25])) > 0)";
            statement = "[this] call STB73_fnc_LoadIntoNearestVehicle;";
        }; 
    };
};
class ReammoBox_F : ThingX
{
    class UserActions : UserActions
    {
        class STB73_LoadIntoNearestVehicle
        {
            displayName = "Load into Vehicle";
            displayNameDefault = "Load into Vehicle";
            textToolTip = "Load this pallet into the nearest compatible vehicle";
            position = "";
            showWindow = 0;
            radius = 5;
            priority = 3;
            onlyForPlayer = 1;
            condition = "(vehicle player == player) AND (isNull (isVehicleCargo this)) AND (({vehicleCargoEnabled _x} count (nearestObjects [this, [""Car"", ""Plane"", ""Helicopter""], 25])) > 0)";
            statement = "[this] call STB73_fnc_LoadIntoNearestVehicle;";
        }; 
    };
};



class Land_TCP_Space_Crate_01_Olive : ReammoBox_F
{
    author="$STR_TCP_Data_Author";
    dlc="TCP";
    scope=0;
    scopeCurator=0;
    editorCategory="EdCat_Things_TCP";
    editorSubcategory="EdSubcat_Storage";
    model="\TCP\Props\Military\Equipment\Space_Crate_01\Space_Crate_01.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    vehicleClass="Container";
    waterLeakiness=100;
    maximumLoad=2000;
    transportMaxWeapons=24;
    transportMaxMagazines=128;
    transportMaxBackpacks=12;
    ace_cargo_size = 4; //How much ACE Cargo space does it consume?
    ace_cargo_canLoad = 1; //Enables it to be load
    ace_cargo_blockUnloadCarry = 1; //Should you be able to carry it on unload?
    ace_cargo_space = 8; //How much ACE Cargo space does it have for storing items?
    ace_cargo_hasCargo = 1; //Enables it to have items be loaded into it
    ace_cargo_noRename=0;
    ace_dragging_canDrag=1;
    ace_dragging_dragPosition[]={0,2.2,0};
    ace_dragging_dragDirection=0;
    ace_dragging_ignoreWeight=1;
    ace_dragging_canCarry=0;
    ace_dragging_carryPosition[]={0,1.1,0.5};
    ace_dragging_carryDirection=0;
    ace_dragging_ignoreWeightCarry=1;
    class TransportItems
    {
    };
    class TransportMagazines
    {
    };
    class TransportWeapons
    {
    };
    slingLoadCargoMemoryPoints[]=
    {
        "SlingLoadCargo1",
        "SlingLoadCargo2",
        "SlingLoadCargo3",
        "SlingLoadCargo4"
    };
};

class STB73_Space_Crate_Base_Olive : Land_TCP_Space_Crate_01_Olive
{
    displayName = "[73] Space Crate (Empty)";
    author = AUTHOR;
    scope = 2;
    scopeCurator = 2;
    faction = "STB73_STB";
    editorCategory = "STB73_Objects";
    editorSubcategory = "STB73_Crates_EdSubCat";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_01_CO.paa"
    };
};

class STB73_Space_Crate_Repair_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Repair)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_Repair_CO.paa"
    };
    ace_repair_canRepair = 1; // Make repair vehicle
    ace_repair_spareWheels = 4; // Number of spare wheels for repair vehicles
};

class STB73_Space_Crate_Refuel_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Refuel)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_Refuel_CO.paa"
    };
    ace_cargo_hasCargo = 1; //Enables it to have items be loaded into it
    class ace_cargo {
        class cargo {
            class STB73_GasCanister_Brown { // Doesn't have to have the same name as the item you're adding
                type = "STB73_GasCanister_Brown";
                amount = 8;
            };
        };
    };
};

class STB73_Space_Crate_Resupply_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Resupply)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_Resupply_CO.paa"
    };
    ace_rearm_defaultSupply = 5000; // Default supply amount for rearming (in rounds)
};

class STB73_Space_Crate_Rifles_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Rifles)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_Rifles_CO.paa"
    };
    class ace_cargo {
        class cargo {
            class STB73_Crate_Small_Rifleman_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Rifleman_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Marksman_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Marksman_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Medical_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Medical_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_AutoRifleman_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_AutoRifleman_Olive";
                amount = 1;
            };
        };
    };
};
class STB73_Space_Crate_Medical_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Medical)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_Medical_CO.paa"
    };
    class ace_cargo {
        class cargo {
            class STB73_Crate_Small_Medical_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Medical_Olive";
                amount = 4;
            };
        };
    };
};
class STB73_Space_Crate_CQB_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (CQB)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_CQB_CO.paa"
    };
    class ace_cargo {
        class cargo {
            class STB73_Crate_Small_SMG_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_SMG_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_CQB_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_CQB_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Medical_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Medical_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Grenadier_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Grenadier_Olive";
                amount = 1;
            };
        };
    };
};
class STB73_Space_Crate_Explosives_Olive : STB73_Space_Crate_Base_Olive
{
    displayName = "[73] Space Crate (Explosives)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_EOD_CO.paa"
    };
    class ace_cargo {
        class cargo {
            class STB73_Crate_Small_AT_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_AT_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_EOD_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_EOD_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Grenadier_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Grenadier_Olive";
                amount = 1;
            };
            class STB73_Crate_Small_Sniper_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Crate_Small_Sniper_Olive";
                amount = 1;
            };
        };
    };
};


class STB73_GasCanister_Brown : Land_TCP_GasCanister_01_Brown
{
    author = AUTHOR;
    displayName = "[73] Fuel Canister";
    scope = 2;
    scopeCurator = 2;
    faction = "STB73_STB";
    editorCategory = "STB73_Objects";
    editorSubcategory = "STB73_Crates_EdSubCat";
    hiddenSelectionsTextures[] = 
    {
        "\TCP\Props\Military\Equipment\GasCanister_01\data\camo\default\GasCanister_01_CO.paa"
    };
    ace_cargo_size = 1; //How much ACE Cargo space does it consume?
    ace_cargo_canLoad = 1; //Enables it to be load
    ace_cargo_blockUnloadCarry = 1; //Should you be able to carry it on unload?
    ace_cargo_space = 0; //How much ACE Cargo space does it have for storing items?
    ace_cargo_hasCargo = 0; //Enables it to have items be loaded into it
    ace_refuel_fuelCargo = 115; // Maximum fuel cargo amount (in liters)
    ace_refuel_hooks[] = {{0,0,.5}}; // Nozzle hooks positions
};

//Crate Small
class Land_TCP_Crate_Small_01_Olive;
class STB73_Crate_Small_Base_Olive : Land_TCP_Crate_Small_01_Olive
{
    displayName = "[73] Ammo Crate (Empty)";
    author = AUTHOR;
    scope = 2;
    scopeCurator = 2;
    faction = "STB73_STB";
    editorCategory = "STB73_Objects";
    editorSubcategory = "STB73_Crates_EdSubCat";
    hiddenSelectionsTextures[] = 
    {
        "\TCP\Props\Military\Equipment\Crate_Small_01\data\camo\default\Crate_Small_01_CO.paa"
    };
    ace_cargo_size = 1; //How much ACE Cargo space does it consume?
    ace_cargo_canLoad = 1; //Enables it to be load
    ace_cargo_blockUnloadCarry = 1; //Should you be able to carry it on unload?
    ace_cargo_space = 1; //How much ACE Cargo space does it have for storing items?
    ace_cargo_hasCargo = 0; //Enables it to have items be loaded into it
};
class STB73_Crate_Small_Rifleman_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (AR)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_AR_CO.paa"
    };
    #include "transportItems\Rifleman.hpp"
};
class STB73_Crate_Small_Medical_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (Medical)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_Medical_CO.paa"
    };
    #include "transportItems\Medical.hpp"
};
class STB73_Crate_Small_Marksman_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (BR/DMR)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_Marksman_CO.paa"
    };
    #include "transportItems\Marksman.hpp"
};
class STB73_Crate_Small_AutoRifleman_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (LMG)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_LMG_CO.paa"
    };
    #include "transportItems\AutoRifleman.hpp"
};
class STB73_Crate_Small_SMG_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (SMG/Sidearms)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_SMG_CO.paa"
    };
    #include "transportItems\SMG.hpp"
};
class STB73_Crate_Small_Grenadier_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (Grenadier)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_Grenadier_CO.paa"
    };
    #include "transportItems\Grenadier.hpp"
};
class STB73_Crate_Small_CQB_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (CQB)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_CQB_CO.paa"
    };
    #include "transportItems\CQB.hpp"
};
class STB73_Crate_Small_EOD_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (EOD)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_EOD_CO.paa"
    };
    #include "transportItems\EOD.hpp"
};
class STB73_Crate_Small_Sniper_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (Sniper)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_Sniper_CO.paa"
    };
    #include "transportItems\Sniper.hpp"
};
class STB73_Crate_Small_AT_Olive : STB73_Crate_Small_Base_Olive
{
    displayName = "[73] Ammo Crate (AT)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\small_crate\Crate_Small_AT_CO.paa"
    };
    #include "transportItems\AT.hpp"
};

/// LARGE SPACE CRATE PALLET
class STB73_Space_Crate_Pallet_Large_Base : Land_TCP_Space_Crate_Pallet_Large_01_Olive
{
    author = AUTHOR;
    displayName = "[73] Space Crate Pallet";
    scope = 2;
    scopeCurator = 2;
    faction = "STB73_STB";
    editorCategory = "STB73_Objects";
    editorSubcategory = "STB73_Crates_EdSubCat";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_01_CO.paa",
        "\TCP\Props\Military\Equipment\Space_Crate_01\data\camo\default\Space_Crate_Pallet_01_CO.paa"
    };
    ace_cargo_size = 6; //How much ACE Cargo space does it consume?
    ace_cargo_canLoad = 1; //Enables it to be load
    ace_cargo_blockUnloadCarry = 0; //Should you be able to carry it on unload?
    ace_cargo_space = 16; //How much ACE Cargo space does it have for storing items?
    ace_cargo_hasCargo = 1; //Enables it to have items be loaded into it
    ace_dragging_canDrag=0;
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
    class UserActions : UserActions
    {
        class PelLift_MaglockCrate
        {
            displayName = "Maglock to Pelican";
            displayNameDefault = "Maglock to Pelican";
            textToolTip = "Maglock to Pelican";
            position = "";
            showWindow = 0;
            radius = 5;
            priority = 2;
            onlyForPlayer = 1;
            condition = "(vehicle player == player) AND ((count (nearestObjects [this, [""STB73_D77_TC_Pelican""], 15])) > 0) AND (str ((nearestObjects [this, [""STB73_D77_TC_Pelican""], 15] select 0) getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"")";
            statement = "private _pel = (nearestObjects [this, [""STB73_D77_TC_Pelican""], 15]) select 0; 0 = [_pel, this] spawn STB73_fnc_PelicanLoadValidate;";
        };
    };
};
class STB73_Space_Crate_Pallet_Large_RRR : STB73_Space_Crate_Pallet_Large_Base
{
    author = AUTHOR;
    displayName = "[73] Space Crate Pallet (RRR)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_01_CO.paa",
        "\TCP\Props\Military\Equipment\Space_Crate_01\data\camo\default\Space_Crate_Pallet_01_CO.paa"
    };
    ace_dragging_canDrag=1;
    class ace_cargo {
        class cargo {
            class STB73_Space_Crate_Repair_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Repair_Olive";
                amount = 1;
            };
            class STB73_Space_Crate_Resupply_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Resupply_Olive";
                amount = 1;
            };
            class STB73_Space_Crate_Refuel_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Refuel_Olive";
                amount = 2;
            };
        };
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Logistics";
            vehicle = "Crates";
            Type = "Reares/Refuel/Repair";
            cost = 0;
            priority = 1;
        };
    };
};
class STB73_Space_Crate_Pallet_Large_Ammo : STB73_Space_Crate_Pallet_Large_Base
{
    author = AUTHOR;
    displayName = "[73] Space Crate Pallet (Ammo)";
    hiddenSelectionsTextures[] = 
    {
        "z\73STB\addons\objects\data\space_crate\Space_Crate_01_CO.paa",
        "\TCP\Props\Military\Equipment\Space_Crate_01\data\camo\default\Space_Crate_Pallet_01_CO.paa"
    };
    class VehicleSpawnerInfo {
        class STB73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Logistics";
            vehicle = "Crates";
            Type = "Ammo";
            cost = 0;
            priority = 1;
        };
    };
    class ace_cargo {
        class cargo {
            class STB73_Space_Crate_Rifles_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Rifles_Olive";
                amount = 1;
            };
            class STB73_Space_Crate_Medical_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Medical_Olive";
                amount = 1;
            };
            class STB73_Space_Crate_CQB_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_CQB_Olive";
                amount = 1;
            };
            class STB73_Space_Crate_Explosives_Olive { // Doesn't have to have the same name as the item you're adding
                type = "STB73_Space_Crate_Explosives_Olive";
                amount = 1;
            };
        };
    };
};
