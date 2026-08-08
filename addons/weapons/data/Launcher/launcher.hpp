class DMNS_M96_LAW;

class STB73_M96_LAW:DMNS_M96_LAW
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI";
    baseWeapon="STB73_M96_LAW";
    magazines[]=
    {
        "CBA_FakeLauncherMagazine"
    };
    magazineWell[]=
    {
        ""
    };
};

class ACE_DMNS_M96_LAW_ready_F;

class STB73_M96_LAW_Loaded: ACE_DMNS_M96_LAW_ready_F
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI [Loaded]";
    baseWeapon="STB73_M96_LAW";
    magazines[]= {
        "STB73_M96_HEAT"
    };
    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
    };
};
class ACE_DMNS_M96_LAW_used_F;

class STB73_M96_LAW_Used: ACE_DMNS_M96_LAW_used_F
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI [Used]";
    baseWeapon="STB73_M96_LAW";
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
    enabled = 1;
    weaponInfoType = "";
    magazines[]={
        "STB73_Mag_HEAT",
        "STB73_Mag_HEAT_LASER",
        "STB73_Mag_HEAP",
        "STB73_Mag_HEAA"
    };
    magazineWell[] = {"STB73_rockets","OPTRE_M41"};
};
