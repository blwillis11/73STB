class 73_IFV76;
class 73_UNSC_73_IFV_76_Honeybadger_import: 73_IFV76
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_IFV_76_Honeybadger_base: 73_UNSC_73_IFV_76_Honeybadger_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot;
       class muzzle_hide;
       class revolving_cannon;
       class HideTurret;
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
       class HitSLAT_top_back_src;
       class HitSLAT_top_right_src;
       class HitSLAT_top_left_src;
       class showBags;
       class showCamonetHull;
       class showCamonetCannon;
       class showCamonetTurret;
       class showSLATHull;
       class showSLATTurret;
    };
};

class 73_UNSC_73_IFV_76_Honeybadger: 73_UNSC_73_IFV_76_Honeybadger_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] IFV-76 Honeybadger";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_t_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_cn_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_c_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class HideTurret: HideTurret
        {
            initPhase = 0;
        };
        class showBags: showBags
        {
            initPhase = 1;
        };
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
        class showSLATTurret: showSLATTurret
        {
            initPhase = 1;
        };
    };
};

class 73_Oryx;
class 73_UNSC_73_M494_Oryx_import: 73_Oryx
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_M494_Oryx_base: 73_UNSC_73_M494_Oryx_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_hide;
       class Missiles_revolving;
       class Missiles_reloadMagazine;
       class CargoDoorAnim;
       class HitERA_Front_src;
       class HitERA_Left_1_src;
       class HitERA_Right_1_src;
       class HitERA_Left_2_src;
       class HitERA_Right_2_src;
       class HitERA_Left_3_src;
       class HitERA_Right_3_src;
       class HitERA_Left_4_src;
       class HitERA_Right_4_src;
       class HitERA_Left_5_src;
       class HitERA_Right_5_src;
       class showCamonetHull;
       class showCamonetTurret;
       class showCamonetgun;
       class showBags;
       class showBagsTurret;
       class showera;
    };
};

class 73_UNSC_73_M494_Oryx: 73_UNSC_73_M494_Oryx_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] M494 Oryx";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_co.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_n_ca.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_n_ca.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_n_ca.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_t_co.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_mg_co.paa",
        ""
    };
    
    class AnimationSources: AnimationSources
    {
        class CargoDoorAnim: CargoDoorAnim
        {
            initPhase = 0;
        };
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showCamonetgun: showCamonetgun
        {
            initPhase = 1;
        };
        class showBags: showBags
        {
            initPhase = 1;
        };
        class showBagsTurret: showBagsTurret
        {
            initPhase = 0;
        };
        class showera: showera
        {
            initPhase = 1;
        };
    };
};

class 73_HDV134_Resupply;
class 73_UNSC_73_HDV_134_Buffalo_Resupply_import: 73_HDV134_Resupply
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_HDV_134_Buffalo_Resupply_base: 73_UNSC_73_HDV_134_Buffalo_Resupply_import
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

class 73_UNSC_73_HDV_134_Buffalo_Resupply: 73_UNSC_73_HDV_134_Buffalo_Resupply_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] HDV-134 Buffalo [Resupply]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_s_co.paa",
        "a3\structures_f\data\metal\containers\containers_02_set_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class 73_M808BM_MBT;
class 73_UNSC_73_M8088_M_Scorpion_import: 73_M808BM_MBT
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_M8088_M_Scorpion_base: 73_UNSC_73_M8088_M_Scorpion_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot_cannon;
       class muzzle_rot_coax;
       class recoil_source;
       class showCamonetHull;
       class showCamonetTurret;
       class showCamonetGun;
       class showGear;
       class showTurretGear;
       class showMineroller;
    };
};

class 73_UNSC_73_M8088_M_Scorpion: 73_UNSC_73_M8088_M_Scorpion_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] M8088/M Scorpion";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Tanks_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_co.paa",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_t_co.paa",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_d3_co.paa",
        "",
        "",
        "",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_mr_co.paa",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_mg_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCamonetHull: showCamonetHull
        {
            initPhase = 0;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 0;
        };
        class showCamonetGun: showCamonetGun
        {
            initPhase = 1;
        };
        class showGear: showGear
        {
            initPhase = 1;
        };
        class showTurretGear: showTurretGear
        {
            initPhase = 1;
        };
        class showMineroller: showMineroller
        {
            initPhase = 0;
        };
    };
};

