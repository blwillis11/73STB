class OPTRE_32Rnd_762x51_Mag;
class NSWep_762x51_NATO;
class OPTRE_32Rnd_762x51_Mag_UW;


class STB73_32Rnd_762x51_Mag: OPTRE_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine";
    author= "73rd S-4 Team";
    ammo="STB73_B_762x51_Tracer";
};
class STB73_32Rnd_762x51_Mag_Tracer: STB73_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer]";
    ammo="STB73_B_762x51_Tracer";
    tracersEvery = 1;
};
class STB73_32Rnd_762x51_Mag_Tracer_Yellow: STB73_32Rnd_762x51_Mag_Tracer
{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="STB73_B_762x51_Tracer_Yellow";
};
class STB73_60Rnd_762x51_Mag: NSWep_762x51_NATO{
    displayName="[73] 60Rnd 7.62x51mm Magazine";
    author= "73rd S-4 Team";
    ammo="STB73_B_762x51_Tracer";
};
class STB73_60Rnd_762x51_Mag_Tracer: STB73_60Rnd_762x51_Mag{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer]";
    ammo="STB73_B_762x51_Tracer";
    tracersEvery = 1;
};
class STB73_60Rnd_762x51_Mag_Tracer_Yellow: STB73_60Rnd_762x51_Mag
{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="STB73_B_762x51_Tracer_Yellow";
};
class STB73_32Rnd_762x51_Mag_UW : OPTRE_32Rnd_762x51_Mag_UW
{
    displayname	= "[73] 32Rnd 7.62x51mm Magazine (UW)";
    ammo = "STB73_B_762x51_UW";
    mass = 23;
};
class STB73_32Rnd_762x51_Mag_UW_Tracer : STB73_32Rnd_762x51_Mag_UW
{
    displayname	= "[73] 32Rnd 7.62x51mm Magazine (UW Tracer)";
    tracersEvery = 1;
};
