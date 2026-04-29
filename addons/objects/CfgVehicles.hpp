class CfgVehicles
{
	class OPTRE_Ammo_SupplyPod_Empty;
	class OPTRE_Ammo_SupplyPod_Launcher;
	class Module_F;

	class FlagCarrier_Asym;
	class FlagCarrier;

	class Land_STB73_FlagPole_01_ODST : FlagCarrier_Asym
	{
		author = AUTHOR;
		displayName = "Flag (73rd STB)";
		scope = 2;
		scopeCurator = 2;
		faction = "STB73_Assets";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubcat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\73STB\addons\objects\data\flags\flag_73rd_co.paa'";
		};
	};

	class Land_STB73_FlagPole_02_ODST : FlagCarrier
	{
		author = AUTHOR;
		displayName = "Flag (73rd STB) (Damaged)";
		scope = 2;
		scopeCurator = 2;
		faction = "STB73_Assets";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubcat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\73STB\addons\objects\data\flags\flag_73rd_dmg_co.paa'";
		};
	};

	class optre_bootcamp_UNSC_Flag_BW;

	class land_STB73_bootcamp_UNSC_Flag : optre_bootcamp_UNSC_Flag_BW
	{
		author = AUTHOR;
		displayName = "73rd STB Ceremonial Flag";
		scope = 2;
		scopeCurator = 2;
		faction = "STB73_Assets";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubcat";
		hiddenSelectionsTextures[] = 
		{
			"\z\73STB\addons\objects\data\flags\camp_flag_73rdSTB_co.paa"
		};
	};

	class Land_TCP_Banner_01_BES_02;

	class Land_STB73_Flag_01_ODST : Land_TCP_Banner_01_BES_02
	{
		author = AUTHOR;
		displayName = "Flag Banner (73rd STB)";
		scope = 2;
		scopeCurator = 2;
		faction = "STB73_Assets";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubcat";
		hiddenSelectionsTextures[] = 
		{
			"z\73STB\addons\objects\data\flags\flag_73rd_ban_co.paa"
		};
	};

	class Land_CC_FlagPole_01_OCLF : FlagCarrier_Asym
	{
		author = AUTHOR;
		displayName = "Flag (OCLF)";
		scope = 2;
		scopeCurator = 2;
		faction = "CC_Assets";
		editorCategory = "CC_Objects";
		editorSubcategory = "CC_Misc_EdSubCat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\73STB\addons\objects\data\flags\URFFlag_co.paa'";
		};
	};

	class Land_CC_FlagPole_02_OCLF : FlagCarrier
	{
		author = AUTHOR;
		displayName = "Flag (OCLF) (Damaged)";
		scope = 2;
		scopeCurator = 2;
		faction = "CC_Assets";
		editorCategory = "CC_Objects";
		editorSubcategory = "CC_Misc_EdSubCat";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\73STB\addons\objects\data\flags\URFFlag_dmg_co.paa'";
		};
	};

	class SZ_screen;

	class STB73_BriefScreen: SZ_screen
	{
		author = "73rd S-4 Team";
		displayName = "[73] Briefing Screen";
		scope = 2;
		scopeCurator = 2;
		faction = "STB73_STB";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubcat";
		hiddenSelectionsTextures[]=
		{
			"z\73STB\addons\objects\data\briefing_screen_co.paa"
		};
	};

	class OPTRE_RS_ConsoleCorvette_SysGreen;
	class STB73_TraitSelectConsole: OPTRE_RS_ConsoleCorvette_SysGreen
	{
		author = AUTHOR;
		displayName = "[73] Trait Select Console";
		scope = 2;
		scopeCurator = 2;
		scopeEditor = 2;
		faction = "STB73_Assets";
		editorCategory = "STB73_Objects";
		editorSubcategory = "STB73_Misc_EdSubCat";
		hiddenSelectionsTextures[] = 
		{
			"z\73STB\addons\objects\data\traitConsole_CO.paa",
			"#(argb,8,8,3)color(0.32941177,0.6901961,0.96862745,1,co)"
		};
		class UserActions
		{
			class OpenTraitSelectScreen
			{
				animPeriod=1;
				condition="player distance this < 10";
				displayName="<t color='#04B45F'>Open Trait Select Screen";
				displayNameDefault="<t color='#04B45F'>Open Trait Select Screen";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=10;
				showWindow=0;
				statement="0 = ['Main'] call STB73_fnc_switchScreen";
				textToolTip="<t color='#04B45F'>Open Trait Select Screen";
				userActionID=85;
			};
		};
	};

	#include "data\cfg\supplyPods.hpp"
	#include "data\cfg\logiBoxes.hpp"
};
