class DOUBLES(PFACTION,Soldier): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
};
// Ammo Bearer
class DOUBLES(PFACTION,Soldier_A): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "$STR_B_Soldier_A_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,A));
};

//Autorifleman
class DOUBLES(PFACTION,Soldier_AR): DOUBLES(PFACTION,Soldier_Base)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "$STR_B_soldier_AR_F0";
	
	armor = 2;
	armorStructural = 4;
	explosionShielding = 0.4;

	icon = "iconManMG";
	role = "MachineGunner";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AR));

	weapons[] =
	{
		QUOTE(MACHINEGUN),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		QUOTE(MACHINEGUN),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};

	magazines[] =
	{
		MAG_1(MACHINEGUN_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] =
	{
		MAG_1(MACHINEGUN_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

	linkedItems[] =
	{
		QUOTE(VEST_HEAVY),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_HEAVY),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_MG_s"};
			speechPlural[] = {"veh_infantry_MG_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
	nameSound = "veh_infantry_MG_s";
};

//--- Medic
class DOUBLES(PFACTION,Soldier_Medic): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	attendant = 1;
	displayName = "$STR_B_medic_F0";

	armor = 2;
	armorStructural = 4;
	explosionShielding = 0.4;
	camouflage = 1.6;

	icon = "iconManMedic";
	role = "CombatLifeSaver";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,MED));

	weapons[] =
	{
		QUOTE(SMG),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		QUOTE(SMG),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};

	magazines[] =
	{
		MAG_6(SMG_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] =
	{
		MAG_6(SMG_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

	linkedItems[] =
	{
		QUOTE(VEST_SUPPORT),
		QUOTE(HELMET_SORC),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_SUPPORT),
		QUOTE(HELMET_SORC),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_medic_s"};
			speechPlural[] = {"veh_infantry_medic_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
	nameSound = "veh_infantry_medic_s";
};

//--- Engineer
class DOUBLES(PFACTION,Soldier_Engineer): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	camouflage = 1.6;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 31;

	displayName = "$STR_B_engineer_F0";
	
	icon = "iconManEngineer";
	role = "Sapper";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,ENG)); // Engineer Backpack

	linkedItems[] =
	{
		QUOTE(VEST_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Explosive Specialist
class DOUBLES(PFACTION,Soldier_Exp): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	camouflage = 1.6;
	canDeactivateMines = 1;
	detectSkill = 38;

	displayName = "$STR_B_soldier_exp_F0";
	
	icon = "iconManExplosive";
	role = "Sapper";
	
	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,EXP));
	
	linkedItems[] =
	{
		QUOTE(VEST_HEAVY_ARMCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_HEAVY_ARMCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

//--- Grenadier
class DOUBLES(PFACTION,Soldier_GL): DOUBLES(PFACTION,Soldier_Base_02)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	displayName = "$STR_B_Soldier_GL_F0";
	role = "Grenadier";
	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,GRE));
	linkedItems[] =
	{
		QUOTE(VEST_HEAVY_ARMCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_HEAVY_ARMCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	weapons[] = 
	{
		QUOTE(RIFLE_GL),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_GL),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	
	magazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_3(RIFLE_GL_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_3(RIFLE_GL_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
};

//--- Marksman
class DOUBLES(PFACTION,Soldier_M): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	role = "Marksman";
	displayName = "$STR_B_soldier_M_F0";
	weapons[] = 
	{
		QUOTE(MARKSMAN),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	respawnWeapons[] = 
	{
		QUOTE(MARKSMAN),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	
	magazines[] = 
	{
		MAG_6(MARKSMAN_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(MARKSMAN_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
};

//--- Missile Specialist (AA)
class DOUBLES(PFACTION,Soldier_AA): DOUBLES(PFACTION,Soldier_Base_03)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	camouflage = 1.5;
	icon = "iconManAT";
	role = "MissileSpecialist";
	secondaryAmmoCoef = 0.5;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_AT_s"};
			speechPlural[] = {"veh_infantry_AT_p"};
		};
	};
	textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
	nameSound = "veh_infantry_AT_s";
	displayName = "$STR_B_Soldier_AA_F0";
	weapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER_AA),
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER_AA),
		"Throw",
		"Put"
	};

	magazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_AA_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_AA_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	
	linkedItems[] =
	{
		QUOTE(VEST_SHINS),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_SHINS),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AA));
};

//--- Missile Specialist (AT)
class DOUBLES(PFACTION,Soldier_AT): DOUBLES(PFACTION,Soldier_AA)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	icon = "iconManAT";
	displayName = "$STR_B_Soldier_AT_F0";
	weapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER),
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER),
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AT));
};

