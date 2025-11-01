class TCP_arifle_MA40;
class TCP_arifle_MA37;
class TCP_arifle_MA40_GL;
class TCP_arifle_MA37_GL;
class OPTRE_MA37K;
class NSWep_MA5B;
class NSWep_MA5BGL;
class TCP_arifle_MA5K;

class STB73_MA40: TCP_arifle_MA40
{
    author= "73rd S-4 Team";
    displayName = "[73] MA40 ICWS Assault Rifle";
    baseWeapon = "STB73_MA40B";
    magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
};
class STB73_MA40GL: TCP_arifle_MA40_GL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA40 + M301 GL Assault Rifle";
    baseWeapon 	= "STB73_MA40GL";
    magazines[] = {
        "STB73_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]  = {"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell","STB73_1Rnd_40mm_MagWell"};
};
class STB73_MA37: TCP_arifle_MA37
{
    author= "73rd S-4 Team";
    displayName = "[73] MA40 ICWS Assault Rifle";
    baseWeapon = "STB73_MA37";
    magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
};
class STB73_MA37GL: TCP_arifle_MA37_GL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37 + M301 GL Assault Rifle";
    baseWeapon 	= "STB73_MA37GL";
    magazines[] = {
        "STB73_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]  = {"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell","STB73_1Rnd_40mm_MagWell"};
};
class STB73_MA37K: OPTRE_MA37K
{
    baseWeapon = "STB73_MA37K";
    author= "73rd S-4 Team";
    displayName = "[73] MA37K Carbine";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        "\OPTRE_Weapons\MA37K\data\MA37K_CO.paa"
    };
    magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer"};
    magazineWell[]={"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    HUD_BulletInARows = 2;
    HUD_TotalPosibleBullet = 32;
};

class STB73_MA5B: NSWep_MA5B
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5B ICWS Assault Rifle";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    baseWeapon 				= "STB73_MA5B";
};
class STB73_MA5BGL: NSWep_MA5BGL
{
    displayName         = "[73] MA5B ICWS Assault Rifle [M301]";
    baseWeapon 			= "STB73_MA5BGL";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell","STB73_1Rnd_40mm_MagWell"};
};
class STB73_MA5K: TCP_arifle_MA5K
{
    displayname = "[73] MA5K ICWS Carbine";
    baseWeapon 	= "STB73_MA5K";
    magazines[] = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] = {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
};

//"HVAP-1" (https://skfb.ly/ouIYY) by valterjherson1 is licensed under Creative Commons Attribution (http://creativecommons.org/licenses/by/4.0/).

class STB73_HVAP1: STB73_MA37K
{
    author="Salmon";
    displayName="[OCLF] HVAP-1";
    baseWeapon="STB73_HVAP1";
    descriptionShort="A High Velocity Assault Platform chambered in 7.62x51mm.";
    model = "z\73STB\addons\weapons\data\HVAP1.p3d";
    magazines[] = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[]={"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    scope=2;
    scopeArsenal=2;
    scopeCurator=2;
    ace_Overheating_mrbs=200000;
    ace_Overheating_slowdownFactor=0;
    ace_Overheating_dispersion=0;
    ace_Overheating_allowSwapBarrel=1;
    ace_recoilCoefficient=1.0;
    ace_clearJamAction="GestureReloadHVAP1";
    reloadAction="GestureReloadHVAP1";
    handAnim[] = {"OFP2_ManSkeleton","z\73STB\addons\weapons\anims\hvap1aim.rtm"};
    class GunParticles
    {
        class FirstEffect
        { 
            directionName="Konec hlavne";
            effectName="RifleAssaultCloud";
            positionName="Usti hlavne";
        };
    };
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "z\73STB\addons\weapons\data\AR\testweapon_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "z\73STB\addons\weapons\data\AR\hvap1_rv.rvmat"
    };
};
