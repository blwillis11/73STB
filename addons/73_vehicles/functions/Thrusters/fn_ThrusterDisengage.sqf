_pelican = _this;
_pelican setvariable ["STB73_Thrusters_Engaged",false,true];
_pelican setvariable ["STB73_Afterburners_Engaged",false,true];
hint format["DISENGAGING FORWARD THRUSTERS"];
sleep 0.5;
if (_vehicle getVariable ["STB73_AnimateThrusters", false]) then {
	_vehicle spawn STB73_fnc_ThrusterDeAnimate;
};

if (!(isNil "STB73_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	STB73_ThrustersEH = nil;
};
if (speed _pelican > 100) then {
	_vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -10;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
};