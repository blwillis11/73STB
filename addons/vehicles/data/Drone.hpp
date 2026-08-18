class OPTRE_OQ40_Minibee_UNSC;

class STB73_OQ40_Minibee: OPTRE_OQ40_Minibee_UNSC
{
    displayName="[73] OQ-40 'Minibee'";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory = "STB73_Drones_EdSubCat";
    fuelCapacity=100;
    arc_mode = "SAT";
    arc_noBattery = 1;
    arc_isr = "arc_isr_fnc_vanilla";
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "STB73_OQ40_Minibee_Backpack_UNSC"
        };
    };
    class ACE_Actions
    {
        class ACE_MainActions
        {
            selection="interaction_point";
            distance=5;
            condition="(true)";
            class ACE_Pickup
            {
                selection="";
                displayName="Pick Up Minibee";
                distance=5;
                condition="(alive _target)";
                statement="[_player, _target, 'STB73_OQ40_Minibee_Drone_Item'] call OPTRE_ace_fnc_pick_up_vic";
                showDisabled=0;
                exceptions[]={};
                icon="\OPTRE_Vehicles_Air_Drone\OQ40_Minibee\data\OQ-40_Icon.paa";
            };
            class ace_repair_Repair
            {
                displayName="Repair";
                condition="true";
                statement="";
                runOnHover=1;
                showDisabled=0;
                icon="\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
                distance=4;
                exceptions[]=
                {
                    "isNotSwimming",
                    "isNotOnLadder"
                };
            };
        };
    };
};
class assembleInfo;
class OPTRE_OQ40_Minibee_Backpack_UNSC;
class STB73_OQ40_Minibee_Backpack_UNSC: OPTRE_OQ40_Minibee_Backpack_UNSC
{
    author= AUTHOR;
    displayName="[73] OQ-40 Minibee Drone";
    faction = "STB73_STB";
    class assembleInfo: assembleInfo
    {
        base="";
        displayName="[73] OQ-40 Minibee";
        assembleTo="STB73_OQ40_Minibee";
    };
};
