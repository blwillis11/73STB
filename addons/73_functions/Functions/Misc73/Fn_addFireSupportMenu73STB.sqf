params ["_player"];
hint format ["fire Support cancelled."];

private _uid = getPlayerUID player;

private _CommandUIDs = ["76561198175303222","76561198101051151","76561198031672645","76561198147813299","76561198169022665"];

{
  if(_uid == _x) then{

// Create the "Support Menu" action for the self-interaction menu
myaction = [
    'Support_menu',                    // Action name
    'Support Menu',                     // Display name
    '',                                 // Icon (empty for no icon)
    {},                                  // Conditions (can be set for additional checks, like true for always available)
    {true}                               // Execute action (e.g., it can be a function or code to execute)
] call ace_interact_menu_fnc_createAction;

// Add the action to the player's self-interaction menu
[_player, 1, ["ACE_SelfActions"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = [
    'Artillery',                          // Action name
    'Artillery',                   // Display name
    '',                                 // Icon (empty for no icon)
    {}, // Action code (spawn fire support)
    {true}                               // Always available (condition)
] call ace_interact_menu_fnc_createAction;

// Add the action to the "Support_menu" created earlier
[_player, 1, ["ACE_SelfActions", "Support_menu"], myaction] call ace_interact_menu_fnc_addActionToObject;

// Create the "Mortar Support" action
myaction = [
    'Mortars',                          // Action name
    'Mortars',                   // Display name
    '',                                 // Icon (empty for no icon)
    {}, // Action code (spawn fire support)
    {true}                               // Always available (condition)
] call ace_interact_menu_fnc_createAction;

// Add the action to the "Support_menu" created earlier
[_player, 1, ["ACE_SelfActions", "Support_menu"], myaction] call ace_interact_menu_fnc_addActionToObject;

// {0 = [10,30,0,500] spawn STB73_fnc_setCallFireSupport73STB;},

myaction = [
    '10_S',                          // Action name
    '10m (32.8084 ft) Spread HE',                   // Display name
    '',                                 // Icon (empty for no icon)
    {}, // Action code (spawn fire support)
    {true}                               // Always available (condition)
] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['3rnds_10','3 Rounds','',{0 = [3,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","10_S"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['6rnds_10','6 Rounds','',{0 = [6,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","10_S"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['10rnds_10','10 Rounds','',{0 = [10,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","10_S"], myaction] call ace_interact_menu_fnc_addActionToObject;



myaction = ['30_S','30m (98.4252 ft) Spread HE','',{},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['3rnds_30','6 Rounds','',{0 = [6,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","30_S"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['6rnds_30','10 Rounds','',{0 = [10,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","30_S"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['10rnds_30','30 Rounds','',{0 = [15,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Mortars","30_S"], myaction] call ace_interact_menu_fnc_addActionToObject;



myaction = ['100_S','100m (1640.42 ft) Spread HE','',{},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['100_S_W','Are you sure?','',{},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery","100_S"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['3rnds_100','15 Rounds','',{0 = [15,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery","100_S","100_S_W"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['6rnds_100','25 Rounds','',{0 = [25,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery","100_S","100_S_W"], myaction] call ace_interact_menu_fnc_addActionToObject;


myaction = ['100_S_W_W','45 Rounds','',{},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery","100_S","100_S_W"], myaction] call ace_interact_menu_fnc_addActionToObject;

myaction = ['10rnds_100','Are you super duper sure?','',{0 = [45,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB;},{true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions", "Support_menu", "Artillery","100_S","100_S_W","100_S_W_W"], myaction] call ace_interact_menu_fnc_addActionToObject;
};
} forEach _CommandUIDs;



// _action = ["Sp_Call_in", "Support Menu", "", {}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["fs_MA", "Mortars", "", {}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions","Sp_Call_in"], _action]call ace_interact_menu_fnc_addActionToObject;

// // Weapon Options
// // Mortar Options
// 	// 10 metre spread
// _action = ["10_S", "10 metre Spread HE", "", {}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["3rnds_10", "3 Rounds", "", {"0 = [3,10,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "10_S"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["6rnds_10", "6 Rounds", "", {"0 = [6,10,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "10_S"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["10rnds_10", "10 Rounds", "", {"0 = [10,10,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "10_S"], _action]call ace_interact_menu_fnc_addActionToObject;

// 	// 30 metre spread
// _action = ["30_S", "30 metre Spread HE", "", {}, {true}] call ace_interact_menu_fnc_createAction;
// [_player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["6rnds_30", "6 Rounds", "", {"0 = [6,30,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [_player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "30_S"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["10rnds_30", "10 Rounds", "", {"0 = [10,30,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [_player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "30_S"], _action]call ace_interact_menu_fnc_addActionToObject;

// _action = ["15rnds_30", "15 Rounds", "", {"0 = [15,30,0,500] spawn STB73_fnc_setCallFireSupport73STB;"}, {true}] call ace_interact_menu_fnc_createAction;
// [_player, 1, ["ACE_SelfActions","Sp_Call_in", "fs_MA","Mortars_1", "30_S"], _action]call ace_interact_menu_fnc_addActionToObject;