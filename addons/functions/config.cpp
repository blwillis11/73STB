#include "script_component.hpp"

class CfgPatches {
    class 73STB_Functions {
        name = COMPONENT_NAME;
		units[] = 
        {
			"STB73_Module_HEV",
			"STB73_Module_ODSTDrop",
			"STB73_Module_BattlejumperDrop",
			"STB73_Module_OCLSSquadDrop",
			"STB73_Module_PelicanAirAssault",
			"STB73_ODSTDrop",
			"STB73_BattlejumperDrop",
			"STB73_OCLSSquadDrop",
			"STB73_PelicanAirAssault"
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
#include "CfgVehicles.hpp"
#include "CfgFunctions.hpp"

class OPTRE_Zeus_RscCombo;
class OPTRE_ZEUS_RscText;
class OPTRE_ZEUS_RscButton;
class OPTRE_ZEUS_RscPicture;
class OPTRE_ZEUS_SructuredText;
class OPTRE_ZeusDisplay_PelicanAirAssault;
class STB73_ZeusDisplay_PelicanAirAssault:OPTRE_ZeusDisplay_PelicanAirAssault
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
			text="[73] Air Assault Module";
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
class OPTRE_ZeusDisplay_ODSTDrop;
class STB73_ZeusDisplay_ODSTDrop: OPTRE_ZeusDisplay_ODSTDrop
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1501: OPTRE_Zeus_RscCombo
		{
			idc=1501;
			x="0.365937 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1502: OPTRE_Zeus_RscCombo
		{
			idc=1502;
			x="0.365937 * safezoneW + safezoneX";
			y="0.401 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1503: OPTRE_Zeus_RscCombo
		{
			idc=1503;
			x="0.365937 * safezoneW + safezoneX";
			y="0.434 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1504: OPTRE_Zeus_RscCombo
		{
			idc=1504;
			x="0.365937 * safezoneW + safezoneX";
			y="0.467 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1505: OPTRE_Zeus_RscCombo
		{
			idc=1505;
			x="0.365937 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1506: OPTRE_Zeus_RscCombo
		{
			idc=1506;
			x="0.365937 * safezoneW + safezoneX";
			y="0.533 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscListbox_1507: OPTRE_Zeus_RscCombo
		{
			idc=1507;
			x="0.365937 * safezoneW + safezoneX";
			y="0.566 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_ODSTDrop' >> 'Arguments' >> 'ODST_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
			onLBSelChanged="  _logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]);  _arrayOfComboPoss = [];  {_arrayOfComboPoss pushBack (lbCurSel _x);} forEach [1500,1501,1502,1503,1504,1505,1506,1507];  _logic setVariable ['OPTRE_ModuleValue',_arrayOfComboPoss];  ";
		};
		class RscText_1002: OPTRE_ZEUS_RscText
		{
			idc=1002;
			text="OPTRE ODST Drop Module";
			x="0.355623 * safezoneW + safezoneX";
			y="0.291 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0,0,1,1};
		};
		class RscButtonMenuOK_2600: OPTRE_ZEUS_RscButton
		{
			text="Close";
			x="0.402031 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0,0,1,1};
			onButtonClick="closeDialog 0;";
		};
		class RscButtonMenuOK_2601: OPTRE_ZEUS_RscButton
		{
			text="Drop!";
			x="0.45875 * safezoneW + safezoneX";
			y="0.599 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0,0,1,1};
			onButtonClick="_logic = (missionnamespace getvariable ['BIS_fnc_initCuratorAttributes_target',objnull]); { _logic setVariable [(_x select 1), (lbData [(_x select 0), (lbCurSel (_x select 0))]), true]; } forEach [ [1500,'ODST_Man_1'],[1501,'ODST_Man_2'],[1502,'ODST_Man_3'],[1503,'ODST_Man_4'],[1504,'ODST_Man_5'],[1505,'ODST_Man_6'],[1506,'ODST_Man_7'],[1507,'ODST_Man_8'] ]; closeDialog 0;";
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
class STB73_ZeusDisplay_BJDrop: OPTRE_ZeusDisplay_ODSTDrop
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
			onLoad="{_i = (_this select 0) lbAdd ((getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'name')));(_this select 0) lbSetData [_i, (getText (configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values' >> _x >> 'value'))]; } forEach ((configfile >> 'CfgVehicles' >> 'STB73_Module_BattlejumperDrop' >> 'Arguments' >> 'BJ_Man_1' >> 'values') call BIS_fnc_getCfgSubClasses);";
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
