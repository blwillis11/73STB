params ["_posASL","_vel"];

_currentY = _posASL select 2;
if(_currentY == 0 or _vel select 2 <= 0 or isTouchingGround player or (stance player) == "UNDEFINED") exitWith {false};

if(abs(_currentY - STB73_JumpPack_lastY) <= 0.02) then {
    if(STB73_JumpPack_stuckCount >= 3) exitWith {
        player setVelocity [_vel select 0,_vel select 1,-0.5];
        STB73_JumpPack_timesStuck = STB73_JumpPack_timesStuck + 1;
        true
    };
    STB73_JumpPack_stuckCount = STB73_JumpPack_stuckCount + 1;
    false
} else {
    STB73_JumpPack_stuckCount = 0;
    STB73_JumpPack_lastY = _currentY;
    false
};