class I_LT_01_AT_F;
class 73_COP_Cult_ATGM_APC_import: I_LT_01_AT_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_ATGM_APC_base: 73_COP_Cult_ATGM_APC_import
{
    class AnimationSources: AnimationSources
    {
       class Missiles_revolving;
       class Missiles_reloadMagazine;
    };
};

class 73_COP_Cult_ATGM_APC: 73_COP_Cult_ATGM_APC_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult ATGM APC";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
        "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
        "a3\armor_f\data\camonet_aaf_digi_green_co.paa",
        "a3\armor_f\data\cage_olive_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_Radar_System_01_F;
class 73_COP_Cult_Radar_import: B_Radar_System_01_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Radar_base: 73_COP_Cult_Radar_import
{
    class AnimationSources: AnimationSources
    {
       class HitLFWheel;
       class HitLBWheel;
       class HitRFWheel;
       class HitRBWheel;
       class HitTurret;
       class HitHull;
    };
};

class 73_COP_Cult_Radar: 73_COP_Cult_Radar_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Radar";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Turrets_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\static_f_sams\radar_system_01\data\radar_system_01_mat_01_olive_co.paa",
        "a3\static_f_sams\radar_system_01\data\radar_system_01_mat_02_olive_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_AFV_Wheeled_01_cannon_F;
class 73_COP_Cult_Light_Tank_import: B_AFV_Wheeled_01_cannon_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Light_Tank_base: 73_COP_Cult_Light_Tank_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_hide_cannon;
       class muzzle_rot_cannon;
       class muzzle_rot_HMG;
       class cannon_120mm_revolving;
       class HitEngine_src;
       class HitFuel_src;
       class HitHull_src;
       class HitMainGun_src;
       class HitTurret_src;
       class HitComTurret_src;
       class HitSLAT_Left_1_src;
       class HitSLAT_Left_2_src;
       class HitSLAT_Left_3_src;
       class HitSLAT_Right_1_src;
       class HitSLAT_Right_2_src;
       class HitSLAT_Right_3_src;
       class HitSLAT_back_src;
       class HitSLAT_front_src;
       class showCamonetHull;
       class showCamonetCannon;
       class showCamonetTurret;
       class showSLATHull;
    };
};

class 73_COP_Cult_Light_Tank: 73_COP_Cult_Light_Tank_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Light Tank";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Tanks_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext1_green_co.paa",
        "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext2_green_co.paa",
        "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_wheel_green_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa",
        "a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext3_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showCamonetCannon: showCamonetCannon
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showSLATHull: showSLATHull
        {
            initPhase = 0;
        };
    };
};

class I_LT_01_cannon_F;
class 73_COP_Cult_MK20_APC_import: I_LT_01_cannon_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_MK20_APC_base: 73_COP_Cult_MK20_APC_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot;
       class muzzle_hide;
    };
};

class 73_COP_Cult_MK20_APC: 73_COP_Cult_MK20_APC_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult MK20 APC";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
        "a3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa",
        "a3\armor_f\data\camonet_aaf_digi_green_co.paa",
        "a3\armor_f\data\cage_olive_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_Heli_Transport_01_F;
class 73_COP_Cult_Transport_import: B_Heli_Transport_01_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class Turrets;
    class AnimationSources;
};

class 73_COP_Cult_Transport_base: 73_COP_Cult_Transport_import
{
    class AnimationSources: AnimationSources
    {
       class Door_L;
       class Door_R;
       class Holder;
       class Gun_HRot;
       class Gun_VRot;
       class Minigun;
       class Muzzle_flash;
       class Minigun2;
       class Muzzle_flash2;
       class HideGun1;
       class HideGun2;
       class HideExternalPylons;
    };
    class Turrets: Turrets
    {
       class CopilotTurret;
       class MainTurret;
       class RightDoorGun;
    };
};

class 73_COP_Cult_Transport: 73_COP_Cult_Transport_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Transport";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Helicopters_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext01_tropic_co.paa",
        "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext02_tropic_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class Door_L: Door_L
        {
            initPhase = 0;
        };
        class Door_R: Door_R
        {
            initPhase = 0;
        };
        class Holder: Holder
        {
            initPhase = 0;
        };
        class Gun_HRot: Gun_HRot
        {
            initPhase = 0;
        };
        class Gun_VRot: Gun_VRot
        {
            initPhase = 0;
        };
        class HideGun1: HideGun1
        {
            initPhase = 1;
        };
        class HideGun2: HideGun2
        {
            initPhase = 1;
        };
        class HideExternalPylons: HideExternalPylons
        {
            initPhase = 1;
        };
    };
    
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            gunnerType = "73_COP_Cult_Crewman";
        };
        class MainTurret: MainTurret
        {
            gunnerType = "73_COP_Cult_Crewman";
        };
        class RightDoorGun: RightDoorGun
        {
            gunnerType = "73_COP_Cult_Crewman";
        };
    };
};

