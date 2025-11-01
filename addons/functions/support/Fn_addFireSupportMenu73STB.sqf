params ["_player"];

// Resolve the local player object to operate on. If called from postInit on
// a machine that doesn't have a local player (server/dedicated), return nil
// from the inline expression and exit afterwards so SPE2 doesn't choke on
// `exitWith` inside an expression.
private _localPlayer = if (isNil "_player") then {
    if (isNil "player") then { nil } else { player }
} else { _player };

if (isNil "_localPlayer") exitWith {};

private _uid = getPlayerUID _localPlayer;

private _CommandUIDs = ["76561198175303222","76561198101051151","76561198031672645","76561198147813299","76561198169022665"];

// Diagnostic: log who is executing the menu setup and which UID was detected
diag_log format ["STB73_fnc_addFireSupportMenu73STB: running on %1, player=%2, uid=%3", ["CLIENT", "SERVER"] select (isServer), name _localPlayer, _uid];

private _myaction;

{
    if (_uid == _x) then {

        // Support Menu (parent)
        _myaction = ['Support_menu','Support Menu','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        // Artillery parent
        _myaction = ['Artillery','Artillery','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        // Mortars parent
        _myaction = ['Mortars','Mortars','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        // Mortar options
        _myaction = ['10_S','10m (32.8084 ft) Spread HE','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['3rnds_10','3 Rounds','',{ [3,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","10_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['6rnds_10','6 Rounds','',{ [6,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","10_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['10rnds_10','10 Rounds','',{ [10,10,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","10_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['30_S','30m (98.4252 ft) Spread HE','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['3rnds_30','3 Rounds','',{ [6,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","30_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['6rnds_30','6 Rounds','',{ [10,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","30_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['10rnds_30','10 Rounds','',{ [15,30,0,500] spawn STB73_fnc_setCallMortarFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Mortars","30_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        // Artillery options
        _myaction = ['100_S','100m (1640.42 ft) Spread HE','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['100_S_W','Are you sure?','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery","100_S"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['3rnds_100','15 Rounds','',{ [15,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery","100_S","100_S_W"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['6rnds_100','25 Rounds','',{ [25,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery","100_S","100_S_W"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['100_S_W_W','45 Rounds','',{}, {true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery","100_S","100_S_W"], _myaction] call ace_interact_menu_fnc_addActionToObject;

        _myaction = ['10rnds_100','Are you super duper sure?','',{ [45,100,3,500] spawn STB73_fnc_setCallArtyFireSupport73STB; },{true}] call ace_interact_menu_fnc_createAction;
        [_localPlayer, 1, ["ACE_SelfActions","Support_menu","Artillery","100_S","100_S_W","100_S_W_W"], _myaction] call ace_interact_menu_fnc_addActionToObject;

    };
} forEach _CommandUIDs;
