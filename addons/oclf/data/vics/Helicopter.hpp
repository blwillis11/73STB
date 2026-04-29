class OPTRE_INS_MH_144_Falcon;
class EventHandlers;
class STB73_MH144_Falcon_Innie: OPTRE_INS_MH_144_Falcon
{
    displayName = "[OCLF] MH-144 Falcon";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBSTB73_fnc_RegisterThrusters;";
        };
    };
    crew = "OCLF_Crewman";
    class UserActions
    {
        #include "cfg\ThrusterActions.hpp"
    };
};
class OPTRE_UNSC_falcon_S_ins;
class STB73_UH144S_Falcon_Innie: OPTRE_UNSC_falcon_S_ins
{
    displayName = "[OCLF] UH-144S Falcon";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBSTB73_fnc_RegisterThrusters;";
        };
    };
    crew = "OCLF_Crewman";
    class UserActions
    {
        #include "cfg\ThrusterActions.hpp"
    };
};

class DMNS_UNSC_Nightingale;
class STB73_EV41_Innie: DMNS_UNSC_Nightingale
{
    displayName = "[OCLF] EV-41 Nightingale";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    hiddenSelectionsTextures[] = {"\z\73STB\addons\oclf\data\vics\nightingale\Nightingale_Base_co.paa"};
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBSTB73_fnc_RegisterThrusters;";
        };
    };
    crew = "OCLF_Crewman";
    class UserActions
    {
        #include "cfg\ThrusterActions.hpp"
    };
};

class TKE_Ext_Dragonfly_A_Innie;
class STB73_AH44_Dragonfly_Innie: TKE_Ext_Dragonfly_A_Innie
{
    displayName = "[OCLF] AH-44/A Dragonfly";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBSTB73_fnc_RegisterThrusters;";
        };
    };
    crew = "OCLF_Crewman";
    class UserActions
    {
        #include "cfg\ThrusterActions.hpp"
    };
};

class OPTRE_Pelican_unarmed_ins;
class STB73_Pelican_Innie: OPTRE_Pelican_unarmed_ins
{
    displayName = "[OCLF] D77H-TCI Pelican";
    author= AUTHOR;
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    class EventHandlers: EventHandlers
    {
        class STB73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true] call STBSTB73_fnc_RegisterThrusters;";
        };
    };
    crew = "OCLF_Crewman";
    class UserActions
    {
        #include "cfg\ThrusterActions.hpp"
        class Afterburners900Engage
        {
            animPeriod=5;
            condition="(this getvariable [""STB73_Thrusters_Engaged"",false]) AND (!(this getvariable [""STB73_Afterburners_Engaged"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
            displayName="<t color='#04B45F'>Engage Afterburners";
            displayNameDefault="<t color='#04B45F'>Engage Afterburners";
            onlyForPlayer=0;
            position="cargo_door_handle";
            priority=10;
            radius=100000;
            showWindow=0;
            statement="0 = this spawn STB73_fnc_engageAfterburners";
            textToolTip="<t color='#04B45F'>Engage Afterburners";
            userActionID=54;
        };
        class Afterburners900Disengage
        {
            animPeriod=5;
            condition="(this getvariable [""STB73_Afterburners_Engaged"",false]) AND (player == driver this) AND (alive this)";
            displayName="<t color='#FCE205'>Disengage Afterburners";
            displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
            onlyForPlayer=0;
            position="cargo_door_handle";
            priority=10;
            radius=100000;
            showWindow=0;
            statement="0 = this spawn STB73_fnc_AfterburnersDisengage; 0 = this spawn STB73_fnc_ThrusterDeAnimate";
            textToolTip="<t color='#FCE205'>Disengage Afterburners";
            userActionID=55;
        };
    };
};