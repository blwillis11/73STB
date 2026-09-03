/*
  ==============================================================================
  config_macros.hpp

  This file contains all macros used in our 73_vests config. Macros reduce
  duplication and make it easier to manage changes across multiple vests.

  Notable macros here:
    - P() and Q() to handle path building and string quoting.
    - VEST_MASS: standard ACE mass for these vests.
    - VEST_MAXLOAD: total carrying capacity for the vest container.
    - VEST_HITPOINT_INFO: sets up armor (hit) values for various body parts.
    - UNSCF_VEST_ITEM_INFO and INVIS_VEST_ITEM_INFO: define vest parameters like
      mass, containerClass, and the hitpoint info.
    - UNSCF_VEST_ALL_VARIANTS: expands into multiple definitions for each vest
      selection set (Rifleman, BREACHER, Grenadier, etc.) with each
      combination of pouches.
  ==============================================================================
*/

//basic path macros
#define P(PATH) \z\73stb\addons\armor\##PATH
    //P((Something) => "\x\@73rd STB Armor Pack v2\addons\73_units\something

// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\x\@73rd STB Armor Pack v2\addons\73_units\something"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s

//Standard vest stuff
#define VEST_MASS 80
#define HELMET_MASS 80
#define VEST_MAXLOAD 200
#define UNI_MAXLOAD Supply100

//--- Hitpoints protection default values

#define LVL1_ARMOR    8
#define LVL1_PASS    0.5

#define LVL2_ARMOR    12
#define LVL2_PASS    0.4

#define LVL3_ARMOR    16
#define LVL3_PASS    0.3

#define LVL4_ARMOR    20
#define LVL4_PASS    0.2

#define LVL5_ARMOR    24
#define LVL5_PASS    0.1

#define VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=LVL5_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=LVL5_ARMOR;                    \
    passThrough=LVL5_PASS;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=LVL5_ARMOR;                    \
    passThrough=LVL5_PASS;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=LVL5_ARMOR;                    \
    passThrough=LVL5_PASS;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=LVL5_PASS;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=LVL4_ARMOR;                    \
    passThrough=LVL4_PASS;             \
  };                             \
};


#define STB73_WEP_NORMAL(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO##
#define STB73_VEH_NORMAL(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_##CAMO##
#define STB73_WEP_NORMAL_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_##CAMO##
#define STB73_VEH_NORMAL_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_##CAMO##
#define STB73_WEP_NORMAL_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_##CAMO##_SlimSleeve
#define STB73_VEH_NORMAL_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_##CAMO##_SlimSleeve
//Kneepads
#define STB73_WEP_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Kneepads_##CAMO##
#define STB73_VEH_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Kneepads_##CAMO##
#define STB73_WEP_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##
#define STB73_VEH_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Kneepads_##CAMO##
#define STB73_WEP_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Kneepads_##CAMO##_SlimSleeve
//Bloused
#define STB73_WEP_BLOUSED(CAMO,SHIRT,SLEEVE)  STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO##
#define STB73_VEH_BLOUSED(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO##
#define STB73_WEP_BLOUSED_FULL(CAMO,SHIRT)  STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##
#define STB73_VEH_BLOUSED_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_##CAMO##
#define STB73_WEP_BLOUSED_SS(CAMO,SHIRT)  STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_##CAMO##_SlimSleeve
//Bloused Kneepads
#define STB73_WEP_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE)  STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Bloused_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT)  STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_KNEEPADS_SS(CAMO,SHIRT)  STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##_SlimSleeve
//Gloves
#define STB73_WEP_GLOVES(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO##
#define STB73_VEH_GLOVES(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO##
#define STB73_WEP_GLOVES_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##
#define STB73_VEH_GLOVES_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_##CAMO##
#define STB73_WEP_GLOVES_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_##CAMO##_SlimSleeve
//Gloves Kneepads
#define STB73_WEP_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##_SlimSleeve
//Bloused_Gloves
#define STB73_WEP_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO##
#define STB73_VEH_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO##
#define STB73_WEP_BLOUSED_GLOVES_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##
#define STB73_VEH_BLOUSED_GLOVES_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##
#define STB73_WEP_BLOUSED_GLOVES_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_GLOVES_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##_SlimSleeve
//Bloused_Gloves Kneepads
#define STB73_WEP_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_GLOVES_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_GLOVES_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##_SlimSleeve
//Unzipped
#define STB73_WEP_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO##
#define STB73_VEH_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO##
#define STB73_WEP_UNZIPPED_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##
#define STB73_VEH_UNZIPPED_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Unzipped_##CAMO##
#define STB73_WEP_UNZIPPED_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##_SlimSleeve
#define STB73_VEH_UNZIPPED_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Unzipped_##CAMO##_SlimSleeve
//Unzipped Kneepads
#define STB73_WEP_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##_SlimSleeve
//Bloused_Unzipped
#define STB73_WEP_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO##
#define STB73_VEH_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO##
#define STB73_WEP_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##
#define STB73_VEH_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##
#define STB73_WEP_BLOUSED_UNZIPPED_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_UNZIPPED_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##_SlimSleeve
//Bloused_Unzipped Kneepads
#define STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve
//Gloves_Unzipped
#define STB73_WEP_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO##
#define STB73_VEH_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO##
#define STB73_WEP_GLOVES_UNZIPPED_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##
#define STB73_VEH_GLOVES_UNZIPPED_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##
#define STB73_WEP_GLOVES_UNZIPPED_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_UNZIPPED_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##_SlimSleeve
//Gloves_Unzipped Kneepads
#define STB73_WEP_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##_SlimSleeve
//GLOVES_BLOUSED_UNZIPPED
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##_SlimSleeve
//GLOVES_BLOUSED_UNZIPPED Kneepads
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##
#define STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve
#define STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT) STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve

