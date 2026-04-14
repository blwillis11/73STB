class OPTRE_UNSC_hornet_CAS;
class STB73_AV14_Hornet_CAS: OPTRE_UNSC_hornet_CAS
{
    displayName = "[73] AV-14 Hornet [CAS]";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Hornet";
            Type = "CAS";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};
class OPTRE_UNSC_hornet_CAP;
class STB73_AV14_Hornet_CAP: OPTRE_UNSC_hornet_CAP
{
    displayName = "[73] AV-14 Hornet [CAP]";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    crew = "STB73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Hornet";
            Type = "CAP";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};

class Splits_UNSC_D77_TC_Pelican;
class STB73_D77_TC_Pelican: Splits_UNSC_D77_TC_Pelican
{
    displayName = "[73] D77-TC Pelican";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "z\73STB\addons\vehicles\data\Pelican\body_co.paa",
        "z\73STB\addons\vehicles\data\Pelican\wings_and_gear_co.paa",
        "z\73STB\addons\vehicles\data\Pelican\weaponry_co.paa"
    };
    transportVehiclesCount = 2;  // Max vehicles loadable (e.g., 1 Warthog + 1 Mongoose)
    transportVehiclesMass = 10000;  // Total mass limit (kg); adjust for balance
    availableForSupportTypes[] = {"Drop"};  // Enables airdrop support
    transportVehicleAmmo = 0;  // No ammo transfer
    transportVehicleFuel = 0;  // No fuel transfer
    transportVehicleRepair = 0;  // No repair transfer
    class TransportVehicles {
        class Cargo1 {
            name = "FrontLeft";
            type = "STB73_M274_ATV";  // Example: Warthog class
            direction = "forward";  // Align forward in bay
            offset[] = {1.15, 6, 2.13};  // Relative offset from Pelican's center (tweak in editor)
            maxLoadCoefficient = 0.5;  // Full size allowed
        };
        class Cargo2 {
            name = "FrontRight";
            type = "STB73_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, 6, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo3 {
            name = "BackLeft";
            type = "STB73_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, 2.3, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo4 {
            name = "BackRight";
            type = "STB73_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {1.15, 2.3, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo5 {
            name = "BackLeft";
            type = "STB73_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, .45, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo6 {
            name = "BackRight";
            type = "STB73_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {1.15, .45, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo7 {
            name = "MainBayCenter";
            type = "STB73_SDV_ODST";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo8 {
            name = "MainBayCenter";
            type = "STB73_POGV_RCWS";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo9 {
            name = "MainBayCenter";
            type = "STB73_COGV_RCWS";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo10 {
            name = "MainBayCenter";
            type = "STB73_Space_Crate_Pallet_Large_Base";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo11 {
            name = "MainBayCenter";
            type = "STB73_Boat_Transport";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
    };
    class CargoAlignment {
        front[] = {"Cargo1"};  // Fill front first
        back[] = {"Cargo2"};
        center[] = {"Cargo7"};
    };
    class VehicleTransport
    {
    	class Carrier
    	{
    		//cargoBayDimensions[]		= { {1, 1.5, -1}, {-1, 6.5, -3.4} };			// alternatively, positions in model space (since 2.08)
    		cargoBayDimensions[]		= { {1.5, .5, -1}, {-1.5, 7.2, -3.4} };			// alternatively, positions in model space (since 2.08)
    		disableHeightLimit			= 1;								// If set to 1 disable height limit of transported vehicles
    		maxLoadMass					= 200000;							// Maximum cargo weight (in Kg) which the vehicle can transport
    		cargoAlignment[]			= { "front", "center"};				// Array of 2 elements defining alignment of vehicles in cargo space.
    																		// Possible values are left, right, center, front, back. Order is important.
    		cargoSpacing[]				= { 0, 1.85, 0 };					// Offset from X,Y,Z axes (in metres)
            transportVehiclesCount = 2;
    		exits[]					= { {0, -6, -4} };			// alternatively, positions in model space (since 2.08)

    		unloadingInterval			= 2;								// Time between unloading vehicles (in seconds)
    		loadingDistance				= 10;								// Maximal distance for loading in exit point (in meters).
    		loadingAngle				= 60;								// Maximal sector where cargo vehicle must be to for loading (in degrees).
    		parachuteClassDefault		= "B_Parachute_02_F";				// Type of parachute used when dropped in air. Can be overridden by parachuteClass in Cargo.
    		parachuteHeightLimitDefault	= 50;								// Minimal height above terrain when parachute is used. Can be overridden by parachuteHeightLimit in Cargo.

    		class CargoTypeWhitelist										// Whitelist. If this isn't empty, only listed vehicles (isKindOf) can load into (since 2.10)
     		{
     			STB73_M274_ATV = 1;
     			STB73_POGV_RCWS = 1;
     			STB73_COGV_RCWS = 1;
     			STB73_SDV_ODST = 1;													// In this case the transporter only carry boats, not cars or tanks etc
     			STB73_Space_Crate_Pallet_Large_Base = 1;
                STB73_Boat_Transport=1;
     		};
    	};
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Pelican";
            Type = "Standard";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""z\73STB\addons\vehicles\data\Pelican\body_co.paa"",""z\73STB\addons\vehicles\data\Pelican\wings_and_gear_co.paa"",""z\73STB\addons\vehicles\data\Pelican\weaponry_co.paa""]]",
            };
        };
    };
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\PelicanActions.hpp"
    };
};

