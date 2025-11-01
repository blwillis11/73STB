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

//basic path macros
#define P(PATH) \z\73stb\addons\armor\##PATH
    //P((Something) => "\x\@73rd STB Armor Pack v2\addons\73_units\something

// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

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
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=20;                    \
    passThrough=0.5;             \
  };                             \
  class Hands {                  \
    hitpointName="HitHands";     \
    armor=20;                    \
    passThrough=0.1;             \
  };                             \
  class Pelvis {                  \
    hitpointName="HitPelvis";    \
    armor=30;                    \
    passThrough=0.1;             \
  };                             \
};

#define VEST_ITEM_INFO                                        \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="STB73_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                                \
  };

#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;                           \

#define STB73_TEXPATH(PIECE,FILE) P(data\##PIECE\##FILE)

#define NEW_VEST_43D(ARMOUR) 						                      \
    class TCP_V_M43D_##ARMOUR##_4_Black;                                 \
    class STB73_M43D_##ARMOUR##_Black: TCP_V_M43D_##ARMOUR##_4_Black {   \
        displayName = QUOTE([73] M43/D CBBAS [ARMOUR]); \
        class XtdGearInfo { \
          Model="STB73_ACE_M43D_Vest"; \
          Variant =Q(##ARMOUR##);};   \
    };
#define NEW_VEST_43A(ARMOUR) 						                      \
    class TCP_V_M43A_##ARMOUR##_3_Black;                             \
    class STB73_M43A_##ARMOUR##_Black: TCP_V_M43A_##ARMOUR##_3_Black {   \
      displayName = QUOTE([73] M43/A CBBAS [ARMOUR]); \
    };

#define ECH55D_HELMET(CAMO,VISOR) \
    class STB73_H_ECH55D_##CAMO##_##VISOR : TCP_H_Helmet_ECH55D_Black_Black { \
        displayName = QUOTE([73] ECH55D Helmet CAMO VISOR); \
        ace_hearing_protection = 0.80; \
        hiddenSelectionsTextures[] = { Q(STB73_TEXPATH(helmets,ECH55D_##CAMO##_helmet_co.paa)), Q(STB73_TEXPATH(helmets,ECH55D_##VISOR##_visor_co.paa)),"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" }; \
    }; \
    class STB73_H_ECH55D_##CAMO##_##VISOR##_DP : TCP_H_Helmet_ECH55D_Black_Black_DP { \
        displayName = QUOTE([73] ECH55D Helmet CAMO VISOR [DP]); \
        ace_hearing_protection = 0.80; \
        hiddenSelectionsTextures[] = { Q(STB73_TEXPATH(helmets,ECH55D_##CAMO##_helmet_co.paa)),"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa","tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"}; \
    };
