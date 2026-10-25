class CfgMagazines
{
    class STB73_15Rnd_762x51_Mag;
    class STB73_15Rnd_762x51_Blank_Mag : STB73_15Rnd_762x51_Mag
    {
        displayName = "15Rnd 7.62x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_15Rnd_762x51_Rubber_Mag : STB73_15Rnd_762x51_Mag
    {
        displayName = "15Rnd 7.62x51mm Rubber Magazine";
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

    class STB73_32Rnd_762x51_Mag;
    class STB73_32Rnd_762x51_Blank_Mag : STB73_32Rnd_762x51_Mag
    {
        displayName = "32Rnd 7.62x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_32Rnd_762x51_Rubber_Mag : STB73_32Rnd_762x51_Mag
    {
        displayName = "32Rnd 7.62x51mm Rubber Magazine";
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

    class STB73_60Rnd_762x51_Mag;
    class STB73_60Rnd_762x51_Blank_Mag : STB73_60Rnd_762x51_Mag
    {
        displayName = "60Rnd 7.62x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_60Rnd_762x51_Rubber_Mag : STB73_60Rnd_762x51_Mag
    {
        displayName = "60Rnd 7.62x51mm Rubber Magazine";
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

    class STB73_100rnd_762x51_Mag;
    class STB73_100rnd_762x51_Blank_Mag : STB73_100rnd_762x51_Mag
    {
        displayName = "100Rnd 7.62x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_100rnd_762x51_Rubber_Mag : STB73_100rnd_762x51_Mag
    {
        displayName = "100Rnd 7.62x51mm Rubber Magazine";
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

    class STB73_200Rnd_762x51_MagWell;
    class STB73_200Rnd_762x51_Blank_Mag : STB73_200Rnd_762x51_MagWell
    {
        displayName = "200Rnd 7.62x51mm Blanks Magazine";
        ammo = "training_mag_blank_bullet";
    };
    class STB73_200Rnd_762x51_Rubber_Mag : STB73_200Rnd_762x51_MagWell
    {
        displayName = "200Rnd 7.62x51mm Rubber Magazine";
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