class MEU_F29_Nandao_VTOL;
class STB73_F29_Nandao_VTOL : MEU_F29_Nandao_VTOL
{
    displayName="[73] F-29 Nandao VTOL";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_ODST_U_Pilot";
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call STB73_fnc_RegisterThrusters;";
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
            vehicle = "F-29 Nandao";
            Type = "VTOL";
            cost = 5;
            priority = 2;
        };
    };
};

class OPTRE_YSS_1000_A_VTOL_Single;
class STB73_YSS_1000_A_VTOL_Single: OPTRE_YSS_1000_A_VTOL_Single
{
    displayName="[73] YSS-1000-AS [VTOL]";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "STB73_ODST_U_Pilot";
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call STB73_fnc_RegisterThrusters;";
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
            vehicle = "YSS-1000-AS";
            Type = "VTOL";
            cost = 5;
            priority = 2;
        };
    };
};