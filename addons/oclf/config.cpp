#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class STB73_OCLF
    {
        authors[] = {"B. Salmon"};
        name = "Outer Colony Liberation Front";
        
        units[]=
        {
            "OCLF_Rifleman",
            "OCLF_Medic",
            "OCLF_Officer",
            "OCLF_Autorifleman",
            "OCLF_Rifleman_BR",
			"OCLF_Crewman"
        };
        weapons[]=
        {
            "STB73_MA37_TCP_optic_M11VERO",
            "STB73_MA37K_TCP_optic_M11VERO",
            "STB73_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G",
            "STB73_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01",
            "STB73_BR45_TCP_optic_M11VERO"
        };
        
        requiredVersion = "2.20.153649";
        requiredAddons[] =
        {
            "STB73_Main",
            "STB73_Weapons",
            "TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU"
        };
    };
};

class CfgTCPRanks
{
    class OCLF_PA
	{
		scope=2;
		displayName="OCLF People's Army";
		black=QP(data\affiliation\embroidery_OCLF_CA.paa);
		gray=QP(data\affiliation\embroidery_OCLF_CA.paa);
		green=QP(data\affiliation\embroidery_OCLF_CA.paa);
		olive=QP(data\affiliation\embroidery_OCLF_CA.paa);
		tan=QP(data\affiliation\embroidery_OCLF_CA.paa);
		white=QP(data\affiliation\embroidery_OCLF_CA.paa);
		material="\TCP\Data\Decals\Affiliation\embroidery_UNSC_UNSC.rvmat"; 
		class Ranks
		{
			class E1
			{
				displayName="Private";
				displayNameShort="PVT";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class E2
			{
				displayName="Private First Class";
				displayNameShort="PFC";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E2_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E2_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E2.rvmat";
			};
			class E3
			{
				displayName="Lance Corporal";
				displayNameShort="LCpl";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E3_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E3_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E3.rvmat";
			};
			class E4
			{
				displayName="Corporal";
				displayNameShort="Cpl";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E4_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E4_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E4.rvmat";
			};
			class E5
			{
				displayName="Sergeant";
				displayNameShort="Sgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E5_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E5_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E5.rvmat";
			};
			class E6
			{
				displayName="Staff Sergeant";
				displayNameShort="SSgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E6_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E6_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E6.rvmat";
			};
			class E7
			{
				displayName="Gunnery Sergeant";
				displayNameShort="GySgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E7_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E7_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E7.rvmat";
			};
			class E8
			{
				displayName="Master Sergeant";
				displayNameShort="MSgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E8_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E8_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E8.rvmat";
			};
			class E81SGT
			{
				displayName="First Sergeant";
				displayNameShort="1stSgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E81SGT_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E81SGT_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E81SGT.rvmat";
			};
			class E9
			{
				displayName="Master Gunnery Sergeant";
				displayNameShort="MyGySgt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E9_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E9_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E9.rvmat";
			};
			class E9SGTMAJ
			{
				displayName="Sergeant Major";
				displayNameShort="SgtMaj";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E9SGTMAJ_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_E9SGTMAJ_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E9SGTMAJ.rvmat";
			};
			class W1
			{
				displayName="Warrant Officer 1";
				displayNameShort="WO";
				black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_W1_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_W1_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_W1.rvmat";
			};
			class W2
			{
				displayName="Chief Warrant Officer 2";
				displayNameShort="CWO2";
				black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_W2_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_W2_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_W2.rvmat";
			};
			class W3
			{
				displayName="Chief Warrant Officer 3";
				displayNameShort="CWO3";
				black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_W3_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_W3_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_W3.rvmat";
			};
			class W4
			{
				displayName="Chief Warrant Officer 4";
				displayNameShort="CWO4";
				black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_W4_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_W4_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_W4.rvmat";
			};
			class W5
			{
				displayName="Chief Warrant Officer 5";
				displayNameShort="CWO5";
				black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_W5_CA.paa";
				white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_W5_CA.paa";
				material="\TCP\Data\Decals\Ranks\UNICOM\rank_W5.rvmat";
			};
			class O1
			{
				displayName="Second Lieutenant";
				displayNameShort="2ndLt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O1_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O1_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O1.rvmat";
			};
			class O2
			{
				displayName="First Lieutenant";
				displayNameShort="1stLt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O2_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O2_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O2.rvmat";
			};
			class O3
			{
				displayName="Captain";
				displayNameShort="Capt";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O3_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O3_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O3.rvmat";
			};
			class O4
			{
				displayName="Major";
				displayNameShort="Maj";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O4_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O4_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O4.rvmat";
			};
			class O5
			{
				displayName="Lieutenant Colonel";
				displayNameShort="LtCol";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O5_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O5_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O5.rvmat";
			};
			class O6
			{
				displayName="Colonel";
				displayNameShort="Col";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O6_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O6_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O6.rvmat";
			};
			class O7
			{
				displayName="Brigadier General";
				displayNameShort="BGen";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O7_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O7_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O7.rvmat";
			};
			class O8
			{
				displayName="Major General";
				displayNameShort="MajGen";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O8_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O8_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O8.rvmat";
			};
			class O9
			{
				displayName="Lieutenant General";
				displayNameShort="LtGen";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O9_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O9_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O9.rvmat";
			};
			class O10
			{
				displayName="General";
				displayNameShort="Gen";
                black="\TCP\Data\Decals\Ranks\UNICOM\Black\rank_O10_CA.paa";
                white="\TCP\Data\Decals\Ranks\UNICOM\White\rank_O10_CA.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_O10.rvmat";
			};
		};
	};
};


class CfgFactionClasses
{
    class OCLF
    {
        displayName = "[OCLF] Outer Colony Liberation Front";
        side = 0;
        flag = "data\OCLFFlag.paa";
        icon = "data\OCLFLogo.paa";
        priority = 0;
    };
}; 

class CfgEditorCategories
{
    class OCLF_EdCat
    {
        displayName = "[OCLF] Outer Colony Liberation Front";
    };
};
class CfgEditorSubCategories
{
    class OCLF_Infantry_EdSubCat
    {
        displayName = "Infantry";
    };
};

class CfgWeapons
{
	class ItemInfo;
	class TCP_equipmentTypes;
    #include "weapons.hpp"
    #include "vests.hpp"
	#include "headgear.hpp"
};

class CfgVehicles
{
	class ItemInfo;
    #include "backpacks.hpp"
    #include "vehicles.hpp"
	#include "units.hpp"
};

class CfgGroups
{
    #include "groups.hpp"
};

class CfgAmmo
{
	#include "data\ammo.hpp"
};

class CfgMagazines
{
	#include "data\magazines.hpp"
};