#define INF_UNI_Disp(CAMO,PLATOON,ROLE) 

#define STB73_TEXPATH(PIECE,FILE) P(data\##PIECE\##FILE)


#define VEST_ITEM_M43A_INFO                                        \
  class ItemInfo: ItemInfo {                                          \
    vestType="Rebreather";                                            \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_Shoulders_BaseSec_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };

#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;                           \
  
#define NEW_VEST_M43D_NONE(CAMO,PLATOON,DECAL) \
  class STB73_M43D_Light_##CAMO##_##PLATOON## : STB73_M43D_Light_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(None); \
      Collar=Q(None); \
      Shoulders=Q(None);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  };

#define NEW_VEST_M43D_LIGHT(CAMO,PLATOON,DECAL) \
  class STB73_M43D_Light_4_##CAMO##_##PLATOON## : STB73_M43D_Light_4_Base { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_Light_4_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Light_4_Base_TACPAD { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Light_4_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Light_4_Base_UGPS { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_4_1_##CAMO##_##PLATOON## : STB73_M43D_Light_4_1_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_Light_4_1_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Light_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Light_4_1_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Light_4_1_Base_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Light_4_2_##CAMO##_##PLATOON## : STB73_M43D_Light_4_2_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_4_2_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Light_4_2_Base_TACPAD { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Light);\
      Collar=Q(Armored); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Light_4_2_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Light_4_2_Base_UGPS { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Light_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelections[]= \
		{ \
			"camo", \
			"camo1", \
			"camo2", \
			"camo3", \
			"decals", \
			"collarflak", \
			"wristdefaultl", \
			"wristtacpad" \
		}; \
    class ItemInfo: ItemInfo { \
      hiddenSelections[]= \
      { \
        "camo", \
        "camo1", \
        "camo2", \
        "camo3", \
        "decals", \
        "collarflak", \
        "wristdefaultl", \
        "wristtacpad" \
      }; \
    }; \
  };\
  class STB73_M43D_Light_3_##CAMO##_##PLATOON## : STB73_M43D_Light_3_Base { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelections[]= \
		{ \
			"camo", \
			"camo1", \
			"camo2", \
			"camo3", \
			"decals", \
			"collararmored", \
			"collarflak" \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_Light_3_1_##CAMO##_##PLATOON## : STB73_M43D_Light_3_1_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_3_2_##CAMO##_##PLATOON## : STB73_M43D_Light_3_2_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(None);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_2_##CAMO##_##PLATOON## : STB73_M43D_Light_2_Base { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(None);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_2_1_##CAMO##_##PLATOON## : STB73_M43D_Light_2_1_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(None);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_2_2_##CAMO##_##PLATOON## : STB73_M43D_Light_2_2_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(None);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_1_##CAMO##_##PLATOON## : STB73_M43D_Light_1_Base { \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Light_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(None);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_Light_1_1_##CAMO##_##PLATOON## : STB73_M43D_Light_1_1_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(None);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Light_1_2_##CAMO##_##PLATOON## : STB73_M43D_Light_1_2_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Light] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(None);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };

#define NEW_VEST_M43D_PADS(CAMO,PLATOON,DECAL) \
  class STB73_M43D_Pads_4_##CAMO##_##PLATOON## : STB73_M43D_Pads_4_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_Pads_4_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Pads_4_Base_TACPAD { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Pads_4_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Pads_4_Base_UGPS { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_4_1_##CAMO##_##PLATOON## : STB73_M43D_Pads_4_1_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Pads_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Pads_4_1_Base_UGPS { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Pads_4_2_##CAMO##_##PLATOON## : STB73_M43D_Pads_4_2_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_Pads_4_2_Base_TACPAD { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Pads);\
      Collar=Q(Armored); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##_UGPS : STB73_M43D_Pads_4_2_Base_UGPS { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Pads_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_Pads_3_##CAMO##_##PLATOON## : STB73_M43D_Pads_3_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_Pads_3_1_##CAMO##_##PLATOON## : STB73_M43D_Pads_3_1_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_3_2_##CAMO##_##PLATOON## : STB73_M43D_Pads_3_2_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(Pads);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_2_##CAMO##_##PLATOON## : STB73_M43D_Pads_2_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(Pads);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_2_1_##CAMO##_##PLATOON## : STB73_M43D_Pads_2_1_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(Pads);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_2_2_##CAMO##_##PLATOON## : STB73_M43D_Pads_2_2_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(Pads);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_1_##CAMO##_##PLATOON## : STB73_M43D_Pads_1_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(Pads);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_Pads_1_1_##CAMO##_##PLATOON## : STB73_M43D_Pads_1_1_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(Pads);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_Pads_1_2_##CAMO##_##PLATOON## : STB73_M43D_Pads_1_2_Base { \
    displayName = Q([73] M43/D [Pads] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(Pads);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };

#define NEW_VEST_M43D_ODST(CAMO,PLATOON,DECAL) \
  class STB73_M43D_ODST_4_##CAMO##_##PLATOON## : STB73_M43D_ODST_4_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_ODST_4_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_ODST_4_Base_TACPAD { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_ODST_4_##CAMO##_##PLATOON##_UGPS : STB73_M43D_ODST_4_Base_UGPS { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_4_1_##CAMO##_##PLATOON## : STB73_M43D_ODST_4_1_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_ODST_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##); \
		}; \
  }; \
  class STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##_UGPS : STB73_M43D_ODST_4_1_Base_UGPS { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_ODST_4_2_##CAMO##_##PLATOON## : STB73_M43D_ODST_4_2_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_ODST_4_2_Base_TACPAD { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
      Collar=Q(Armored); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##_UGPS : STB73_M43D_ODST_4_2_Base_UGPS { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_4_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_ODST_3_##CAMO##_##PLATOON## : STB73_M43D_ODST_3_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_ODST_3_1_##CAMO##_##PLATOON## : STB73_M43D_ODST_3_1_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_3_2_##CAMO##_##PLATOON## : STB73_M43D_ODST_3_2_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(ODST);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_2_##CAMO##_##PLATOON## : STB73_M43D_ODST_2_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(ODST);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_2_1_##CAMO##_##PLATOON## : STB73_M43D_ODST_2_1_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(ODST);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_2_2_##CAMO##_##PLATOON## : STB73_M43D_ODST_2_2_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(ODST);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_1_##CAMO##_##PLATOON## : STB73_M43D_ODST_1_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(ODST);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_1_1_##CAMO##_##PLATOON## : STB73_M43D_ODST_1_1_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(ODST);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_ODST_1_2_##CAMO##_##PLATOON## : STB73_M43D_ODST_1_2_Base { \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(ODST);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; 

