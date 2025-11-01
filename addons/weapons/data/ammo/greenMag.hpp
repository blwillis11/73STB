    class CBA_MiscItem_ItemInfo;
    class greenmag_core;
    class greenmag_core_1Rnd;
    class greenmag_core_10Rnd;
    class greenmag_core_20Rnd;
    class greenmag_core_30Rnd;
    class greenmag_core_12Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=2.2;
        };
    };
    class greenmag_core_15Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=2.5;
        };
    };
        class greenmag_core_32Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=5.2;
        };
    };
    class greenmag_core_36Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=5.5;
        };
    };
    class greenmag_core_48Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=7.5;
        };
    };
    class greenmag_core_60Rnd;
    class greenmag_core_100Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=15;
        };
    };
    class greenmag_core_200Rnd: greenmag_core
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=30;
        };
    };

    class greenmag_ammo_762x51_tracer_yellow_1Rnd: greenmag_core_1Rnd
    {
        displayName="7.62x51mm Basic (Yellow Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
		scopeCurator=2;
        picture="\z\greenmag\addons\main\data\762mm.paa";
    };
    class greenmag_ammo_762x51_tracer_yellow_30Rnd: greenmag_core_30Rnd
    {
        displayName="7.62x51mm Basic (Yellow Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
		scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_762x51_tracer_yellow_60Rnd: greenmag_core_60Rnd
    {
        displayName="7.62x51mm Basic (Yellow Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
		scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_762x51_tracer_yellow_100Rnd: greenmag_core_100Rnd
    {
        displayName="7.62x51mm Basic (Yellow Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    };

    class greenmag_ammo_95x40_tracer_1Rnd: greenmag_core_1Rnd
    {
        displayName="9.5x40mm Basic (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\556mm.paa";
    };
    class greenmag_ammo_95x40_tracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="9.5x40mm Basic (Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_1Rnd";
    };
    class greenmag_ammo_95x40_tracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="9.5x40mm Basic (Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_1Rnd";
    };
    class greenmag_ammo_95x40_tracer_100Rnd: greenmag_core_100Rnd
    {
        displayName="9.5x40mm Basic (Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_1Rnd";
    };

    class greenmag_ammo_95x40_tracer_yellow_1Rnd: greenmag_core_1Rnd
    {
        displayName="9.5x40mm Basic (Yellow Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\556mm.paa";
    };
    class greenmag_ammo_95x40_tracer_yellow_30Rnd: greenmag_core_30Rnd
    {
        displayName="9.5x40mm Basic (Yellow Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_95x40_tracer_yellow_60Rnd: greenmag_core_60Rnd
    {
        displayName="9.5x40mm Basic (Yellow Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_95x40_tracer_yellow_100Rnd: greenmag_core_100Rnd
    {
        displayName="9.5x40mm Basic (Yellow Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_tracer_yellow_1Rnd";
    };

    class greenmag_ammo_95x40_IRtracer_1Rnd: greenmag_core_1Rnd
    {
        displayName="9.5x40mm Basic (IR Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\556mm.paa";
    };
    class greenmag_ammo_95x40_IRtracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="9.5x40mm Basic (IR Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_IRtracer_1Rnd";
    };
    class greenmag_ammo_95x40_IRtracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="9.5x40mm Basic (IR Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_IRtracer_1Rnd";
    };
    class greenmag_ammo_95x40_IRtracer_100Rnd: greenmag_core_100Rnd
    {
        displayName="9.5x40mm Basic (IR Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_95x40_IRtracer_1Rnd";
    };


	class greenmag_ammo_127x30_basic_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm Basic (1 round)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_basic_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm Basic (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_basic_1Rnd";
    };
    class greenmag_ammo_127x30_basic_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm Basic (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_basic_1Rnd";
    };
    class greenmag_ammo_127x30_basic_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm Basic (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_basic_1Rnd";
    };

	class greenmag_ammo_127x30_NARQ_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm NARQ (1 round)";
		scope=2;    
		scopeArsenal=2;
		scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_NARQ_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm NARQ (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_1Rnd";
    };
    class greenmag_ammo_127x30_NARQ_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm NARQ (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_1Rnd";
    };
    class greenmag_ammo_127x30_NARQ_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm NARQ (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_1Rnd";
    };

	class greenmag_ammo_127x30_NARQ_tracer_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm NARQ (Tracer) (1 round)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_NARQ_tracer_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm NARQ (Tracer) (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_tracer_1Rnd";
    };
    class greenmag_ammo_127x30_NARQ_tracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm NARQ (Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_tracer_1Rnd";
    };
    class greenmag_ammo_127x30_NARQ_tracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm NARQ (Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_NARQ_tracer_1Rnd";
    };

	class greenmag_ammo_127x30_tracer_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm Basic (Tracer) (1 round)";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_tracer_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm Basic (Tracer) (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_1Rnd";
    };
    class greenmag_ammo_127x30_tracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm Basic (Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_1Rnd";
    };
    class greenmag_ammo_127x30_tracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm Basic (Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_1Rnd";
    };

	class greenmag_ammo_127x30_tracer_yellow_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm Basic (Yellow Tracer) (1 round)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_tracer_yellow_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm Basic (Yellow Tracer) (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_127x30_tracer_yellow_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm Basic (Yellow Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_127x30_tracer_yellow_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm Basic (Yellow Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_tracer_yellow_1Rnd";
    };

	class greenmag_ammo_127x30_IRtracer_1Rnd: greenmag_core_1Rnd
	{
		displayName="12.7x30mm Basic (IR Tracer) (1 round)";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		picture="\z\greenmag\addons\main\data\9mm.paa";
	};
    class greenmag_ammo_127x30_IRtracer_10Rnd: greenmag_core_10Rnd
    {
        displayName="12.7x30mm Basic (IR Tracer) (10 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_IRtracer_1Rnd";
    };
    class greenmag_ammo_127x30_IRtracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="12.7x30mm Basic (IR Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_IRtracer_1Rnd";
    };
    class greenmag_ammo_127x30_IRtracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="12.7x30mm Basic (IR Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_127x30_IRtracer_1Rnd";
    };

    
    class greenmag_ammo_5x23Caseless_basic_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm Basic (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_basic_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm Basic (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_basic_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_basic_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm Basic (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_basic_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_basic_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm Basic (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_basic_1Rnd";
    };

    class greenmag_ammo_5x23Caseless_tracer_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm Basic (Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_tracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm Basic (Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_tracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm Basic (Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_tracer_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm Basic (Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_1Rnd";
    };


    class greenmag_ammo_5x23Caseless_tracer_yellow_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm Basic (Yellow Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_tracer_yellow_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm Basic (Yellow Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_tracer_yellow_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm Basic (Yellow Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_yellow_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_tracer_yellow_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm Basic (Yellow Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_tracer_yellow_1Rnd";
    };


    class greenmag_ammo_5x23Caseless_IRtracer_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm Basic (IR Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_IRtracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm Basic (IR Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_IRtracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_IRtracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm Basic (IR Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_IRtracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_IRtracer_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm Basic (IR Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_IRtracer_1Rnd";
    };


    class greenmag_ammo_5x23Caseless_NARQ_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm NARQ (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_NARQ_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm NARQ (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_NARQ_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm NARQ (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_NARQ_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm NARQ (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_1Rnd";
    };

    class greenmag_ammo_5x23Caseless_NARQ_tracer_1Rnd: greenmag_core_1Rnd
    {
        displayName="5x23mm NARQ (Tracer) (1 round)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        picture="\z\greenmag\addons\main\data\45ACP.paa";
    };
    class greenmag_ammo_5x23Caseless_NARQ_tracer_30Rnd: greenmag_core_30Rnd
    {
        displayName="5x23mm NARQ (Tracer) (30 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_tracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_NARQ_tracer_60Rnd: greenmag_core_60Rnd
    {
        displayName="5x23mm NARQ (Tracer) (60 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_tracer_1Rnd";
    };
    class greenmag_ammo_5x23Caseless_NARQ_tracer_100Rnd: greenmag_core_100Rnd
    {
        displayName="5x23mm NARQ (Tracer) (100 rounds)";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        greenmag_ammotype="greenmag_ammo_5x23Caseless_NARQ_tracer_1Rnd";
    };