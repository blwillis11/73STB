//--- Support
class DOUBLES(PFACTION,Soldier_Support): DOUBLES(PFACTION,Soldier_Support_Base)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	displayName = "$STR_B_Soldier_support_base_F0";
};

//--- Assistant Autorifleman
class DOUBLES(PFACTION,Soldier_AAR): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	displayName = "$STR_O_SOLDIERU_AAR_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AAR));
};

//--- Assistant Machinegunner
class DOUBLES(PFACTION,Soldier_AMG): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 220000;

	displayName = "$STR_B_support_AMG_F0";

	backpack = "B_HMG_01_support_F";
};

//--- Assistant AA
class DOUBLES(PFACTION,Soldier_AAA): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 220000;

	displayName = "$STR_B_soldier_AAA_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AA));
};

//--- Assistant AT
class DOUBLES(PFACTION,Soldier_AAT): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 130000;
	
	displayName = "$STR_B_soldier_AAT_F0";

	backpack = QUOTE(TRIPLES(BACKPACK,SUBCOMPONENT,AA));
};

//--- Gunner (GMG)
class DOUBLES(PFACTION,Soldier_GMG): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 220000;

	displayName = "$STR_B_support_GMG_F0";

	backpack = "B_GMG_01_weapon_F";
};

//--- Gunner (HMG)
class DOUBLES(PFACTION,Soldier_MG): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 220000;
	
	displayName = "$STR_B_support_MG_F0";

	backpack = "B_HMG_01_weapon_F";
};

//--- Gunner (Mortar)
class DOUBLES(PFACTION,Soldier_Mort): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);

	scope = 2;

	cost = 220000;
	
	displayName = "$STR_B_support_Mort_F0";

	backpack = "B_Mortar_01_weapon_F";
};

//--- Assistant Motar
class DOUBLES(PFACTION,Soldier_AMort): DOUBLES(PFACTION,Soldier_Support)
{
	
	dlc = QUOTE(PREFIX);
	scope = 2;

	cost = 220000;

	displayName = "$STR_B_support_AMort_F0";

	backpack = "B_Mortar_01_support_F";
};