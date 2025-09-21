// ACE_to_ViV_EH.sqf

// Add a global ACE cargo loaded event handler
["ace_cargoLoaded", {
    params ["_carrier", "_cargo"];

    // Only apply to our Falcon
    if (_carrier isKindOf "73_UNSC_falcon") then {
        detach _cargo;           // remove ACE default attach
        _carrier setVehicleCargo _cargo; // load into ViV
    };
}] call CBA_fnc_addEventHandler;