// Public variables

STB73_Zeus_Messages = [];

if(hasInterface) then {
    [] call STB73_fnc_defaultKits;

    ["ace_unconscious", {_this call STB73_fnc_DestroyEquipment;}] call CBA_fnc_addEventHandler;

};