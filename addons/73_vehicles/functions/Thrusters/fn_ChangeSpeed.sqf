params ["_vehicle", ["_speed", 0]];

if (_speed == 0) exitWith {};

private _vel = velocity _vehicle;
private _dir = direction _vehicle;

_vehicle setVelocity [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
];