class Infantry
{
    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
    
    class DOUBLES(FACTION,BUS_InfSquad)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier));
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_LAT));
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_TL));
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_A));
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_InfSquad_Weapons)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_SL));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AR));
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_GL));
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "CORPORAL";
            position[] = {-10,-10,0};
        };
        class Unit6
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AAT));
            rank = "PRIVATE";
            position[] = {15,-15,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_A));
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
        class Unit7
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Medic));
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
    };
    class DOUBLES(FACTION,BUS_InfTeam)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_GL));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_LAT));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_InfTeam_AT)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AT));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AAT));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_InfTeam_AA)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_AA));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_InfSentry)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_GL));
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier));
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_ReconTeam)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_LAT));
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_JTAC));
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_exp));
            rank = "PRIVATE";
            position[] = {15,-15,0};
        };
    };
    class DOUBLES(FACTION,BUS_ReconPatrol)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";

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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
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
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Recon));
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };
    class DOUBLES(FACTION,BUS_ReconSentry)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_M));
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Recon));
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
    };
    class DOUBLES(FACTION,BUS_SniperTeam)
    {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";

        side = SIDE_ID;
        faction = QUOTE(FACTION);

        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Sniper));
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1
        {
            side = SIDE_ID;
            vehicle = QUOTE(DOUBLES(FACTION,Soldier_Spotter));
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
    };
};