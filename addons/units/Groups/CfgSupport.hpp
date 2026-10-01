class Support
{
    name = "$STR_A3_CfgGroups_West_BLU_F_Support0";

    class DOUBLES(FACTION,BUS_Support_CLS)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_Support_EOD)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Engineer));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_Support_ENG)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Engineer));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Engineer));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Repair));
            rank = "PRIVATE";
            position[] = {10,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_Recon_EOD)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Recon));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_Support_MG)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_MG));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AMG));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_Support_GMG)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_GMG));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AMG));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_Support_Mort)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Mort));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AMort));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
};