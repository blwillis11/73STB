class OPTRE_MA37B;
class OPTRE_MA37BGL;
class OPTRE_MA37K;
class NSWep_MA5B;
class NSWep_MA5BGL;
class NSWep_MA5K_Stealth;

class 73_MA37B: OPTRE_MA37B
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37B ICWS Assault Rifle";
    baseWeapon = "73_MA37B";
    magazines[] = {"73_32Rnd_762x51_Mag_Tracer_Yellow"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"73_ar"};
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\ma37b_co.paa",
        "optre_weapons\ar\data\ammocounter37b_co.paa",
        "optre_weapons\ar\data\r_ar_ca.paa"
    };
};
class 73_MA37BGL: OPTRE_MA37BGL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37B + M301 GL Assault Rifle";
    baseWeapon 	= "73_MA37BGL";
    magazines[]             = {
        "73_32Rnd_762x51_Mag_Tracer_Yellow"
    };
    magazineWell[]  = {"73_ar"};
    hiddenSelections[]= {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo_reticle"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\ma37b_co.paa",
        "optre_weapons\ar\data\ammocounter37b_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        "optre_weapons\ar\data\r_ar_ca.paa"
    };
};
class 73_MA37K: OPTRE_MA37K
{
    baseWeapon = "73_MA37K";
    author= "73rd S-4 Team";
    displayName = "[73] MA37K Carbine";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        "\OPTRE_Weapons\MA37K\data\MA37K_CO.paa"
    };
    magazines[] = {"73_32Rnd_762x51_Mag_Tracer_Yellow"};
    magazineWell[]={"73_ar"};
    HUD_BulletInARows = 2;
    HUD_TotalPosibleBullet = 32;
};

class 73_MA5B: NSWep_MA5B
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5B ICWS Assault Rifle";
    magazines[]             = {"73_60Rnd_762x51_Mag_Tracer_Yellow"};
    magazineWell[] 			= {"73_ar60rnd"};
    baseWeapon 				= "73_MA5B";
};
class 73_MA5BGL: NSWep_MA5BGL
{
    displayName         = "[73] MA5B ICWS Assault Rifle [M301]";
    baseWeapon 			= "73_MA5BGL";
    magazines[]             = {"73_60Rnd_762x51_Mag_Tracer_Yellow"};
    magazineWell[] 			= {"73_ar60rnd"};
};
class 73_MA5K: NSWep_MA5K_Stealth
{
    displayname = "[73] MA5K ICWS Carbine";
    baseWeapon 	= "73_MA5K";
    magazines[] = {"73_32Rnd_762x51_Mag_UW"};
    magazineWell[] = {"73_ar32rnd_uw","73_ar"};
};