//--- Officer
class DOUBLES(PFACTION,Soldier_Officer): DOUBLES(PFACTION,Soldier_Base)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	cost = 250000;
	camouflage = 1.6;

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_officer_s"};
			speechPlural[] = {"veh_infantry_officer_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";

	nameSound = "veh_infantry_officer_s";

	displayName = "$STR_B_officer_F0";

	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_NATO",
		QUOTE(FACEWEARCAS)
	};

	icon = "iconManOfficer";

	magazines[] = 
	{
		MAG_3(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_3(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

	linkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(BERET),
		QUOTE(ITEM_GPS),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(BERET),
		QUOTE(ITEM_GPS),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
};

//--- Repair Specialist
class DOUBLES(PFACTION,Soldier_Repair): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	engineer = 1;
	detectSkill = 24;

	cost = 93000;

	camouflage = 1.6;
	
	displayName = "$STR_B_soldier_repair_F0";

	icon = "iconManEngineer";
	role = "Sapper";
	
	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,REP));
};

//--- Rifleman (AT)
class DOUBLES(PFACTION,Soldier_LAT): DOUBLES(PFACTION,Soldier_Base_03)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	cost = 130000;
	threat[] = {0.8,0.8,0.3};

	icon = "iconManAT";
	role = "MissileSpecialist";

	secondaryAmmoCoef = 0.5;

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_AT_s"};
			speechPlural[] = {"veh_infantry_AT_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";

	nameSound = "veh_infantry_AT_s";

	weapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER),
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		QUOTE(LAUNCHER),
		"Throw",
		"Put"
	};

	magazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(LAUNCHER_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

	displayName = "$STR_B_soldier_LAT_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AT));
};

//--- Unarmed
class DOUBLES(PFACTION,Soldier_Unarmed): DOUBLES(PFACTION,Soldier_Base)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_NATO",
		QUOTE(FACEWEARCAS)
	};
	cost = 250000;
	camouflage = 1.4;
	icon = "iconManLeader";
	role = "Rifleman";
	threat[] = {0.1,0.1,0.1};
	displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
	uniformClass = Q(UNIFORM_TSHIRT);

	weapons[] = 
	{
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"Throw",
		"Put"
	};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = 
	{
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
};

//--- Squad Leader
class DOUBLES(PFACTION,Soldier_SL): DOUBLES(PFACTION,Soldier_Base_04)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	cost = 250000;
	camouflage = 1.4;

	icon = "iconManLeader";
	role = "Rifleman";

	armor = 2;
	armorStructural = 4;
	explosionShielding = 0.4;

	displayName = "$STR_B_Soldier_SL_F0";

	linkedItems[] =
	{
		QUOTE(VEST_SHINS_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST_SHINS_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	weapons[] = 
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};

	magazines[] = 
	{
		MAG_5(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_1(SMOKE_BLUE),
		MAG_1(SMOKE_GREEN),
		MAG_1(SMOKE_ORANGE),
		MAG_1(IR),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_5(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_1(SMOKE_BLUE),
		MAG_1(SMOKE_GREEN),
		MAG_1(SMOKE_ORANGE),
		MAG_1(IR),
		MAG_2(LIGHT)
	};
};

//--- Team Leader
class DOUBLES(PFACTION,Soldier_TL): DOUBLES(PFACTION,Soldier_SL)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	cost = 250000;
	camouflage = 1.4;

	icon = "iconManLeader";
	role = "Grenadier";

	armor = 2;
	armorStructural = 4;
	explosionShielding = 0.4;

	displayName = "$STR_B_Soldier_TL_F0";

	weapons[] = 
	{
		QUOTE(RIFLE_GL),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_GL),
		QUOTE(PISTOL),
		"Throw",
		"Put"
	};
	
	magazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_3(RIFLE_GL_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(RIFLE_MAG),
		MAG_3(RIFLE_GL_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,GRE));
};