class OPTRE_M12_LRV;
class 73_COP_Cult_LAAG_Hog_import: OPTRE_M12_LRV
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_LAAG_Hog_base: 73_COP_Cult_LAAG_Hog_import
{
    class AnimationSources: AnimationSources
    {
       class Gatling;
       class Gatling_flash;
       class showDoors;
    };
};

class 73_COP_Cult_LAAG_Hog: 73_COP_Cult_LAAG_Hog_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult LAAG Hog";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles\warthog\data\ins\gen_warthog_co.paa",
        "optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa",
        "optre_vehicles\warthog\data\ins\m12_turret_ins_co.paa",
        "optre_vehicles\warthog\data\decals_ca.paa",
        "optre_vehicles\warthog\data\m12hogmaav_interior_co.paa",
        "optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
        "optre_vehicles\warthog\data\turrets\sight_co.paa",
        "optre_vehicles\warthog\data\apc_lopo_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showDoors: showDoors
        {
            initPhase = 0;
        };
    };
};

class OPTRE_m1087_stallion_device_unsc;
class 73_COP_Cult_Device_Vehicle_import: OPTRE_m1087_stallion_device_unsc
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Device_Vehicle_base: 73_COP_Cult_Device_Vehicle_import
{
    class AnimationSources: AnimationSources
    {
       class HitLFWheel;
       class HitRFWheel;
       class HitLBWheel;
       class HitRBWheel;
       class HitLF2Wheel;
       class HitRF2Wheel;
       class HitLMWheel;
       class HitRMWheel;
       class HitGlass1;
       class HitGlass2;
       class HitGlass3;
       class HitGlass4;
       class HitGlass5;
       class HitGlass6;
       class HitBody;
       class HitEngine;
       class Gatling;
       class Gatling_flash;
       class cabinlights_hide;
       class turnout1;
       class turnout2;
       class turnout3;
       class Door_LF;
       class Door_RF;
       class Door_LR;
       class Door_RR;
    };
};

class 73_COP_Cult_Device_Vehicle: 73_COP_Cult_Device_Vehicle_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Device Vehicle";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
        "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
        "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
        "a3\structures_f_epc\items\electronics\data\the_device_02_co.paa",
        "a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class TKE_Ext_Bearcat_Unarmed;
class 73_COP_Cult_APC_carrier_import: TKE_Ext_Bearcat_Unarmed
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_APC_carrier_base: 73_COP_Cult_APC_carrier_import
{
    class AnimationSources: AnimationSources
    {
       class HitLFWheel;
       class HitLF2Wheel;
       class HitLF3Wheel;
       class HitRFWheel;
       class HitRF2Wheel;
       class HitRF3Wheel;
    };
};

class 73_COP_Cult_APC_carrier: 73_COP_Cult_APC_carrier_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult APC carrier";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "tke_ext_apc\data\apc_mdmc_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_APC_Tracked_01_AA_F;
class 73_COP_Cult_Bardelas_import: B_APC_Tracked_01_AA_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Bardelas_base: 73_COP_Cult_Bardelas_import
{
    class AnimationSources: AnimationSources
    {
       class Missiles_revolving;
       class Missiles_reloadMagazine;
       class muzzle_rot;
       class cannon_35mm_revolving;
       class showCamonetPlates1;
       class showCamonetPlates2;
       class showCamonetTurret;
       class showCamonetHull;
       class showBags;
    };
};

class 73_COP_Cult_Bardelas: 73_COP_Cult_Bardelas_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Bardelas";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Anti_Air_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_aa_body_olive_co.paa",
        "a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
        "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_aa_tower_olive_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCamonetPlates1: showCamonetPlates1
        {
            initPhase = 1;
        };
        class showCamonetPlates2: showCamonetPlates2
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showBags: showBags
        {
            initPhase = 0;
        };
    };
};

class TKE_Ext_Bearcat_Cannon;
class 73_COP_Cult_FSV_import: TKE_Ext_Bearcat_Cannon
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_FSV_base: 73_COP_Cult_FSV_import
{
    class AnimationSources: AnimationSources
    {
       class recoil_source;
    };
};

