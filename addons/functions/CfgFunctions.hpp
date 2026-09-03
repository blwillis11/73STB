class CfgFunctions{
    class STB73
    {
        tag = "STB73";
        class Misc
        {
            file = "z\73STB\addons\functions\misc";
            //Used with permission from Jerry of the 105th
            class Init_misc
			{
				postInit=1;
                description = "Misc - Initialization";
                file = "z\73STB\addons\functions\misc\fn_Init_misc.sqf";
			};
			class DefaultKits
			{
                description = "Misc - Default Kits";
                file = "z\73STB\addons\functions\misc\fn_DefaultKits.sqf";
			};
			class ZeusMessage
			{
                description = "Misc - Zeus Message";
                file = "z\73STB\addons\functions\misc\fn_ZeusMessage.sqf";
			};
            class RescaleObjects
            {
                description = "Misc - Rescale Objects";
                file = "z\73STB\addons\functions\misc\fn_RescaleObjects.sqf";
            };
            class RepairRefuelRearmArea
            {
                description = "Misc - Repair Refuel Rearm Area";
                file = "z\73STB\addons\functions\misc\fn_RepairRefuelRearmArea.sqf";
            };
            class MakeACEArsenal
            {
                description = "Misc - Make ACE Arsenal";
                file = "z\73STB\addons\functions\misc\fn_MakeACEArsenal.sqf";
            };
            class LoadIntoNearestVehicle
            {
                description = "Misc - Load object into nearest compatible vehicle cargo";
                file = "z\73STB\addons\functions\misc\fn_loadIntoNearestVehicle.sqf";
            };
            class destroyEquipment
            {
                description = "Misc - Destroy equipment";
                file = "z\73STB\addons\functions\misc\fn_destroyEquipment.sqf";
            };
        };
        class Modules
        {
            file = "z\73STB\addons\functions\modules";
            class ModuleODSTHEV { file = "z\73STB\addons\functions\modules\fn_ModuleODSTHEV.sqf"; description = "STB73 - ODST HEV module"; };
            class ModulePelicanAirAssault { file = "z\73STB\addons\functions\modules\fn_ModulePelicanAirAssault.sqf"; description = "STB73 - Pelican air assault module"; };
            class ModuleHEV { file = "z\73STB\addons\functions\modules\fn_ModuleHEV.sqf"; description = "STB73 - HEV module"; };
            class ModuleHEVCleanup { file = "z\73STB\addons\functions\modules\fn_ModuleHEVCleanup.sqf"; description = "STB73 - HEV Cleanup module"; };
            class ModulePelicanResupply { file = "z\73STB\addons\functions\modules\fn_ModulePelicanResupply.sqf"; description = "STB73 - Pelican resupply module"; };
        };
        class Thrusters
        {
            file = "z\73STB\addons\functions\thrusters";
            class GetFlightTime { file = "z\73STB\addons\functions\thrusters\fn_GetFlightTime.sqf"; description = "Thrusters - get flight time"; };
            class IncreaseThrusterLevel { file = "z\73STB\addons\functions\thrusters\fn_IncreaseThrusterLevel.sqf"; description = "Thrusters - increase level"; };
            class RegisterThrusters { file = "z\73STB\addons\functions\thrusters\fn_RegisterThrusters.sqf"; description = "Thrusters - register thrusters"; };
            class ThrusterAnimate { file = "z\73STB\addons\functions\thrusters\fn_ThrusterAnimate.sqf"; description = "Thrusters - animate"; };
            class ThrusterDeAnimate { file = "z\73STB\addons\functions\thrusters\fn_ThrusterDeAnimate.sqf"; description = "Thrusters - de-animate"; };
            class ThrusterDisengage { file = "z\73STB\addons\functions\thrusters\fn_ThrusterDisengage.sqf"; description = "Thrusters - disengage"; };
            class AfterburnersDisengage { file = "z\73STB\addons\functions\thrusters\fn_AfterburnersDisengage.sqf"; description = "Thrusters - afterburners disengage"; };
            class Init_vic { postInit = 1;  file = "z\73STB\addons\functions\thrusters\fn_Init_vic.sqf"; description = "Thrusters - initialization"; };
            class ChangeSpeed { file = "z\73STB\addons\functions\thrusters\fn_ChangeSpeed.sqf"; description = "Thrusters - change speed"; };
            class DecreaseThrusterLevel { file = "z\73STB\addons\functions\thrusters\fn_DecreaseThrusterLevel.sqf"; description = "Thrusters - decrease level"; };
            class EngageAfterburners { file = "z\73STB\addons\functions\thrusters\fn_EngageAfterburners.sqf"; description = "Thrusters - engage afterburners"; };
            class EngageAirbrakes { file = "z\73STB\addons\functions\thrusters\fn_EngageAirbrakes.sqf"; description = "Thrusters - engage airbrakes"; };
            class EngageForwardThruster { file = "z\73STB\addons\functions\thrusters\fn_EngageForwardThruster.sqf"; description = "Thrusters - engage forward thruster"; };
            
        };
        class Jumpack
        {
            file = "z\73STB\addons\functions\jumpack";
            class PreInit { preInit = 1; file = "z\73STB\addons\functions\jumpack\fn_preInit.sqf"; description = "Jumpack - preInit"; };
            class Init_JP { postInit = 1; file = "z\73STB\addons\functions\jumpack\fn_init_JP.sqf"; description = "Jumpack - init"; };
            class JumpPack { file = "z\73STB\addons\functions\jumpack\fn_jumpPack.sqf"; description = "Jumpack - main"; };
            class EventHandlers { file = "z\73STB\addons\functions\jumpack\fn_eventHandlers.sqf"; description = "Jumpack - event handlers"; };
            class JumpPackRefuel { file = "z\73STB\addons\functions\jumpack\fn_jumpPackRefuel.sqf"; description = "Jumpack - refuel"; };
            class RoofStuckCheck { file = "z\73STB\addons\functions\jumpack\fn_roofStuckCheck.sqf"; description = "Jumpack - roof stuck check"; };
        };
        class SupportSystem
        {
            file = "z\73STB\addons\functions\support";
            class CS_ODSTHEV {};
            class CS_PelicanAirAssault {};
            class CS_PelicanResupply {};
            class PelicanAttachToPoints {};
            class CS_MonitorResupply{};
        };
        class Weapons
        {
            file="z\73STB\addons\functions\weapons";
            class Init_wep
            {
                postInit=1;
            };
            class convertOCIAmmo
            {
            };
        };
        class Tools
        {
            file = "z\73STB\addons\functions\tools";
            class locateBlacklisted { postInit = 1; description = "Tools - checks if anyone runs a blacklisted mod"; };
        };
    };
    class CBRN
    {
        class gear
        {
            file="z\73STB\addons\functions\CWP_Rewrite";
            class getProtectionLevel
            {
                description = "CBRN - get protection level";
            };
        };
    };
    class OPTRE
    {
        tag = "OPTRE";
        class MenuFunctions
        {
            file = "z\73STB\addons\functions\menufunctions";
            class HEVRoom { description = "Menus - HEV room menu"; file = "z\73STB\addons\functions\menufunctions\Fn_HEVRoom.sqf"; };
        };
    };
};
