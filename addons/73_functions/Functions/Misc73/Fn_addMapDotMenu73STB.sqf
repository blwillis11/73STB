params ["_player"];
hint format ["Dot Menu Added"];

myaction = ['Dot','Mark Pos','',{0 = [player] spawn STB73_fnc_addMapDot73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions"], myaction] call ace_interact_menu_fnc_addActionToObject;