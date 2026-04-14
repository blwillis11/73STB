params ["_name", "_trait"];

private _time = serverTime;

STB73_TraitSelector_Logs pushBack [_name, _trait, _time];
publicVariable "STB73_TraitSelector_Logs";