class 73_HDV134_TT;
class 73_UNSC_73_HDV_134_Buffalo_TT_import: 73_HDV134_TT
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_HDV_134_Buffalo_TT_base: 73_UNSC_73_HDV_134_Buffalo_TT_import
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

class 73_UNSC_73_HDV_134_Buffalo_TT: 73_UNSC_73_HDV_134_Buffalo_TT_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] HDV-134 Buffalo [TT]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_s_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class OPTRE_UNSC_hornet_CAS;
class 73_UNSC_73_AV_14_Hornet_import: OPTRE_UNSC_hornet_CAS
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_AV_14_Hornet_base: 73_UNSC_73_AV_14_Hornet_import
{
    class AnimationSources: AnimationSources
    {
       class gatling_alt;
       class gatling_alt_rot;
       class Missiles_revolving;
    };
};

class 73_UNSC_73_AV_14_Hornet: 73_UNSC_73_AV_14_Hornet_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] AV-14 Hornet";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73_Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Helicopters_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class 73_HDV134_TT_C;
class 73_UNSC_73_HDV_134_Buffalo_TT_C_import: 73_HDV134_TT_C
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_HDV_134_Buffalo_TT_C_base: 73_UNSC_73_HDV_134_Buffalo_TT_C_import
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

class 73_UNSC_73_HDV_134_Buffalo_TT_C: 73_UNSC_73_HDV_134_Buffalo_TT_C_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] HDV-134 Buffalo [TT-C]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_s_co.paa",
        "v_fz_ground_vehicles\data\buffalo\v_hdv134_wdl_c_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class 73_APC76;
class 73_UNSC_73_APC_76_Honeybadger_import: 73_APC76
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_APC_76_Honeybadger_base: 73_UNSC_73_APC_76_Honeybadger_import
{
    class AnimationSources: AnimationSources
    {
       class HideTurret;
    };
};

class 73_UNSC_73_APC_76_Honeybadger: 73_UNSC_73_APC_76_Honeybadger_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] APC-76 Honeybadger";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_APCs_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_t_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_cn_co.paa",
        "v_fz_ground_vehicles\data\honeybadger\v_ifv76_wdl_c_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class 73_M19_GMG;
class 73_UNSC_73_M19_Hyena_GMG_import: 73_M19_GMG
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_M19_Hyena_GMG_base: 73_UNSC_73_M19_Hyena_GMG_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot;
       class muzzle_hide;
    };
};

class 73_UNSC_73_M19_Hyena_GMG: 73_UNSC_73_M19_Hyena_GMG_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] M19 Hyena [GMG]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\mattock\v_m19_wdl_co.paa",
        "v_fz_ground_vehicles\data\mattock\v_m19_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\mattock\v_m19_blk_t_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class 73_M875;
class 73_UNSC_73_M875_Scorpion_SPH_import: 73_M875
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_M875_Scorpion_SPH_base: 73_UNSC_73_M875_Scorpion_SPH_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot_cannon;
       class recoil_source;
       class showCamonetHull;
       class showCamonetTurret;
       class showCamonetGun;
       class showGear;
       class showTurretGear;
    };
};

class 73_UNSC_73_M875_Scorpion_SPH: 73_UNSC_73_M875_Scorpion_SPH_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] M875 Scorpion [SPH]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Artillery_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_co.paa",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_art_co.paa",
        "",
        "",
        "",
        "v_fz_ground_vehicles\data\oryx\v_m494_wdl_mg_co.paa",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_det1_co.paa",
        "v_fz_ground_vehicles\data\scorpion\v_m808_wdl_d3_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class showCamonetHull: showCamonetHull
        {
            initPhase = 1;
        };
        class showCamonetTurret: showCamonetTurret
        {
            initPhase = 1;
        };
        class showCamonetGun: showCamonetGun
        {
            initPhase = 1;
        };
        class showGear: showGear
        {
            initPhase = 1;
        };
        class showTurretGear: showTurretGear
        {
            initPhase = 0;
        };
    };
};

