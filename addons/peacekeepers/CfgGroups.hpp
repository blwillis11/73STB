class CfgGroups 
{
    class INDEPENDENT
    {
        class STB73_PK
        {
            name = "[73] UN Peackeeper Forces";
            class PK_Infantry
            {
                name = "Peacekeeper Infantry";

                class STB73_Peacekeeper_Sentry
                {
                    name = "[73] Peacekeeper Sentry";
                    side = 2;
                    faction = "STB73_PK";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Rifleman";
                    };
                    class Unit1
                    {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Rifleman";
                    };
                };

                class STB73_Peacekeeper_Fireteam
                {
                    name = "[73] Peacekeeper Fireteam";
                    side = 2;
                    faction = "STB73_PK";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Rifleman";
                    };
                    class Unit1
                    {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Rifleman";
                    };
                    class Unit2
                    {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Medic";
                    };
                    class Unit3
                    {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_RTO_Operator";
                    };
                    class Unit4
                    {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STB73_Peacekeeper_Team_Lead";
                    };
                };
            };
        };
    };
};
