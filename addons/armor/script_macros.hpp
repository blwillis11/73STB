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
      selection set (Rifleman, Breacher, Grenadier, etc.) with each
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
#define UNI_MAXLOAD 100

#define VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=20;                    \
    passThrough=0.3;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=25;                    \
    passThrough=0.2;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=35;                    \
    passThrough=0.1;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=30;                    \
    passThrough=0.2;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=30;                    \
    passThrough=0.2;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=0.2;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=20;                    \
    passThrough=0.4;             \
  };                             \
  class Hands {                  \
    hitpointName="HitHands";     \
    armor=20;                    \
    passThrough=0.05;             \
  };                             \
  class Pelvis {                 \
    hitpointName="HitPelvis";    \
    armor=30;                    \
    passThrough=0.2;             \
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
    containerClass="STB73_vest_supply"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_Shoulders_BaseSec_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
  };

#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;                           \

#define VEST_ITEM_M43D_ODST_INFO  \
  class ItemInfo: ItemInfo {     \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d"; \
    vestType="Rebreather";                                            \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO \
  };

#define VEST_ITEM_M43D_BREACHER_INFO  \
  class ItemInfo: ItemInfo {     \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Breacher_4.p3d"; \
    vestType="Rebreather";                                            \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO \
  };

#define VEST_ITEM_M43D_SHARPSHOOTER_INFO  \
  class ItemInfo: ItemInfo {     \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Sharpshooter_4.p3d"; \
    vestType="Rebreather";                                            \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO \
  };

#define VEST_ITEM_M43D_Light_INFO(TF,CAMO)                                        \
  class ItemInfo: ItemInfo {                                          \
    hiddenSelectionsTextures[]=\
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light.p3d"; \
    vestType="Rebreather";                                            \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                               \
  };

#define NEW_VEST_M43D_Light(CAMO,PLATOON)                          \
    class STB73_M43D_Light_##CAMO##_##PLATOON##: TCP_V_M43D_Light_Black {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([73] M43/D CBBAS [Light] [##CAMO##] [##PLATOON##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Light);\
      Collar=Q(None); \
    }; \
      VEST_ITEM_M43D_Light_INFO(TF,CAMO) \
    };\
    

#define NEW_VEST_M43D_ODST(CAMO,PLATOON) \
  class STB73_M43D_ODST_##CAMO##_##PLATOON## : TCP_V_M43D_ODST_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
      Collar=Q(None); \
    }; \
    VEST_ITEM_M43D_ODST_INFO \
  }; \
  class STB73_M43D_ODST_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_ODST_4_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_ODST_INFO \
  };\
  class STB73_M43D_ODST_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_ODST_4_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_ODST_INFO \
  }; \
  class STB73_M43D_ODST_1_##CAMO##_##PLATOON## : TCP_V_M43D_ODST_4_1_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
      Collar=Q(Flak); \
    }; \
    VEST_ITEM_M43D_ODST_INFO \
  }; \
  class STB73_M43D_ODST_1_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_ODST_4_1_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_1_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_ODST_INFO \
  };\
  class STB73_M43D_ODST_1_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_ODST_4_1_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_1_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_ODST_INFO \
  };\
  class STB73_M43D_ODST_2_##CAMO##_##PLATOON## : TCP_V_M43D_ODST_4_2_Black { \
    scope=2; \
    scopeArsenal=2; \
    maximumLoad = VEST_MAXLOAD; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
      Collar=Q(Armored); \
    }; \
    VEST_ITEM_M43D_ODST_INFO \
  }; \
  class STB73_M43D_ODST_2_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_ODST_4_2_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
      Collar=Q(Armored); \
    }; \
    VEST_ITEM_M43D_ODST_INFO \
  };\
  class STB73_M43D_ODST_2_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_ODST_4_2_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [ODST] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_ODST_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_ODST_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_ODST_INFO \
  };

