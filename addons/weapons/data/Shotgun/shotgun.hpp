class OPTRE_M45TAC;
class OPTRE_M45ATAC;

class STB73_M45: OPTRE_M45TAC
{
    baseWeapon="STB73_M45TAC";
    displayName="[73] M45 Tactical Shotgun";
    author= AUTHOR;
    canShootInWater=1;
    magazineWell[]={
        "STB73_6Rnd_12Gauge_MagWell"
    };
    magazines[]=
    {
        "STB73_6Rnd_12Gauge_Pellets"
    };
};
class STB73_M45E: OPTRE_M45ATAC
{
    baseWeapon="STB73_M45ATAC";
    displayName="[73] M45A Combat Shotgun";
    canShootInWater=1;
    author= AUTHOR;
    magazineWell[]={
        "STB73_6Rnd_12Gauge_MagWell"
    };
    magazines[]=
    {
        "STB73_6Rnd_12Gauge_Pellets"
    };
};
