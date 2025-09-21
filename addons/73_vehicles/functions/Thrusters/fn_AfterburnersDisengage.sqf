_pelican = _this;
_pelican setvariable ["STB73_Thrusters_Engaged",true,true];
_pelican setvariable ["STB73_Afterburners_Engaged",false,true];
hint "DISENGAGING AFTERBURNERS\n CONTINUING FORWARD THRUST";
sleep 0.5;
if (_vehicle getVariable ["STB73_AnimateThrusters", false]) then {
	_vehicle spawn STB73_fnc_ThrusterDeAnimate;
};

if (!(isNil "STB73_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	STB73_ThrustersEH = nil;
};
if (speed _pelican > 650) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = -15;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
while {((_pelican getvariable ["STB73_Thrusters_Engaged",false]) AND (alive _pelican))} do
{
	if (speed _pelican <= 350) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 8;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
	sleep 0.5;
};