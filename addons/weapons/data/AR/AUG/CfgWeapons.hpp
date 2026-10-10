class CfgWeapons
{
    class Rifle_Base_F;
    class STB73_arifle_AUGA7: Rifle_Base_F {
        displayName = "[73] AUG A7";
        baseWeapon 	= "STB73_arifle_AUGA7";
        model = "z\73STB\addons\weapons\data\AR\AUG\AugA7.p3d";
        scope = 2;
        selectionFireAnim = "zasleh";
        hiddenSelectionMaterial = "z\73STB\addons\weapons\data\AR\AUG\camo\Aug7_01.rvmat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"z\73STB\addons\weapons\data\AR\AUG\camo\AugA7_CO.paa"};
        magazineReloadSwitchPhase = 0.46296;
        magazineReloadSpeed = 1.8;
        handAnim[]=
        {
            "OFP2_ManSkeleton",
            "z\73STB\addons\weapons\data\AR\AUG\anim\AugA7HandAnim.rtm"
        };
        reloadAction = "GestureReloadAugA7";
        magazines[] = {"STB73_30Rnd_68x51_Mag"};
        magazineWell[] = {"STB73_30Rnd_68x51_MagWell"};

        cursor = "TCP_srifle_VK78";

        picture = "\z\73STB\addons\weapons\data\AR\AUG\ui\icon_AUGA7_ca.paa";
        pictureWire = "\z\73STB\addons\weapons\data\AR\AUG\ui\icon_AUGA7_W_ca.paa";

        initSpeed = __EVAL(INITSPEED);

        canShootInWater = 1;

        modes[] =
        {
            "FullAuto",
            "FullAuto_Close_Optics",
            "Single",
            "Single_Close_Optics",
            "Single_Medium_Optics",
            "Single_Far_Optics"
        };

        drySound[] = {"tcp\sounds\arsenal\weapons\LongRangeRifles\VK78\VK78_Dry_01.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"tcp\sounds\arsenal\weapons\LongRangeRifles\VK78\VK78_Reload_01.ogg",1.0,1,10};
        changeFiremodeSound[] = {"tcp\sounds\arsenal\weapons\LongRangeRifles\VK78\VK78_Firemod_01.ogg",0.31622776,1,5};

        //--- Attachments change weapon classname using the following structure
		class TCP_weaponTypes
		{
			//--- Slot information to examine
			class CowSlot
			{
				//--- Suffix for asset
				class A7_Scope
				{
					//--- Items that will change weapon to alternative class
					class compatibleItems
					{
						STB73_optic_A7Scope = 1;
					};
				};
			};
		};

        // Weapons attachments
        class WeaponSlotsInfo
        {
            allowedSlots[] = {901}; // 701 is vest, 801 is uniform, and 901 is backpack
            mass = EVAL_WEIGHT; // Pounds (lbs)
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[] = {0.0,0.45};
                iconScale = 0.2;
            };
            class MuzzleSlot: asdg_MuzzleSlot_95
            {
                iconPosition[] = {0.0,0.45};
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
                iconPosition[] = {0.0,0.45};
                iconScale = 0.2;
            };
            class UnderBarrelSlot: asdg_UnderSlot
            {
                iconPosition[] = {0.0,0.45};
                iconScale = 0.2;
            };
        };

        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    "TCP_VK78_Shot_SoundSet",
                    "TCP_VK78_tail_SoundSet",
                    "TCP_VK78_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    "TCP_VKSup_Shot_SoundSet",
                    "TCP_VKSup_tail_SoundSet",
                    "TCP_VKSup_InteriorTail_SoundSet"
                };
            };

            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.5;

            reloadTime = __EVAL(RELOADTIME);
            dispersion = __EVAL(DISPERSION);
        };
        class Single_Close_Optics: Single
        {
            showToPlayer = 0;

            aiRateOfFire = 2;
            aiRateOfFireDistance = 250;

            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 250;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.01;

            requiredOpticType = 1;
        };
        class Single_Medium_Optics: Single_Close_Optics
        {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;

            minRange = 250;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;

            requiredOpticType = 1;

        };
        class Single_Far_Optics: Single_Close_Optics
        {
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;

            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.5;
            maxRange = 800;
            maxRangeProbab = 0.05;

            requiredOpticType = 2;
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    "TCP_VK78_Shot_SoundSet",
                    "TCP_VK78_tail_SoundSet",
                    "TCP_VK78_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    "TCP_VKSup_Shot_SoundSet",
                    "TCP_VKSup_tail_SoundSet",
                    "TCP_VKSup_InteriorTail_SoundSet"
                };
            };

            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;


            reloadTime = __EVAL(RELOADTIME);
            dispersion = __EVAL(DISPERSION);
        };
        class FullAuto_Close_Optics: FullAuto
        {
            showToPlayer = 0;

            aiBurstTerminable = 1;
            burst = 3;

            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;

            requiredOpticType = 1;
        };
    };
    class STB73_arifle_AUGA7_A7_Scope: STB73_arifle_AUGA7 {
        baseWeapon 	= "STB73_arifle_AUGA7_A7_Scope";
        scope = 2;

        model = "z\73STB\addons\weapons\data\AR\AUG\AugA7Scope.p3d";

        class linkedItems
        {
            class LinkedOptic
            {
                slot = "CowsSlot";
                item = "STB73_optic_A7Scope";
            };
        };
    };
};