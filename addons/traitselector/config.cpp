#include "script_component.hpp"

class CfgPatches
{
	class STB73_TraitSelector
	{
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { };             // Addon dependencies
        authors[] = {                       // Authors
            "Salmon"
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
	};
};
class CfgFunctions
{
	class STB73
	{
		class traitSelector
		{
			file="\z\73STB\addons\traitSelector\functions";
			class Init
			{
				postInit=1;
                description = "Trait Selector - Initialization";
                file = "\z\73STB\addons\traitSelector\functions\fn_Init.sqf";
			};
			class CreateConsole
			{
                description = "Trait Selector - Create Console";
                file = "\z\73STB\addons\traitSelector\functions\fn_CreateConsole.sqf";
			};
			class AddTraitsLog
			{
                description = "Trait Selector - Add Traits Log";
                file = "\z\73STB\addons\traitSelector\functions\fn_addTraitsLog.sqf";
			};
			class ShowTraitLogs
			{
                description = "Trait Selector - Show Trait Logs";
                file = "\z\73STB\addons\traitSelector\functions\fn_showTraitLogs.sqf";
            };
                class GiveTraits
            {
                description = "Trait Selector - Give Traits";
                file = "\z\73STB\addons\traitSelector\functions\fn_giveTraits.sqf";
			};
			class SwitchScreen
			{
                description = "Trait Selector - Switch Screen";
                file = "\z\73STB\addons\traitSelector\functions\fn_switchScreen.sqf";
			};
			class InformedTrait
			{
                description = "Trait Selector - Informed Trait";
                file = "\z\73STB\addons\traitSelector\functions\fn_InformedTrait.sqf";
			};
		};
	};
};
class RscText;
class RscPicture;
class RscButton;
class RscListBox;
class RscActivePictureKeepAspect;
class RscActivePictureSTB73: RscActivePictureKeepAspect
{
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
};
class STB73_TraitSelector_Main_UI
{
	name="STB73_TraitSelector_Main_UI";
	idd=1234;
	movingEnable="false";
	class ControlsBackground
	{
		class RscPicture_MainScreen: RscPicture
		{
			idc=2200;
			text="\z\73STB\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
		class RscText_Select: RscText
		{
			idc=2200;
			align="CENTER";
			style=2;
			valign="top";
			text="73rd STB Trait Selector";
			x="0.209806 * safezoneW + safezoneX";
			y="0.21202 * safezoneH + safezoneY";
			w="0.582656 * safezoneW";
			h="0.077 * safezoneH";
			colorText[]={1,1,1,1};
			SizeEx=0.15000001;
		};
	};
	class Controls
	{
		class RscActivePictureSTB73_Button: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Buttons\STB73Button.paa";
			onButtonClick="['Traits'] call STB73_fnc_switchScreen;";
			x="0.205 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.582656 * safezoneW";
			h="0.39 * safezoneH";
			tooltip="Open Trait Select Menu";
		};
		class RscButton_Logs: RscButton
		{
			idc=2201;
			text="Open Perm Logs";
			onButtonClick="[] call STB73_fnc_showTraitLogs;";
			x="0.206094 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.0979687 * safezoneW";
			h="0.033 * safezoneH";
			colorText[]={1,1,1,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
		class RscActivePictureSTB73_Exit: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Buttons\ExitButton.paa";
			onButtonClick="['Close'] call STB73_fnc_switchScreen;";
			x="0.4 * safezoneW + safezoneX";
			y="0.67 * safezoneH + safezoneY";
			w="0.2 * safezoneW";
			h="0.1 * safezoneH";
			tooltip="Exit Trait Selector";
		};
	};
};
class STB73_TraitSelector_Traits_UI
{
	name="STB73_TraitSelector_Traits_UI";
	idd=1234;
	movingEnable="false";
	onLoad="uiNamespace setVariable ['STB73_TraitSelector_ActiveUI',_this select 0];";
	class ControlsBackground
	{
		class RscPicture_MainScreen: RscPicture
		{
			idc=2200;
			text="\z\73STB\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
		class RscPictureSTB73_Button: RscPicture
		{
			idc=2200;
			text="\z\73STB\addons\traitSelector\Textures\Buttons\STB73Button.paa";
			x="0.24 * safezoneW + safezoneX";
			y="0.35 * safezoneH + safezoneY";
			w="0.195 * safezoneW";
			h="0.291328 * safezoneH"; 
		};
	};
	class Controls
	{
		class RscText_STB73: RscText
		{
			idc=2301;
			align="CENTER";
			x="0.4175 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.201094 * safezoneW";
			h="0.055 * safezoneH";
			colorText[]={1,1,1,0.80000001};
			colorBackground[]={-1,-1,-1,0};
			sizeEx=0.044;
		};
		class RscButton_Return: RscButton
		{
			idc=2201;
			text="Return to Main Menu Select";
			onButtonClick="['Back'] call STB73_fnc_switchScreen;";
			x="0.205 * safezoneW + safezoneX";
			y="0.73 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.02 * safezoneH";
			colorText[]={1,0,0,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
		class RscActivePicture_CLS: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Traits\CLS.paa";
			onButtonClick="['CLS'] call STB73_fnc_giveTraits;";
			x="0.47 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add CLS Perms";
		};
		class RscActivePicture_Doctor: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Traits\Doctor.paa";
			onButtonClick="['Doctor'] call STB73_fnc_giveTraits;";
			x="0.63 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add Doctor Perms";
		};
		class RscActivePicture_Engineer: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Traits\EOD.paa";
			onButtonClick="['Engineer'] call STB73_fnc_giveTraits;";
			x="0.47 * safezoneW + safezoneX";
			y="0.50 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add Engineer Perms";
		};
		class RscActivePicture_Remove: RscActivePictureSTB73
		{
			idc=2201;
			text="\z\73STB\addons\traitSelector\Textures\Traits\Remove.paa";
			onButtonClick="['None'] call STB73_fnc_giveTraits;";
			x="0.63 * safezoneW + safezoneX";
			y="0.50 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Remove All Perms";
		};
	};
};
class STB73_TraitSelector_Logs_UI
{
	name="STB73_TraitSelector_Logs_UI";
	idd=1234;
	movingEnable="false";
	class ControlsBackground
	{
		class RscPicture_Log: RscPicture
		{
			idc=2200;
			text="\z\73STB\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
		class RscText_Title: RscText
		{
			idc=1003;
			align="LEFT";
			style=2;
			valign="top";
			text="Trait Selector Logs";
			x="0.21125 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.33 * safezoneW";
			h="0.066 * safezoneH";
			sizeEx="2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Controls
	{
		class RscListBox_Logs: RscListBox
		{
			idc=1500;
			colorPictureSelected[]={0,0,0,1};
			colorActive[]={1,1,1,1};
			tooltipColorText[]={1,1,1,1};
			x="0.21125 * safezoneW + safezoneX";
			y="0.258 * safezoneH + safezoneY";
			w="0.495 * safezoneW";
			h="0.451 * safezoneH";
		};
		class RscButton_Return: RscButton
		{
			idc=2200;
			text="Return to Main Menu";
			onButtonClick="['Back'] call STB73_fnc_switchScreen;";
			x="0.205 * safezoneW + safezoneX";
			y="0.73 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.02 * safezoneH";
			colorText[]={1,0,0,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
	};
};
