class TKE_Ext_GUSA_Innie;
class STB73_HF35A_Mallard_Innie: TKE_Ext_GUSA_Innie
{
    displayName="[OCLF] HF-35/A Mallard";
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Planes_EdSubCat";
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

class I_Plane_Fighter_04_F;
class STB73_JAS39_Innie: I_Plane_Fighter_04_F
{
    displayName="[OCLF] JAS-39 Duckling";
    faction = "OCLF";
    editorCategory = "OCLF_EdCat";
    editorSubcategory = "STB73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=0;
    hiddenSelectionsTextures[] = 
    {
        "\z\73STB\addons\oclf\data\vics\duckling\Fighter_04_fuselage_01_co.paa",
        "a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa",
        "a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
    };
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
