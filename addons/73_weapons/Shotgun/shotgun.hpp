class OPTRE_M90A;
class OPTRE_M45;
class OPTRE_M45A;
class OPTRE_M45TAC;
class OPTRE_M45ATAC;
class OPTRE_M45E;

class 73_M90A : OPTRE_M90A
{
    author= "73rd S-4 Team";
    displayName = "[73] M90A CAWS Shotgun";
    fireSpreadAngle	= 1;
    canShootInWater=1;
    baseWeapon 		= "73_M90A";
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    hiddenSelections[]= {
        "camo",
        "camo_reticle"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\shotgun\data\m90_co.paa",
        "#(argb,8,8,3)color(0.215686,0.945098,0.984314,1.0,co)"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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
class 73_M45A: OPTRE_M45A
{
    baseWeapon="73_M45A";
    displayName="[73] M45A Semi Automatic Shotgun";
    canShootInWater=1;
    author= "73rd S-4 Team";
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M45";
        Variant="M45A";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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
class 73_M45TAC: OPTRE_M45TAC
{
    baseWeapon="73_M45TAC";
    displayName="[73] M45 Combat Shotgun (Tactical)";
    canShootInWater=1;
    author= "73rd S-4 Team";
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M45";
        Variant="M45TAC";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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
class 73_M45: OPTRE_M45
{
    baseWeapon="73_M45";
    displayName="[73] M45X Tactical Shotgun";
    author= "73rd S-4 Team";
    canShootInWater=1;
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M45";
        Variant="M45";
    };
    magazineReloadTime=5;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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
class 73_M45ATAC: OPTRE_M45ATAC
{
    baseWeapon="73_M45ATAC";
    displayName="[73] M45A Semi Automatic Shotgun (Tactical)";
    canShootInWater=1;
    author= "73rd S-4 Team";
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M45";
        Variant="M45ATAC";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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
class 73_M45E: OPTRE_M45E
{
    baseWeapon="73_M45E";
    displayName="[73] M45E Combat Shotgun";
    canShootInWater=1;
    author= "73rd S-4 Team";
    magazineWell[]={
        "73_shotgun"
    };
    magazines[]=
    {
        "73_6Rnd_8Gauge_Pellets"
    };
    class XtdGearInfo
    {
        Model="73_ACE_M45";
        Variant="M45E";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
            };
        };
        class CowsSlot: CowsSlot
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
        class PointerSlot: PointerSlot
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