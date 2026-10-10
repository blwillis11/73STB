class CfgMagazines
{
	class CA_Magazine;
	class STB73_30Rnd_68x51_Mag: CA_Magazine
	{
		author = AUTHOR;
		dlc = QUOTE(PREFIX);

		scope = 2;

		displayName = "30Rnd 68x51mm Ball Magazine";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";
		picture = "";

		ammo = "STB73_B_68x51_Ball";

		model = "tcp\weapons\Ammo\65x48\Ball\item_65x48mm_20rnd.p3d"; // Dropped item display model
		modelSpecial = "";
		modelSpecialIsProxy = 0;

		count = 30;
		mass = __EVAL(MAG_MASS(30));

		initSpeed = DEFAULT_VELOCITY;
	};

	// Tracers
	class STB73_30Rnd_68x51_Mag_Tracer_Green: STB73_30Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "30Rnd 68x51mm Ball Tracer Magazine (Green)";

		ammo = "STB73_B_68x51_Ball_Tracer_Green";

		// Tracer Specific
		lastRoundsTracer = 30; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};


	class STB73_30Rnd_68x51_Mag_Tracer_Red: STB73_30Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "30Rnd 68x51mm Ball Tracer Magazine (Red)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_Red";

		// Tracer Specific
		lastRoundsTracer = 30; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};

	class STB73_30Rnd_68x51_Mag_Tracer_Yellow: STB73_30Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "30Rnd 68x51mm Ball Tracer Magazine (Yellow)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_Yellow";

		// Tracer Specific
		lastRoundsTracer = 30; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};

	class STB73_30Rnd_68x51_Mag_Tracer_IR: STB73_30Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "30Rnd 68x51mm Ball Tracer Magazine (IR)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_IR";

		// Tracer Specific
		lastRoundsTracer = 30; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};
};