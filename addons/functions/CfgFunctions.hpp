class CfgFunctions{
    class STB73
    {
        tag = "STB73";

        class Modules
        {
            file = "z\73STB\addons\functions\modules";
            class ModuleODSTHEV { description = "STB73 - ODST HEV module"; };
            class ModuleBJHEV { description = "STB73 - BJ HEV module"; };
            class ModuleOCLSSquadPod { description = "STB73 - OCLS squad pod module"; };
            class ModulePelicanAirAssault { description = "STB73 - Pelican air assault module"; };
        };

        class Thrusters
        {
            file = "z\73STB\addons\functions\thrusters";
            class GetFlightTime { description = "Thrusters - get flight time"; };
            class IncreaseThrusterLevel { description = "Thrusters - increase level"; };
            class RegisterThrusters { description = "Thrusters - register thrusters"; };
            class ThrusterAnimate { description = "Thrusters - animate"; };
            class ThrusterDeAnimate { description = "Thrusters - de-animate"; };
            class ThrusterDisengage { description = "Thrusters - disengage"; };
            class AfterburnersDisengage { description = "Thrusters - afterburners disengage"; };
            class Init { postInit = 1; description = "Thrusters - initialization"; };
        };

        class Jumpack
        {
            file = "z\73STB\addons\functions\jumpack";
            class PreInit { preInit = 1; description = "Jumpack - preInit"; };
            class Init { postInit = 1; description = "Jumpack - init"; };
            class JumpPack { description = "Jumpack - main"; };
            class EventHandlers { description = "Jumpack - event handlers"; };
            class JumpPackRefuel { description = "Jumpack - refuel"; };
            class RoofStuckCheck { description = "Jumpack - roof stuck check"; };
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
            class Init
            {
                postInit=1;
            };
        };
        class MenuFunctions
        {
            file = "z\73STB\addons\functions\menufunctions";
            class HEVRoom { description = "Menus - HEV room menu"; };
        };
        class Tools
        {
            file = "z\73STB\addons\functions\tools";
            class VerifyFunctions { postInit = 1; description = "Tools - verify functions loaded at runtime"; };
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
            class PelicanLoadSupplyPodsMenuDetachMenu
            {
            };
            class PelicanLoad_UnloadAllSupplyPods
            {
            };
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
