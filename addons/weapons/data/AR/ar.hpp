class TCP_arifle_MA40;
class TCP_arifle_MA37;
class TCP_arifle_MA40_GL;
class TCP_arifle_MA37_GL;
class OPTRE_MA37K;
class NSWep_MA5B;
class NSWep_MA5BGL;
class TCP_arifle_MA5K;
class UGL_F;

class STB73_MA40: TCP_arifle_MA40
{
    author= "73rd S-4 Team";
    displayName = "[73] MA40 ICWS Assault Rifle";
    baseWeapon = "STB73_MA40B";
    magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA40";
        grenadeLauncher="None";
    };
};
class STB73_MA40GL: TCP_arifle_MA40_GL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA40 + M301 GL Assault Rifle";
    baseWeapon 	= "STB73_MA40GL";
    magazines[] = {
        "STB73_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]  = {"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class M301:STB73_launch_M301
    {
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="op_look";
        discreteDistance[]={50,75,100,150,200,300,400};
        discreteDistanceCameraPoint[]=
        {
            "op_eye_50",
            "op_eye_75",
            "op_eye_100",
            "op_eye_150",
            "op_eye_200",
            "op_eye_300",
            "op_eye_400"
        };
        discreteDistanceInitIndex=3;
        reloadAction="GestureReloadMSBS_UGL";
        reloadMagazineSound[]=
        {
            "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
            1,
            1,
            10
        };
        magazineReloadSwitchPhase=1;
    };
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA40";
        grenadeLauncher="M301";
    };
};
class STB73_MA37: TCP_arifle_MA37
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37 ICWS Assault Rifle";
    baseWeapon = "STB73_MA37";
    magazines[] = {"STB73_32Rnd_762x51_Mag_Tracer"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA37";
        grenadeLauncher="None";
    };
};
class STB73_MA37GL: TCP_arifle_MA37_GL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37 + M301 GL Assault Rifle";
    baseWeapon 	= "STB73_MA37GL";
    magazines[] = {
        "STB73_32Rnd_762x51_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA37";
        grenadeLauncher="M301";
    };
    magazineWell[]  = {"STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class M301:STB73_launch_M301
    {
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="op_look";
        discreteDistance[]={50,75,100,150,200,300,400};
        discreteDistanceCameraPoint[]=
        {
            "op_eye_50",
            "op_eye_75",
            "op_eye_100",
            "op_eye_150",
            "op_eye_200",
            "op_eye_300",
            "op_eye_400"
        };
        discreteDistanceInitIndex=3;
        reloadAction="GestureReloadMSBS_UGL";
        reloadMagazineSound[]=
        {
            "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
            1,
            1,
            10
        };
        magazineReloadSwitchPhase=1;
    };
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
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA37K";
        grenadeLauncher="None";
    };
};
class 19_UNSC_MA5A;
class STB73_MA5A: 19_UNSC_MA5A
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5A ICWS Assault Rifle";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    baseWeapon 				= "STB73_MA5A";
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5A";
        grenadeLauncher="None";
    };
};
class 19_UNSC_MA5A_gl;
class STB73_MA5AGL: 19_UNSC_MA5A_gl
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5A ICWS Assault Rifle [M301]";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    baseWeapon 				= "STB73_MA5AGL";
    class GL_3GL_F: STB73_launch_M301
	{
        descriptionShort="$STR_A3_cfgweapons_gl1";
        cameraDir="OP_look";
		discreteDistance[]={100,150,200,250,300,350};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye2",
			"OP_eye3",
			"OP_eye4",
			"OP_eye5",
			"OP_eye6",
			"OP_eye8"
		};
		discreteDistanceInitIndex=1;
		reloadAction="GestureReloadMXUGL";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
			1,
			1,
			10
		};
        magazines[]=
        {
            "STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
        };
        magazineWell[]=
        {
            "STB73_1Rnd_40mm_MagWell"
        };
	};
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5A";
        grenadeLauncher="M301";
    };
};

