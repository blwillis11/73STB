class CfgMagazines
{
    class STB73_48Rnd_5x23Caseless_FMJ_Mag;
    class STB73_48Rnd_5x23Caseless_Blank_Mag : STB73_48Rnd_5x23Caseless_FMJ_Mag
    {
        displayName = "48Rnd 5x23mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_48Rnd_5x23Caseless_Rubber_Mag : STB73_48Rnd_5x23Caseless_FMJ_Mag
    {
        displayName = "48Rnd 5x23mm Rubber Magazine";
        ammo = "training_mag_rubber_bullet";
        // used if vanilla
        // vanilla settings are generally going to be lower, because ace is much more finicky
        unconsciousTime = 7;
        unconsciousShots[] = {2,3,3}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 12;
        ace_unconsciousShots[] = {4,6,8}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };

    class STB73_60Rnd_5x23Caseless_FMJ_Mag;
    class STB73_60Rnd_5x23Caseless_Blank_Mag : STB73_60Rnd_5x23Caseless_FMJ_Mag
    {
        displayName = "60Rnd 5x23mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_60Rnd_5x23Caseless_Rubber_Mag : STB73_60Rnd_5x23Caseless_FMJ_Mag
    {
        displayName = "60Rnd 5x23mm Rubber Magazine";
        ammo = "training_mag_rubber_bullet";
        // used if vanilla
        // vanilla settings are generally going to be lower, because ace is much more finicky
        unconsciousTime = 7;
        unconsciousShots[] = {2,3,3}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 12;
        ace_unconsciousShots[] = {4,6,8}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };
};