class FIR_F18C_RCAF;
class 73_UNSC_73_CF_188A_Hornet_import: FIR_F18C_RCAF
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_CF_188A_Hornet_base: 73_UNSC_73_CF_188A_Hornet_import
{
    class AnimationSources: AnimationSources
    {
       class Damper_1_source;
       class Damper_2_source;
       class Damper_3_source;
       class Wheel_1_source;
       class Wheel_2_source;
       class Wheel_3_source;
       class mfd_arrow_hide;
       class mirror_toggle;
       class Nozzle_AB;
       class AB_ON;
       class compass_1_hide_source;
       class map_zoom;
       class tad_move_x;
       class tad_move_y;
       class fuel_probe_source;
       class refuel_door_F_source;
       class Pilot_MFD_hide;
       class EWO_MFD_hide;
       class hp2_hide;
       class hp3_hide;
       class hp5_hide;
       class hp7_hide;
       class hp8_hide;
       class hmd_hat_source;
       class panel_night_hide_source;
       class ABSwitch;
       class ab_switch;
       class eject_switch;
       class canopy_hide;
       class ejection_seat_hide;
       class tailhook;
       class leftwing;
       class rightwing;
       class iff_nose_hide;
       class iff_under_hide;
       class iff_up_hide;
       class iff_f_1_hide;
       class iff_f_2_hide;
       class Muzzle_flash;
       class launchbar;
    };
};

class 73_UNSC_73_CF_188A_Hornet: 73_UNSC_73_CF_188A_Hornet_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] CF-188A Hornet";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73_Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Planes_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "fir_fa18\skin\rcaf\body_co.paa",
        "fir_fa18\skin\rcaf\wing_co.paa",
        "fir_fa18\skin\rcaf\buno_ca.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    
    class AnimationSources: AnimationSources
    {
        class mfd_arrow_hide: mfd_arrow_hide
        {
            initPhase = 0;
        };
        class mirror_toggle: mirror_toggle
        {
            initPhase = 0;
        };
        class Nozzle_AB: Nozzle_AB
        {
            initPhase = 0;
        };
        class AB_ON: AB_ON
        {
            initPhase = 0;
        };
        class compass_1_hide_source: compass_1_hide_source
        {
            initPhase = 0;
        };
        class map_zoom: map_zoom
        {
            initPhase = 0;
        };
        class tad_move_x: tad_move_x
        {
            initPhase = 0;
        };
        class tad_move_y: tad_move_y
        {
            initPhase = 0;
        };
        class fuel_probe_source: fuel_probe_source
        {
            initPhase = 0;
        };
        class refuel_door_F_source: refuel_door_F_source
        {
            initPhase = 0;
        };
        class Pilot_MFD_hide: Pilot_MFD_hide
        {
            initPhase = 0;
        };
        class EWO_MFD_hide: EWO_MFD_hide
        {
            initPhase = 0;
        };
        class hp2_hide: hp2_hide
        {
            initPhase = 0;
        };
        class hp3_hide: hp3_hide
        {
            initPhase = 0;
        };
        class hp5_hide: hp5_hide
        {
            initPhase = 0;
        };
        class hp7_hide: hp7_hide
        {
            initPhase = 0;
        };
        class hp8_hide: hp8_hide
        {
            initPhase = 0;
        };
        class hmd_hat_source: hmd_hat_source
        {
            initPhase = 0;
        };
        class panel_night_hide_source: panel_night_hide_source
        {
            initPhase = 0;
        };
        class ABSwitch: ABSwitch
        {
            initPhase = 0;
        };
        class ab_switch: ab_switch
        {
            initPhase = 0;
        };
        class eject_switch: eject_switch
        {
            initPhase = 0;
        };
        class canopy_hide: canopy_hide
        {
            initPhase = 0;
        };
        class ejection_seat_hide: ejection_seat_hide
        {
            initPhase = 0;
        };
        class tailhook: tailhook
        {
            initPhase = 0;
        };
        class leftwing: leftwing
        {
            initPhase = 0;
        };
        class rightwing: rightwing
        {
            initPhase = 0;
        };
        class iff_nose_hide: iff_nose_hide
        {
            initPhase = 0;
        };
        class iff_under_hide: iff_under_hide
        {
            initPhase = 1;
        };
        class iff_up_hide: iff_up_hide
        {
            initPhase = 1;
        };
        class iff_f_1_hide: iff_f_1_hide
        {
            initPhase = 1;
        };
        class iff_f_2_hide: iff_f_2_hide
        {
            initPhase = 0;
        };
        class launchbar: launchbar
        {
            initPhase = 0;
        };
    };
};

