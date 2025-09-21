class CfgPatches
{
	class 73_functions_map_markers
	{
		author = "73rd S-4 Team";
		addonRootClass="73_functions";
		requiredAddons[]=
		{
		    "73_functions"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	class 1st_meu_ace_map_markers
	{
		init="call compile preprocessFileLineNumbers '73_functions\mapMarkers\xeh_preinit.sqf'";
	};
};
class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class Add_Marker {
                displayName = "Mark Position";
                condition = "true";
                statement = "";
                class MarkClear {
                    displayName = "Add Clear Dot";
                    statement = "call QUI_fnc_ClearMarker;";
                    condition = "true";
                };
            };
        };
    };
};
