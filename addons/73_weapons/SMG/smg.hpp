class MA_M7_SMG;
class OPTRE_M6DS_Carbine_Foregrip_Black_F;

class 73_M7_SMG_salmon: MA_M7_SMG {
    author= "73rd S-4 Team";
    displayName = "[73] M7S SMG [Salmon]"
    baseWeapon="73_M7_SMG_salmon"
    magazineWell[]={
    "73_M7_SMG"
    };
    hiddenSelections[]={
    "M7_Addons",
    "M7_Body",
    "M7_Scope_Glass"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M7";
        Variant="Salmon";
    };
    hiddenSelectionsTextures[]=
    {
        "73_weapons\data\M7\m7_smg_addons_cus_salmon_CO.paa",
        "73_weapons\data\M7\m7_smg_body_cus_salmon_CO.paa",
        "73_weapons\data\M7\m7_smg_optic_cus_salmon.paa"
    };
}
//class 73_M7_SMG_Vargas: MA_M7_SMG {
//    author= "73rd S-4 Team";
//    displayName = "[73] M7S SMG [Vargas]"
//    baseWeapon="73_M7_SMG_Vargas"
//    magazineWell[]={
//    "73_M7_SMG"
//    };
//    hiddenSelections[]={
//    "M7_Addons",
//    "M7_Body",
//    "M7_Scope_Glass"
//    };
//    class XtdGearInfo
//    {
//        Model="73_ACE_M7";
//        Variant="Vargas";
//    };
//    hiddenSelectionsTextures[]=
//    {
//        "73_weapons\data\M7\m7_smg_addons_cus_Vargas_CO.paa",
//        "73_weapons\data\M7\m7_smg_body_cus_Vargas_CO.paa",
//        "73_weapons\data\M7\m7_smg_optic_cus_salmon.paa"
//    };
//}
class 73_M7_SMG_solaman: MA_M7_SMG {
    author= "73rd S-4 Team";
    displayName = "[73] M7S SMG [Solaman]"
    baseWeapon="MA_M7_SMG"
    magazineWell[]={
    "73_M7_SMG_solaman"
    };
    hiddenSelections[]={
    "M7_Addons",
    "M7_Body",
    "M7_Scope_Glass"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M7";
        Variant="Solaman";
    };
    hiddenSelectionsTextures[]=
    {
        "73_weapons\data\M7\m7_smg_addons_cus_Solaman.paa",
        "73_weapons\data\M7\m7_smg_body_cus_Solaman.paa",
        "73_weapons\data\M7\m7_smg_optic_cus_salmon.paa"
    };
}
class 73_M7_SMG: MA_M7_SMG {
    author= "73rd S-4 Team";
    displayName = "[73] M7S SMG"
    baseWeapon="73_M7_SMG"
    magazineWell[]={
    "73_M7_SMG"
    };
    magazines[] =
    {
        "73_48Rnd_5x23Caseless_FMJ_Mag",
        "73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
        "73_60Rnd_5x23Caseless_FMJ_Mag",
        "73_60Rnd_5x23Caseless_FMJ_Mag_Tracer"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M7";
        Variant="Standard";
    };
    modes[]=
    {
        "Single",
        "FullAuto"
    };
    class Single: Mode_SemiAuto
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
        minRangeProbab=0.0099999998;
        midRange=200;
        midRangeProbab=0.0099999998;
        maxRange=400;
        maxRangeProbab=0.0099999998;
        aiRateOfFire = 1.0;
        aiRateOfFireDistance = 100;
    };
    class FullAuto: Mode_FullAuto
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
        minRangeProbab=0.0099999998;
        midRange=200;
        midRangeProbab=0.0099999998;
        maxRange=400;
        maxRangeProbab=0.0099999998;
    };
};
class OPTRE_M6DS_Carbine_Foregrip_Black_F_F:OPTRE_M6DS_Carbine_Foregrip_Black_F
{
    class WeaponSlotsInfo;
};
class 73_M6DS_Carbine_Foregrip : OPTRE_M6DS_Carbine_Foregrip_Black_F_F
{
    author= "73rd S-4 Team";
    baseWeapon 	= "73_M6DS_Carbine_Foregrip";
    displayName = "[73] M6DS Carbine";
    scope = 2;
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons_Pistols\M6D\Data\camo\black\M6D_Main_co.paa",
        "\OPTRE_Weapons_Pistols\M6D\Data\M6D_Emmisve_co.paa",
        "\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa",
        "\OPTRE_Weapons_Pistols\M6D_Carbine\Data\colors\black\Furniture_co.paa"
    };
    magazines[] = {"73_12Rnd_127x40_Mag_Black_Tracer"};
    magazineWell[]={"73_M6D"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: OPTRE_MuzzleSlot
        {
            compatibleitems[] =
                {
                    "OPTRE_M6D_Carbine_Suppressor",
                    "OPTRE_M6D_Carbine_Brake"
                };
        };
        class CowsSlot: OPTRE_CowsSlot_Rail
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
        class PointerSlot: OPTRE_Pointers
        {
            compatibleitems[] =
            {
                "OPTRE_M6D_Carbine_Flashlight",
                "OPTRE_M6D_Carbine_IR",
                "OPTRE_M6D_Carbine_Vis_Red"
            };
        };
        class UnderBarrelSlot: OPTRE_UnderBarrelSlot_rail
        {
            compatibleitems[] = {};
        };
        mass = 60;
    };
};
