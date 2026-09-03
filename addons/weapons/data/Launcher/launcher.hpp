class OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey;

class STB73_M44_Lykoi_HEAT:OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HEAT - Disposable";
    baseWeapon="STB73_M44_Lykoi_HEAT";
    magazines[]=
    {
        "CBA_FakeLauncherMagazine"
    };
    magazineWell[]=
    {
        ""
    };
    reloadAction="GestureReloadRPG7";
    recoil="recoil_nlaw";
    magazineReloadTime = 0.1;
    magazineReloadSwitchPhase = 1;
};

class STB73_M44_Lykoi_HEAT_Loaded: STB73_M44_Lykoi_HEAT
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HEAT [Loaded]";
    baseWeapon="STB73_M44_Lykoi_HEAT";
    magazines[] = {"OPTRE_M44_Lykoi_HEAT_mag"};
    magazineWell[] = {""};
    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
    };
    scope = 1;
    scopeArsenal = 1;
};

class STB73_M44_Lykoi_HEAT_Used: STB73_M44_Lykoi_HEAT
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HEAT [Used]";
    baseWeapon="STB73_M44_Lykoi_HEAT";
    magazines[] = {"CBA_FakeLauncherMagazine"};
    magazineWell[] = {""};
    scope = 1;
    scopeArsenal = 1;
};

class STB73_M44_Lykoi_HE:OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HE - Disposable";
    baseWeapon="STB73_M44_Lykoi_HE";
    magazines[]=
    {
        "CBA_FakeLauncherMagazine"
    };
    magazineWell[]=
    {
        ""
    };
    reloadAction="GestureReloadRPG7";
    recoil="recoil_nlaw";
    magazineReloadTime = 0.1;
    magazineReloadSwitchPhase = 1;
};

class STB73_M44_Lykoi_HE_Loaded: STB73_M44_Lykoi_HE
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HE [Loaded]";
    baseWeapon="STB73_M44_Lykoi_HE";
    magazines[] = {"OPTRE_M44_Lykoi_HE_mag"};
    magazineWell[] = {""};
    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
    };
    scope = 1;
    scopeArsenal = 1;
};

class STB73_M44_Lykoi_HE_Used: STB73_M44_Lykoi_HE
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi HE [Used]";
    baseWeapon="STB73_M44_Lykoi_HE";
    magazines[] = {"CBA_FakeLauncherMagazine"};
    magazineWell[] = {""};
    scope = 1;
    scopeArsenal = 1;
};

class STB73_M44_Lykoi_AA:OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi AA - Disposable";
    baseWeapon="STB73_M44_Lykoi_AA";
    magazines[]=
    {
        "CBA_FakeLauncherMagazine"
    };
    magazineWell[]=
    {
        ""
    };
    reloadAction="GestureReloadRPG7";
    recoil="recoil_nlaw";
    magazineReloadTime = 0.1;
    magazineReloadSwitchPhase = 1;
};

class STB73_M44_Lykoi_AA_Loaded: STB73_M44_Lykoi_AA
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi AA [Loaded]";
    baseWeapon="STB73_M44_Lykoi_AA";
    magazines[] = {"OPTRE_M44_Lykoi_AA_mag"};
    magazineWell[] = {""};
    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
    };
    scope = 1;
    scopeArsenal = 1;
};

class STB73_M44_Lykoi_AA_Used: STB73_M44_Lykoi_AA
{
    author="73rd S-4 Team";
    displayname="[73] M44 Lykoi AA [Used]";
    baseWeapon="STB73_M44_Lykoi_AA";
    magazines[] = {"CBA_FakeLauncherMagazine"};
    magazineWell[] = {""};
    scope = 1;
    scopeArsenal = 1;
};



class launch_MRAWS_green_F;
class launch_MRAWS_green_rail_F;

class STB73_Fang2: launch_MRAWS_green_F
{
    author="73rd S-4 Team";
    displayname="[73] M40 'Fang' Launcher";
    baseWeapon="STB73_Fang2";
    magazines[]=
    {
        "STB73_1Rnd_50x137_HE",
        "STB73_1Rnd_50x137_HEAT",
        "STB73_1Rnd_50x137_PEN"
    };
    magazineWell[]={};
//    hiddenSelectionsTextures[]=
//    {
//        "",
//        ""
//    };
};
class STB73_Fang: launch_MRAWS_green_rail_F
{
    author="73rd S-4 Team";
    displayname="[73] M39 'Fang' Launcher";
    baseWeapon="STB73_Fang";
    magazines[]=
    {
        "STB73_1Rnd_50x137_HE",
        "STB73_1Rnd_50x137_HEAT",
        "STB73_1Rnd_50x137_PEN"
    };
    magazineWell[]={};
//    hiddenSelectionsTextures[]=
//    {
//        "",
//        ""
//    };
};

class TCP_launch_M41;

class STB73_M41_SSR:TCP_launch_M41{
    displayName = "[73] M41 SSR MAV/AW";
    author= "73rd S-4 Team";
    baseWeapon="STB73_M41_SSR";
    scope = 2;
    scopeArsenal = 2;
    lockAcquire = 1;
    magazines[]={
        "STB73_Mag_HEAT",
        "STB73_Mag_HEAT_LASER",
        "STB73_Mag_HEAP",
        "STB73_Mag_HEAA"
    };
    magazineWell[] = {"STB73_rockets","OPTRE_M41"};
};
