//--- Pilot
class DOUBLES(PFACTION,Pilot): DOUBLES(PFACTION,Pilot_Base)
{
	author = ECSTRING(Data, Author);
	dlc = QUOTE(PREFIX);

	scope = 2;
	
	displayName = "$STR_B_Pilot_F0";
};

//--- Heli Pilot
class DOUBLES(PFACTION,HeliPilot): DOUBLES(PFACTION,HeliPilot_Base)
{
	author = ECSTRING(Data, Author);
	dlc = QUOTE(PREFIX);

	scope = 2;

	displayName = "$STR_B_Helipilot_F0";
};

//--- Heli Crew
class DOUBLES(PFACTION,Helicrew): DOUBLES(PFACTION,HeliPilot)
{
	author = ECSTRING(Data, Author);
	dlc = QUOTE(PREFIX);

	scope = 2;

	role = "Crewman";
	nameSound = "veh_infantry_pilot_s";
	
	displayName = "$STR_B_helicrew_F0";
	
	linkedItems[] = 
	{
		QUOTE(VEST_PILOT),
		QUOTE(HELMET_PILOT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_HELICREW),
		QUOTE(HELMET_HELICREW),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	backpack = QUOTE(PARACHUTE);
};

//--- Crewman
class DOUBLES(PFACTION,Crew): DOUBLES(PFACTION,Soldier_Base_03)
{
	author = ECSTRING(Data, Author);
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 93000;

	role = "Crewman";

	armor = 2;
	armorStructural = 4;
	explosionShielding = 0.4;

	displayName = "$STR_B_crew_F0";
	
	class UniformInfo
	{
		class SlotsInfo
		{
			class Googles: UniformSlotInfo
			{
				slotType = 603;
			};
			class Headgear: UniformSlotInfo
			{
				slotType = 605;
			};
		};
	};

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
		MAG_2(SMOKE_GREEN),
		MAG_1(SMOKE_ORANGE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] = 
	{
		MAG_6(SMG_MAG),
        MAG_2(PISTOL_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(SMOKE_GREEN),
		MAG_1(SMOKE_ORANGE),
		MAG_2(LIGHT)
	};

	linkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HELMET_CREW),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] = 
	{
		QUOTE(VEST_LIGHT),
		QUOTE(HELMET_CREW),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};
