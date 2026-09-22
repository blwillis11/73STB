
class B_Soldier_Base_F;
class DOUBLES(PFACTION,Soldier_Base): B_Soldier_Base_F
{
    scope = 0;
    scopeCurator = 0;
    dlc = Q(PREFIX);
    author = AUTHOR;
    faction = Q(PFACTION);
    camouflage = 0.6;
    nakedUniform = Q(UNIFORM_NAKED);
    uniformClass = Q(UNIFORM);
    identityTypes[] = {
        "LanguageENG_F",
        "Head_NATO",
        Q(FACEWEAR)
    };
    allowedfacewear[] = {};
    allowedHeadgear[] = {};
    allowedHeadgearB[] = {};
    headgearList[] = {};
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
        MAG_2(STB73_MedKit)
    };
    respawnItems[] = {
        MAG_2(STB73_MedKit)
    };
};
class DOUBLES(PFACTION,Aviator): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Aviator Officer";
    editorSubcategory = "STB73_Aviation_EdSubCat";
    uniformClass = Q(UNIFORM_PILOT);
    weapons[] = {
        Q(SMG),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(SMG),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    linkedItems[] = {
        Q(VEST_PILOT),
        Q(HELMET_PILOT),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    respawnLinkedItems[] = {
        Q(VEST_PILOT),
        Q(HELMET_PILOT),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    magazines[] = {
        MAG_2(SMG_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMG_MAG)
    };
};
class DOUBLES(PFACTION,Light): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Unarmed);
    uniformClass = Q(UNIFORM_LIGHT);
    weapons[] = {
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        "Throw", 
        "Put"
    };
    linkedItems[] = {
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    respawnLinkedItems[] = {
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    magazines[] =
    {
        MAG_2(LIGHT)
    };
    respawnMagazines[] =
    {
        MAG_2(LIGHT)
    };
};
class DOUBLES(PFACTION,Grenadier): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Grenadier);
    weapons[] = {
        Q(RIFLE_GL),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(RIFLE_GL),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_10(RIFLE_GL_40),
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_GL_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_10(RIFLE_GL_40),
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_GL_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Rifleman): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Rifleman);
};

class DOUBLES(PFACTION,AT): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Missile Specialist (AT));
    weapons[] = {
        Q(RIFLE),
        Q(PISTOL),
        Q(LAUNCHER),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(RIFLE),
        Q(PISTOL),
        Q(LAUNCHER),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_MAG),
        MAG_1(PISTOL_MAG),
        MAG_1(LAUNCHER_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_MAG),
        MAG_1(PISTOL_MAG),
        MAG_1(LAUNCHER_MAG)
    };
};

class DOUBLES(PFACTION,Autorifleman): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Autorifleman);
    weapons[] = {
        Q(MACHINEGUN),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(MACHINEGUN),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_3(MACHINEGUN_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_3(MACHINEGUN_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Sniper): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Sniper);
    weapons[] = {
        Q(SNIPER),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(SNIPER),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(SNIPER_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(SNIPER_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Marksman): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Marksman);
    weapons[] = {
        Q(MARKSMAN),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(MARKSMAN),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(MARKSMAN_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(MARKSMAN_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Scout): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Scout);
    weapons[] = {
        Q(MARKSMAN_SPECOPS),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(MARKSMAN_SPECOPS),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(MARKSMAN_SPECOPS_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(MARKSMAN_SPECOPS_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Officer): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Officer);
    weapons[] = {
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    linkedItems[] = {
        Q(VEST_LIGHT),
        Q(HAT),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    respawnLinkedItems[] = {
        Q(VEST_LIGHT),
        Q(HAT),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH)
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,Demo): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Explosive Specialist);
    weapons[] = {
        Q(RIFLE),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    respawnWeapons[] = {
        Q(RIFLE),
        Q(PISTOL),
        Q(BINO), 
        "Throw", 
        "Put"
    };
    linkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
    respawnLinkedItems[] = {
        Q(VEST),
        Q(HELMET),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
    magazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_MAG),
        MAG_1(PISTOL_MAG)
    };
    respawnMagazines[] = {
        MAG_2(SMOKE),
        MAG_2(FRAG),
        MAG_6(RIFLE_MAG),
        MAG_1(PISTOL_MAG)
    };
};

class DOUBLES(PFACTION,SORC): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(SORC);
    linkedItems[] = {
        Q(VEST_SORC),
        Q(HELMET_SORC),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
    respawnLinkedItems[] = {
        Q(VEST_SORC),
        Q(HELMET_SORC),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
};

class DOUBLES(PFACTION,Team_Lead): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Team Leader);
    linkedItems[] = {
        Q(VEST),
        Q(HELMET_NCO),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
    respawnLinkedItems[] = {
        Q(VEST),
        Q(HELMET_NCO),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
};

class DOUBLES(PFACTION,Squad_Lead): DOUBLES(PFACTION,Soldier_Base)
{
    scope = 2;
    scopeCurator = 2;
    displayName = Q(Squad Leader);
    linkedItems[] = {
        Q(VEST),
        Q(HELMET_OFFICER),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
    respawnLinkedItems[] = {
        Q(VEST),
        Q(HELMET_OFFICER),
        Q(ITEM_MAP),
        Q(ITEM_RADIO),
        Q(ITEM_COMPASS),
        Q(ITEM_WATCH),
        Q(NVGS)
    };
};