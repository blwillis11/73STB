/*
  ==============================================================================
  config_macros.hpp

  This file contains all macros used in our 12th_vests config. Macros reduce
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

//Standard vest stuff
#define VEST_MASS 30
#define VEST_MAXLOAD 150

// Macro for the hitpoint data applied to vests
#define VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=20;                    \
    passThrough=0.5;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=25;                    \
    passThrough=0.1;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=35;                    \
    passThrough=0.1;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=30;                    \
    passThrough=0.1;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=30;                    \
    passThrough=0.1;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=0.1;             \
    armor=20;                    \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=20;                    \
    passThrough=0.5;             \
  };                             \
};


#define NEW_VEST(ARMOUR) 						                      \
    class TCP_V_M43D_##ARMOUR##_Base;                                 \
    class TCP_V_M43D_##ARMOUR##_Black: TCP_V_M43D_##ARMOUR##_Base {   \
        class ItemInfo;							                   	  \
    };

#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;                           \

#define 73_TEXPATH(PIECE,FILE) P(data\ODST\##PIECE\##FILE)