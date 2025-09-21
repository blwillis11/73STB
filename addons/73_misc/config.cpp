class CfgPatches
{
    class 73_misc
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_Marine_Rifleman_AT",
            "73_Marine_Rifleman",
            "73_Marine_Marksman",
            "73_Marine_RTO_Operator",
            "73_Marine_Medic",
            "73_Marine_Grenadier",
            "73_Marine_Autorifleman",
            "73_Marine_Sniper",
            "73_perm_crate",
            "73_Crate_Small_01_Black"
        }; 
        weapons[] = 
        {
        }; 
		vehicles[] =
		{
		};
		ammo[] = 
		{
			""
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        {
			"73_Units"
        };
    };
};
class CfgWeapons
{
    class UniformItem;
    class ItemInfo;
//marine
    #include "\73_misc\10thMEB\MarineVest.hpp"
    #include "\73_misc\10thMEB\MarineHelmet.hpp"
    #include "\73_misc\10thMEB\MarineUniforms.hpp"
    class ACE_SpraypaintBlack;
    class 73_STB_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] STB Spray Can";
    };
    class 73_ACo_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] ACo Spray Can";
    };
    class 73_BCo_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] BCo Spray Can";
    };

};

class ACE_Tags
{
    class STB_Icon_Logo
    {
        displayName="STB Logo";
        requiredItem="73_STB_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\STB\73odstSTB.paa"
        };
        icon="73_misc\tagging\STB\73odstSTB.paa";
    };
    class STB_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_STB_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\STB\Clear.paa"
        };
        icon="73_misc\tagging\STB\Clear.paa";
    };
    class ACo_Icon_Logo
    {
        displayName="ACo Logo";
        requiredItem="73_ACo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\ACo\73odst512ACo.paa"
        };
        icon="73_misc\tagging\ACo\73odst512ACo.paa";
    };
    class ACo_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_ACo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\ACo\Clear.paa"
        };
        icon="73_misc\tagging\ACo\Clear.paa";
    };
    class BCo_Icon_Logo
    {
        displayName="BCo Logo";
        requiredItem="73_BCo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\BCo\73odst512BCo.paa"
        };
        icon="73_misc\tagging\BCo\73odst512BCo.paa";
    };
    class BCo_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_BCo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\BCo\Clear.paa"
        };
        icon="73_misc\tagging\BCo\Clear.paa";
    };
};
class CfgVehicles
{
    #include "\73_misc\10thMEB\MarineUnits.hpp"
    #include "\73_misc\10thMEB\MarineUniformsVeh.hpp"
    #include "\73_misc\RadioCrate\RadioCrate.hpp"
};
class CfgGroups
{
    #include "\73_misc\10thMEB\MarineGroups.hpp"
};


class ACEX_Fortify_Presets {
    class Objects_73rd {
        displayName = "73rd STB Objects";
        objects[] = {
		{"OPTRE_Ridgco_Barrier_Five_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Three_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_One_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Ramp_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Tunnel_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Corner_Inverted_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Corner_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Wall_Ramp_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Wall_Long_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Wall_Short_W", 0, "R-barriers"},
		{"OPTRE_Ridgco_Barrier_Four_W", 0, "R-barriers"},
		{"Land_CncBarrierMedium_F",0, "Walls"},
		{"Land_CncShelter_F",0, "Bunkers"},
		{"Land_lsb_fob_hBarrier_tower", 0, "H-block"},
		{"Land_lsb_fob_hBarrier_wall", 0, "H-block"},
		{"Land_lsb_fob_hBarrierBig_1", 0, "H-block"},
		{"Land_lsb_fob_hBarrierBig_4", 0, "H-block"},
		{"Land_lsb_fob_hBarrier_1", 0, "H-block"},
		{"Land_BagFence_01_corner_green_F", 0, "sandbags"},
		{"Land_BagFence_01_end_green_F", 0, "sandbags"},
		{"Land_BagFence_01_long_green_F", 0, "sandbags"},
		{"Land_BagFence_01_round_green_F", 0, "sandbags"},
		{"Land_SandbagBarricade_01_F", 0, "sandbags"},
		{"Land_SandbagBarricade_01_hole_F", 0, "sandbags"},
		{"Land_SandbagBarricade_01_half_F", 0, "sandbags"},
		{"Land_BagBunker_01_small_green_F",0, "Bunkers"},
		{"Land_HBarrier_01_big_tower_green_F",0,"Bunkers"},
		{"Land_ConcreteHedgehog_01_F",0, "Objects"},
		{"Land_DragonsTeeth_01_1x1_new_redwhite_F",0, "Objects"},
		{"Land_Medevac_house_V1_F",0, "Objects"},
		{"Land_HelipadCircle_F",0, "Objects"},
		{"Land_Plank_01_4m_F",0, "walk-way"},
		{"Land_Plank_01_8m_F",0, "walk-way"},
		{"VES_Flag_UNSC",0, "flag"},
		{"Land_CamoNetVar_NATO", 0, "Objects"},
		{"DMNS_UNSC_Barricade_01",0, "Objects"},
		{"Land_Camping_Light_F",0, "Lights"},
		{"Land_Small_Light_Column",0, "Lights"},
		{"PortableHelipadLight_01_white_F",0, "Lights"},
		{"Land_FloodLight_F", 0, "Lights"},
		{"Land_PortableLight_double_F",0, "Lights"},
		{"Land_PortableLight_single_F", 0, "Lights"},
		{"Land_Camping_Light_F", 0, "Lights"},
		{"Land_PortableLight_02_quad_olive_F",0, "Lights"},
		{"Land_PortableLight_02_double_black_F",0, "Lights"},
		{"Land_PortableLight_02_double_olive_F",0, "Lights"},
		{"Land_OPTRE_M72S_barrier", 0, "Defences"},
		{ "Land_OPTRE_M72_barrier",0, "Defences"},
		{"Land_OPTRE_watchtower_woodland",0, "Defences"}, 
		{"Land_OPTRE_watchtower_jungle",0, "Defences"},
		{"Land_OPTRE_ONI_barrier",0, "Defences"}
        };
    };
};
