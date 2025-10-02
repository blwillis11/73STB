class MA_M7_SMG;
class OPTRE_M6DS_Carbine_Foregrip_Black_F;

class STB73_M7_SMG: MA_M7_SMG {
    author= "73rd S-4 Team";
    displayName = "[73] M7S SMG";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    baseWeapon="STB73_M7_SMG";
    magazineWell[]={
    "STB73_M7_SMG"
    };
    magazines[] =
    {
        "STB73_48Rnd_5x23Caseless_FMJ_Mag",
        "STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
        "STB73_60Rnd_5x23Caseless_FMJ_Mag",
        "STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer"
    };
    class XtdGearInfo
    {
        Model="STB73_ACE_M7";
        Variant="Standard";
    };
    modes[]=
    {
        "Single",
        "FullAuto"
    };
    class Single
    {
        sounds[]=
        {
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            weaponSoundEffect="DefaultRifle";
            closure1[]={};
            closure2[]={};
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1,
                150
            };
            begin2[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1.015,
                150
            };
            begin3[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                0.985,
                150
            };
            begin4[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1.01,
                150
            };
            begin5[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                0.995,
                150
            };
            soundBegin[]=
            {
                "begin1",
                0.20,
                "begin2",
                0.20,
                "begin3",
                0.20,
                "begin4",
                0.20,
                "begin5",
                0.20,
            };
            beginwater1[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1,
                1,
                150
            };
            soundBeginWater[]=
            {
                "beginwater1",
                1,
            };
        };
        reloadTime=0.066699997;
        dispersion=0.00075000001;
        minRange=2;
        minRangeProbab=0.25; // more likely to be used at very close range
        midRange=100;
        midRangeProbab=0.6; // reasonable chance at mid range
        maxRange=400;
        maxRangeProbab=0.05; // unlikely at extreme ranges
        aiRateOfFire = 1.0;
        aiRateOfFireDistance = 100;
    };
    class FullAuto
    {
        sounds[]=
        {
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            weaponSoundEffect="DefaultRifle";
            closure1[]={};
            closure2[]={};
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1,
                150
            };
            begin2[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1.015,
                150
            };
            begin3[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                0.985,
                150
            };
            begin4[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                1.01,
                150
            };
            begin5[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1.5,
                0.995,
                150
            };
            soundBegin[]=
            {
                "begin1",
                0.20,
                "begin2",
                0.20,
                "begin3",
                0.20,
                "begin4",
                0.20,
                "begin5",
                0.20,
            };
            beginwater1[]=
            {
                "A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
                1,
                1,
                150
            };
            soundBeginWater[]=
            {
                "beginwater1",
                1,
            };
        };
    reloadTime=0.0789;
    dispersion=0.00075;
    minRange=2;
    minRangeProbab=0.95; // prefer full-auto at very close range
    midRange=40;
    midRangeProbab=0.75; // still use auto at short-mid ranges
    maxRange=150;
    maxRangeProbab=0.1; // unlikely at longer ranges
    // Encourage AI to use FullAuto at short ranges
    aiRateOfFire = 0.1; // seconds between bursts (small value encourages burst/auto)
    aiRateOfFireDistance = 20; // prefer full auto within ~20m
    };
};
class OPTRE_M6DS_Carbine_Foregrip_Black_F_F:OPTRE_M6DS_Carbine_Foregrip_Black_F
{
    class WeaponSlotsInfo;
};
class STB73_M6DS_Carbine_Foregrip : OPTRE_M6DS_Carbine_Foregrip_Black_F_F
{
    author= "73rd S-4 Team";
    baseWeapon 	= "STB73_M6DS_Carbine_Foregrip";
    displayName = "[73] M6DS Carbine";
    scope = 2;
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons_Pistols\M6D\Data\camo\black\M6D_Main_co.paa",
        "\OPTRE_Weapons_Pistols\M6D\Data\M6D_Emmisve_co.paa",
        "\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa",
        "\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa"
    };
    magazines[] = {"STB73_12Rnd_127x40_Mag_Black_Tracer"};
    magazineWell[]={"STB73_M6D"};
    class WeaponSlotsInfo
    {
        class MuzzleSlot
        {
            compatibleitems[] =
                {
                    "OPTRE_M6D_Carbine_Suppressor",
                    "OPTRE_M6D_Carbine_Brake"
                };
        };
        class CowsSlot
        {
            compatibleitems[]=
            {
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5 SmartLink",
                "Optre_Evo_Sight",
                "Optre_Evo_Sight_Covie",
                "Optre_Evo_Sight_Spartan",
                "Optre_Evo_Sight_Innie",
                "Optre_Evo_Sight_Yellow",
                "Optre_Evo_Sight_Riser",
                "Optre_Evo_Sight_Riser_Covie",
                "Optre_Evo_Sight_Riser_Spartan",
                "Optre_Evo_Sight_Riser_Innie",
                "Optre_Evo_Sight_Riser_Yellow",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_UNSC"
            };
        };
        class PointerSlot
        {
            compatibleitems[] =
            {
                "OPTRE_M6D_Carbine_Flashlight",
                "OPTRE_M6D_Carbine_IR",
                "OPTRE_M6D_Carbine_Vis_Red"
            };
        };
        class UnderBarrelSlot
        {
            compatibleitems[] = {};
        };
        mass = 60;
    };
};