class 73_COP_Cult_FSV: 73_COP_Cult_FSV_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult FSV";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "tke_ext_apc\data\apc_mdmc_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class I_MBT_03_cannon_F;
class 73_COP_Cult_Leopard_2_import: I_MBT_03_cannon_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Leopard_2_base: 73_COP_Cult_Leopard_2_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot_cannon;
       class muzzle_rot_coax;
       class muzzle_rot_hmg;
       class muzzle_hide_coax;
       class recoil_source;
       class LockMuzzle;
       class HitEngine_src;
       class HitFuel_src;
       class HitHull_src;
       class HitMainGun_src;
       class HitTurret_src;
       class HitComTurret_src;
       class Smoke_source;
       class HitSLAT_Left_src;
       class HitSLAT_Right_src;
       class HitSLAT_back_src;
       class HitSLAT_front_src;
       class HitSLAT_top_left_src;
       class HitSLAT_top_right_src;
       class HitSLAT_top_back_src;
       class HideTurret;
       class HideHull;
       class showCamonetHull;
       class showCamonetCannon;
       class showCamonetCannon1;
       class showCamonetTurret;
    };
};

class 73_COP_Cult_Leopard_2: 73_COP_Cult_Leopard_2_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Leopard 2";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Tanks_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
        "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
        "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
        "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class LockMuzzle: LockMuzzle
        {
            initPhase = 0;
        };
        class HideTurret: HideTurret
        {
            initPhase = 0;
        };
        class HideHull: HideHull
        {
            initPhase = 0;
        };
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showCamonetCannon: showCamonetCannon
        {
            initPhase = 1;
        };
        class showCamonetCannon1: showCamonetCannon1
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
    };
};

class B_Heli_Light_01_F;
class 73_COP_Cult_Light_Transport_Helicopter_import: B_Heli_Light_01_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Light_Transport_Helicopter_base: 73_COP_Cult_Light_Transport_Helicopter_import
{
    class AnimationSources: AnimationSources
    {
       class AddBenches;
       class AddTread;
       class AddCivilian_hide;
    };
};

class 73_COP_Cult_Light_Transport_Helicopter: 73_COP_Cult_Light_Transport_Helicopter_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Light Transport Helicopter";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Helicopters_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_digital_co.paa",
        ""
    };
    
    class AnimationSources: AnimationSources
    {
        class AddBenches: AddBenches
        {
            initPhase = 1;
        };
        class AddTread: AddTread
        {
            initPhase = 1;
        };
        class AddCivilian_hide: AddCivilian_hide
        {
            initPhase = 0;
        };
    };
};

class B_MBT_01_cannon_F;
class 73_COP_Cult_Medium_Tank_import: B_MBT_01_cannon_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Medium_Tank_base: 73_COP_Cult_Medium_Tank_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_hide_cannon;
       class muzzle_rot_cannon;
       class HitComTurret_src;
       class showBags;
    };
};

class 73_COP_Cult_Medium_Tank: 73_COP_Cult_Medium_Tank_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Medium Tank";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Tanks_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_exp\mbt_01\data\mbt_01_body_olive_co.paa",
        "a3\armor_f_exp\mbt_01\data\mbt_01_tow_olive_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showBags: showBags
        {
            initPhase = 0;
        };
    };
};

class I_Boat_Armed_01_minigun_F;
class 73_COP_Cult_Armed_Boat_import: I_Boat_Armed_01_minigun_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Armed_Boat_base: 73_COP_Cult_Armed_Boat_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle2_source;
       class muzzle2_source_rot;
       class ReloadAnim;
       class ReloadMagazine;
       class Revolving;
    };
};

class 73_COP_Cult_Armed_Boat: 73_COP_Cult_Armed_Boat_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Armed Boat";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Boats_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\boat_f_beta\boat_armed_01\data\boat_armed_01_ext_indp_co.paa",
        "a3\boat_f_beta\boat_armed_01\data\boat_armed_01_int_indp_co.paa",
        "a3\boat_f_beta\boat_armed_01\data\boat_armed_01_crows_indp_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class TKE_Ext_Bearcat_Autocannon;
class 73_COP_Cult_IFV_import: TKE_Ext_Bearcat_Autocannon
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_IFV_base: 73_COP_Cult_IFV_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot1;
       class recoil_source;
    };
};