#define NEW_VEST_M43D_BREACHER(CAMO,PLATOON,DECAL) \
  class STB73_M43D_BREACHER_4_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_4_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_BREACHER_4_Base_TACPAD { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##_UGPS : STB73_M43D_BREACHER_4_Base_UGPS { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_4_1_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_BREACHER_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##_UGPS : STB73_M43D_BREACHER_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_4_2_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_BREACHER_4_2_Base_TACPAD { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##_UGPS : STB73_M43D_BREACHER_4_2_Base_UGPS { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_BREACHER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_3_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_3_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_BREACHER_3_1_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_3_1_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_3_2_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_3_2_Base { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_2_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_2_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_2_1_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_2_1_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_2_2_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_2_2_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(BREACHER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_BREACHER_1_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_1_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(BREACHER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_BREACHER_1_1_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_1_1_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(BREACHER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_BREACHER_1_2_##CAMO##_##PLATOON## : STB73_M43D_BREACHER_1_2_Base { \
    displayName = Q([73] M43/D [BREACHER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_BREACHER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(BREACHER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  };

#define NEW_VEST_M43D_SHARPSHOOTER(CAMO,PLATOON,DECAL) \
  class STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_4_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
  }; \
  class STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_SHARPSHOOTER_4_Base_TACPAD { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##_UGPS : STB73_M43D_SHARPSHOOTER_4_Base_UGPS { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_4_1_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_SHARPSHOOTER_4_1_Base_TACPAD { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##_UGPS : STB73_M43D_SHARPSHOOTER_4_1_Base_UGPS { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_4_2_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(Gauntlets);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##_TACPAD : STB73_M43D_SHARPSHOOTER_4_2_Base_TACPAD { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##_UGPS : STB73_M43D_SHARPSHOOTER_4_2_Base_UGPS { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_SHARPSHOOTER_4_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };\
  class STB73_M43D_SHARPSHOOTER_3_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_3_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_SHARPSHOOTER_3_1_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_3_1_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_3_2_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_3_2_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Shin);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_2_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_2_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_2_1_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_2_1_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_2_2_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_2_2_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(Thigh);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_1_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_1_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(None); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
  }; \
  class STB73_M43D_SHARPSHOOTER_1_1_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_1_1_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Flak); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  }; \
  class STB73_M43D_SHARPSHOOTER_1_2_##CAMO##_##PLATOON## : STB73_M43D_SHARPSHOOTER_1_2_Base { \
    displayName = Q([73] M43/D [SHARPSHOOTER] [##PLATOON##] [##CAMO##]); \
    scope=2; \
    scopeArsenal=2; \
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
        decalColor=Q(##DECAL##); \
    }; \
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Belt=Q(Belt); \
      Collar=Q(Armored); \
      Shoulders=Q(SHARPSHOOTER);\
      Legs=Q(None);\
      Arms=Q(None);\
    }; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\##CAMO##\vest_Shoulders_SHARPSHOOTER_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
  };

