#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

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