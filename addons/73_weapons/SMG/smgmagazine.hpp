class MA_48Rnd_5x23Caseless_FMJ_Mag;
class MA_48Rnd_5x23Caseless_FMJ_Mag_Tracer;
class MA_60Rnd_5x23Caseless_FMJ_Mag;
class MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer;
class OPTRE_12Rnd_127x40_Mag_Black_Tracer;
class OPTRE_16Rnd_127x40_Mag_Black_Tracer;
class OPTRE_26Rnd_127x40_Mag_Black_Tracer;
class OPTRE_40Rnd_127x40_Drum_Black_Tracer;

class 73_48Rnd_5x23Caseless_FMJ_Mag: MA_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 48Rnd M7S FMJ Magazine";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless";
    mass=5;
};
class 73_48Rnd_5x23Caseless_FMJ_Mag_Tracer: MA_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 48Rnd M7S FMJ Magazine (Tracer)";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless";
    tracersEvery = 1;
    mass=5;
};
class 73_48Rnd_5x23Caseless_NARQ_Mag: MA_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 48Rnd M7S NARQ Magazine";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless_NARQ";
    mass=5;
};
class 73_48Rnd_5x23Caseless_NARQ_Mag_Tracer: MA_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 48Rnd M7S NARQ Magazine";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless_NARQ";
    mass=5;
    tracersEvery = 1;
};
class 73_60Rnd_5x23Caseless_FMJ_Mag: MA_60Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 60Rnd M7S FMJ Magazine";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless";
    mass=7;
};
class 73_60Rnd_5x23Caseless_FMJ_Mag_Tracer: MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 60Rnd M7S FMJ Magazine (Tracer)";
    author= "73rd S-4 Team";
    ammo="73_5x23_Caseless";
    mass=7;
    tracersEvery = 1;
};
class 73_12Rnd_127x40_Mag_Black_Tracer:OPTRE_12Rnd_127x40_Mag_Black_Tracer
{
    displayname	= "[73] 12Rnd 12.7x40mm Mag [Tracers]";
    tracersEvery = 1;
    ammo = "73_B_127x40_Tracer";
    count = 12;
};
class 73_12Rnd_127x40_Mag_Black_Tracer_Narq:OPTRE_12Rnd_127x40_Mag_Black_Tracer
{
    displayname	= "[73] 12Rnd 12.7x40mm Mag [Tracers NARQ]";
    tracersEvery = 1;
    ammo = "73_B_127x40_Tracer_NARQ";
    count = 12;
};
class 73_16Rnd_127x40_Mag_Black_Tracer:OPTRE_16Rnd_127x40_Mag_Black_Tracer
{
    displayname	= "[73] 16Rnd 12.7x40mm Mag [Tracers]";
    tracersEvery = 2;
    ammo = "73_B_127x40_Tracer";
    count = 16;
};
class 73_26Rnd_127x40_Mag_Black_Tracer:OPTRE_26Rnd_127x40_Mag_Black_Tracer
{
    displayname	= "[73] 26Rnd 12.7x40mm Mag [Tracers]";
    tracersEvery = 2;
    ammo = "73_B_127x40_Tracer";
    count = 26;
};
class 73_40Rnd_127x40_Drum_Black_Tracer:OPTRE_40Rnd_127x40_Drum_Black_Tracer
{
    displayname	= "[73] 40Rnd 12.7x40mm Drum [Tracers]";
    tracersEvery = 3;
    ammo = "73_B_127x40_Tracer";
    count = 40;
};