class 73_COP_Cult_IFV: 73_COP_Cult_IFV_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult IFV";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "tke_ext_apc\data\apc_mdmc_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_Truck_01_covered_F;
class 73_COP_Cult_HEMTT_Transport_import: B_Truck_01_covered_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_HEMTT_Transport_base: 73_COP_Cult_HEMTT_Transport_import
{
    class AnimationSources: AnimationSources
    {
       class HitLFWheel;
       class HitRFWheel;
       class HitLBWheel;
       class HitRBWheel;
       class HitLF2Wheel;
       class HitRF2Wheel;
       class HitLMWheel;
       class HitRMWheel;
       class HitGlass1;
       class HitGlass2;
       class HitGlass3;
       class HitGlass4;
       class HitGlass5;
       class HitGlass6;
       class HitBody;
       class HitEngine;
       class Gatling;
       class Gatling_flash;
       class cabinlights_hide;
       class turnout1;
       class turnout2;
       class turnout3;
       class Door_LF;
       class Door_RF;
       class Door_LR;
       class Door_RR;
    };
};

class 73_COP_Cult_HEMTT_Transport: 73_COP_Cult_HEMTT_Transport_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult HEMTT Transport";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
        "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
        "a3\soft_f_exp\truck_01\data\truck_01_cargo_olive_co.paa",
        "a3\soft_f_exp\truck_01\data\truck_01_cover_olive_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_MBT_01_mlrs_F;
class 73_COP_Cult_MLRS_import: B_MBT_01_mlrs_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_MLRS_base: 73_COP_Cult_MLRS_import
{
    class AnimationSources: AnimationSources
    {
       class Missiles_revolving;
       class muzzle_hide_missiles;
    };
};

class 73_COP_Cult_MLRS: 73_COP_Cult_MLRS_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult MLRS";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Artillery_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_exp\mbt_01\data\mbt_01_body_olive_co.paa",
        "a3\armor_f_exp\mbt_01\data\mbt_01_mlrs_olive_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_MBT_01_arty_F;
class 73_COP_Cult_SPG_import: B_MBT_01_arty_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_SPG_base: 73_COP_Cult_SPG_import
{
    class AnimationSources: AnimationSources
    {
       class recoil_source;
       class muzzle_hide_arty;
       class muzzle_rot_HMG;
       class muzzle_hide_HMG;
       class muzzle_rot_GMG;
       class muzzle_hide_GMG;
       class HitComTurret_src;
       class showCanisters;
       class showCamonetTurret;
       class showAmmobox;
    };
};

class 73_COP_Cult_SPG: 73_COP_Cult_SPG_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SPG";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Artillery_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_exp\mbt_01\data\mbt_01_body_olive_co.paa",
        "a3\armor_f_exp\mbt_01\data\mbt_01_scorcher_olive_co.paa",
        "a3\data_f_exp\vehicles\turret_olive_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCanisters: showCanisters
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showAmmobox: showAmmobox
        {
            initPhase = 1;
        };
    };
};

class B_G_Offroad_01_armed_F;
class 73_COP_Cult_Offroad_HMG_import: B_G_Offroad_01_armed_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Offroad_HMG_base: 73_COP_Cult_Offroad_HMG_import
{
    class AnimationSources: AnimationSources
    {
       class hidePolice;
       class HideServices;
       class BeaconsStart;
       class BeaconsServicesStart;
       class ReloadAnim;
       class ReloadMagazine;
       class Revolving;
       class muzzle_rot_MG;
       class muzzle_hide_MG;
       class Hide_Shield;
       class Hide_Rail;
    };
};

class 73_COP_Cult_Offroad_HMG: 73_COP_Cult_Offroad_HMG_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Offroad HMG";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
        "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class Hide_Shield: Hide_Shield
        {
            initPhase = 0;
        };
        class Hide_Rail: Hide_Rail
        {
            initPhase = 1;
        };
    };
};

class TKE_Ext_Bearcat_AA;
class 73_COP_Cult_SPAA_import: TKE_Ext_Bearcat_AA
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_SPAA_base: 73_COP_Cult_SPAA_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot1;
       class recoil_source;
    };
};

class 73_COP_Cult_SPAA: 73_COP_Cult_SPAA_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult SPAA";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Anti_Air_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "tke_ext_apc\data\apc_mdmc_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class OPTRE_DME_falcon_unarmed;
class 73_COP_Cult_Falcon_Transport_import: OPTRE_DME_falcon_unarmed
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Falcon_Transport_base: 73_COP_Cult_Falcon_Transport_import
{
    class AnimationSources: AnimationSources
    {
       class Cabin;
       class HideWeapon;
       class pip_camera_slider;
       class pip_camera_hide;
       class Gatling;
       class Gatling_flash;
       class Missiles_revolving;
       class Proxy;
       class Gun_HRot;
       class Gun_VRot;
       class AddTread;
       class AddTread_Short;
    };
};

