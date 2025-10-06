class OPTRE_M90A;
class TCP_sgun_M45;
class TCP_sgun_M45E;

class STB73_M90A : OPTRE_M90A
{
    author= "73rd S-4 Team";
    displayName = "[73] M90A CAWS Shotgun";
    fireSpreadAngle	= 1;
    canShootInWater=1;
    baseWeapon 		= "STB73_M90A";
    magazineWell[]={
        "STB73_shotgun"
    };
    magazines[]=
    {
        "STB73_6Rnd_8Gauge_Pellets"
    };
    hiddenSelections[]= {
        "camo",
        "camo_reticle"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\shotgun\data\m90_co.paa",
        "#(argb,8,8,3)color(0.215686,0.945098,0.984314,1.0,co)"
    };
    class WeaponSlotsInfo
    {
        class MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot
        {
            compatibleitems[]=
            {
                "optic_Holosight",
                "optic_Holosight_smg",
                "optic_Holosight_blk_F",
                "optic_Holosight_khk_F",
                "optic_Holosight_smg_blk_F",
                "optic_Holosight_smg_khk_F",
                "OPTRE_M7_Sight",
                "OPTRE_M12_Optic",
                "OPTRE_M12_Optic_Red",
                "OPTRE_M12_Optic_Green",
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
            compatibleitems[]=
            {
                "OPTRE_M7_Flashlight",
                "OPTRE_M7_Laser",
                "OPTRE_M7_Vis_Red_Laser",
                "OPTRE_BMR_Laser",
                "OPTRE_BMR_MEQ_Flashlight",
                "OPTRE_BMR_Vis_Red_Laser",
                "optre_m12_laser",
                "OPTRE_M12_Vis_Red_Laser",
                "OPTRE_M12_Flashlight",
                "optre_m45_flashlight",
                "optre_m45_flashlight_red",
                "OPTRE_M6C_Laser",
                "OPTRE_M6C_Vis_Red_Laser",
                "OPTRE_M6C_Flashlight",
                "OPTRE_M6G_Laser",
                "OPTRE_M6G_Vis_Red_Laser",
                "OPTRE_M6G_Flashlight",
                "acc_pointer_ir",
                "acc_flashlight",
                "ace_acc_pointer_green"
            };
        };
    };
};
class STB73_M45: TCP_sgun_M45
{
    baseWeapon="STB73_M45";
    displayName="[73] M45 Tactical Shotgun";
    author= AUTHOR;
    canShootInWater=1;
    magazineWell[]={
        "STB73_shotgun"
    };
    magazines[]=
    {
        "STB73_6Rnd_8Gauge_Pellets"
    };
};
class STB73_M45E: TCP_sgun_M45E
{
    baseWeapon="STB73_M45E";
    displayName="[73] M45E Combat Shotgun";
    canShootInWater=1;
    author= AUTHOR;
    magazineWell[]={
        "STB73_shotgun"
    };
    magazines[]=
    {
        "STB73_6Rnd_8Gauge_Pellets"
    };
};
