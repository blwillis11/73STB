class CfgMagazines
{
    class STB73_30Rnd_68x51_Mag;
    class STB73_30Rnd_68x51_Blank_Mag : STB73_30Rnd_68x51_Mag
    {
        displayName = "30Rnd 68x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_30Rnd_68x51_Rubber_Mag : STB73_30Rnd_68x51_Mag
    {
        displayName = "30Rnd 68x51mm Rubber Magazine";
        ammo = "training_mag_rubber_bullet";
        // used if vanilla
        unconsciousTime = 13;
        unconsciousShots[] = {1,1,2}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 17;
        ace_unconsciousShots[] = {2,4,6}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };
};