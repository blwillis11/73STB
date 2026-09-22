#define RIFLE                   STB73_MA40
#define RIFLE_MAG               STB73_32Rnd_762x51_Mag

#define RIFLE_GL                STB73_MA40GL
#define RIFLE_GL_MAG            STB73_32Rnd_762x51_Mag
#define RIFLE_GL_40             TCP_1Rnd_40_Shell_HE

#define PISTOL                  STB73_M6C
#define PISTOL_MAG              STB73_12Rnd_127x30_SAP_Mag

#define MARKSMAN                STB73_M392_DMR
#define MARKSMAN_MAG            STB73_15Rnd_762x51_Mag

#define MACHINEGUN              STB73_LMG_M731
#define MACHINEGUN_MAG          STB73_100rnd_762x51_Mag

#define LAUNCHER	            STB73_M41_SSR
#define LAUNCHER_MAG            STB73_Mag_HEAT

#define LAUNCHER_AA	            STB73_M41_SSR
#define LAUNCHER_AA_MAG	        STB73_Mag_HEAA

#define SHOTGUN	                STB73_M45
#define SHOTGUN_MAG				STB73_6Rnd_12Gauge_Pellets

#define SMG						STB73_M7_SMG
#define SMG_MAG					STB73_48Rnd_5x23Caseless_FMJ_Mag

#define RIFLE_SPECOPS			STB73_MA37K
#define RIFLE_SPECOPS_MAG		STB73_32Rnd_762x51_Mag

#define SNIPER					STB73_SRS99AM_Stealth
#define SNIPER_MAG				STB73_M232_145x114x4_APFSDS

#define PISTOL_SPECOPS			STB73_M6G2
#define PISTOL_SPECOPS_MAG		STB73_12Rnd_127x30_52_Mag

#define MARKSMAN_SPECOPS		STB73_BR55
#define MARKSMAN_SPECOPS_MAG	STB73_95x40_36Rnd_Mag

#define BINO					OPTRE_Smartfinder

#define FRAG					TCP_M9R_Frag
#define SMOKE					TCP_M21_Smoke
#define SMOKE_BLUE				TCP_M21_SmokeBlue
#define SMOKE_GREEN				TCP_M21_SmokeGreen
#define SMOKE_ORANGE			TCP_M21_SmokeOrange
#define SMOKE_RED               TCP_M21_SmokeRed
#define IR						B_IR_Grenade
#define LIGHT					Chemlight_green

#define ITEM_MAP				ItemMap
#define ITEM_COMPASS			ItemCompass
#define ITEM_RADIO				TCP_ANPRC55
#define ITEM_WATCH				TCP_Watch
#define ITEM_GPS				TCP_UGPS
#define ITEM_TERMINAL			B_UavTerminal

#define ITEM_IV_250             STB73_PolyHemoglobinIV_250
#define ITEM_IV_500             STB73_PolyHemoglobinIV_500
#define ITEM_IV_1000            STB73_PolyHemoglobinIV_1000
#define ITEM_IV_2000            STB73_PolyHemoglobinIV_2000

#define ITEM_LIGHT_BIOFOAM      STB73_Biofoam_Light
#define ITEM_SORC_BIOFOAM       STB73_Biofoam

#define ITEM_LIGHT_MEDIGEL      STB73_Medigel_Light
#define ITEM_SORC_MEDIGEL       STB73_Medigel

#define ITEM_MEDKIT       		STB73_MedKit

#define ITEM_SPLINT             ACE_splint

#define FACTION					SUBCOMPONENT
#define PFACTION                DOUBLES(PREFIX,FACTION)

//--- Backpack Macros

//--- Ammo Bearer
#define BACKPACK_A(baseClass,faction) class TRIPLES(baseClass,faction,A): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(RIFLE_MAG,10);\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
}

//--- Assistant Autorifleman
#define BACKPACK_AAR(baseClass,faction) class TRIPLES(baseClass,faction,AAR): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(MACHINEGUN_MAG,3);\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
}

//--- Autorifleman
#define BACKPACK_AR(baseClass,faction) class TRIPLES(baseClass,faction,AR): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(MACHINEGUN_MAG,3);\
	};\
	class TransportItems{};\
	class TransportWeapons{};\
}

//--- Medic / Combat Life Saver
#define BACKPACK_MED(baseClass,faction) class TRIPLES(baseClass,faction,MED): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines{};\
	class TransportItems\
	{\
		ITEM_XX(MediKit,1);\
		ITEM_XX(FirstAidKit,10);\
	};\
	class TransportWeapons{};\
}

//--- Engineer
#define BACKPACK_ENG(baseClass,faction) class TRIPLES(baseClass,faction,ENG): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_ORANGE,1);\
		MAG_XX(SMOKE_BLUE,1);\
		MAG_XX(SMOKE_GREEN,1);\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1);\
		ITEM_XX(MineDetector,1);\
		ITEM_XX(DemoCharge_Remote_Mag,2);\
		ITEM_XX(SatchelCharge_Remote_Mag,1);\
	};\
	class TransportWeapons{};\
}

//--- Explosives Specialist
#define BACKPACK_EXP(baseClass,faction) class TRIPLES(baseClass,faction,EXP): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_GREEN,1);\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1);\
		ITEM_XX(MineDetector,1);\
		ITEM_XX(APERSBoundingMine_Range_Mag,3);\
		ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,2);\
		ITEM_XX(DemoCharge_Remote_Mag,1);\
		ITEM_XX(SLAMDirectionalMine_Wire_Mag,2);\
	};\
	class TransportWeapons{};\
}

//--- Grenadier
#define BACKPACK_GRE(baseClass,faction) class TRIPLES(baseClass,faction,GRE): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_GREEN,1);\
		MAG_XX(SMOKE_ORANGE,1);\
		MAG_XX(SMOKE_BLUE,1);\
		MAG_XX(SMOKE,4);\
		MAG_XX(FRAG,4);\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
}

//--- Anti-Air
#define BACKPACK_AA(baseClass,faction) class TRIPLES(baseClass,faction,AA): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(LAUNCHER_AA_MAG,1);\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
}

//--- Anti-Tank
#define BACKPACK_AT(baseClass,faction) class TRIPLES(baseClass,faction,AT): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(LAUNCHER_MAG,1);\
	};\
	class TransportItems {};\
	class TransportWeapons{};\
}

//--- Repair Specialist
#define BACKPACK_REP(baseClass,faction) class TRIPLES(baseClass,faction,REP): baseClass\
{\
	scope = 1;\
	\
	class TransportMagazines\
	{\
		MAG_XX(SMOKE_ORANGE,1);\
		MAG_XX(SMOKE_BLUE,1);\
		MAG_XX(SMOKE_GREEN,1);\
	};\
	class TransportItems\
	{\
		ITEM_XX(ToolKit,1);\
	};\
	class TransportWeapons{};\
}

//--- Full Backpack Macro
#define UNIT_BACKPACKS(baseClass,faction)\
BACKPACK_A(baseClass,faction);\
BACKPACK_AAR(baseClass,faction);\
BACKPACK_AR(baseClass,faction);\
BACKPACK_MED(baseClass,faction);\
BACKPACK_ENG(baseClass,faction);\
BACKPACK_EXP(baseClass,faction);\
BACKPACK_GRE(baseClass,faction);\
BACKPACK_AA(baseClass,faction);\
BACKPACK_AT(baseClass,faction);\
BACKPACK_REP(baseClass,faction)