#define VEST_M43D_CAMOS(PLATOON) \
  NEW_VEST_M43D_NONE(Black,PLATOON,White) \
  NEW_VEST_M43D_LIGHT(Black,PLATOON,White) \
  NEW_VEST_M43D_PADS(Black,PLATOON,White) \
  NEW_VEST_M43D_ODST(Black,PLATOON,White) \
  NEW_VEST_M43D_SHARPSHOOTER(Black,PLATOON,White) \
  NEW_VEST_M43D_BREACHER(Black,PLATOON,White) \
  NEW_VEST_M43D_NONE(Brown,PLATOON,White) \
  NEW_VEST_M43D_LIGHT(Brown,PLATOON,White) \
  NEW_VEST_M43D_PADS(Brown,PLATOON,White) \
  NEW_VEST_M43D_ODST(Brown,PLATOON,White) \
  NEW_VEST_M43D_SHARPSHOOTER(Brown,PLATOON,White) \
  NEW_VEST_M43D_BREACHER(Brown,PLATOON,White) \
  NEW_VEST_M43D_NONE(Olive,PLATOON,White) \
  NEW_VEST_M43D_LIGHT(Olive,PLATOON,White) \
  NEW_VEST_M43D_PADS(Olive,PLATOON,White) \
  NEW_VEST_M43D_ODST(Olive,PLATOON,White) \
  NEW_VEST_M43D_SHARPSHOOTER(Olive,PLATOON,White) \
  NEW_VEST_M43D_BREACHER(Olive,PLATOON,White) \
  NEW_VEST_M43D_NONE(Tan,PLATOON,Black) \
  NEW_VEST_M43D_LIGHT(Tan,PLATOON,Black) \
  NEW_VEST_M43D_PADS(Tan,PLATOON,Black) \
  NEW_VEST_M43D_ODST(Tan,PLATOON,Black) \
  NEW_VEST_M43D_SHARPSHOOTER(Tan,PLATOON,Black) \
  NEW_VEST_M43D_BREACHER(Tan,PLATOON,Black) \
  NEW_VEST_M43D_NONE(White,PLATOON,Black) \
  NEW_VEST_M43D_LIGHT(White,PLATOON,Black) \
  NEW_VEST_M43D_PADS(White,PLATOON,Black) \
  NEW_VEST_M43D_ODST(White,PLATOON,Black) \
  NEW_VEST_M43D_SHARPSHOOTER(White,PLATOON,Black) \
  NEW_VEST_M43D_BREACHER(White,PLATOON,Black) \

#define NEW_VEST_43A(CAMO,ROLE)                          \
  class STB73_M43A_##ROLE##_##CAMO: STB73_M43D_BaseSec_Base {   \
    scope=2; \
    scopeArsenal=2; \
    displayName = QUOTE([73] M43/A CBBAS [ROLE] [CAMO]); \
    maximumLoad = VEST_MAXLOAD; \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_Shoulders_BaseSec_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43A_INFO \
  };

#define VEST_M43A_CAMOS(ROLE) \
  NEW_VEST_43A(Black,ROLE) \
  NEW_VEST_43A(Brown,ROLE) \
  NEW_VEST_43A(Tan,ROLE) \
  NEW_VEST_43A(Olive,ROLE) \
  NEW_VEST_43A(White,ROLE)

#define HELMET_HITPOINT_INFO       \
  class HitpointsProtectionInfo \
  { \
    class Face\
    {\
      hitpointName="HitFace"; \
      armor=12;\
      passThrough=0.5;\
    };\
    class Head\
    {\
      hitpointName="HitHead";\
      armor=18;\
      passThrough=0.5;\
    };\
  };

