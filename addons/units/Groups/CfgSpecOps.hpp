class SpecOps
{
    name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";

    class DOUBLES(FACTION,BUS_SmallTeam_UAV)
    {
        name = "$STR_A3_cfggroups_uavteam_smallUAV";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_UAV));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = "B_UAV_01_F";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_ReconTeam_UGV)
    {
        name = "$STR_A3_cfggroups_uavteam_reconUGV";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_UAV));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = "B_UGV_01_F";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_AttackTeam_UGV)
    {
        name = "$STR_A3_cfggroups_uavteam_attackUGV";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_UAV));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = "B_UGV_01_rcws_F";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_ReconTeam_UAV)
    {
        name = "$STR_A3_cfggroups_uavteam_reconUAV";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_UAV));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = "B_UAV_02_F";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_AttackTeam_UAV)
    {
        name = "$STR_A3_cfggroups_uavteam_attackUAV";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_UAV));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = "B_UAV_02_CAS_F";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };
};