class 73_COP_Cult_Falcon_Transport: 73_COP_Cult_Falcon_Transport_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Falcon Transport";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Rifleman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Helicopters_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\falcon\data\black\falcon_main_co.paa",
        "optre_vehicles_air\falcon\data\black\falcon_attachments_co.paa",
        "optre_vehicles_air\falcon\data\falcon_interior_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class Cabin: Cabin
        {
            initPhase = 0;
        };
        class HideWeapon: HideWeapon
        {
            initPhase = 0;
        };
        class pip_camera_slider: pip_camera_slider
        {
            initPhase = 0;
        };
        class pip_camera_hide: pip_camera_hide
        {
            initPhase = 0;
        };
        class Proxy: Proxy
        {
            initPhase = 0;
        };
        class Gun_HRot: Gun_HRot
        {
            initPhase = 0;
        };
        class Gun_VRot: Gun_VRot
        {
            initPhase = 0;
        };
        class AddTread: AddTread
        {
            initPhase = 0;
        };
        class AddTread_Short: AddTread_Short
        {
            initPhase = 0;
        };
    };
};

class B_SAM_System_03_F;
class 73_COP_Cult_Patriot_System_import: B_SAM_System_03_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Patriot_System_base: 73_COP_Cult_Patriot_System_import
{
    class AnimationSources: AnimationSources
    {
       class Missiles_revolving;
       class HitLFWheel;
       class HitLBWheel;
       class HitRFWheel;
       class HitRBWheel;
       class HitTurret;
       class HitGun;
       class HitHull;
    };
};

class 73_COP_Cult_Patriot_System: 73_COP_Cult_Patriot_System_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Patriot System";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Turrets_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\static_f_sams\sam_system_03\data\sam_system_03_mat_01_olive_co.paa",
        "a3\static_f_sams\sam_system_03\data\sam_system_03_mat_02_olive_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class B_MBT_01_TUSK_F;
class 73_COP_Cult_Medium_Tank_2_import: B_MBT_01_TUSK_F
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_Medium_Tank_2_base: 73_COP_Cult_Medium_Tank_2_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_hide_cannon;
       class muzzle_rot_cannon;
       class muzzle_rot_cmdr;
       class recoil_source;
       class commander_gun_recoil;
       class HitERA_Front_src;
       class HitERA_Left_1_src;
       class HitERA_Left_2_src;
       class HitERA_Left_3_src;
       class HitERA_Left_4_src;
       class HitERA_Right_1_src;
       class HitERA_Right_2_src;
       class HitERA_Right_3_src;
       class HitERA_Right_4_src;
       class HitERA_Top_Front_src;
       class HitERA_Top_Left_src;
       class HitERA_Top_Right_src;
       class showCamonetCannon;
       class showCamonetPlates1;
       class showCamonetPlates2;
       class showCamonetTurret;
       class showCamonetHull;
       class showBags;
    };
};

class 73_COP_Cult_Medium_Tank_2: 73_COP_Cult_Medium_Tank_2_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult Medium Tank 2";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Tanks_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "a3\armor_f_exp\mbt_01\data\mbt_01_body_olive_co.paa",
        "a3\armor_f_exp\mbt_01\data\mbt_01_tow_olive_co.paa",
        "a3\armor_f_exp\mbt_01\data\mbt_addons_olive_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCamonetCannon: showCamonetCannon
        {
            initPhase = 1;
        };
        class showCamonetPlates1: showCamonetPlates1
        {
            initPhase = 1;
        };
        class showCamonetPlates2: showCamonetPlates2
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showBags: showBags
        {
            initPhase = 1;
        };
    };
};

class OPTRE_M12_VBIED;
class 73_COP_Cult_VBIED_import: OPTRE_M12_VBIED
{
    scope = 0;
    scopeCurator = 0;
    author = "Capt. A. Grayson";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_COP_Cult_VBIED_base: 73_COP_Cult_VBIED_import
{
    class AnimationSources: AnimationSources
    {
    };
};

class 73_COP_Cult_VBIED: 73_COP_Cult_VBIED_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cult VBIED";
    side = 0;
    faction = "73_COP";
    crew = "73_COP_Cult_Crewman";
    
    editorCategory = "73_COP_EdCat";
    editorSubcategory = "73_COP_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles\warthog\data\ins\gen_warthog_co.paa",
        "optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa",
        "optre_vehicles\warthog\data\decals_ca.paa",
        "optre_vehicles\warthog\data\m12hogmaav_interior_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};