#define HELMET_ITEM_ECH55D_INFO                                        \
  class ItemInfo: ItemInfo {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
    CBRN_protectionLevel = "1+2"; \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_Black.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(helmets,ECH55D_##CAMO##_helmet_co.paa)),\
      Q(STB73_TEXPATH(Visors,ECH55D_##VISOR##_visor_co.paa)),\
      "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"\
    };\
    mass=HELMET_MASS;                                                   \
    HELMET_HITPOINT_INFO                                                \
  };

#define ECH55D_HELMET(CAMO,PLATOON,VISOR,POSITION,TYPE) \
  class STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR## : STB73_Helmet_ECH55D_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO PLATOON VISOR); \
    ace_hearing_protection = 5; \
    scope=2; \
    scopeArsenal=2; \
    CBRN_protectionLevel="1 + 2"; \
    class XtdGearInfo { \
      Model="STB73_ACE_ECH55D_Helmet"; \
      Camo=Q(##CAMO##); \
      Billet=Q(##PLATOON##); \
      Variant =Q(##POSITION##); \
    };\
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR##", \
			"STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,##PLATOON##\##CAMO##\ECH55D_##TYPE##_helmet_co.paa)), \
      Q(STB73_TEXPATH(helmets,ECH55D_##VISOR##_visor_co.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa)) \
      }; \
  }; \
  class STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR##_DP : STB73_Helmet_ECH55D_DP_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO PLATOON VISOR [DP]); \
    ace_hearing_protection = 5; \
    CBRN_protectionLevel="1 + 2"; \
    scope=1; \
    scopeArsenal=1; \
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR##", \
			"STB73_H_ECH55D_##PLATOON##_##CAMO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,##PLATOON##\##CAMO##\ECH55D_standard_helmet_co.paa)),\
      "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Black\helmet_ECH55D_Visor_CA.paa", \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa)) \
      }; \
  };

#define ECH55D_HELMET_CAMOS(PLATOON,VISOR,POSITION,TYPE) \
  ECH55D_HELMET(Black,PLATOON,VISOR,POSITION,TYPE) \
  ECH55D_HELMET(Brown,PLATOON,VISOR,POSITION,TYPE) \
  ECH55D_HELMET(Tan,PLATOON,VISOR,POSITION,TYPE) \
  ECH55D_HELMET(Olive,PLATOON,VISOR,POSITION,TYPE) \
  ECH55D_HELMET(White,PLATOON,VISOR,POSITION,TYPE)

#define ECH55D_HELMET_VISORS(PLATOON) \
  ECH55D_HELMET_CAMOS(PLATOON,Black,Officer,Standard) \
  ECH55D_HELMET_CAMOS(PLATOON,Red,SORC,SORC) \
  ECH55D_HELMET_CAMOS(PLATOON,Gold,NCO,Standard) \
  ECH55D_HELMET_CAMOS(PLATOON,Silver,Specialist,Standard) \
  ECH55D_HELMET_CAMOS(PLATOON,Blue,Enlisted,Standard)

#define CUS_ECH55D_HELMET(CAMO,WHO,VISOR) \
  class STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR## : STB73_Helmet_ECH55D_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO WHO VISOR); \
    ace_hearing_protection = 5; \
    scope=2; \
    scopeArsenal=2; \
    CBRN_protectionLevel="1 + 2"; \
    class XtdGearInfo { \
      Model="STB73_ACE_CUS_ECH55D_Helmet"; \
      Camo=Q(##CAMO##); \
      Custom=Q(##WHO##); \
    };\
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR##", \
			"STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,custom\##WHO##\##CAMO##\ECH55D_##WHO##_helmet_co.paa)), \
      Q(STB73_TEXPATH(helmets,ECH55D_##VISOR##_visor_co.paa)),\
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa)) \
      }; \
  }; \
  class STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR##_DP : STB73_Helmet_ECH55D_DP_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO WHO VISOR [DP]); \
    ace_hearing_protection = 5; \
    CBRN_protectionLevel="1 + 2"; \
    scope=1; \
    scopeArsenal=1; \
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR##", \
			"STB73_H_ECH55D_##CAMO##_##WHO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,custom\##WHO##\##CAMO##\ECH55D_##WHO##_helmet_co.paa)),\
      "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Black\helmet_ECH55D_Visor_CA.paa", \
      Q(STB73_TEXPATH(vest,##CAMO##\vest_M43_DecalSheet_CA.paa)) \
      }; \
  };

#define ECH55D_CUS_HELMET_CAMOS(WHO,VISOR) \
  CUS_ECH55D_HELMET(Black,WHO,VISOR) \
  CUS_ECH55D_HELMET(Brown,WHO,VISOR) \
  CUS_ECH55D_HELMET(Tan,WHO,VISOR) \
  CUS_ECH55D_HELMET(Olive,WHO,VISOR) \
  CUS_ECH55D_HELMET(White,WHO,VISOR)

#define TCP_WEP_CLASS_NORMAL(SHIRT,SLEEVE)                          \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Base;

#define TCP_WEP_CLASS_BLOUSED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base; 

#define TCP_WEP_CLASS_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base;   

#define TCP_WEP_CLASS_BLOUSED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Kneepads_Base;

#define TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_Base;                  

#define TCP_WEP_CLASS_GLOVES(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base;           

#define TCP_WEP_CLASS_BLOUSED_GLOVES(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base;      

#define TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base;

#define TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_Base;  

#define TCP_WEP_CLASS_GLOVES_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base;                                    

#define TCP_WEP_CLASS_GLOVES_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base;

#define TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base;      

#define TCP_WEP_CLASS_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base;     

#define TCP_WEP_CLASS_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base;

#define TCP_WEP_CLASS_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Kneepads_Base;

#define TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_Base; 


//TCP CLASS DEFINITONS VEH
#define TCP_VEH_CLASS_NORMAL(SHIRT,SLEEVE)                          \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Base;

#define TCP_VEH_CLASS_BLOUSED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base;   

#define TCP_VEH_CLASS_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base;  

#define TCP_VEH_CLASS_BLOUSED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Kneepads_Base;  

#define TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_Base;                   

#define TCP_VEH_CLASS_GLOVES(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base;                                 

#define TCP_VEH_CLASS_BLOUSED_GLOVES(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base;                 

#define TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base; 

#define TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_Base; 

#define TCP_VEH_CLASS_GLOVES_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base; 

#define TCP_VEH_CLASS_GLOVES_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base;

#define TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base;                                    

#define TCP_VEH_CLASS_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base;   

#define TCP_VEH_CLASS_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base;

#define TCP_VEH_CLASS_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Kneepads_Base;                             

#define TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_Base; 


  #define TCP_VEH_CLASS_DEF                                     \
  TCP_VEH_CLASS_NORMAL(TShirt,Untucked)                       \
  TCP_VEH_CLASS_NORMAL(TShirt,Tucked)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,Full)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,Full)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED(TShirt,Tucked)                       \
  TCP_VEH_CLASS_BLOUSED(TShirt,Untucked)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES(TShirt,Tucked)                       \
  TCP_VEH_CLASS_GLOVES(TShirt,Untucked)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,Full)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,Full)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TShirt,Tucked)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TShirt,Untucked)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_KNEEPADS(TShirt,Tucked)                       \
  TCP_VEH_CLASS_KNEEPADS(TShirt,Untucked)                       \
  TCP_VEH_CLASS_KNEEPADS(FieldTop,Full)                       \
  TCP_VEH_CLASS_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_KNEEPADS(TacShirt,Full)                       \
  TCP_VEH_CLASS_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TShirt,Tucked)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TShirt,Untucked)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(FieldTop,Full)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(FieldTop,HalfRoll)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(FieldTop,QuarterRoll)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(FieldTop,SlimSleeve)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TacShirt,Full)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TacShirt,HalfRoll)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TacShirt,QuarterRoll)               \
  TCP_VEH_CLASS_BLOUSED_KNEEPADS(TacShirt,SlimSleeve)               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TShirt,Tucked)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TShirt,Untucked)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,Full)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,HalfRoll)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,QuarterRoll)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,SlimSleeve)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,Full)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,HalfRoll)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,QuarterRoll)              \
  TCP_VEH_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,SlimSleeve)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TShirt,Tucked)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TShirt,Untucked)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(FieldTop,Full)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(FieldTop,HalfRoll)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(FieldTop,QuarterRoll)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(FieldTop,SlimSleeve)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TacShirt,Full)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TacShirt,HalfRoll)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TacShirt,QuarterRoll)              \
  TCP_VEH_CLASS_GLOVES_KNEEPADS(TacShirt,SlimSleeve)              \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,Full)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,Full)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,Full)                                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,HalfRoll)                                   \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,QuarterRoll)                                \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,SlimSleeve)                                 \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,Full)                                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,HalfRoll)                                   \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,QuarterRoll)                                \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,SlimSleeve)                                 \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                         \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                         \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                         \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                         \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                      



  #define TCP_WEP_CLASS_DEF \
  TCP_WEP_CLASS_NORMAL(TShirt,Untucked)                       \
  TCP_WEP_CLASS_NORMAL(TShirt,Tucked)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,Full)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,Full)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED(TShirt,Tucked)                       \
  TCP_WEP_CLASS_BLOUSED(TShirt,Untucked)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES(TShirt,Tucked)                       \
  TCP_WEP_CLASS_GLOVES(TShirt,Untucked)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,Full)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,Full)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TShirt,Tucked)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TShirt,Untucked)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_KNEEPADS(TShirt,Tucked)                       \
  TCP_WEP_CLASS_KNEEPADS(TShirt,Untucked)                       \
  TCP_WEP_CLASS_KNEEPADS(FieldTop,Full)                       \
  TCP_WEP_CLASS_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_KNEEPADS(TacShirt,Full)                       \
  TCP_WEP_CLASS_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TShirt,Tucked)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TShirt,Untucked)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(FieldTop,Full)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(FieldTop,HalfRoll)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(FieldTop,QuarterRoll)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(FieldTop,SlimSleeve)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TacShirt,Full)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TacShirt,HalfRoll)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TacShirt,QuarterRoll)               \
  TCP_WEP_CLASS_BLOUSED_KNEEPADS(TacShirt,SlimSleeve)               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TShirt,Tucked)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TShirt,Untucked)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,Full)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,HalfRoll)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,QuarterRoll)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(FieldTop,SlimSleeve)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,Full)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,HalfRoll)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,QuarterRoll)              \
  TCP_WEP_CLASS_GLOVES_BLOUSED_KNEEPADS(TacShirt,SlimSleeve)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TShirt,Tucked)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TShirt,Untucked)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(FieldTop,Full)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(FieldTop,HalfRoll)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(FieldTop,QuarterRoll)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(FieldTop,SlimSleeve)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TacShirt,Full)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TacShirt,HalfRoll)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TacShirt,QuarterRoll)              \
  TCP_WEP_CLASS_GLOVES_KNEEPADS(TacShirt,SlimSleeve)              \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,Full)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,Full)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,Full)                                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,HalfRoll)                                   \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,QuarterRoll)                                \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,SlimSleeve)                                 \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,Full)                                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,HalfRoll)                                   \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,QuarterRoll)                                \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,SlimSleeve)                                 \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                         \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                         \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                         \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                         \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                        \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,Full)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,Full)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(TacShirt,SlimSleeve)                                              

  //STB73 VEH class setup