class STB73_MA5B: NSWep_MA5B
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5B ICWS Assault Rifle";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    baseWeapon 				= "STB73_MA5B";
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5B";
        grenadeLauncher="None";
    };
};
class STB73_MA5BGL: NSWep_MA5BGL
{
    displayName         = "[73] MA5B ICWS Assault Rifle [M301]";
    baseWeapon 			= "STB73_MA5BGL";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class NSWep_M300UGL: STB73_launch_M301
    {
        displayName="M300 Grenade Launcher";
        descriptionShort="M300 GL";
        cursorAim="OPTRE_GRNDLNCH";
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="OP_look";
        discreteDistanceInitIndex=0;
        discreteDistance[]={50,100,200,300};
        discreteDistanceCameraPoint[]=
        {
            "OP_eye",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4"
        };
        reloadAction="GestureReloadMk20UGL";
        magazines[]=
        {
            "STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
        };
        magazineWell[]=
        {
            "STB73_1Rnd_40mm_MagWell"
        };
    };
    class GL_3GL_F: STB73_launch_M301 {
        displayName="M300 Grenade Launcher";
        descriptionShort="M300 GL";
        cursorAim="OPTRE_GRNDLNCH";
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="OP_look";
        discreteDistanceInitIndex=0;
        discreteDistance[]={50,100,200,300};
        discreteDistanceCameraPoint[]=
        {
            "OP_eye",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4"
        };
        reloadAction="GestureReloadMk20UGL";
        magazines[]=
        {
            "STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
        };
        magazineWell[]=
        {
            "STB73_1Rnd_40mm_MagWell"
        };
    };
    class NSWep_M300BUGL: STB73_launch_M301
    {
        displayName="M300 Grenade Launcher";
        descriptionShort="M300 GL";
        cursorAim="OPTRE_GRNDLNCH";
        useModelOptics=0;
        useExternalOptic=0;
        cameraDir="OP_look";
        discreteDistanceInitIndex=0;
        discreteDistance[]={50,100,200,300};
        discreteDistanceCameraPoint[]=
        {
            "OP_eye",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4"
        };
        reloadAction="GestureReloadMk20UGL";
        magazines[]=
        {
            "STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
        };
        magazineWell[]=
        {
            "STB73_1Rnd_40mm_MagWell"
        };
    };
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5B";
        grenadeLauncher="M301";
    };
};
class OPTRE_MA5C;
class STB73_MA5C: OPTRE_MA5C
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5C ICWS Assault Rifle";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    baseWeapon 				= "STB73_MA5C";
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5C";
        grenadeLauncher="None";
    };
};
class OPTRE_MA5CGL;
class STB73_MA5CGL: OPTRE_MA5CGL
{
    displayName         = "[73] MA5C ICWS Assault Rifle [M301]";
    baseWeapon 			= "STB73_MA5CGL";
    magazines[]             = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] 			= {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class OPTRE_M301UGL:STB73_launch_M301
    {
        displayName 														= "M301 Grenade Launcher";
        descriptionShort 													= "M301 GL";
        cursor								= "EmptyCursor";
        cursorAim							= "OPTRE_GRNDLNCH";
        useModelOptics 														= 0;
        useExternalOptic 													= 0;
        cameraDir 															= "OP_look";
        discreteDistance[] 													= {100, 200, 300};
        discreteDistanceCameraPoint[] 										= {"OP_eye", "OP_eye2", "OP_eye3"}; /// the angle of gun changes with zeroing
        discreteDistanceInitIndex 											= 0;
        reloadAction 														= "GestureReloadMXUGL";
        reloadMagazineSound[] 												= {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_UGL_reload",1,1,10};
        class Single: Single
        {
            sounds[]=
            {
                "StandardSound"
            };
            class BaseSoundModeType
            {
                weaponSoundEffect="DefaultRifle";
                closure1[]={};
                closure2[]={};
                soundClosure[]=
                {
                    "closure1",
                    0.5,
                    "closure2",
                    0.5
                };
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
            };
            reloadTime = 0.1;
        };
        magazines[]=
        {
            "STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
        };
        magazineWell[]=
        {
            "STB73_1Rnd_40mm_MagWell"
        };
    };
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5C";
        grenadeLauncher="M301";
    };
};
class STB73_MA5K: TCP_arifle_MA5K
{
    displayname = "[73] MA5K ICWS Carbine";
    baseWeapon 	= "STB73_MA5K";
    magazines[] = {"STB73_60Rnd_762x51_Mag_Tracer"};
    magazineWell[] = {"STB73_60Rnd_762x51_MagWell","STB73_32Rnd_762x51_MagWell","STB73_15Rnd_762x51_MagWell"};
    class XtdGearInfo
    {
        model="STB73_ACE_MA_AR";
        variant="MA5K";
        grenadeLauncher="None";
    };
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
    class XtdGearInfo
    {
        model="";
    };
};