class OPTRE_UNSC_falcon;

class STB73_UNSC_falcon:OPTRE_UNSC_falcon
{
    displayName = "[73] UH-144 Falcon [Unarmed]";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Aviator";
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Unarmed";
            cost = 0;
            priority = 2;
        };
    };
};

class OPTRE_UNSC_falcon_S;

class STB73_UNSC_falcon_S:OPTRE_UNSC_falcon_S
{
    displayName = "[73] UH-144S Falcon";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_Aviator";
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Side Guns";
            cost = 1;
            priority = 2;
        };
    };
};
class OPTRE_UNSC_MH_144_Falcon;

class STB73_UNSC_MH_144_Falcon:OPTRE_UNSC_MH_144_Falcon
{
    displayName = "[73] MH-144 Falcon";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front Gun";
            cost = 1;
            priority = 2;
        };
    };
};
class OPTRE_UNSC_MH_144S_Falcon;

class STB73_UNSC_MH_144S_Falcon:OPTRE_UNSC_MH_144S_Falcon
{
    displayName = "[73] MH-144S Falcon";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    radarIcon="MA_HUD\textures\radar\vehicles\pelican.paa";
    radarIconScale=3;
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front + Side Guns";
            cost = 1;
            priority = 2;
        };
    };
};

class OPTRE_AV22_Sparrowhawk;

class STB73_AV22_Sparrowhawk:OPTRE_AV22_Sparrowhawk
{
    displayName = "[73] AV-22M Sparrowhawk";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
	class UserActions
	{
	    #include "cfg\UtilityActions.hpp"
		#include "cfg\ThrusterActions.hpp"
	};
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22M";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22A_Sparrowhawk;

class STB73_AV22A_Sparrowhawk:OPTRE_AV22A_Sparrowhawk
{
    displayName = "[73] AV-22L Sparrowhawk";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22L";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22B_Sparrowhawk;

class STB73_AV22B_Sparrowhawk:OPTRE_AV22B_Sparrowhawk
{
    displayName = "[73] AV-22ML Sparrowhawk";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22ML";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22C_Sparrowhawk;

class STB73_AV22C_Sparrowhawk:OPTRE_AV22C_Sparrowhawk
{
    displayName = "[73] AV-22 Sparrowhawk";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22";
            cost = 2;
            priority = 2;
        };
    };
};

class TKE_Ext_Dragonfly_A;

class STB73_AV18_Dragonfly:TKE_Ext_Dragonfly_A
{
    displayName = "[73] AV-18 Dragonfly";
    author= AUTHOR;
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "STB73_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Dragonfly";
            Type = "AV-18";
            cost = 2;
            priority = 2;
        };
    };
};