#define NEW_VEST_M43D_BREACHER(CAMO,PLATOON) \
  class STB73_M43D_Breacher_##CAMO##_##PLATOON## : TCP_V_M43D_Breacher_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Breacher);\
      Collar=Q(None); \
    }; \
    VEST_ITEM_M43D_BREACHER_INFO \
  };\
  class STB73_M43D_Breacher_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Breacher_4_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  };\
  class STB73_M43D_Breacher_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Breacher_4_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  }; \
  class STB73_M43D_Breacher_1_##CAMO##_##PLATOON## : TCP_V_M43D_Breacher_4_1_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Breacher);\
      Collar=Q(Flak); \
    }; \
    VEST_ITEM_M43D_BREACHER_INFO \
  }; \
  class STB73_M43D_Breacher_1_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Breacher_4_1_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_1_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  };\
  class STB73_M43D_Breacher_1_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Breacher_4_1_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_1_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_1_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  };\
  class STB73_M43D_Breacher_2_##CAMO##_##PLATOON## : TCP_V_M43D_Breacher_4_2_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Breacher);\
      Collar=Q(Armored); \
    }; \
    VEST_ITEM_M43D_BREACHER_INFO \
  }; \
  class STB73_M43D_Breacher_2_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Breacher_4_2_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  };\
  class STB73_M43D_Breacher_2_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Breacher_4_2_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Breacher] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Breacher_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Breacher_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Breacher_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_BREACHER_INFO \
  };