class 73_M19_HMG;
class 73_UNSC_73_M19_Hyena_HMG_import: 73_M19_HMG
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class AnimationSources;
};

class 73_UNSC_73_M19_Hyena_HMG_base: 73_UNSC_73_M19_Hyena_HMG_import
{
    class AnimationSources: AnimationSources
    {
       class muzzle_rot;
       class muzzle_hide;
    };
};

class 73_UNSC_73_M19_Hyena_HMG: 73_UNSC_73_M19_Hyena_HMG_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] M19 Hyena [HMG]";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73__Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Cars_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "v_fz_ground_vehicles\data\mattock\v_m19_wdl_co.paa",
        "v_fz_ground_vehicles\data\mattock\v_m19_wdl_a_co.paa",
        "v_fz_ground_vehicles\data\mattock\v_m19_blk_t_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
    };
};

class Splits_UNSC_D77_TC_Pelican;
class 73_UNSC_73_D77_TC_Pelican_import: Splits_UNSC_D77_TC_Pelican
{
    scope = 0;
    scopeCurator = 0;
    author = "1stLt. B. Salmon";
    animationList[] = {};
    textureList[] = {};
    
    class VehicleSpawnerInfo {};
    
    class Turrets;
    class AnimationSources;
};

class 73_UNSC_73_D77_TC_Pelican_base: 73_UNSC_73_D77_TC_Pelican_import
{
    class AnimationSources: AnimationSources
    {
       class cargoDoors;
       class cockpit;
       class HideWeapon;
       class Gatling;
       class Gatling_flash;
       class rockets_revolving_source;
       class HideWeapons;
       class jumplight;
       class cargolights_hide;
       class cabinlights_hide;
       class Proxy;
    };
    class Turrets: Turrets
    {
       class MainTurret;
       class RearDoorGun;
       class CargoTurret_01;
       class CargoTurret_02;
       class CargoTurret_03;
       class CargoTurret_04;
       class CargoTurret_05;
       class CargoTurret_06;
       class CargoTurret_07;
       class CargoTurret_08;
       class CargoTurret_09;
       class CargoTurret_10;
       class CargoTurret_11;
       class CargoTurret_12;
       class CargoTurret_13;
       class CargoTurret_14;
       class CargoTurret_15;
    };
};

class 73_UNSC_73_D77_TC_Pelican: 73_UNSC_73_D77_TC_Pelican_base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] D77-TC Pelican";
    side = 1;
    faction = "73_UNSC";
    crew = "73_UNSC_73_Crewman";
    
    editorCategory = "73_UNSC_EdCat";
    editorSubcategory = "73_UNSC_Helicopters_EdSubCat";
    
    
    hiddenSelectionsTextures[] =
    {
        "splits\splits_vehicles\pelican\data\hw2\body_co.paa",
        "splits\splits_vehicles\pelican\data\hw2\wings_and_gear_co.paa",
        "splits\splits_vehicles\pelican\data\hw2\weaponry_co.paa"
    };
    
    class AnimationSources: AnimationSources
    {
        class cargoDoors: cargoDoors
        {
            initPhase = 0;
        };
        class cockpit: cockpit
        {
            initPhase = 0;
        };
        class HideWeapon: HideWeapon
        {
            initPhase = 0;
        };
        class HideWeapons: HideWeapons
        {
            initPhase = 0;
        };
        class jumplight: jumplight
        {
            initPhase = 0;
        };
        class cargolights_hide: cargolights_hide
        {
            initPhase = 0;
        };
        class cabinlights_hide: cabinlights_hide
        {
            initPhase = 0;
        };
        class Proxy: Proxy
        {
            initPhase = 0;
        };
    };
    
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class RearDoorGun: RearDoorGun
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_01: CargoTurret_01
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_02: CargoTurret_02
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_03: CargoTurret_03
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_04: CargoTurret_04
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_05: CargoTurret_05
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_06: CargoTurret_06
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_07: CargoTurret_07
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_08: CargoTurret_08
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_09: CargoTurret_09
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_10: CargoTurret_10
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_11: CargoTurret_11
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_12: CargoTurret_12
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_13: CargoTurret_13
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_14: CargoTurret_14
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
        class CargoTurret_15: CargoTurret_15
        {
            gunnerType = "73_UNSC_73_Crewman";
        };
    };
};
