// Soldier_Base No Gloves, No Kneepads
// Soldier_Base_02 No Gloves
// Soldier_Base_03 No Kneepads
// Soldier_Base_04 Only Gloves and Kneepads
/////////////////////////////////////////////
// Soldier_Support_Base for Asst Roles
// Pilot_Base for pilot roles


class SoldierEB;
class B_Soldier_Base_F : SoldierEB {
    class EventHandlers;
};

class DOUBLES(PFACTION,Soldier_Base): B_Soldier_Base_F
{
    scope = 0;

    dlc = Q(PREFIX);
    author = AUTHOR;
    faction = Q(PFACTION);
    uniformAccessories[] = {};
    nakedUniform = Q(UNIFORM_NAKED);
    uniformClass = Q(UNIFORM_F);
    role = "Rifleman";
    identityTypes[] = {
        "LanguageENG_F",
        "Head_NATO",
        Q(FACEWEAR)
    };
    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG: UniformSlotInfo
            {
                slotType = 602;
            };
            class Scuba: UniformSlotInfo
            {
                slotType = 604;
            };
            class Headgear: UniformSlotInfo
            {
                slotType = 605;
            };
        };
    };
    weapons[] =
    {
        Q(RIFLE),
        Q(PISTOL),
        "Throw",
        "Put"
    };
    respawnWeapons[] =
    {
        Q(RIFLE),
        Q(PISTOL),
        "Throw",
        "Put"
    };     
    magazines[] =
    {
        MAG_6(RIFLE_MAG),
        MAG_2(PISTOL_MAG),
        MAG_1(FRAG),
        MAG_1(SMOKE),
        MAG_2(LIGHT)
    };
    respawnMagazines[] =
    {
        MAG_6(RIFLE_MAG),
        MAG_2(PISTOL_MAG),
        MAG_1(FRAG),
        MAG_1(SMOKE),
        MAG_2(LIGHT)
    };
    linkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    respawnLinkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    items[] = {
        MAG_2(MEDKIT)
    };
    respawnItems[] = {
        MAG_2(MEDKIT)
    };
    uniformList[] = {
        Q(UNIFORM_F),0.5,
        Q(UNIFORM_F_U),0.5,
        Q(UNIFORM_H),0.5,
        Q(UNIFORM_H_U),0.5,
        Q(UNIFORM_Q),0.5,
        Q(UNIFORM_Q_U),0.5
    };
    vestList[] = {};
    headgearList[] = {};
    facewearList[] = {};
    backpackList[] = {};
    // class EventHandlers: EventHandlers
    // {
    //     postInit="[(_this select 0), 1, nil, nil, nil, nil] call OCI_fnc_RandomizeGear";
    // };
};
class DOUBLES(PFACTION,Soldier_Base_02): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;
    uniformClass = Q(UNIFORM_F);
    uniformList[] = {
        Q(UNIFORM_F),0.5,
        Q(UNIFORM_F_U),0.5,
        Q(UNIFORM_F_K),0.5,
        Q(UNIFORM_F_U_K),0.5,
        Q(UNIFORM_H),0.5,
        Q(UNIFORM_H_U),0.5,
        Q(UNIFORM_H_K),0.5,
        Q(UNIFORM_H_U_K),0.5,
        Q(UNIFORM_Q),0.5,
        Q(UNIFORM_Q_U),0.5,
        Q(UNIFORM_Q_K),0.5,
        Q(UNIFORM_Q_U_K),0.5
    };
};
class DOUBLES(PFACTION,Soldier_Base_03): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;
    uniformClass = Q(UNIFORM_F);
    uniformList[] = {
        Q(UNIFORM_F),0.5,
        Q(UNIFORM_F_U),0.5,
        Q(UNIFORM_F_G),0.5,
        Q(UNIFORM_F_G_U),0.5,
        Q(UNIFORM_H),0.5,
        Q(UNIFORM_H_U),0.5,
        Q(UNIFORM_H_G),0.5,
        Q(UNIFORM_H_G_U),0.5,
        Q(UNIFORM_Q),0.5,
        Q(UNIFORM_Q_U),0.5,
        Q(UNIFORM_Q_G),0.5,
        Q(UNIFORM_Q_G_U),0.5
    };
};
class DOUBLES(PFACTION,Soldier_Base_04): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;
    uniformClass = Q(UNIFORM_F_G_K);
    uniformList[] = {
        Q(UNIFORM_F_G_K),0.5,
        Q(UNIFORM_F_G_U_K),0.5,
        Q(UNIFORM_H_G_K),0.5,
        Q(UNIFORM_H_G_U_K),0.5,
        Q(UNIFORM_Q_G_K),0.5,
        Q(UNIFORM_Q_G_U_K),0.5
    };
};

class DOUBLES(PFACTION,Soldier_Support_Base): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 0;

    dlc = Q(PREFIX);
    author = AUTHOR;
    role = "Assistant";
	vehicleClass = "MenSupport";
    uniformClass = Q(UNIFORM_F_G_K);
    uniformList[] = {
        Q(UNIFORM_F_G_K),0.5,
        Q(UNIFORM_F_G_U_K),0.5,
        Q(UNIFORM_H_G_K),0.5,
        Q(UNIFORM_H_G_U_K),0.5,
        Q(UNIFORM_Q_G_K),0.5,
        Q(UNIFORM_Q_G_U_K),0.5
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
};

class DOUBLES(PFACTION,Pilot_Base): DOUBLES(PFACTION,Soldier_Base)
{
	scope = 0;

    dlc = Q(PREFIX);
    author = AUTHOR;
	role = "Crewman";
	uniformClass = QUOTE(UNIFORM_PILOT);
	backpack = QUOTE(PARACHUTE);
    armor = 2;
	armorStructural = 2;
	explosionShielding = 0.2;
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
		QUOTE(VEST_PILOT),
		QUOTE(HELMET_PILOT),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
};

class DOUBLES(PFACTION,Recon_Base): DOUBLES(PFACTION,Soldier_Base)
{
	scope = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;

	vehicleClass = "MenRecon";

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

	camouflage = 0.6;
	detectSkill = 18;
	
	uniformClass = QUOTE(UNIFORM_F_G_U_K);

	linkedItems[] =
	{
		QUOTE(VEST),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};
	respawnLinkedItems[] =
	{
		QUOTE(VEST),
		QUOTE(HELMET),
		QUOTE(ITEM_MAP),
		QUOTE(ITEM_COMPASS),
		QUOTE(ITEM_WATCH),
		QUOTE(ITEM_RADIO),
		QUOTE(ITEM_GPS)
	};

	weapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	respawnWeapons[] =
	{
		QUOTE(RIFLE_SPECOPS),
		"Throw",
		"Put",
        QUOTE(BINO)
	};
	magazines[] =
	{
		MAG_8(RIFLE_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
	respawnMagazines[] =
	{
		MAG_8(RIFLE_SPECOPS_MAG),
		MAG_1(FRAG),
		MAG_1(SMOKE),
		MAG_2(LIGHT)
	};
};