#define NEW_VEST_M43D_SHARPSHOOTER(CAMO,PLATOON) \
  class STB73_M43D_Sharpshooter_##CAMO##_##PLATOON## : TCP_V_M43D_Sharpshooter_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Sharpshooter);\
      Collar=Q(None); \
    }; \
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  }; \
  class STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Sharpshooter_4_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  };\
  class STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Sharpshooter_4_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  }; \
  class STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON## : TCP_V_M43D_Sharpshooter_4_1_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Sharpshooter);\
      Collar=Q(Flak); \
    }; \
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  }; \
  class STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Sharpshooter_4_1_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  };\
  class STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Sharpshooter_4_1_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##);\
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_1_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  };\
  class STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON## : TCP_V_M43D_Sharpshooter_4_2_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##); \
		}; \
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="STB73_ACE_M43D_Vest"; \
      Billet=Q(##PLATOON##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Sharpshooter);\
      Collar=Q(Armored); \
    }; \
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  }; \
  class STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##_TACPAD : TCP_V_M43D_Sharpshooter_4_2_Black_TACPAD { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
		{ \
			decalColor="white"; \
		}; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  };\
  class STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##_UGPS : TCP_V_M43D_Sharpshooter_4_2_Black_UGPS { \
    scope=1; \
    displayName = Q([73] M43/D [Sharpshooter] [##PLATOON##] [##CAMO##]); \
    author=AUTHOR; \
    maximumLoad = VEST_MAXLOAD; \
    ace_arsenal_uniqueBase = QUOTE(STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##);\
    class TCP_uniformDecals: TCP_uniformDecals \
    { \
      decalColor="white"; \
    }; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=Q(STB73_M43D_Sharpshooter_2_##CAMO##_##PLATOON##); \
		}; \
    hiddenSelectionsTextures[]= \
    { \
      Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,##PLATOON##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43D_ODST_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
      Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
    };\
    VEST_ITEM_M43D_SHARPSHOOTER_INFO \
  };


#define NEW_VEST_43A(ROLE)                          \
    class STB73_M43A_##ROLE##_Black: TCP_V_M43A_BaseSec_3_Black {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([73] M43/A CBBAS [ROLE]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]=\
      { \
        Q(STB73_TEXPATH(vest,vest_M43A_01_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_Shoulders_BaseSec_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_M43A_02_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_M43A_03_CO.paa)),\
        Q(STB73_TEXPATH(vest,vest_M43_DecalSheet_CA.paa))\
      };\
      VEST_ITEM_M43A_INFO \
    };

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

#define ECH55D_HELMET(CAMO,VISOR,POSITION) \
  class STB73_H_ECH55D_##CAMO##_##VISOR## : STB73_Helmet_ECH55D_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO VISOR); \
    ace_hearing_protection = 5; \
    scope=2; \
    scopeArsenal=2; \
    CBRN_protectionLevel="1 + 2"; \
    class XtdGearInfo { \
      Model="STB73_ACE_ECH55D_Helmet"; \
      Billet=Q(##CAMO##); \
      Variant =Q(##POSITION##); \
    };\
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##CAMO##_##VISOR##", \
			"STB73_H_ECH55D_##CAMO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,##CAMO##\ECH55D_standard_helmet_co.paa)), \
      Q(STB73_TEXPATH(helmets,ECH55D_##VISOR##_visor_co.paa)),\
      "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" \
      }; \
  }; \
  class STB73_H_ECH55D_##CAMO##_##VISOR##_DP : STB73_Helmet_ECH55D_DP_Base { \
    displayName = QUOTE([73] ECH55D Helmet CAMO VISOR [DP]); \
    ace_hearing_protection = 5; \
    CBRN_protectionLevel="1 + 2"; \
    scope=1; \
    scopeArsenal=1; \
    TCP_visrClasses[]= \
		{ \
			"STB73_H_ECH55D_##CAMO##_##VISOR##", \
			"STB73_H_ECH55D_##CAMO##_##VISOR##_DP" \
		}; \
    hiddenSelectionsTextures[] = \
    { \
      Q(STB73_TEXPATH(helmets,##CAMO##\ECH55D_standard_helmet_co.paa)),\
      "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\Black\helmet_ECH55D_Visor_CA.paa", \
      "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" \
      }; \
  };

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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##); \
		}; \
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  }; \
  class STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##_SlimSleeve : TCP_U_B_CBUU_##SHIRT##_SlimSleeve_Base{\
    scope=1;\
    displayName = QUOTE([73] CAMO CBUU SHIRT SlimSleeve); \
    ace_arsenal_uniqueBase = QUOTE(STB73_U_B_##SHIRT##_Full_Kneepads_##CAMO##);\
    ACE_GForceCoef=0.4;\
    CBRN_protectionLevel="4"; \
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Unzipped_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Bloused_Unzipped_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Unzipped_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
		{ \
			baseEquipment=QUOTE(STB73_U_B_##SHIRT##_Full_Gloves_Bloused_Unzipped_Kneepads_##CAMO##); \
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
    class TCP_equipmentTypes: TCP_equipmentTypes \
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

#define TCP_NO_BACKPACK(ROLE) \
  class TCP_B_##ROLE##_Black;\
  class TCP_B_##ROLE##_Black_M43A1;\
  class TCP_B_##ROLE##_Black_M43A;\
  class TCP_B_##ROLE##_Black_M43D1;\
  class TCP_B_##ROLE##_Black_M43D;

#define TCP_NO_BACKPACK_M43(ROLE) \
  class TCP_B_##ROLE##_Black;\
  class TCP_B_##ROLE##_Black_M43;\

#define TCP_BUTTPACK(ROLE,BUTT) \
  class TCP_B_##ROLE##_##BUTT##_Black;\
  class TCP_B_##ROLE##_##BUTT##_Black_M43A1;\
  class TCP_B_##ROLE##_##BUTT##_Black_M43A;\
  class TCP_B_##ROLE##_##BUTT##_Black_M43D1;\
  class TCP_B_##ROLE##_##BUTT##_Black_M43D;

#define TCP_BUTTPACK_M43(ROLE,BUTT) \
  class TCP_B_##ROLE##_##BUTT##_Black;\
  class TCP_B_##ROLE##_##BUTT##_Black_M43;\

#define TCP_BACKPACK(ROLE,BACK) \
  class TCP_B_##ROLE##_##BACK##_Black;\
  class TCP_B_##ROLE##_##BACK##_Black_M43A1;\
  class TCP_B_##ROLE##_##BACK##_Black_M43A;\
  class TCP_B_##ROLE##_##BACK##_Black_M43D1;\
  class TCP_B_##ROLE##_##BACK##_Black_M43D;

#define TCP_BACKPACK_BUTTPACK(ROLE,BACK,BUTT) \
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black;\
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A1;\
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A;\
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D1;\
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D;

#define TCP_BACKPACK_BUTTPACK_M43(ROLE,BACK,BUTT) \
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black;\
  class TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43;\

#define TCP_BACKPACK_MOS_BUTTPACK(ROLE,BACK,MOS,BUTT) \
  class TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A1;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D1;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D;

#define TCP_BACKPACK_MOS(ROLE,BACK,MOS) \
  class TCP_B_##ROLE##_##BACK##_##MOS##_Black;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A1;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D1;\
  class TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D;

#define TCP_BACKPACK_ROLE(ROLE) \
  TCP_NO_BACKPACK(##ROLE##)\
  TCP_BUTTPACK(##ROLE##,M2_Buttpack)\
  TCP_BUTTPACK(##ROLE##,M35_Buttpack)\
  TCP_BUTTPACK(##ROLE##,EM39_Buttpack)\
  TCP_BACKPACK(##ROLE##,EM39_MLBE_Hardcase)\
  TCP_BACKPACK(##ROLE##,M43_Medium_Rucksack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,M2_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,M35_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,EM39_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,Roll)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,M43_Medium_Rucksack,M2_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,M43_Medium_Rucksack,M35_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,M43_Medium_Rucksack,EM39_Buttpack)\
  TCP_BACKPACK_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Roll)\
  TCP_BACKPACK_MOS(##ROLE##,EM39_MLBE_Hardcase,Patrol)\
  TCP_BACKPACK_MOS(##ROLE##,M43_Medium_Rucksack,Patrol)\
  TCP_BACKPACK_MOS(##ROLE##,M43_Medium_Rucksack,Assault)\
  TCP_BACKPACK_MOS(##ROLE##,M43_Medium_Rucksack,Engineer)\
  TCP_BACKPACK_MOS(##ROLE##,M43_Medium_Rucksack,Field)\
  TCP_BACKPACK_MOS(##ROLE##,M43_Medium_Rucksack,Medical)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,Patrol,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,Patrol,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,Patrol,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,EM39_MLBE_Hardcase,Patrol,Roll)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Patrol,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Patrol,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Patrol,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Patrol,Roll)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Assault,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Assault,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Assault,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Assault,Roll)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Engineer,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Engineer,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Engineer,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Engineer,Roll)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Field,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Field,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Field,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Field,Roll)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Medical,M2_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Medical,M35_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Medical,EM39_Buttpack)\
  TCP_BACKPACK_MOS_BUTTPACK(##ROLE##,M43_Medium_Rucksack,Medical,Roll)


#define STB73_BUTTPACK_ONLY(BUTT,CAMO,MAXLOAD) \
  class STB73_B_##BUTT##_##CAMO## : TCP_B_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BUTT##); \
      camo=Q(##CAMO##); \
    }; \
  };\
  class STB73_B_##BUTT##_##CAMO##_M43A1 : TCP_B_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BUTT##_##CAMO##_M43A : TCP_B_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BUTT##_##CAMO##_M43D1 : TCP_B_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BUTT##_##CAMO##_M43D : TCP_B_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };
#define STB73_M43_BACKPACK_ONLY(BACK,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##CAMO## : TCP_B_##BACK##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      camo=Q(##CAMO##); \
      roll=Q(None); \
      pouch_level=Q(None); \
    }; \
  };\
  class STB73_B_##BACK##_##CAMO##_M43 : TCP_B_##BACK##_Black_M43\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
  };
#define STB73_M43_BACKPACK_MOS_ONLY(BACK,MOS,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##MOS##_##CAMO## : TCP_B_##BACK##_##MOS##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      camo=Q(##CAMO##); \
      roll=Q(None); \
      pouch_level=Q(##MOS##); \
    }; \
  };\
  class STB73_B_##BACK##_##MOS##_##CAMO##_M43 : TCP_B_##BACK##_##MOS##_Black_M43\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_M43_BACKPACK_MOS_ROLL_ONLY(BACK,MOS,ROLL,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO## : TCP_B_##BACK##_##MOS##_##ROLL##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      camo=Q(##CAMO##); \
      roll=Q(##ROLL##); \
      pouch_level=Q(##MOS##); \
    }; \
  };\
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##_M43 : TCP_B_##BACK##_##MOS##_##ROLL##_Black_M43\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_M43_BACKPACK_ROLL_ONLY(BACK,ROLL,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##ROLL##_##CAMO## : TCP_B_##BACK##_##ROLL##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      camo=Q(##CAMO##); \
      roll=Q(##ROLL##); \
      pouch_level=Q(None); \
    }; \
  };\
  class STB73_B_##BACK##_##ROLL##_##CAMO##_M43 : TCP_B_##BACK##_##ROLL##_Black_M43\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_EM39_BACKPACK_ONLY(BACK,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##CAMO## : TCP_B_##BACK##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      roll=Q(None); \
      pouch_level=Q(None); \
    }; \
  };\
  class STB73_B_##BACK##_##CAMO##_M43A1 : TCP_B_##BACK##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##CAMO##_M43A : TCP_B_##BACK##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##CAMO##_M43D1 : TCP_B_##BACK##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##CAMO##_M43D : TCP_B_##BACK##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa)\
		};\
  };
#define STB73_EM39_BACKPACK_MOS_ONLY(BACK,MOS,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##MOS##_##CAMO## : TCP_B_##BACK##_##MOS##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      roll=Q(None); \
      pouch_level=Q(##MOS##); \
    }; \
  };\
  class STB73_B_##BACK##_##MOS##_##CAMO##_M43A1 : TCP_B_##BACK##_##MOS##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##CAMO##_M43A : TCP_B_##BACK##_##MOS##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##CAMO##_M43D1 : TCP_B_##BACK##_##MOS##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##CAMO##_M43D : TCP_B_##BACK##_##MOS##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };
#define STB73_EM39_BACKPACK_MOS_ROLL_ONLY(BACK,MOS,ROLL,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO## : TCP_B_##BACK##_##MOS##_##ROLL##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      roll=Q(##ROLL##); \
      pouch_level=Q(##MOS##); \
    }; \
  };\
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##_M43A1 : TCP_B_##BACK##_##MOS##_##ROLL##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##_M43A : TCP_B_##BACK##_##MOS##_##ROLL##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##_M43D1 : TCP_B_##BACK##_##MOS##_##ROLL##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##_M43D : TCP_B_##BACK##_##MOS##_##ROLL##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##MOS##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };
#define STB73_EM39_BACKPACK_ROLL_ONLY(BACK,ROLL,CAMO,MAXLOAD) \
  class STB73_B_##BACK##_##ROLL##_##CAMO## : TCP_B_##BACK##_##ROLL##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##BACK##); \
      roll=Q(##ROLL##); \
      pouch_level=Q(None); \
    }; \
  };\
  class STB73_B_##BACK##_##ROLL##_##CAMO##_M43A1 : TCP_B_##BACK##_##ROLL##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##ROLL##_##CAMO##_M43A : TCP_B_##BACK##_##ROLL##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##ROLL##_##CAMO##_M43D1 : TCP_B_##BACK##_##ROLL##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##BACK##_##ROLL##_##CAMO##_M43D : TCP_B_##BACK##_##ROLL##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##BACK##_##ROLL##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
      QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };
#define STB73_NO_BACKPACK_2(ROLE,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##CAMO## : TCP_B_##ROLE##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack="None"; \
      backpackPouchLevel="None"; \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##CAMO##_M43A1 : TCP_B_##ROLE##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43A : TCP_B_##ROLE##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43D1 : TCP_B_##ROLE##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43D : TCP_B_##ROLE##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };

#define STB73_NO_BACKPACK_1(ROLE,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##CAMO## : TCP_B_##ROLE##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack="None"; \
      backpackPouchLevel="None"; \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##CAMO##_M43A1 : TCP_B_##ROLE##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43A : TCP_B_##ROLE##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43D1 : TCP_B_##ROLE##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##CAMO##_M43D : TCP_B_##ROLE##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  }; \

#define STB73_BUTTPACK_1(ROLE,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack="None"; \
      backpackPouchLevel="None"; \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_BUTTPACK_2(ROLE,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack="None"; \
      backpackPouchLevel="None"; \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  }; \


#define STB73_BACKPACK_2(ROLE,BACK,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##CAMO## : TCP_B_##ROLE##_##BACK##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel="None"; \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_BACKPACK_3(ROLE,BACK,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##CAMO## : TCP_B_##ROLE##_##BACK##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel="None"; \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };

#define STB73_BACKPACK_BUTTPACK_2(ROLE,BACK,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BACK##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel="None"; \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_BACKPACK_BUTTPACK_3(ROLE,BACK,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BACK##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
			QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel="None"; \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  }; \

#define STB73_BACKPACK_MOS_BUTTPACK_2(ROLE,BACK,MOS,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel=Q(##MOS##); \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_BACKPACK_MOS_BUTTPACK_3(ROLE,BACK,MOS,BUTT,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO## : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel=Q(##MOS##); \
      buttpack=Q(##BUTT##); \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##MOS##_##BUTT##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##BUTT##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
			QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  }; \

#define STB73_BACKPACK_MOS_2(ROLE,BACK,MOS,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO## : TCP_B_##ROLE##_##BACK##_##MOS##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel=Q(##MOS##); \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa)\
		};\
  };

