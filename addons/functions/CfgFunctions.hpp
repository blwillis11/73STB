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
			class DestroyEquipment
			{
                description = "Misc - Destroy Equipment";
                file = "z\73STB\addons\functions\misc\fn_DestroyEquipment.sqf";
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
        };
        class Modules
        {
            file = "z\73STB\addons\functions\modules";
            class ModuleODSTHEV { file = "z\73STB\addons\functions\modules\fn_ModuleODSTHEV.sqf"; description = "STB73 - ODST HEV module"; };
            class ModuleBJHEV { file = "z\73STB\addons\functions\modules\fn_ModuleBJHEV.sqf"; description = "STB73 - BJ HEV module"; };
            class ModuleOCLSSquadPod { file = "z\73STB\addons\functions\modules\fn_ModuleOCLSSquadPod.sqf"; description = "STB73 - OCLS squad pod module"; };
            class ModulePelicanAirAssault { file = "z\73STB\addons\functions\modules\fn_ModulePelicanAirAssault.sqf"; description = "STB73 - Pelican air assault module"; };
            class ModuleHEV { file = "z\73STB\addons\functions\modules\fn_ModuleHEV.sqf"; description = "STB73 - HEV module"; };
            class ModuleHEVCleanup { file = "z\73STB\addons\functions\modules\fn_ModuleHEVCleanup.sqf"; description = "STB73 - HEV Cleanup module"; };
        };

        class Thrusters
        {
            file = "z\73STB\addons\functions\thrusters";
            class GetFlightTime { file = "z\73STB\addons\functions\thrusters\Fn_GetFlightTime.sqf"; description = "Thrusters - get flight time"; };
            class IncreaseThrusterLevel { file = "z\73STB\addons\functions\thrusters\Fn_IncreaseThrusterLevel.sqf"; description = "Thrusters - increase level"; };
            class RegisterThrusters { file = "z\73STB\addons\functions\thrusters\Fn_RegisterThrusters.sqf"; description = "Thrusters - register thrusters"; };
            class ThrusterAnimate { file = "z\73STB\addons\functions\thrusters\Fn_ThrusterAnimate.sqf"; description = "Thrusters - animate"; };
            class ThrusterDeAnimate { file = "z\73STB\addons\functions\thrusters\Fn_ThrusterDeAnimate.sqf"; description = "Thrusters - de-animate"; };
            class ThrusterDisengage { file = "z\73STB\addons\functions\thrusters\Fn_ThrusterDisengage.sqf"; description = "Thrusters - disengage"; };
            class AfterburnersDisengage { file = "z\73STB\addons\functions\thrusters\Fn_AfterburnersDisengage.sqf"; description = "Thrusters - afterburners disengage"; };
            class Init_vic { postInit = 1;  file = "z\73STB\addons\functions\thrusters\fn_Init_vic.sqf"; description = "Thrusters - initialization"; };
            class ChangeSpeed { file = "z\73STB\addons\functions\thrusters\Fn_ChangeSpeed.sqf"; description = "Thrusters - change speed"; };
            class DecreaseThrusterLevel { file = "z\73STB\addons\functions\thrusters\Fn_DecreaseThrusterLevel.sqf"; description = "Thrusters - decrease level"; };
            class EngageAfterburners { file = "z\73STB\addons\functions\thrusters\Fn_EngageAfterburners.sqf"; description = "Thrusters - engage afterburners"; };
            class EngageAirbrakes { file = "z\73STB\addons\functions\thrusters\Fn_EngageAirbrakes.sqf"; description = "Thrusters - engage airbrakes"; };
            class EngageForwardThruster { file = "z\73STB\addons\functions\thrusters\Fn_EngageForwardThruster.sqf"; description = "Thrusters - engage forward thruster"; };
            
        };

        class Jumpack
        {
            file = "z\73STB\addons\functions\jumpack";
            class PreInit { preInit = 1; description = "Jumpack - preInit"; };
            class Init_JP { postInit = 1; description = "Jumpack - init"; };
            class JumpPack { description = "Jumpack - main"; };
            class EventHandlers { description = "Jumpack - event handlers"; };
            class JumpPackRefuel { description = "Jumpack - refuel"; };
            class RoofStuckCheck { description = "Jumpack - roof stuck check"; };
        };
        class SupportSystem
        {
            file = "z\73STB\addons\functions\support";
            class CS_ODSTHEV {};
            class CS_BJHEV {};
            class CS_PelicanAirAssault {};
            class CS_OCLSSquadPod {};
            class setCallMortarFireSupport73STB {};
            class setCallArtyFireSupport73STB {};
            class addFireSupportMenu73STB {};
        };
        class HEV
        {
            file = "z\73STB\addons\functions\hev";
            class HEV { description = "HEV - main"; };
            class HEVAtmoEffects { description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { description = "HEV - booster down handler"; };
            class HEVChuteDeploy { description = "HEV - chute deploy"; };
            class HEVCleanUp { description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { description = "HEV - dynamic room setup"; };
            class HEVDoor { description = "HEV - door control"; };
            class HEVHandleLanding { description = "HEV - landing handler"; };
            class CountDown { description = "HEV - countdown"; };
            class CleanUp { description = "HEV - cleanup"; };
        };
        class Weapons
        {
            file="z\73STB\addons\functions\weapons";
            class Init_wep
            {
                postInit=1;
            };
        };
        class MenuFunctions
        {
            file = "z\73STB\addons\functions\menufunctions";
            class HEVRoom { description = "Menus - HEV room menu"; };
            class UNSCdatabase { description = "Menus - UNSC database menu"; };
        };
        class Tools
        {
            file = "z\73STB\addons\functions\tools";
            class VerifyFunctions { postInit = 1; description = "Tools - verify functions loaded at runtime"; };
            class locateBlacklisted { postInit = 1; description = "Tools - checks if anyone runs a blacklisted mod"; };
        };
        class PelicanMagLiftSystem
        {
            file="z\73STB\addons\functions\PelicanMagLiftSystem";
            class PelicanLoadValidate
            {
            };
            class PelicanUnLoadValidate
            {
            };
            class PelicanLoadSupplyPodsMenuUnload
            {
            };
            class PelicanLoadSupplyPodsMenuOpened
            {
            };
            class PelicanLoadSupplyPodsMenuLoad
            {
            };
            class PelicanLoadSupplyPodMenuDetachMenu
            {
            };
            class PelicanLoad_UnloadAllSupplyPods
            {
            };
        };
    };
    class DMNS
    {
        class HEV
        {
            file = "z\73STB\addons\functions\hev";
            class HEV { file = "z\73STB\addons\functions\hev\Fn_HEV.sqf"; description = "HEV - main"; };
            class HEVAtmoEffects { file = "z\73STB\addons\functions\hev\Fn_HEVAtmoEffects.sqf"; description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { file = "z\73STB\addons\functions\hev\Fn_HEVBoosterDown.sqf"; description = "HEV - booster down handler"; };
            class HEVChuteDeploy { file = "z\73STB\addons\functions\hev\Fn_HEVChuteDeploy.sqf"; description = "HEV - chute deploy"; };
            class HEVCleanUp { file = "z\73STB\addons\functions\hev\Fn_HEVCleanUp.sqf"; description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { file = "z\73STB\addons\functions\hev\Fn_SpawnFakeHEVRoom.sqf"; description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { file = "z\73STB\addons\functions\hev\Fn_SpawnHEVsFrigate.sqf"; description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { file = "z\73STB\addons\functions\hev\Fn_SpawnHEVsNoFrigate.sqf"; description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_Chute.sqf"; description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_GroundAlarm.sqf"; description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_Light.sqf"; description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_ReEntrySounds.sqf"; description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_PlayTones.sqf"; description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { file = "z\73STB\addons\functions\hev\Fn_HEVRoomDynamicSetupGrabUnits.sqf"; description = "HEV - dynamic room setup"; };
            class HEVDoor { file = "z\73STB\addons\functions\hev\Fn_HEVDoor.sqf"; description = "HEV - door control"; };
            class HEVHandleLanding { file = "z\73STB\addons\functions\hev\Fn_HEVHandleLanding.sqf"; description = "HEV - landing handler"; };
            class CountDown { file = "z\73STB\addons\functions\hev\Fn_CountDown.sqf"; description = "HEV - countdown"; };
            class CleanUp { file = "z\73STB\addons\functions\hev\Fn_CleanUp.sqf"; description = "HEV - cleanup"; };
        };
    };
    class Splits
    {
        class PelicanMagLiftSystem
        {
            file="z\73STB\addons\functions\PelicanMagLiftSystem";
            class PelicanLoadSupplyPodsMenuLoad
            {
            };
        };
    };
    class OPTRE
    {
        tag = "OPTRE";
        class SupportSystem
        {
            file = "z\73STB\addons\functions\support";
            class CS_ODSTHEV {};
            class CS_BJHEV {};
            class CS_PelicanAirAssault {};
            class CS_OCLSSquadPod {};
            class setCallMortarFireSupport73STB {};
            class setCallArtyFireSupport73STB {};
            class addFireSupportMenu73STB {};
        };
        class HEV
        {
            file = "z\73STB\addons\functions\hev";
            class HEV { description = "HEV - main"; };
            class HEVAtmoEffects { description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { description = "HEV - booster down handler"; };
            class HEVChuteDeploy { description = "HEV - chute deploy"; };
            class HEVCleanUp { description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "z\73STB\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { description = "HEV - dynamic room setup"; };
            class HEVDoor { description = "HEV - door control"; };
            class HEVHandleLanding { description = "HEV - landing handler"; };
            class CountDown { description = "HEV - countdown"; };
            class CleanUp { description = "HEV - cleanup"; };
        };
        class Modules
        {
            file = "z\73STB\addons\functions\modules";
            class ModuleODSTHEV {};
            class ModuleBJHEV {};
            class ModuleOCLSSquadPod {};
            class ModulePelicanAirAssault {};
        };
    };
};
