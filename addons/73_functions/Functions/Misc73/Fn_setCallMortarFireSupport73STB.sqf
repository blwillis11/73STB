
params ["_rounds", "_radiusSpread", "_roundtype", "_velocity"];
_ordenancetype = ["Sh_155mm_AMOS","SmokeShellRed","F_40mm_CIR","ammo_ShipCannon_120mm_HE"];

_fireSupportCooldown = 30;

if (!(isnil "FS_fireSupport")) exitwith {
    hint "Mortar Support not avaliable."
};

hint format ["Left click on the map where you want fire support."];

tbr_mapclick = false;
tbr_halopos = [];

openMap true;
[
    "tbr_haloselect",
    "onMapsingleClick",
    {
        tbr_halopos = _pos;
        tbr_mapclick = true;
    },
    []
] call BIS_fnc_addStackedEventHandler;

waitUntil {
    tbr_mapclick or !visibleMap
};
["tbr_haloselect", "onMapsingleClick"] call BIS_fnc_removestackedEventHandler;
openMap false;
if (tbr_mapclick) then {
        FS_fireSupport = false;
        publicVariable "FS_fireSupport";
        //format ["targets recieved, calculating rounds"] remoteExec ["hint"];
        sleep 2;
        //hint format ["Firing %1 rounds, %2 metre dispersion.", _rounds, _radiusSpread] remoteExec ["hint"];
        sleep 2;
        for "_round" from 1 to _rounds do {
            //format ["Round %1 away.", _round] remoteExec ["hint"];
            _mortarPos = [(tbr_halopos select 0)- (_radiusSpread*sin(random 360)), (tbr_halopos select 1)-(_radiusSpread*cos(random 360)), 300];
            _bomb = (_ordenancetype select _roundtype) createvehicle _mortarPos;
            [_bomb, -90, 0] call BIS_fnc_setPitchBank;
            _bomb setvelocity [0, 0, (_velocity*(-1))];
            sleep 2;
        };
        //format ["Rounds Complete"] remoteExec ["hint"];
        sleep 2;
        //format ["Fire support will be back online in 10 seconds"] remoteExec ["hint"];
        sleep _fireSupportCooldown;
        FS_fireSupport = nil;
        publicVariable "FS_fireSupport";
   
} else {
    hint format ["fire Support cancelled."];
};