//--- Rifleman (Lite)
class DOUBLES(PFACTION,Soldier_Lite): DOUBLES(PFACTION,Soldier_Base)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_NATO",
		QUOTE(FACEWEARCAS)
	};

	camouflage = 1.2;

	displayName = "$STR_B_Soldier_lite_F0";
	uniformClass = Q(UNIFORM_TSHIRT);

	magazines[] =
	{
		MAG_4(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_2(LIGHT)
	};
	respawnMagazines[] =
	{
		MAG_4(RIFLE_MAG),
		MAG_2(PISTOL_MAG),
		MAG_2(LIGHT)
	};

	linkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HAT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
};

// UAV
class DOUBLES(PFACTION,Soldier_UAV): DOUBLES(PFACTION,Soldier_Base_02)
{
	dlc = QUOTE(PREFIX);

	scope = 2;

	displayName = "$STR_A3_B_SOLDIER_UAV_F0";

	linkedItems[] = 
	{
		QUOTE(VEST_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(TERMINAL)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_FLAKCOLLAR),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(TERMINAL)
	};

	backpack = "B_UAV_01_backpack_F";
	
	role = "SpecialOperative";
	uavHacker = 1;
};

//--- Sniper
class DOUBLES(PFACTION,Soldier_Sniper): DOUBLES(PFACTION,Soldier_Base_03)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S
	
	displayName = "$STR_B_Soldier_sniper_base_F0";

	vehicleClass = "MenSniper";
	
	uniformClass = QUOTE(UNIFORM_F_G_U_K);

	role = "Marksman";
	
	weapons[] = 
	{
		QUOTE(SNIPER),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	respawnWeapons[] = 
	{
		QUOTE(SNIPER),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};

	magazines[] = 
	{
		MAG_6(SNIPER_MAG),
		MAG_3(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(SNIPER_MAG),
		MAG_3(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(LIGHT)
	};

	linkedItems[] = 
	{
		QUOTE(VEST_SNIPER),
		QUOTE(BOONIEHAT),
		QUOTE(ITEM_GPS),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_SNIPER),
		QUOTE(BOONIEHAT),
		QUOTE(ITEM_GPS),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO)
	};
	
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};

//--- Spotter
class DOUBLES(PFACTION,Soldier_Spotter): DOUBLES(PFACTION,Soldier_Sniper)
{
	dlc = Q(PREFIX);
    author = AUTHOR;
	SCOPE_S

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_SF_s"};
			speechPlural[] = {"veh_infantry_SF_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
	nameSound = "veh_infantry_SF_s";
	
	displayName = "$STR_B_spotter_F0";

	cost = 250000;

	threat[] = {0.8,0.3,0.3};
	camouflage = 0.6;	

	weapons[] = 
	{
		QUOTE(MARKSMAN_SPECOPS),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	respawnWeapons[] = 
	{
		QUOTE(MARKSMAN_SPECOPS),
		QUOTE(PISTOL),
		"Throw",
		"Put",
		QUOTE(BINO)
	};
	
	magazines[] = 
	{
		MAG_6(MARKSMAN_SPECOPS_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(MARKSMAN_SPECOPS_MAG),
		MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
};