#define VEH_CLASS_NORMAL(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Base {\
    author=AUTHOR;\
    scope= 1;\
    scopeArsenal= 1;\
    scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
      QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
      };\
    uniformClass = QUOTE(STB73_WEP_NORMAL(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_NORMAL_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_NORMAL_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Base {\
    author=AUTHOR;\
    scope= 1;\
    scopeArsenal= 1;\
    scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
      QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
      };\
    uniformClass = QUOTE(STB73_WEP_NORMAL_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Kneepads_Base {\
    author=AUTHOR;\
    scope= 1;\
    scopeArsenal= 1;\
    scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_KNEEPADS_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_NORMAL(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_NORMAL(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_NORMAL_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_NORMAL_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  }; \
  class STB73_U_B_##SHIRT##_Full_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT SlimSleeve); \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_##CAMO##);\
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_##CAMO##); \
		}; \
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_NORMAL_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };
#define WEP_CLASS_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  }; \
  class STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT SlimSleeve); \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##);\
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##); \
		}; \
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define VEH_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Bloused_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Bloused_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Bloused); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##); \
		}; \
  };

#define WEP_CLASS_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Bloused_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##); \
		}; \
  };

//Gloves
#define VEH_CLASS_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_GLOVES_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Gloves_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_GLOVES_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_KNEEPADS_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_GLOVES(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Gloves Slim Sleeve); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##); \
		}; \
  };

