titleText ["", "BLACK IN", -1, true, true];

disableSerialization;

OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = vehicle player;

OPTRE_PelicanLoadSupplyPods_Menu_cam = "camera" camCreate [0, 0, 0];
OPTRE_PelicanLoadSupplyPods_Menu_cam attachTo [OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject, [0, -4.7, 0.8]];
OPTRE_PelicanLoadSupplyPods_Menu_cam setVectorUp [0, 1, 0.01];
OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect ["Internal", "Back"];
OPTRE_PelicanLoadSupplyPods_Menu_cam camCommit 0;
showCinemaBorder false;

createDialog "OPTRE_PelicanLoadSupplyPods_Menu_DetachIndividualPod";
_control = ((findDisplay 10294) displayCtrl 1500);

while { dialog } do {
	_podArray = (OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", []]);
	_podCount = count _podArray;
	_count = 1;

	{
		_i = _control lbAdd ((format ["[%1] ", _count]) + (getText (configOf _x >> "displayName")));
		_count = _count + 1;
	} forEach _podArray;

	waitUntil {
		(_podCount != (count (OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", []]))) or !dialog
	};

	lbClear _control;
};

titleText ["", "BLACK IN", -1, true, true];