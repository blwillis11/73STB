//thank to devilwoman341 for ammo code!

class 8Rnd_82mm_Mo_shells;
class 32Rnd_155mm_Mo_shells;
class 12Rnd_230mm_rockets;

class STB73_12Rnd_230mm_rockets:12Rnd_230mm_rockets
{
        author=AUTHOR;
        count=12;
        ammo="STB73_230mm_Con";
        displayName="230mm Concussive";
        displayNameShort="Low Explosive";
        displayNameMFDFormat="LE";
};
class STB73_82mm_ZEUS_12Rnd:8Rnd_82mm_Mo_shells
{
        author=AUTHOR;
        count=12;
        ammo="STB73_82mm_ZEUS";
        displayName="82mm Concussive";
        displayNameShort="Low Explosive";
        displayNameMFDFormat="LE";
        muzzleImpulseFactor[]={0.050000001,0.050000001};
};
class STB73_12Rnd_105mm_Con: 32Rnd_155mm_Mo_shells
{
    author=AUTHOR;
    count=12;
    ammo="STB73_105mm_Con";
    displayName="105mm Concussive";
    displayNameShort="Concussive";
    displayNameMFDFormat="Con";
};

