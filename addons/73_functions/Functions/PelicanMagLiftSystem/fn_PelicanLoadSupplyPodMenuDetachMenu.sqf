		titleText ["", "BLACK IN", -1, true, true];

		disableSerialization;

		STB73_PelicanLoadSupplyPods_Menu_PelicanObject = vehicle player;
		//STB73_PelicanLoadSupplyPods_Menu_PelicanObject_target = "VR_Area_01_square_4x4_yellow_F" createVehicleLocal [0,0,0];
		//STB73_PelicanLoadSupplyPods_Menu_PelicanObject_target attachTo [STB73_PelicanLoadSupplyPods_Menu_PelicanObject,[0,-4.7,-2]];

		STB73_PelicanLoadSupplyPods_Menu_cam = "camera" CamCreate [0,0,0];
		STB73_PelicanLoadSupplyPods_Menu_cam attachTo [STB73_PelicanLoadSupplyPods_Menu_PelicanObject, [0,-4.7,0.8]];
		STB73_PelicanLoadSupplyPods_Menu_cam setVectorUp [0,1,0.01];
		STB73_PelicanLoadSupplyPods_Menu_cam CameraEffect ["Internal","Back"];
		STB73_PelicanLoadSupplyPods_Menu_cam CamCommit 0;
		showCinemaBorder false;

		createDialog "STB73_PelicanLoadSupplyPods_Menu_DetachIndividualPod";
		_control = ((findDisplay 10294) displayCtrl 1500);

		//_pelican = _this select 0;

		while {dialog} do {

			_podArray = (STB73_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["STB73_Pelican_AttachedToVehiclesEffect",[]]);
			_podCount = count _podArray;
			_count = 1;

			{
				_i = _control lbAdd ((format ["[%1] ",_count]) + (getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName")));
				_count = _count + 1;
			} forEach _podArray;

			waitUntil {(_podCount != (count (STB73_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["STB73_Pelican_AttachedToVehiclesEffect",[]]))) or !dialog};

			lbClear _control;

		};

		titleText ["", "BLACK IN", -1, true, true];