#define WEP_CLASS_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Gloves Slim Sleeve); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##); \
		}; \
  };

//Bloused Gloves
#define VEH_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_GLOVES_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_GLOVES_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_GLOVES_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Gloves Bloused); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##); \
		}; \
  };

#define WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Gloves Bloused Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_GLOVES_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##); \
		}; \
  };

//Unzipped
#define VEH_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_UNZIPPED_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Unzipped_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_UNZIPPED_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Unzipped_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Unzipped); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##); \
		}; \
  };

#define WEP_CLASS_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Unzipped_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##); \
		}; \
  };

//BLOUSED UNZIPPED
#define VEH_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Unzipped_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##); \
		}; \
  };

#define WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Bloused_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Bloused_Unzipped_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##); \
		}; \
  };

//GLOVES_UNZIPPED
#define VEH_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };
#define VEH_CLASS_GLOVES_UNZIPPED_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };
#define VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
  };\
  class STB73_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_UNZIPPED_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Unzipped_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim sleeve Gloves Unzipped); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##); \
		}; \
  };

#define WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  }; \
  class STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Unzipped_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim sleeve Gloves Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##); \
		}; \
  };

//GLOVES_BLOUSED_UNZIPPED
#define VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED_SS(CAMO,SHIRT));\
  };

#define VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE)                          \
  class STB73_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
  };

#define VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT)                          \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO## : TCP_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
  }; \
  class STB73_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Unzipped_Kneepads_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
    CBRN_protectionLevel="4"; \
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(STB73_WEP_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
  };

#define WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Unzipped_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Gloves Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##); \
		}; \
  };

