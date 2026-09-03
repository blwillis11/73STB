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

class OPTRE_Pelican_armed_SOCOM;
class STB73_D77H_SOCOM_Pelican: OPTRE_Pelican_armed_SOCOM
{
    displayName = "[73] D77-TC Pelican";
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
            init = "[(_this select 0),true,true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class STB73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Pelican";
            Type = "Standard";
            cost = 3;
            priority = 1;
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
