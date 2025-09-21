private _id = missionNamespace getVariable ["QUI_markerID", 0];
private _markerName = format ["_USER_DEFINED #%1/%2/%3" , clientOwner, _id, 0];
private _marker = createMarkerLocal [_markerName, ace_player, 0, ace_player];
_marker setMarkerColorLocal "ColorWhite";
_marker setMarkerType "hd_dot";
_marker setMarkerText " "; 
_marker setMarkerSize [1,1];
missionNamespace setVariable ["QUI_markerID", _ID + 1, true];