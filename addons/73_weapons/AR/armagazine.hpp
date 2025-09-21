class OPTRE_32Rnd_762x51_Mag;
class NSWep_762x51_NATO;
class OPTRE_32Rnd_762x51_Mag_UW;


class 73_32Rnd_762x51_Mag: OPTRE_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine";
    author= "73rd S-4 Team";
    ammo="73_B_762x51_Tracer";
};
class 73_32Rnd_762x51_Mag_Tracer: 73_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer]";
    ammo="73_B_762x51_Tracer";
    tracersEvery = 1;
};
class 73_32Rnd_762x51_Mag_Tracer_Yellow: 73_32Rnd_762x51_Mag_Tracer
{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="73_B_762x51_Tracer_Yellow";
};
class 73_60Rnd_762x51_Mag: NSWep_762x51_NATO{
    displayName="[73] 60Rnd 7.62x51mm Magazine";
    author= "73rd S-4 Team";
    ammo="73_B_762x51_Tracer";
};
class 73_60Rnd_762x51_Mag_Tracer: 73_60Rnd_762x51_Mag{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer]";
    ammo="73_B_762x51_Tracer";
    tracersEvery = 1;
};
class 73_60Rnd_762x51_Mag_Tracer_Yellow: 73_60Rnd_762x51_Mag
{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="73_B_762x51_Tracer_Yellow";
};
class 73_32Rnd_762x51_Mag_UW : OPTRE_32Rnd_762x51_Mag_UW
{
    displayname	= "[73] 32Rnd 7.62x51mm Magazine (UW)";
    ammo = "73_B_762x51_UW";
    mass = 23;
};
class 73_32Rnd_762x51_Mag_UW_Tracer : 73_32Rnd_762x51_Mag_UW
{
    displayname	= "[73] 32Rnd 7.62x51mm Magazine (UW Tracer)";
    tracersEvery = 1;
};