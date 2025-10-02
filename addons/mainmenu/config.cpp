#include "script_component.hpp"

class CfgPatches {
    class 73STB_MainMenu {
        name = COMPONENT_NAME;
		units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"73STB_main",
			"A3_Data_F_Enoch_Loadorder",
			"19th_Fleet_Armor"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
		skipWhenMissingDependencies=1;
    };
};
class RscStandardDisplay;
class RscDisplayMPPlayers;
class RscPicture;
class RscButton;
class RscDisplayConfigure
{
	enableDisplay=1;
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
	access=1;
	enableDisplay=1;
	text="z\73STB\addons\mainmenu\Textures\73_Splash1.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete B_Credits;
		delete BackgroundCenter;
		delete SpotlightNext;
		delete SpotlightPrev;
		delete 12thLogo;
		class Logo: RscPicture
		{
			idc=-1;
			text="z\73STB\addons\mainmenu\Textures\73odstSTB.paa";
			x="0.45617185 * safezoneW + safezoneX";
			y="0.00500001 * safezoneH + safezoneY";
			w="0.0876563 * safezoneW";
			h="0.132 * safezoneH";
			tooltip="";
		};
		class ConnectMain: RscButton
		{
			idc=-1;
			text="Join 73rd Main";
			style=2;
			onbuttonclick="connectToServer ['nae-ogs8.armahosts.com', 2322, 'Trident']";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={.5,0,0,0,.5};
			colorFocused[]={.5,0,0,0,.5};
			borderSize=0.055;
			sizeEx = "safeZoneH / 20";
			colorBorder[]={0,0,0,0};
			x = "safeZoneX + ((safeZoneW / 2 ) - ((safezoneW / 3) / 2))";	// centre minus half width
			y = "safeZoneY + ((safeZoneH / 2 ) - ((safezoneW / 3) / 2))";	// centre minus half height
			w="safezoneW / 3";
			h="safezoneH / 3";
		};
	};
	class ControlsBackground
	{
		delete Picture;
		class LoadingPic: RscPicture
		{
			idc=1;
			access=0;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="z\73STB\addons\mainmenu\Textures\73_Splash6.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash5.paa";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash2.paa";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash3.paa";
				};
			};
		};
		class Loading_West3: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash7.paa";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash2.paa";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash3.paa";
				};
			};
		};
		class Loading_East3: LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="z\73STB\addons\mainmenu\Textures\73_Splash5.paa";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="z\73STB\addons\mainmenu\Textures\73_Splash4.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class Controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="z\73STB\addons\mainmenu\Textures\73_Splash6.paa";
		};
	};
};

class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="z\73STB\addons\mainmenu\Textures\73_Splash3.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class ControlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="z\73STB\addons\mainmenu\Textures\73_Splash7.paa";
		};
	};
};