#define WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE) \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT SLEEVE Gloves Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,SHIRT,SLEEVE));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT) \
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO## : TCP_U_B_CBUU_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_Base{\
    scope=2;\
    scopeArsenal=2;\
    CBRN_protectionLevel="4"; \
    displayName = QUOTE([73] CAMO CBUU SHIRT Full Gloves Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##); \
      class Vest \
      { \
          class SlimSleeve \
          { \
              indirectCompatibility = 2; \
              class compatibleItems \
              { \
                  STB73_M43D_Light_4_Base = 1; \
                  STB73_M43D_Pads_4_Base = 1; \
                  STB73_M43D_ODST_4_Base = 1; \
                  STB73_M43D_BREACHER_4_Base = 1; \
                  STB73_M43D_SHARPSHOOTER_4_Base = 1; \
              }; \
          }; \
      }; \
		}; \
  };\
  class STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Gloves_Bloused_Unzipped_Kneepads_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT Slim Sleeve Gloves Bloused Unzipped Kneepads); \
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##);\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(STB73_VEH_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_SS(CAMO,SHIRT));\
      containerClass=QUOTE(UNI_MAXLOAD); \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
    class TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##); \
		}; \
  };

#define VEH_UNI_CLASS(CAMO) \
  VEH_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_NORMAL_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_NORMAL_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_KNEEPADS(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_KNEEPADS(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_KNEEPADS_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_KNEEPADS_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_GLOVES_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_GLOVES_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_GLOVES_KNEEPADS_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_GLOVES_KNEEPADS_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_GLOVES_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED_GLOVES_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,TacShirt)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_UNZIPPED_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_UNZIPPED_FULL(CAMO,TacShirt)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)                       \
  VEH_CLASS_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)\
  VEH_CLASS_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,FieldTop)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,TacShirt)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_FULL(CAMO,FieldTop)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_FULL(CAMO,TacShirt)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,FieldTop)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,TacShirt)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)
  

//cfgWeapon
#define WEP_UNI_CLASS(CAMO) \
  WEP_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_NORMAL_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_NORMAL_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_KNEEPADS(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_KNEEPADS(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_GLOVES_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_GLOVES_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_GLOVES_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_GLOVES_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_GLOVES_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED_GLOVES_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_GLOVES_UNZIPPED_FULL(CAMO,FieldTop)                                       \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)                                \
  WEP_CLASS_GLOVES_UNZIPPED_FULL(CAMO,TacShirt)                                       \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)                                \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)                                       \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                                \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)                                       \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                                \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,FieldTop)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                        \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_FULL(CAMO,TacShirt)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                        \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,FieldTop)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,FieldTop,QuarterRoll)                        \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS_FULL(CAMO,TacShirt)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED_KNEEPADS(CAMO,TacShirt,QuarterRoll)                        

#define CN_SOUND(base,dur) QUOTE(TRIPLES(ADDON,base,dur))

#define AceWar_UNI_CLASS(CAMO) \
  AceWar_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,Full)                                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)                                   \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)                                \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,SlimSleeve)                                 \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,Full)                                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)                                   \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)                                \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,SlimSleeve)                                 \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                               \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                           \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                        \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                         \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                               \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                           \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                        \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)

  //STB73 AceWar class setup
#define AceWar_CLASS_NORMAL(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves and unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves and Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves, Blouse Pants, and Unzip Shirt"; \
        }; \
      }; \
  };

//Bloused
#define AceWar_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves, loosens pants."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt, loosens pants, take off gloves."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves, unzips Shirt, and loosen pants."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Loosen Pants, take off gloves."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt."; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves and unzip Shirt"; \
        }; \
      }; \
  };

//Gloves
#define AceWar_CLASS_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE####CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves and Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves, Blouse Pants and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants and Unzip Shirt"; \
        }; \
      }; \
  };
//Bloused Gloves
#define AceWar_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves, Loosen Pants, and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Loosen Pants and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Take off Gloves and Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Unzip Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt"; \
        }; \
      }; \
  };

//Unzipped
#define AceWar_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves, Blouse Pants, and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves and Blouse Pants"; \
        }; \
      }; \
  };
//BLOUSED UNZIPPED
#define AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves, Loosen Pants, and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves and Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Loosen Pants and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves"; \
        }; \
      }; \
  };

//GLOVES_UNZIPPED
#define AceWar_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## {   \
          directionalActionName = "Take off Gloves and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves, Blouse Pants, and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Blouse Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
      }; \
  };

//GLOVES_BLOUSED_UNZIPPED
#define AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
    class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##: ace_wardrobe_base \
    { \
      class modifiableTo { \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Loosen Pants"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves and Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class STB73_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Take off Gloves, Loosen Pants, and Zip up Shirt"; \
        }; \
      }; \
  };
