#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches
{
    class STB73_Main
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TCP_Data"
        };             // Addon dependencies
        authors[] = {                       // Authors
            "Salmon",
            "73rd S-4 Team"
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
    };

    class X73STB_main: STB73_Main { // just in-case anything requires "acex_main"
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgEditor.hpp"

class CfgMods {
    class PREFIX {
        dir = "@STB73";
        name = "73rd STB Mod V2";
        picture = ""; // 256x256            // Picture displayed in expansions menu.
        hidePicture = "true";               // Hide the picture in the expansions menu.
        hideName = "true";                  // Hide the name in the expansions menu.
        actionName = "Website";             // Text displayed in the action button in the main menu.
        action = CSTRING(URL);              // Website URL, that is opened when the action button is clicked.
        //description = "";                 // Short description, that is displayed in the main menu.
    };
};

class CfgTCPRanks
{
    class UNICOM;
    class UNSC_MC : UNICOM
	{
		scope=2;
		displayName="Marine Corps";
		black="\TCP\Data\Decals\Affiliation\Black\embroidery_UNSC_UNSC_CA.paa";
		gray="\TCP\Data\Decals\Affiliation\Gray\embroidery_UNSC_UNSC_CA.paa";
		green="\TCP\Data\Decals\Affiliation\Green\embroidery_UNSC_UNSC_CA.paa";
		olive="\TCP\Data\Decals\Affiliation\Olive\embroidery_UNSC_UNSC_CA.paa";
		tan="\TCP\Data\Decals\Affiliation\Tan\embroidery_UNSC_UNSC_CA.paa";
		white="\TCP\Data\Decals\Affiliation\White\embroidery_UNSC_UNSC_CA.paa";
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
                black="\z\73STB\addons\main\data\ranks\black\PFC.paa";
				white="\z\73STB\addons\main\data\ranks\white\PFC.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E2.rvmat";
			};
			class E3
			{
				displayName="Lance Corporal";
				displayNameShort="LCpl";
                black="\z\73STB\addons\main\data\ranks\black\LCPL.paa";
				white="\z\73STB\addons\main\data\ranks\white\LCPL.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E3.rvmat";
			};
			class E4
			{
				displayName="Corporal";
				displayNameShort="Cpl";
                black="\z\73STB\addons\main\data\ranks\black\CPL.paa";
				white="\z\73STB\addons\main\data\ranks\white\CPL.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E4.rvmat";
			};
			class E5
			{
				displayName="Sergeant";
				displayNameShort="Sgt";
                black="\z\73STB\addons\main\data\ranks\black\SGT.paa";
                white="\z\73STB\addons\main\data\ranks\white\SGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E5.rvmat";
			};
			class E6
			{
				displayName="Staff Sergeant";
				displayNameShort="SSgt";
                black="\z\73STB\addons\main\data\ranks\black\SSGT.paa";
                white="\z\73STB\addons\main\data\ranks\white\SSGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E6.rvmat";
			};
			class E7
			{
				displayName="Gunnery Sergeant";
				displayNameShort="GySgt";
                black="\z\73STB\addons\main\data\ranks\black\GYSGT.paa";
                white="\z\73STB\addons\main\data\ranks\white\GYSGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E7.rvmat";
			};
			class E8
			{
				displayName="Master Sergeant";
				displayNameShort="MSgt";
                black="\z\73STB\addons\main\data\ranks\black\MSGT.paa";
                white="\z\73STB\addons\main\data\ranks\white\MSGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E8.rvmat";
			};
			class E81SGT
			{
				displayName="First Sergeant";
				displayNameShort="1stSgt";
                black="\z\73STB\addons\main\data\ranks\black\1SGT.paa";
                white="\z\73STB\addons\main\data\ranks\white\1SGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E81SGT.rvmat";
			};
			class E9
			{
				displayName="Master Gunnery Sergeant";
				displayNameShort="MGySgt";
                black="\z\73STB\addons\main\data\ranks\black\MGYSGT.paa";
				white="\z\73STB\addons\main\data\ranks\white\MGYSGT.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E9.rvmat";
			};
			class E9SGTMAJ
			{
				displayName="Sergeant Major";
				displayNameShort="SgtMaj";
                black="\z\73STB\addons\main\data\ranks\black\SGTMAJ.paa";
                white="\z\73STB\addons\main\data\ranks\white\SGTMAJ.paa";
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
    class NAVCOM;
    class UNSC_NC : NAVCOM
	{
		scope=2;
		displayName="Navy Corpsman";
		black="\TCP\Data\Decals\Affiliation\Black\embroidery_UNSC_UNSC_CA.paa";
		gray="\TCP\Data\Decals\Affiliation\Gray\embroidery_UNSC_UNSC_CA.paa";
		green="\TCP\Data\Decals\Affiliation\Green\embroidery_UNSC_UNSC_CA.paa";
		olive="\TCP\Data\Decals\Affiliation\Olive\embroidery_UNSC_UNSC_CA.paa";
		tan="\TCP\Data\Decals\Affiliation\Tan\embroidery_UNSC_UNSC_CA.paa";
		white="\TCP\Data\Decals\Affiliation\White\embroidery_UNSC_UNSC_CA.paa";
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
                black="\z\73STB\addons\main\data\ranks\black\PFC.paa";
				white="\z\73STB\addons\main\data\ranks\white\PFC.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E2.rvmat";
			};
			class E3
			{
				displayName="Lance Corporal";
				displayNameShort="LCpl";
                black="\z\73STB\addons\main\data\ranks\black\LCPL.paa";
				white="\z\73STB\addons\main\data\ranks\white\LCPL.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E3.rvmat";
			};
			class E4
			{
				displayName="Hospitalman Third Class";
				displayNameShort="HM3";
                black="\z\73STB\addons\main\data\ranks\black\HM3.paa";
				white="\z\73STB\addons\main\data\ranks\white\HM3.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E4.rvmat";
			};
			class E5
			{
				displayName="Hospitalman Second Class";
				displayNameShort="HM2";
                black="\z\73STB\addons\main\data\ranks\black\HM2.paa";
                white="\z\73STB\addons\main\data\ranks\white\HM2.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E5.rvmat";
			};
			class E6
			{
				displayName="Hospitalman First Class";
				displayNameShort="HM1";
                black="\z\73STB\addons\main\data\ranks\black\HM1.paa";
                white="\z\73STB\addons\main\data\ranks\white\HM1.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E6.rvmat";
			};
			class E7
			{
				displayName="Chief Hospitalman";
				displayNameShort="HMC";
                black="\z\73STB\addons\main\data\ranks\black\HMC.paa";
                white="\z\73STB\addons\main\data\ranks\white\HMC.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E7.rvmat";
			};
			class E8
			{
				displayName="Senior Chief Hospitalman";
				displayNameShort="HMCS";
                black="\z\73STB\addons\main\data\ranks\black\HMCS.paa";
                white="\z\73STB\addons\main\data\ranks\white\HMCS.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E8.rvmat";
			};
			class E9
			{
				displayName="Master Chief Hospitalman";
				displayNameShort="HMCM";
                black="\z\73STB\addons\main\data\ranks\black\HMCM.paa";
				white="\z\73STB\addons\main\data\ranks\white\HMCM.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E9.rvmat";
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
		};
	};
    class UNSC_ONI : NAVCOM
	{
		scope=2;
		displayName="Navy Intel";
		black="\TCP\Data\Decals\Affiliation\Black\embroidery_UNSC_UNSC_CA.paa";
		gray="\TCP\Data\Decals\Affiliation\Gray\embroidery_UNSC_UNSC_CA.paa";
		green="\TCP\Data\Decals\Affiliation\Green\embroidery_UNSC_UNSC_CA.paa";
		olive="\TCP\Data\Decals\Affiliation\Olive\embroidery_UNSC_UNSC_CA.paa";
		tan="\TCP\Data\Decals\Affiliation\Tan\embroidery_UNSC_UNSC_CA.paa";
		white="\TCP\Data\Decals\Affiliation\White\embroidery_UNSC_UNSC_CA.paa";
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
                black="\z\73STB\addons\main\data\ranks\black\PFC.paa";
				white="\z\73STB\addons\main\data\ranks\white\PFC.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E2.rvmat";
			};
			class E3
			{
				displayName="Lance Corporal";
				displayNameShort="LCpl";
                black="\z\73STB\addons\main\data\ranks\black\LCPL.paa";
				white="\z\73STB\addons\main\data\ranks\white\LCPL.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E3.rvmat";
			};
			class E4
			{
				displayName="Intelligence Specialist Third Class";
				displayNameShort="IS3";
                black="\z\73STB\addons\main\data\ranks\black\IS3.paa";
				white="\z\73STB\addons\main\data\ranks\white\IS3.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E4.rvmat";
			};
			class E5
			{
				displayName="Intelligence Specialist Second Class";
				displayNameShort="IS2";
                black="\z\73STB\addons\main\data\ranks\black\IS2.paa";
                white="\z\73STB\addons\main\data\ranks\white\IS2.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E5.rvmat";
			};
			class E6
			{
				displayName="Intelligence Specialist First Class";
				displayNameShort="IS1";
                black="\z\73STB\addons\main\data\ranks\black\IS1.paa";
                white="\z\73STB\addons\main\data\ranks\white\IS1.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E6.rvmat";
			};
			class E7
			{
				displayName="Chief Intelligence Specialist";
				displayNameShort="ISC";
                black="\z\73STB\addons\main\data\ranks\black\ISC.paa";
                white="\z\73STB\addons\main\data\ranks\white\ISC.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E7.rvmat";
			};
			class E8
			{
				displayName="Senior Chief Intelligence Specialist";
				displayNameShort="ISCS";
                black="\z\73STB\addons\main\data\ranks\black\ISCS.paa";
                white="\z\73STB\addons\main\data\ranks\white\ISCS.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E8.rvmat";
			};
			class E9
			{
				displayName="Master Chief Intelligence Specialist";
				displayNameShort="ISCM";
                black="\z\73STB\addons\main\data\ranks\black\ISCM.paa";
				white="\z\73STB\addons\main\data\ranks\white\ISCM.paa";
                material="\TCP\Data\Decals\Ranks\UNICOM\rank_E9.rvmat";
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
		};
	};
};
