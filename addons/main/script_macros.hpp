#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#include "\a3\ui_f\hpp\defineResincl.inc"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineCommonColors.inc"

#define OPFOR_VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=8;                    \
    passThrough=0.5;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=12;                    \
    passThrough=0.4;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=12;                    \
    passThrough=0.3;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=12;                    \
    passThrough=0.4;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=12;                    \
    passThrough=0.4;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    armor=12;                    \
    passThrough=0.4;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=6;                    \
    passThrough=0.4;             \
  };                             \
  class Hands {                  \
    hitpointName="HitHands";     \
    armor=6;                    \
    passThrough=0.25;             \
  };                             \
  class Pelvis {                 \
    hitpointName="HitPelvis";    \
    armor=6;                    \
    passThrough=0.4;             \
  };                             \
};
#undef ADDON
#ifdef COMPAT
    #define PBO DOUBLES(Compat,COMPAT)
    #define COMPAT_ADDON DOUBLES(PREFIX,PBO)
    #define ADDON DOUBLES(COMPAT_ADDON,COMPONENT)
#else
    #define PBO COMPONENT
    #define ADDON DOUBLES(PREFIX,PBO)
#endif

#define MAIN_PBO      Main

#undef MAIN_ADDON
#define MAIN_ADDON DOUBLES(PREFIX,COMPONENT)

#define EPBO(var) var
#define EADDON(var) DOUBLES(PREFIX,EPBO(var))

#ifdef SUBCOMPONENT
    #define SUBADDON DOUBLES(ADDON,SUBCOMPONENT)
#endif

#ifdef SUBCOMPONENT2
    #define SUBADDON2 DOUBLES(SUBADDON,SUBCOMPONENT2)
#endif

#ifdef SUBCOMPONENT3
    #define SUBADDON3 DOUBLES(SUBADDON2,SUBCOMPONENT3)
#endif

#ifdef SUBCOMPONENT4
    #define SUBADDON4 DOUBLES(SUBADDON3,SUBCOMPONENT4)
#endif

#ifdef SUBCOMPONENT5
    #define SUBADDON5 DOUBLES(SUBADDON4,SUBCOMPONENT5)
#endif

#ifdef COMPAT_BEAUTIFIED
    #define COMPAT_NAME TITLE - COMPAT_BEAUTIFIED
#else
    #define COMPAT_NAME TITLE - COMPAT
#endif

#ifdef COMPAT
    #ifdef COMPONENT_BEAUTIFIED
        #define COMPONENT_NAME COMPAT_NAME - COMPONENT_BEAUTIFIED
    #else
        #define COMPONENT_NAME COMPAT_NAME - COMPONENT
    #endif
#else
    #ifdef COMPONENT_BEAUTIFIED
        #define COMPONENT_NAME TITLE - COMPONENT_BEAUTIFIED
    #else
        #define COMPONENT_NAME TITLE - COMPONENT
    #endif
#endif

#ifdef SUBCOMPONENT_BEAUTIFIED
    #define SUBCOMPONENT_NAME COMPONENT_NAME - SUBCOMPONENT_BEAUTIFIED
#else
    #define SUBCOMPONENT_NAME COMPONENT_NAME - SUBCOMPONENT
#endif

#ifdef SUBCOMPONENT2_BEAUTIFIED
    #define SUBCOMPONENT2_NAME SUBCOMPONENT_NAME - SUBCOMPONENT2_BEAUTIFIED
#else
    #define SUBCOMPONENT2_NAME SUBCOMPONENT_NAME - SUBCOMPONENT2
#endif

#ifdef SUBCOMPONENT3_BEAUTIFIED
    #define SUBCOMPONENT3_NAME SUBCOMPONENT2_NAME - SUBCOMPONENT3_BEAUTIFIED
#else
    #define SUBCOMPONENT3_NAME SUBCOMPONENT2_NAME - SUBCOMPONENT3
#endif

#ifdef SUBCOMPONENT4_BEAUTIFIED
    #define SUBCOMPONENT4_NAME SUBCOMPONENT3_NAME - SUBCOMPONENT4_BEAUTIFIED
#else
    #define SUBCOMPONENT4_NAME SUBCOMPONENT3_NAME - SUBCOMPONENT4
#endif

#ifdef SUBCOMPONENT5_BEAUTIFIED
    #define SUBCOMPONENT5_NAME SUBCOMPONENT4_NAME - SUBCOMPONENT5_BEAUTIFIED
#else
    #define SUBCOMPONENT5_NAME SUBCOMPONENT4_NAME - SUBCOMPONENT5
#endif

// Equipment list macros definitions

#define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
#define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}

/// Magazines macros definition ///
#define MAG_1(a) Q(a)
#define MAG_2(a) Q(a), Q(a)
#define MAG_3(a) Q(a), Q(a), Q(a)
#define MAG_4(a) Q(a), Q(a), Q(a), Q(a)
#define MAG_5(a) Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_6(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_7(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_8(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_9(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_10(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_11(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)
#define MAG_12(a) Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a), Q(a)

#undef DOUBLES
#define DOUBLES(var1,var2) var1##_##var2

#undef TRIPLES
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3

#undef QUOTE
#define QUOTE(var1) #var1

// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\x\@73rd STB Armor Pack v2\addons\73_units\something"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define TAG [73]