#define STB73_BACKPACK_MOS_3(ROLE,BACK,MOS,CAMO,MAXLOAD) \
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO## : TCP_B_##ROLE##_##BACK##_##MOS##_Black\
  {\
    maximumLoad = MAXLOAD;\
    scope=2;\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
    class XtdGearInfo { \
      model=Q(STB73_B_##ROLE##); \
      camo=Q(##CAMO##); \
      backpack=Q(##BACK##); \
      backpackPouchLevel=Q(##MOS##); \
      buttpack="None"; \
    }; \
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43A1 : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43A : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43A\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43D1 : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D1\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  };\
  class STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##_M43D : TCP_B_##ROLE##_##BACK##_##MOS##_Black_M43D\
  {\
    maximumLoad = MAXLOAD;\
    ace_arsenal_uniqueBase = QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##);\
    class TCP_equipmentTypes:TCP_equipmentTypes \
		{ \
      baseEquipment=QUOTE(STB73_B_##ROLE##_##BACK##_##MOS##_##CAMO##); \
    }; \
    hiddenSelectionsTextures[]= \
		{\
      QP(data\pouches\##CAMO##\##BACK##_CO.paa),\
			QP(data\pouches\##CAMO##\Pouches_CO.paa),\
      QP(data\vest\vest_M43A_03_CO.paa)\
		};\
  }; \


#define STB73_BACKPACK_ROLE_LOW(ROLE,CAMO) \
  STB73_NO_BACKPACK_1(##ROLE##,##CAMO##,150)\
  STB73_BUTTPACK_1(##ROLE##,M2_Buttpack,##CAMO##,150)\
  STB73_BUTTPACK_1(##ROLE##,M35_Buttpack,##CAMO##,150)\
  STB73_BUTTPACK_1(##ROLE##,EM39_Buttpack,##CAMO##,150)\
  STB73_BACKPACK_2(##ROLE##,M43_Medium_Rucksack,##CAMO##,300)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,M2_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,M35_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,EM39_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Roll,##CAMO##,350)\
  STB73_BACKPACK_MOS_2(##ROLE##,M43_Medium_Rucksack,Patrol,##CAMO##,350)\
  STB73_BACKPACK_MOS_2(##ROLE##,M43_Medium_Rucksack,Assault,##CAMO##,350)\
  STB73_BACKPACK_MOS_2(##ROLE##,M43_Medium_Rucksack,Engineer,##CAMO##,350)\
  STB73_BACKPACK_MOS_2(##ROLE##,M43_Medium_Rucksack,Field,##CAMO##,350)\
  STB73_BACKPACK_MOS_2(##ROLE##,M43_Medium_Rucksack,Medical,##CAMO##,350)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Patrol,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Patrol,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Patrol,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Patrol,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Assault,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Assault,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Assault,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Assault,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Engineer,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Engineer,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Engineer,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Engineer,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Field,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Field,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Field,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Field,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Medical,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Medical,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Medical,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,M43_Medium_Rucksack,Medical,Roll,##CAMO##,400)

#define STB73_BACKPACK_ROLE_HIGH(ROLE,CAMO) \
  STB73_NO_BACKPACK_2(##ROLE##,##CAMO##,150)\
  STB73_BUTTPACK_2(##ROLE##,M2_Buttpack,##CAMO##,150)\
  STB73_BUTTPACK_2(##ROLE##,M35_Buttpack,##CAMO##,150)\
  STB73_BUTTPACK_2(##ROLE##,EM39_Buttpack,##CAMO##,150)\
  STB73_BACKPACK_2(##ROLE##,M43_Medium_Rucksack,##CAMO##,300)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,M2_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,M35_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,EM39_Buttpack,##CAMO##,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Roll,##CAMO##,350)\
  STB73_BACKPACK_MOS_3(##ROLE##,M43_Medium_Rucksack,Patrol,##CAMO##,350)\
  STB73_BACKPACK_MOS_3(##ROLE##,M43_Medium_Rucksack,Assault,##CAMO##,350)\
  STB73_BACKPACK_MOS_3(##ROLE##,M43_Medium_Rucksack,Engineer,##CAMO##,350)\
  STB73_BACKPACK_MOS_3(##ROLE##,M43_Medium_Rucksack,Field,##CAMO##,350)\
  STB73_BACKPACK_MOS_3(##ROLE##,M43_Medium_Rucksack,Medical,##CAMO##,350)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Patrol,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Patrol,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Patrol,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Patrol,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Assault,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Assault,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Assault,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Assault,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Engineer,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Engineer,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Engineer,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Engineer,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Field,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Field,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Field,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Field,Roll,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Medical,M2_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Medical,M35_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Medical,EM39_Buttpack,##CAMO##,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,M43_Medium_Rucksack,Medical,Roll,##CAMO##,400)

#define STB73_HARDCASE_ROLE_LOW(ROLE) \
  STB73_BACKPACK_2(##ROLE##,EM39_MLBE_Hardcase,Black,300)\
  STB73_BACKPACK_MOS_2(##ROLE##,EM39_MLBE_Hardcase,Patrol,Black,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,M2_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,M35_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,EM39_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,Roll,Black,350)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,Patrol,M2_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,Patrol,M35_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,Patrol,EM39_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_2(##ROLE##,EM39_MLBE_Hardcase,Patrol,Roll,Black,400)

#define STB73_HARDCASE_ROLE_HIGH(ROLE) \
  STB73_BACKPACK_3(##ROLE##,EM39_MLBE_Hardcase,Black,300)\
  STB73_BACKPACK_MOS_3(##ROLE##,EM39_MLBE_Hardcase,Patrol,Black,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,M2_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,M35_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,EM39_Buttpack,Black,350)\
  STB73_BACKPACK_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,Roll,Black,350)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,Patrol,M2_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,Patrol,M35_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,Patrol,EM39_Buttpack,Black,400)\
  STB73_BACKPACK_MOS_BUTTPACK_3(##ROLE##,EM39_MLBE_Hardcase,Patrol,Roll,Black,400)

#define STB73_M43_RUCKSACK_VARS \
  STB73_M43_BACKPACK_ONLY(M43_Medium_Rucksack,Black,200) \
  STB73_M43_BACKPACK_ONLY(M43_Medium_Rucksack,Olive,200) \
  STB73_M43_BACKPACK_ONLY(M43_Medium_Rucksack,Tan,200) \
  STB73_M43_BACKPACK_ONLY(M43_Medium_Rucksack,White,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Patrol,Black,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Patrol,Olive,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Patrol,Tan,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Patrol,White,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Assault,Black,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Assault,Olive,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Assault,Tan,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Assault,White,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Engineer,Black,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Engineer,Olive,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Engineer,Tan,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Engineer,White,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Field,Black,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Field,Olive,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Field,Tan,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Field,White,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Medical,Black,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Medical,Olive,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Medical,Tan,200) \
  STB73_M43_BACKPACK_MOS_ONLY(M43_Medium_Rucksack,Medical,White,200) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Patrol,Roll,Black,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Patrol,Roll,Olive,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Patrol,Roll,Tan,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Patrol,Roll,White,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Assault,Roll,Black,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Assault,Roll,Olive,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Assault,Roll,Tan,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Assault,Roll,White,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Engineer,Roll,Black,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Engineer,Roll,Olive,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Engineer,Roll,Tan,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Engineer,Roll,White,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Field,Roll,Black,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Field,Roll,Olive,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Field,Roll,Tan,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Field,Roll,White,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Medical,Roll,Black,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Medical,Roll,Olive,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Medical,Roll,Tan,300) \
  STB73_M43_BACKPACK_MOS_ROLL_ONLY(M43_Medium_Rucksack,Medical,Roll,White,300) \
  STB73_M43_BACKPACK_ROLL_ONLY(M43_Medium_Rucksack,Roll,Black,250) \
  STB73_M43_BACKPACK_ROLL_ONLY(M43_Medium_Rucksack,Roll,Olive,250) \
  STB73_M43_BACKPACK_ROLL_ONLY(M43_Medium_Rucksack,Roll,Tan,250) \
  STB73_M43_BACKPACK_ROLL_ONLY(M43_Medium_Rucksack,Roll,White,250)