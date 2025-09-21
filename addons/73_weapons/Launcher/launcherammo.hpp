class DMNS_M96_Rocket_HEAT;
class 73_M96_Rocket_HEAT:DMNS_M96_Rocket_HEAT
{
    hit = 100;
    indirectHit = 250;
    indirectHitRange = 9;
};

class R_MRAAWS_HEAT_F;
class 73_50x137_HEAT: R_MRAAWS_HEAT_F
{
    model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
    caliber=10;
    hit=950;
    indirectHit=200;
    indirectHitRange=0.050000001;
    timeToLive=30;
    allowAgainstInfantry=0;
};
class R_MRAAWS_HE_F;
class 73_50X137_HE: R_MRAAWS_HE_F
{
    caliber=0;
    hit=400;
    indirectHit=200;
    indirectHitRange=5;
    allowAgainstInfantry=1;
};
class 73_50x137_PEN: 73_50X137_HE
{
    caliber=20;
    hit=1200;
    indirectHit=0;
    indirectHitRange=0;
    explosive=0;
    fuseDistance=0;
    allowAgainstInfantry=0;
};

class OPTRE_M41_Rocket_HEAT_G;
class OPTRE_M41_Rocket_HEAP;
class OPTRE_M41_Rocket_HEAT_G_AA;

class 73_HEAT:OPTRE_M41_Rocket_HEAT_G{
    maxSpeed=250;
    hit = 1600;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileKeepLockedCone = 75;
    missileLockCone = 30;
    fuseDistance = 30;
    timeToLive = 40;
    typicalSpeed = 200;
    trackOversteer = 0.9;
    sideAirFriction = 0.30000001;
    cmImmunity = 0.75;
    initTime = .2;
};
class 73_HEAP:OPTRE_M41_Rocket_HEAP{
    irLock = 0;
    airLock = 0;
    laserLock = 0;
    nvLock = 0;
    maxSpeed=250;
    allowAgainstInfantry = 1;
    proximityExplosionDistance = 0;
    hit = 220;
    indirectHit = 75;
    indirectHitRange = 6;
    explosive = 1;
};
class 73_HEAA:OPTRE_M41_Rocket_HEAT_G_AA
{
    warheadName="TandemHEAT";
    submunitionAmmo = "ammo_Penetrator_Vorona";
    effectsMissile = "missile3";
    hit = 550;
    indirectHit = 150;
    indirectHitRange = 4;
    explosive=0.80000001;
    cmImmunity = 0.85;
    maneuvrability = 28;
    maxControlRange = 30000;
    missileKeepLockedCone = 180;
    missileLockCone = 30;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileLockMaxSpeed = 1200;
    trackOversteer = 0.9;
    trackLead = 0.8;
    weaponLockSystem = 2;
    initTime = 0;
    thrustTime = 0.8;
    thrust = 120;
    maxSpeed = 600;
    class Components {
        class SensorsManagerComponent {
            class Components {
                class IRSensorComponent: SensorTemplateIR {
                    class AirTarget {
                        minRange=50;
                        maxRange=20000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };

                    class GroundTarget {
                        minRange=50;
                        maxRange=20000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };

                    maxTrackableSpeed=1200;
                    angleRangeHorizontal=7;
                    angleRangeVertical=4.5;
                    maxTrackableATL=2000;
                };
            };
        };
    };
};