class CfgMagazines
{
	class CA_Magazine;
	class STB73_28Rnd_68x51_Mag: CA_Magazine
	{
		author = AUTHOR;
		dlc = QUOTE(PREFIX);

		scope = 2;

		displayName = "28Rnd 68x51mm Ball Magazine";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";
		picture = "\z\73STB\addons\weapons\data\ammo\68x51\Ball\data\UI\mag_65x51_28Rnd.paa";

		ammo = "STB73_B_68x51_Ball";

		model = "\z\73STB\addons\weapons\data\ammo\68x51\Ball\item_68x51mm_28Rnd.p3d"; // Dropped item display model
		modelSpecial = "z\73STB\addons\weapons\data\ammo\68x51\Ball\mag_68x51mm_28Rnd.p3d";
		modelSpecialIsProxy = 1;

		count = 28;
		mass = __EVAL(MAG_MASS(28));

		initSpeed = DEFAULT_VELOCITY;
	};

	// Tracers
	class STB73_28Rnd_68x51_Mag_Tracer_Green: STB73_28Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "28Rnd 68x51mm Ball Tracer Magazine (Green)";

		ammo = "STB73_B_68x51_Ball_Tracer_Green";

		// Tracer Specific
		lastRoundsTracer = 28; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};


	class STB73_28Rnd_68x51_Mag_Tracer_Red: STB73_28Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "28Rnd 68x51mm Ball Tracer Magazine (Red)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_Red";

		// Tracer Specific
		lastRoundsTracer = 28; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};

	class STB73_28Rnd_68x51_Mag_Tracer_Yellow: STB73_28Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "28Rnd 68x51mm Ball Tracer Magazine (Yellow)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_Yellow";

		// Tracer Specific
		lastRoundsTracer = 28; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};

	class STB73_28Rnd_68x51_Mag_Tracer_IR: STB73_28Rnd_68x51_Mag
	{
		author = AUTHOR;

		displayName = "28Rnd 68x51mm Ball Tracer Magazine (IR)";
		displayNameShort = ""; // Used for specialized ammunition
		descriptionShort = "";

		ammo = "STB73_B_68x51_Ball_Tracer_IR";

		// Tracer Specific
		lastRoundsTracer = 28; // All rounds in magazine are tracers
		tracersEvery = 1; // All rounds in magazine are tracers
	};
};