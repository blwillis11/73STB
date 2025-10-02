// fn_VerifyFunctions.sqf
// Simple runtime verifier: checks that key STB73/OPTRE functions are registered.
// Usage: [] call STB73_fnc_VerifyFunctions;

private _functionsToCheck = [
    /* STB73 Modules */
    "STB73_fnc_ModuleODSTHEV",
    "STB73_fnc_ModuleBJHEV",
    "STB73_fnc_ModuleOCLSSquadPod",
    "STB73_fnc_ModulePelicanAirAssault",

    /* STB73 Thrusters */
    "STB73_fnc_GetFlightTime",
    "STB73_fnc_IncreaseThrusterLevel",
    "STB73_fnc_RegisterThrusters",
    "STB73_fnc_ThrusterAnimate",
    "STB73_fnc_ThrusterDeAnimate",
    "STB73_fnc_ThrusterDisengage",
    "STB73_fnc_AfterburnersDisengage",

    /* STB73 Jumpack */
    "STB73_fnc_PreInit",
    "STB73_fnc_Init",
    "STB73_fnc_JumpPack",
    "STB73_fnc_EventHandlers",
    "STB73_fnc_JumpPackRefuel",
    "STB73_fnc_RoofStuckCheck",

    /* STB73 HEV */
    "STB73_fnc_HEV",
    "STB73_fnc_HEVAtmoEffects",
    "STB73_fnc_HEVBoosterDown",
    "STB73_fnc_HEVChuteDeploy",
    "STB73_fnc_HEVCleanUp",
    "STB73_fnc_SpawnFakeHEVRoom",
    "STB73_fnc_SpawnHEVsFrigate",
    "STB73_fnc_SpawnHEVsNoFrigate",
    "STB73_fnc_PlayerHEVEffectsUpdate_BoasterDown",
    "STB73_fnc_PlayerHEVEffectsUpdate_Chute",
    "STB73_fnc_PlayerHEVEffectsUpdate_GroundAlarm",
    "STB73_fnc_PlayerHEVEffectsUpdate_Light",
    "STB73_fnc_PlayerHEVEffectsUpdate_ReEntrySounds",
    "STB73_fnc_PlayerHEVEffectsUpdate_PlayTones",
    "STB73_fnc_HEVRoomDynamicSetupGrabUnits",
    "STB73_fnc_HEVDoor",
    "STB73_fnc_HEVHandleLanding",
    "STB73_fnc_CountDown",
    "STB73_fnc_CleanUp",

    /* STB73 MenuFunctions */
    "STB73_fnc_HEVRoom",

    /* STB73 Tools */
    "STB73_fnc_VerifyFunctions",

    /* OPTRE SupportSystem */
    "OPTRE_fnc_CS_ODSTHEV",
    "OPTRE_fnc_CS_BJHEV",
    "OPTRE_fnc_CS_PelicanAirAssault",
    "OPTRE_fnc_CS_OCLSSquadPod",
    "OPTRE_fnc_setCallMortarFireSupport73STB",
    "OPTRE_fnc_setCallArtyFireSupport73STB",
    "OPTRE_fnc_addFireSupportMenu73STB",

    /* OPTRE Modules */
    "OPTRE_fnc_ModuleHEV",
    "OPTRE_fnc_ModuleODSTHEV",
    "OPTRE_fnc_ModuleBJHEV",
    "OPTRE_fnc_ModuleOCLSSquadPod",
    "OPTRE_fnc_ModuleHEVCleanUp",
    "OPTRE_fnc_ModulePelicanAirAssault"
];

private _missing = [];
{
    private _name = _x;
    // Simple existence check: if the global symbol for the function is nil, it's not registered.
    // CfgFunctions exposes functions as global symbols like STB73_fnc_Name; checking isNil on the name string is a common pattern.
    if (isNil _name) then {
        _missing pushBack _name;
    };
} forEach _functionsToCheck;

if ((count _missing) == 0) then {
    hintSilent "73rd Functions loaded.";
    diag_log "73rd Functions loaded.";
} else {
    private _msg = format ["73rd Functions missing: %1", _missing];
    hintSilent _msg;
    diag_log _msg;
};

true; // allow call returns true
