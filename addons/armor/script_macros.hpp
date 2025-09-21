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
#define AUTHOR "73rd S-4 Team"

//basic path macros
#define P(PATH) \x\@73rd STB Armor Pack v2\addons\73_units\##PATH
    //P((Something) => "\x\@73rd STB Armor Pack v2\addons\73_units\something

// Q(INPUT) => "INPUT"
#define Q(INPUT) #INPUT

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

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

#define 73_TEXPATH(PIECE,FILE) P(data\##PIECE\##FILE)

#define UNIFORM_WEP_CLASS(SHIRT,TUCKED,GLOVES,BLOUSED,ZIPPED,CAMO) \
    class 73STB_U_B_CBUU_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##_##CAMO##: TCP_U_B_CBUU_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##_Base { \
        author = AUTHOR; \
        displayName = "CBUU (" #SHIRT ", " #CAMO ")"; \
        maximumLoad = 50; \
        class ItemInfo: UniformItem { \
            uniformClass = "73STB_B_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##_##CAMO##"; \
            containerClass = "Supply50"; \
            mass = 30; \
            uniformType = "Neopren"; \
        }; \

#define UNIFORM_VEH_CLASS(SHIRT,TUCKED,GLOVES,BLOUSED,CAMO) \
    class 73STB_B_CBUU_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##: TCP_B_CBUU_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##_Base { \
        author = AUTHOR; \
        scope = 2; \
        scopeCurator = 2; \
        displayName = "CBUU (" #SHIRT ", " #CAMO ")"; \
        uniformClass = "73STB_U_B_CBUU_##SHIRT####TUCKED####GLOVES####BLOUSED####ZIPPED##_##CAMO##"; \
        //hiddenSelectionsTextures[] = {73_TEXPATH(Uniforms,##CAMO##_CBUU_##SHIRT##_CO.paa)}; \
    };
