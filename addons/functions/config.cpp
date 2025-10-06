#include "script_component.hpp"

class CfgPatches {
    class 73STB_Functions {
        name = COMPONENT_NAME;
		units[] = 
        {
            "OPTRE_BattlejumperDrop",
            "OPTRE_OCLSSquadDrop"
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "OPTRE_modules",
            "Splits_Vehicles",
            "DMNS_Cipher_HEVPatch",
			"73STB_main"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"

#include "CfgFunctions.hpp"

class OPTRE_Zeus_RscCombo;
class OPTRE_ZEUS_RscText;
class OPTRE_ZEUS_RscButton;
class OPTRE_ZEUS_RscPicture;
class OPTRE_ZEUS_SructuredText;
class OPTRE_ZeusDisplay_PelicanAirAssault
{
	idd=27000;
	class Objects
	{
	};
	class controls
	{
		class OPTRE_ZEUS_SructuredText_1000: OPTRE_ZEUS_RscText
		{
			idc=1000;
			text=" OPTRE Air Assault Module";
			x="0.355625 * safezoneW + safezoneX";
			y="0.324 * safezoneH + safezoneY";
			w="0.28875 * safezoneW";
			h="0.03 * safezoneH";
		};
		class RscFrame_1800: OPTRE_ZEUS_RscPicture
		{
			idc=1800;
			x="0.355625 * safezoneW + safezoneX";
			y="0.357 * safezoneH + safezoneY";
			w="0.28875 * safezoneW";
			h="0.275 * safezoneH";
		};
		class RscButtonMenuOK_2600: OPTRE_ZEUS_RscButton
		{
			onButtonClick="_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); _arrayNumber = []; {_n = lbCurSel (_x select 0); _arrayNumber pushBack _n; _d = lbData [(_x select 0), _n]; if (_d == '' AND (_x select 1) != 'code') then {_d = (lbValue [(_x select 0), _n]); }; _logic setVariable [(_x select 1), _d, true]; } forEach [ [2100,'spawnDir'],[2101,'distance'],[2102,'exitDir'],[2103,'Pelican_Unarmed_Colour'],[2104,'flyInHeight'],[2105,'side'],[2106,'code'],[2107,'gunner'],[2108,'vehicle'],[2109,'box1'],[2110,'box2'],[2112,'box4'],[2113,'box5'],[2114,'box6'] ]; profileNamespace setVariable ['OPTRE_Zeus_PelicanAirAssault',_arrayNumber]; closeDialog 0;";
			idc=1002;
			text="Ok";
			x="0.587656 * safezoneW + safezoneX";
			y="0.6355 * safezoneH + safezoneY";
			w="0.0567187 * safezoneW";
			h="0.022 * safezoneH";
		};
		class RscButtonMenuCancel_2700: OPTRE_ZEUS_RscButton
		{
			onButtonClick="_arrayNumber = []; { _n = lbCurSel (_x select 0); _arrayNumber pushBack _n; } forEach [ [2100,'spawnDir'],[2101,'distance'],[2102,'exitDir'],[2103,'Pelican_Unarmed_Colour'],[2104,'flyInHeight'],[2105,'side'],[2106,'code'],[2107,'gunner'],[2108,'vehicle'],[2109,'box1'],[2110,'box2'],[2111,'box3'],[2112,'box4'],[2113,'box5'],[2114,'box6'] ]; profileNamespace setVariable ['OPTRE_Zeus_PelicanAirAssault',_arrayNumber]; closeDialog 0;";
			idc=1003;
			text="Close";
			x="0.525781 * safezoneW + safezoneX";
			y="0.6355 * safezoneH + safezoneY";
			w="0.0567187 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1001: OPTRE_ZEUS_SructuredText
		{
			idc=1001;
			text="Approach From:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.0721875 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2100: OPTRE_Zeus_RscCombo
		{
			idc=2100;
			OnLoad="{_i = (_this select 0) lbAdd (_x select 0); (_this select 0) lbSetValue [_i, (_x select 1)];} forEach [['North',0],['North-East',45],['East',90],['South-East',135],['South',180],['South-West',225],['West',270],['North-West',270]]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 0);";
			x="0.438124 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1002: OPTRE_ZEUS_SructuredText
		{
			idc=1002;
			text="Spawn Distance:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.401 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2101: OPTRE_Zeus_RscCombo
		{
			idc=2101;
			OnLoad="{_i = (_this select 0) lbAdd (str _x + 'm'); (_this select 0) lbSetValue [_i, _x];} forEach [3000,4000,5000,6000,7000,8000,9000,10000,11000,12000,13000,14000,15000]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 1);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.401 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1003: OPTRE_ZEUS_SructuredText
		{
			idc=1003;
			text="Exit Direction:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.434 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2102: OPTRE_Zeus_RscCombo
		{
			idc=2102;
			OnLoad="{_i = (_this select 0) lbAdd (_x select 0); (_this select 0) lbSetValue [_i, (_x select 1)];} forEach [['North',0],['North-East',45],['East',90],['South-East',135],['South',180],['South-West',225],['West',270],['North-West',270]]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 2);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.434 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1004: OPTRE_ZEUS_SructuredText
		{
			idc=1004;
			text="Pelican Style:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.467 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2103: OPTRE_Zeus_RscCombo
		{
			idc=2103;
			OnLoad="{_i = (_this select 0) lbAdd (_x select 0); _i = (_this select 0) lbSetData [_i, (_x select 1)];} forEach [['73rd STB','73rd STB'],['10th MEB','10th MEB']]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 3);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.467 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1005: OPTRE_ZEUS_SructuredText
		{
			idc=1005;
			text="Fly In Height:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2104: OPTRE_Zeus_RscCombo
		{
			idc=2104;
			OnLoad="{_i = (_this select 0) lbAdd (str _x + 'm'); _i = (_this select 0) lbSetValue [_i, _x];} forEach [20,30,40,50,60,70,80,90,100,110,120,130,140,150,200,300,400,500]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 4);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1006: OPTRE_ZEUS_SructuredText
		{
			idc=1006;
			text="Pelicans Side:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.533 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2105: OPTRE_Zeus_RscCombo
		{
			idc=2105;
			OnLoad="{_i = (_this select 0) lbAdd _x; _i = (_this select 0) lbSetData [_i, _x];} forEach ['WEST','EAST','INDEPENDENT','CIVILIAN']; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 5); 0 = [] spawn { {((findDisplay 27000) displayCtrl _x) ctrlSetTextColor (switch ( lbCurSel ((findDisplay 27000) displayCtrl 2105) ) do {case 0: {[0,0,1,1]}; case 1: {[1,1,1,1]}; case 2: {[0,1,0,1]}; case 3: {[0,0.5,1,1]};});} forEach [1000,22100,22101]; };";
			onLBSelChanged="0 = [] spawn { {((findDisplay 27000) displayCtrl _x) ctrlSetTextColor (switch ( lbCurSel ((findDisplay 27000) displayCtrl 2105) ) do {case 0: {[0,0,1,1]}; case 1: {[1,1,1,1]}; case 2: {[0,1,0,1]}; case 3: {[0,0.5,1,1]};});} forEach [1000,22100,22101]; }; ";
			x="0.438125 * safezoneW + safezoneX";
			y="0.533 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1007: OPTRE_ZEUS_SructuredText
		{
			idc=1007;
			text="Custom Code:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.566 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2106: OPTRE_Zeus_RscCombo
		{
			idc=2106;
			OnLoad="(_this select 0) lbAdd 'W.I.P'; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 6);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.566 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1008: OPTRE_ZEUS_SructuredText
		{
			idc=1008;
			text="Vehicle Gunner:";
			x="0.360781 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0773437 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2107: OPTRE_Zeus_RscCombo
		{
			idc=2107;
			OnLoad="(_this select 0) lbAdd 'W.I.P'; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 7);";
			x="0.438125 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0670312 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1009: OPTRE_ZEUS_SructuredText
		{
			idc=1009;
			text="Vehicle To Be Dropped:";
			x="0.510312 * safezoneW + safezoneX";
			y="0.37 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2108: OPTRE_Zeus_RscCombo
		{
			idc=2108;
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'name'))); (_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_PelicanSupplyDrop' >> 'Arguments' >> 'vehicle' >> 'values') call BIS_fnc_getCfgSubClasses); (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 8);";
			x="0.510312 * safezoneW + safezoneX";
			y="0.39 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_ZEUS_SructuredText_1010: OPTRE_ZEUS_SructuredText
		{
			idc=1010;
			text="Squads To Be Droped:";
			x="0.510312 * safezoneW + safezoneX";
			y="0.414 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2109: OPTRE_Zeus_RscCombo
		{
			idc=2109;
			onLoad="{_i = (_this select 0) lbAdd ('Squad 1: ' + _x); _i = (_this select 0) lbSetData [_i, _x]; } forEach [""73rd STB"",""10th MEB""]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 9);";
			x="0.510312 * safezoneW + safezoneX";
			y="0.434 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
		};
		class OPTRE_Zeus_RscCombo_2110: OPTRE_Zeus_RscCombo
		{
			idc=2110;
			onLoad="{_i = (_this select 0) lbAdd ('Squad 2: ' + _x); _i = (_this select 0) lbSetData [_i, _x]; } forEach [""73rd STB"",""10th MEB""]; (_this select 0) lbSetCurSel ((profileNamespace getVariable ['OPTRE_Zeus_PelicanAirAssault',[0,3,5,0,5,0,0,0,0,0,1,1,0,0,0,0] ]) select 10);";
			x="0.510312 * safezoneW + safezoneX";
			y="0.467 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
		};
	};
};
class OPTRE_ZeusDisplay_BJDrop
{
	idd=27000;
	onLoad="0 = [] spawn {private ['_v']; _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _v = (_logic getVariable ['OPTRE_ModuleValue',[5,11,3,7,8,3,2,7]]); for '_i' from 0 to 7 do { lbSetCurSel [([1500,1501,1502,1503,1504,1505,1506,1507] select _i), (_v select _i)];};};";
	class Objects
	{
	};
	class controls
	{
		class RscListbox_1500: OPTRE_Zeus_RscCombo
		{
			idc=1500;
			x="0.365937 * safezoneW + safezoneX";
			y="0.335 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1501: OPTRE_Zeus_RscCombo
		{
			idc=1501;
			x="0.365937 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1502: OPTRE_Zeus_RscCombo
		{
			idc=1502;
			x="0.365937 * safezoneW + safezoneX";
			y="0.401 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1503: OPTRE_Zeus_RscCombo
		{
			idc=1503;
			x="0.365937 * safezoneW + safezoneX";
			y="0.434 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1504: OPTRE_Zeus_RscCombo
		{
			idc=1504;
			x="0.365937 * safezoneW + safezoneX";
			y="0.467 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1505: OPTRE_Zeus_RscCombo
		{
			idc=1505;
			x="0.365937 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1506: OPTRE_Zeus_RscCombo
		{
			idc=1506;
			x="0.365937 * safezoneW + safezoneX";
			y="0.533 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1507: OPTRE_Zeus_RscCombo
		{
			idc=1507;
			x="0.365937 * safezoneW + safezoneX";
			y="0.566 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,0,0,1};
			colorActive[]={0,0,0,0.89999998};
            colorDisabled[]={0.81,0.1,1,0.40000001};
            colorPicture[]={0.81,0.1,1,1};
			colorSelect[]={1,0,0,1};
			colorSelect2Right[]={1,0,0,1};
			colorSelectBackground[]={0.81,0.1,1,0.40000001};
			colorSelectBackground2[]={0.81,0.1,1,0.40000001};
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'Module_OPTRE_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscText_1002: OPTRE_ZEUS_RscText
		{
			idc=1002;
			text="OPTRE Battlejumper Drop Module";
			x="0.355623 * safezoneW + safezoneX";
			y="0.291 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={1,0,0,1};
		};
		class RscButtonMenuOK_2600: OPTRE_ZEUS_RscButton
		{
			text="Close";
			x="0.402031 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={1,0,0,1};
			onButtonClick="closeDialog 0;";
		};
		class RscButtonMenuOK_2601: OPTRE_ZEUS_RscButton
		{
			text="Drop!";
			x="0.45875 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={1,0,0,1};
			onButtonClick="_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); { _logic setVariable [(_x select 1), (lbData [(_x select 0), (lbCurSel (_x select 0))]), true]; } forEach [ [1500,'BJ_Man_1'],[1501,'BJ_Man_2'],[1502,'BJ_Man_3'],[1503,'BJ_Man_4'],[1504,'BJ_Man_5'],[1505,'BJ_Man_6'],[1506,'BJ_Man_7'],[1507,'BJ_Man_8'] ]; closeDialog 0;";
		};
		class RscFrame_1800: OPTRE_ZEUS_RscPicture
		{
			idc=1800;
			x="0.355625 * safezoneW + safezoneX";
			y="0.324 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.275 * safezoneH";
			colorText[]={1,1,1,0.89999998};
			colorBackground[]={1,1,1,0.89999998};
		};
		class RscFrame_1801: OPTRE_ZEUS_RscPicture
		{
			idc=1801;
			x="0.355625 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.04125 * safezoneW";
			h="0.033 * safezoneH";
			colorText[]={1,1,1,0.89999998};
			colorBackground[]={1,1,1,0.89999998};
		};
	};
};
class CfgSounds
{
	sounds[] =
	{
		"OPTRE_sounds_HEV_Tone",
		"OPTRE_sounds_HEV_GroundAlarm",
		"OPTRE_sounds_HEV_EngineStart",
		"OPTRE_sounds_HEV_interiorDropLoop"
	};
	class OPTRE_Sounds_HEV_Tone
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Tone";
		sound[]=
		{
			"z\73STB\addons\functions\Sounds\OPTRE_HEV_Tone.ogg",
			1.25,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_GroundAlarm
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Ground Alarm";
		sound[] =
		{
			"z\73STB\addons\functions\Sounds\OPTRE_HEV_GroundAlarm.ogg",
			0.5,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_EngineStart
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Engine Start";
		sound[] =
		{
			"z\73STB\addons\functions\Sounds\OPTRE_HEV_EngineStart.ogg",
			2,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};	
	class OPTRE_sounds_HEV_interiorDropLoop
	{
		dlc = "HEV Patch";
		name = "[OPTRE] Corvette HEV Drop Engine Loop";
		sound[] =
		{
			"z\73STB\addons\functions\Sounds\OPTRE_HEV_interiorDropLoop.ogg",
			1,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
};
class cfgVehicles
{
	class Module_F;
	class OPTRE_PelicanSupplyDrop;
	class Module_OPTRE_HEV: Module_F
	{
		scope=2;
		displayName="HEV Module";
		icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
		category="OPTRE_HEV";
		function="OPTRE_fnc_ModuleHEV";
		functionPriority=99;
		isGlobal=0;
		isTriggerActivated=1;
		author="Article 2 Studios";
		is3DEN=0;
		class Arguments
		{
			class shipDeployment
			{
				displayName="Deployment Mode";
				description="This controls the drop scene for the players. The drop will always be directly above the module.";
				defaultValue="Corvette";
				typeName="STRING";
				class values
				{
					class n1
					{
						name="Deploy from Corvette";
						value="Corvette";
						default=1;
					};
					class n2
					{
						name="Deploy without ship";
						value="No Ship";
					};
					class n3
					{
						name="Deploy from Frigate";
						value="Frigate";
					};
				};
			};
			class LaunchDelay
			{
				displayName="Count Down Timer";
				description="This is the time that the HEVs will be hanging waiting until drop.";
				defaultValue="10";
				typeName="NUMBER";
			};
			class randomXYVelocity
			{
				displayName="Randomised X/Y Velocity";
				description="Random drift of pods on the horizontal axis. This must be at least 2 (otherwise the script will set it to 2) to minimize pods hitting each other.";
				defaultValue="2";
				typeName="NUMBER";
			};
			class launchSpeed
			{
				displayName="Down Velocity On Launch";
				description="A negative value of how fast the pods descend. Should keep at -1.";
				defaultValue="-1";
				typeName="NUMBER";
			};
			class manualControl
			{
				displayName="Player Control Of HEV";
				description="Depreciated Entry. No longer in use";
				defaultValue=1;
				typeName="NUMBER";
				class values
				{
					class n1
					{
						name="Empty";
						value=0;
					};
					class n2
					{
						name="Empty";
						value=1;
						default=1;
					};
				};
			};
			class startHeight
			{
				displayName="STAGE1: Start Height";
				description="Height that the pods will drop from. Recommend above 5000m";
				defaultValue="5000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereStartHeight
			{
				displayName="STAGE2A: Atmospheric Entry Height";
				description="At what height to engage the atmo entry fire effects. The difference between this and the start hieight shouldn't be more then 2000";
				defaultValue="3000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereEndHeight
			{
				displayName="STAGE2B: End Entry Height";
				description="At what height to end the entry atmo effects.";
				defaultValue="2000";
				typeName="NUMBER";
			};
			class chuteDeployHeightHeight
			{
				displayName="STAGE3A: Chute Deployment Height";
				description="Self explanitory.";
				defaultValue="1000";
				typeName="NUMBER";
			};
			class chuteDetachHeight
			{
				displayName="STAGE3B: Chute Detach Height";
				description="Self explanitory.";
				defaultValue="500";
				typeName="NUMBER";
			};
			class boasterHeight
			{
				displayName="STAGE4: Booster Up Height";
				description="Depreciated entry. No longer in use.";
				defaultValue="0";
				typeName="NUMBER";
			};
			class deleteFrigate
			{
				displayName="Delete Ship";
				description="If spawning with a ship, should it be deleted after drop?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Delete Ship";
						value=1;
						default=1;
					};
					class n2
					{
						name="Dont Delete Ship";
						value=0;
					};
				};
			};
			class deleteChutes
			{
				displayName="Delete Chutes After Detach";
				description="Should the chutes auto delete upon detach or be added to the cleanup module?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Add Chutes To HEV CleanUp Module";
						value=0;
						default=1;
					};
					class n2
					{
						name="Delete Chutes On Detach";
						value=1;
					};
				};
			};
			class deleteHEVafter
			{
				displayName="HEVs Can Be Delete After";
				description="If the cleanup module is present, HEVs will be deleted after X amount of seconds.";
				defaultValue="600";
				typeName="NUMBER";
			};
		};
	};
    class Module_OPTRE_ODSTDrop: Module_F
    {
        scope=2;
        displayName="Drop AI ODST Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OPTRE_EditorSupport";
        function="OPTRE_fnc_ModuleODSTHEV";
        functionPriority=99;
        isGlobal=0;
        isTriggerActivated=1;
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class ODST_Man_1
            {
                displayName="Team Leader";
                description="Class of ODST to be inserted via HEV.";
                defaultValue="random";
                typeName="STRING";
                class values
                {
                    class n0
                    {
                        name="None";
                        value="none";
                    };
                    class n1
                    {
                        name="Random";
                        value="random";
                        default=1;
                    };
                    class n3
                    {
                        name="[73] ODST STB Rifleman";
                        value="73_STB_ODST_Rifleman";
                    };
                    class n4
                    {
                        name="[73] ODST STB Rifleman AT";
                        value="73_STB_ODST_AT";
                    };
                    class n5
                    {
                        name="[73] ODST STB Autorifleman";
                        value="73_STB_ODST_Autorifleman";
                    };
                    class n6
                    {
                        name="[73] ODST STB Marksman";
                        value="73_STB_ODST_Marksman";
                    };
                    class n7
                    {
                        name="[73] ODST STB Grenadier";
                        value="73_STB_ODST_Grenadier";
                    };
                    class n8
                    {
                        name="[73] ODST STB Sniper";
                        value="73_STB_ODST_Sniper";
                    };
                    class n9
                    {
                        name="[73] ODST STB Demo";
                        value="73_STB_ODST_Demo";
                    };
                    class n10
                    {
                        name="[73] ODST STB Scout";
                        value="73_STB_ODST_Scout";
                    };
                    class n11
                    {
                        name="[73] ODST STB Team Lead";
                        value="73_STB_ODST_Team_Lead";
                    };
                    class n12
                    {
                        name="[73] ODST STB SORC";
                        value="73_STB_ODST_Medic";
                    };
                    class n13
                    {
                        name="[73] ODST STB Squad Lead";
                        value="73_STB_ODST_Squad_Lead";
                    };
                };
            };
            class ODST_Man_2: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_3: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_4: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_5: ODST_Man_1
            {
                displayName="Squad Leader";
            };
            class ODST_Man_6: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_7: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_8: ODST_Man_1
            {
                displayName="Team Member";
            };
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class OPTRE_ODSTDrop: OPTRE_PelicanSupplyDrop
    {
        displayName="ODST Drop Module";
        category="OPTRE_ZeusReSup";
        scopeCurator=2;
        curatorInfoType="OPTRE_ZeusDisplay_ODSTDrop";
        function="OPTRE_fnc_ModuleODSTHEV";
        portrait="OPTRE_Vehicles\HEV\Data\icon2.paa";
        author="Article 2 Studios";
    };
    class Module_OPTRE_BattlejumperDrop: Module_F
    {
        scope=2;
        displayName="Drop AI Battlejumper Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OPTRE_EditorSupport";
        function="OPTRE_fnc_ModuleBJHEV";
        functionPriority=99;
        isGlobal=0;
        isTriggerActivated=1;
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class BJ_Man_1
            {
                displayName="Team Leader";
                description="Class of Battlejumper to be inserted via HEV.";
                defaultValue="random";
                typeName="STRING";
                class values
                {
                    class n0
                    {
                        name="None";
                        value="none";
                    };
                    class n1
                    {
                        name="Random";
                        value="random";
                        default=1;
                    };
                    class n3
                    {
                        name="Battlejumper Rifleman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR";
                    };
                    class n4
                    {
                        name="Battlejumper Rifleman AT";
                        value="OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT";
                    };
                    class n5
                    {
                        name="Battlejumper Autorifleman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman";
                    };
                    class n6
                    {
                        name="Battlejumper Marksman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Marksman";
                    };
                    class n7
                    {
                        name="Battlejumper Grenadier";
                        value="OPTRE_Ins_BJ_Soldier_URB_Grenadier";
                    };
                    class n8
                    {
                        name="Battlejumper Shield";
                        value="OPTRE_Ins_BJ_Soldier_URB_Shield";
                    };
                    class n9
                    {
                        name="Battlejumper Demo";
                        value="OPTRE_Ins_BJ_Soldier_URB_Demolitions";
                    };
                    class n10
                    {
                        name="Battlejumper Scout";
                        value="OPTRE_Ins_BJ_Soldier_URB_Scout";
                    };
                    class n11
                    {
                        name="Battlejumper Team Lead";
                        value="OPTRE_Ins_BJ_Soldier_URB_TeamLeader";
                    };
                    class n12
                    {
                        name="Battlejumper SORC";
                        value="OPTRE_Ins_BJ_Soldier_URB_Corpsman";
                    };
                    class n13
                    {
                        name="Battlejumper Breacher";
                        value="OPTRE_Ins_BJ_Soldier_URB_Engineer2";
                    };
                };
            };
            class BJ_Man_2: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_3: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_4: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_5: BJ_Man_1
            {
                displayName="Squad Leader";
            };
            class BJ_Man_6: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_7: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_8: BJ_Man_1
            {
                displayName="Team Member";
            };
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class OPTRE_BattlejumperDrop: OPTRE_PelicanSupplyDrop
    {
        displayName="Battlejumper Drop Module";
        category="OPTRE_ZeusReSup";
        scopeCurator=2;
        curatorInfoType="OPTRE_ZeusDisplay_BJDrop";
        function="OPTRE_fnc_ModuleBJHEV";
        portrait="OPTRE_Vehicles\HEV\Data\icon2.paa";
        author="Article 2 Studios";
    };
    class Module_OPTRE_OCLSSquadDrop: Module_F
    {
        scope=2;
        displayName="Drop AI OCLS Squad Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OPTRE_EditorSupport";
        function="OPTRE_fnc_ModuleOCLSSquadPod";
        functionPriority=99;
        isGlobal=0;
        isTriggerActivated=1;
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class OPTRE_OCLSSquadDrop: OPTRE_PelicanSupplyDrop
    {
        displayName="OCLS Squad Drop Module";
        category="OPTRE_ZeusReSup";
        scopeCurator=2;
        curatorInfoType="";
        function="OPTRE_fnc_ModuleOCLSSquadPod";
        portrait="OPTRE_Vehicles\HEV\Data\icon2.paa";
        author="Article 2 Studios";
    };
    class Module_OPTRE_PelicanAirAssault: Module_F
    {
        scope=2;
        displayName="Pelican Air Assault Event";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="OPTRE_EditorSupport";
        function="OPTRE_fnc_ModulePelicanAirAssault";
        functionPriority=99;
        isGlobal=0;
        isTriggerActivated=1;
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class Pelican_Unarmed_Colour
            {
                displayName="D77-TC Pelican";
                description="[Pelican] The D77-TC is a variant of the Pelican Drop Ship, this option determines what authority the Pelican falls under.";
                defaultValue="10th";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="73rd STB Pelican";
                        value="73rd";
                    };
                    class n2
                    {
                        name="10th MEB Pelican";
                        value="10th";
                        default=1;
                    };
                };
            };
            class spawnDir
            {
                displayName="Spawn Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="360";
                typeName="NUMBER";
            };
            class exitDir
            {
                displayName="Exit Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="180";
                typeName="NUMBER";
            };
            class distance
            {
                displayName="Spawn / De-spawn Distance";
                description="A number that determines the distance the Pelican will be spawned in the direction of Exit and Spawn.";
                defaultValue="3000";
                typeName="NUMBER";
            };
            class flyInHeight
            {
                displayName="Fly In Height";
                description="A number that determines the height the Pelican will fly at.";
                defaultValue="100";
                typeName="NUMBER";
            };
            class side
            {
                displayName="Side Of Pelican / Groups";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="WEST";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Side: EAST";
                        value="EAST";
                    };
                    class n2
                    {
                        name="Side: WEST";
                        value="WEST";
                        default=1;
                    };
                    class n3
                    {
                        name="Side: Independent";
                        value="INDEPENDENT ";
                    };
                    class n4
                    {
                        name="Side: civilian";
                        value="CIVILIAN";
                    };
                };
            };
            class vehicle
            {
                displayName="Vehicle To Drop";
                description="Type of vehicle required. A driver and a gunner will be added to the vehicles.";
                defaultValue="";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Don't Drop A Vehicles";
                        value="";
                        default=1;
                    };
                };
            };
            class box1
            {
                displayName="Branch Of Military";
                description="Type of units to be spawned, 73rd, 10th MEB..";
                defaultValue="Marines";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="73rd STB";
                        value="73rd STB";
                    };
                    class n2
                    {
                        name="10th MEB";
                        value="10th MEB";
                        default=1;
                    };
                };
            };
            class box2
            {
                displayName="Squad Sizes";
                description="The number of units in both squads spawned. 2 squads will always be spawned.";
                defaultValue="6";
                typeName="NUMBER";
                class values
                {
                    class n6
                    {
                        name="Six";
                        value=6;
                        default=1;
                    };
                };
            };
            class box3
            {
                displayName="WayPoints";
                description="An array or marker position that the groups spawned will follow once on the ground. For Example: M1,M2,Marker1,MapMarkerZ (No Spaces).";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="cycle";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Cycle Back To First Waypoint";
                        value="cycle";
                        default=1;
                    };
                    class n2
                    {
                        name="Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="Patrol Around Final Waypoint";
                        value="patrol ";
                    };
                };
            };
            class code
            {
                displayName="Custom Box Code";
                description="A script that will be run on any pod assigned as CUSTOM. _This refers to the pod that is spawned. For example: _this addMagazineCargoGlobal ['OPTRE_60Rnd_5x23mm_Mag',4];";
                defaultValue="";
                typeName="STRING";
            };
        };
        class ModuleDescription
        {
            description[]=
            {
                "This module will spawn a Pelican drop ship that can deliver 2 squads and / or a vehicle the spawned groups can be controlled by zeus. Place the module where you would like the supplies to be dropped on the map. Note that if a Landing Pad is nearby the pelican will always try to land on that position when delivering vehicles as this module uses the LAND command, this may cause a problem if more than one Pelican try to land on a pad at once (This apply s to Landing Pads native to the map as well a spawned / placed pads.)."
            };
            sync[]=
            {
                "EmptyDetector"
            };
            position=1;
            direction=0;
            class EmptyDetector
            {
                duplicate=1;
                position=0;
                direction=0;
                optional=1;
            };
        };
    };
    class OPTRE_PelicanAirAssault: OPTRE_PelicanSupplyDrop
    {
        displayName="Pelican Air Assault";
        category="OPTRE_ZeusReSup";
        scopeCurator=2;
        curatorInfoType="OPTRE_ZeusDisplay_PelicanAirAssault";
        function="OPTRE_fnc_ModulePelicanAirAssault";
        portrait="OPTRE_Vehicles\Pelican\Data\icon2.paa";
        author="Article 2 Studios";
    };
};
class OPTRE_UNSCMENU_RscButton;
class OPTRE_HEVPanel
{
	class controls
	{
		class OPTRE_UNSCMENU_RscButton_1602: OPTRE_UNSCMENU_RscButton
		{
			idc=1602;
			text="Launch Now";
			x="0.711406 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.134062 * safezoneW";
			h="0.055 * safezoneH";
			onButtonClick="if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {disableSerialization; _dialog = findDisplay 5600;_10 = (_dialog displayCtrl 10);_11 = (_dialog displayCtrl 11);_12 = (_dialog displayCtrl 12);_13 = (_dialog displayCtrl 13);_14 = (_dialog displayCtrl 14); _15 = (_dialog displayCtrl 15);_16 = (_dialog displayCtrl 16);0 = [[(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'),[],(_16 lbValue (lbCurSel _16)),30,2,-1,(_10 lbValue (lbCurSel _10)),(_11 lbValue (lbCurSel _11)),(_12 lbValue (lbCurSel _12)),(_13 lbValue (lbCurSel _13)),(_14 lbValue (lbCurSel _14)),true,(_15 lbValue (lbCurSel _15)),600],OPTRE_CurrentConsole] remoteExec [""OPTRE_Fnc_HEVRoomDynamicSetupGrabUnits"", 2, false];} else {playSound 'FD_CP_Not_Clear_F';};";
		};
	};
};
class RscTitles
{
	#include "ui\jumpPackUI.hpp"
};
