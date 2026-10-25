class CfgAmmo 
{
    class BulletBase;

    class STB73_B_68x51_Ball : BulletBase
    {
        hit = __EVAL(DAMAGE);

        indirectHit=0;
        indirectHitRange=0;

        pictureWire="tcp\weapons\Ammo\65x48\Ball\data\ui\icon_ammo_65x48_W_CA.paa";

        visibleFire = 3;
        audibleFire = 45;

        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 13;

        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;

        cost = 1.6;

        airLock = 1;

        typicalSpeed = DEFAULT_VELOCITY;

        deflecting = PROJ_DEFLECT_ANGLE;

        caliber = __EVAL(CALIBER);

        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";

        cartridge = "STB73_68x51_Cartridge";

        tracerScale = 0.7;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;

        airFriction = PROJ_DRAG;

        class CamShakeExplode
        {
            power = 2.82843;
            duration = 0.6;
            frequency = 20;
            distance = 8.48528;
        };

        class CamShakeHit
        {
            power = 7;
            duration = 0.3;
            frequency = 20;
            distance = 1;
        };

        // Projectile diameter in mm (diameter is a little different from caliber)
		ACE_caliber = PROJ_DIAMETER;

		ACE_bulletLength = PROJ_LENGTH; // Projectile Length in mm
		ACE_bulletMass = __EVAL(GR2G(PROJ_MASS)); // Projectile mass in grams

		// Standard deviation of the muzzle velocity variation in percent
		// Example: With a muzzle velocity of 850 m/s and a standard deviation of 0.35%, 68% of the shots will be between 847 m/s and 853 m/s
		ACE_muzzleVelocityVariationSD = 0.35;

		// Array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C
		// Example: At 0°C the shift will be -21.0
		ACE_ammoTempMuzzleVelocityShifts[] =
		{
			-26.55,	// -15 °C
			-25.47,	// -10 °C
			-22.85,	// -5 °C
			-20.12,	// 0 °C
			-16.98,	// 5 °C
			-12.80,	// 10 °C
			-7.64,	// 15 °C
			-1.53,	// 20 °C
			5.96,	// 25 °C
			15.17,	// 30 °C
			26.19	// 35 °C
		};

		// Array of ballistic coefficients (contains one element more than the velocity boundary array)
		ACE_ballisticCoefficients[] = {PROJ_DRAG_COEF};

		ACE_velocityBoundaries[] = {}; // Array of velocity boundaries
		ACE_standardAtmosphere = "ICAO"; // "ASM" or "ICAO"
		ACE_dragModel = PROJ_DRAG_MODEL;  // Number that specifies the drag model [1, 2, 5, 6, 7, 8]

		// Array of muzzle velocities (same size as barrel length array)
		ACE_muzzleVelocities[] =
		{
			824,
			894,
			914,
			936,
			960
		};

		// Array of barrel lengths (same size as muzzle velocity array)
		// Example, when shooting with the M4 barrel (`368.3`mm).
		// The length is between the 5th and 6th barrelLengths (`360.68, 391.16`).
		// So the muzzle velocity will be between 5th and 6th muzzleVelocities (`866, 878`).
		ACE_barrelLengths[] =
		{
			254.0,
			406.4,
			508.0,
			609.6,
			660.4
		};
    };

    class STB73_B_68x51_Ball_Tracer_Green: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };

    class STB73_B_68x51_Ball_Tracer_Red: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class STB73_B_68x51_Ball_Tracer_Yellow: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };

    class STB73_B_68x51_Ball_Tracer_IR: STB73_B_68x51_Ball
    {
        nvgOnly = 1;
    };
};