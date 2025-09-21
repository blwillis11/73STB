class DMNS_M96_LAW;

class 73_M96_LAW:DMNS_M96_LAW
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI";
    baseWeapon="73_M96_LAW";
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

class 73_M96_LAW_Loaded: ACE_DMNS_M96_LAW_ready_F
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI [Loaded]";
    baseWeapon="73_M96_LAW";
    magazines[]= {
        "73_M96_HEAT"
    };
    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
    };
};
class ACE_DMNS_M96_LAW_used_F;

class 73_M96_LAW_Used: ACE_DMNS_M96_LAW_used_F
{
    author="73rd S-4 Team";
    displayname="[73] M96 LAW - MK VI [Used]";
    baseWeapon="73_M96_LAW";
};



class launch_MRAWS_green_F;
class launch_MRAWS_green_rail_F;

class 73_Fang2: launch_MRAWS_green_F
{
    author="73rd S-4 Team";
    displayname="[73] M40 'Fang' Launcher";
    baseWeapon="73_Fang2";
    magazines[]=
    {
        "73_1Rnd_50x137_HE",
        "73_1Rnd_50x137_HEAT",
        "73_1Rnd_50x137_PEN"
    };
    magazineWell[]={};
//    hiddenSelectionsTextures[]=
//    {
//        "",
//        ""
//    };
};
class 73_Fang: launch_MRAWS_green_rail_F
{
    author="73rd S-4 Team";
    displayname="[73] M39 'Fang' Launcher";
    baseWeapon="73_Fang";
    magazines[]=
    {
        "73_1Rnd_50x137_HE",
        "73_1Rnd_50x137_HEAT",
        "73_1Rnd_50x137_PEN"
    };
    magazineWell[]={};
//    hiddenSelectionsTextures[]=
//    {
//        "",
//        ""
//    };
};

class OPTRE_M41_SSR;

class 73_M41_SSR:OPTRE_M41_SSR{
    displayName = "[73] M41 SSR MAV/AW";
    author= "73rd S-4 Team";
    baseWeapon="73_MPLR";
    scope = 2;
    scopeArsenal = 2;
    enabled = 1;
    weaponInfoType = "";
    magazines[]={
        "73_HEAT",
    };
    magazineWell[] = {"73_rockets","OPTRE_M41"};
    hiddenSelections[]= {
        "camo",
        "camo_tubes",
        "camo_details"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\rockets\data\launcher_co.paa",
        "optre_weapons\rockets\data\tubes_co.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
};