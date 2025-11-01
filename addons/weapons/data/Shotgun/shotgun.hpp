class TCP_sgun_M45;
class TCP_sgun_M45E;

class STB73_M45: TCP_sgun_M45
{
    baseWeapon="STB73_M45";
    displayName="[73] M45 Tactical Shotgun";
    author= AUTHOR;
    canShootInWater=1;
    magazineWell[]={
        "STB73_1Rnd_12Gauge_MagWell"
    };
    magazines[]=
    {
        "STB73_1Rnd_12Gauge_Pellets"
    };
};
class STB73_M45E: TCP_sgun_M45E
{
    baseWeapon="STB73_M45E";
    displayName="[73] M45E Combat Shotgun";
    canShootInWater=1;
    author= AUTHOR;
    magazineWell[]={
        "STB73_1Rnd_12Gauge_MagWell"
    };
    magazines[]=
    {
        "STB73_1Rnd_12Gauge_Pellets"
    };
};
