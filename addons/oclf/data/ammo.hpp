//thank to devilwoman341 for ammo code!

class Sh_155mm_AMOS;
class Sh_82mm_AMOS;
class R_230mm_HE;
class R_230mm_fly;

class STB73_230mm_Fly_Con: R_230mm_fly
{
    hit=30;
    indirectHit=10;
    indirectHitRange=12;
    warheadName="Con";
};
class STB73_230mm_Con: R_230mm_HE
{
    hit=20;
    indirectHit=0;
    indirectHitRange=8;
    submunitionAmmo = "STB73_230mm_Fly_Con";
};
class STB73_105mm_Con: Sh_155mm_AMOS
{
    hit=20;
    indirectHit=5;
    indirectHitRange=6;
    warheadName="Con";
};
class STB73_82mm_ZEUS:Sh_82mm_AMOS
{
        hit=20;
        indirectHit=5;
        indirectHitRange=6;
        warheadName="Con";
};

