// 7.62x51mm AR
class TCP_B_762x51_Ball;

class STB73_B_762x51_Ball: TCP_B_762x51_Ball
{
    hit=12;
};
class STB73_B_762x51_Ball_Tracer: STB73_B_762x51_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_762x51_Ball_Tracer_Yellow: STB73_B_762x51_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_B_762x51_Ball_Tracer_IR: STB73_B_762x51_Ball
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};
class STB73_B_762x51_Dual: STB73_B_762x51_Ball
{
    effectFly="AmmoUnderwater";
    waterFriction=-0.001;
};

class TCP_B_762x51_BTHP;

class STB73_B_762x51_BTHP: TCP_B_762x51_BTHP
{
    hit=12;
};
class STB73_B_762x51_BTHP_Tracer: STB73_B_762x51_BTHP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_762x51_BTHP_Tracer_Yellow: STB73_B_762x51_BTHP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_B_762x51_BTHP_Tracer_IR: STB73_B_762x51_BTHP
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};


class TCP_B_762x51_AP;

class STB73_B_762x51_HVAP: TCP_B_762x51_AP
{
    hit=10.5;
};
class STB73_B_762x51_HVAP_Tracer: STB73_B_762x51_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_762x51_HVAP_Tracer_Yellow: STB73_B_762x51_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_B_762x51_HVAP_Tracer_IR: STB73_B_762x51_HVAP
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};

// 9.5x40mm BR

class TCP_B_95x40_Ball;
class STB73_95x40_AP: TCP_B_95x40_Ball
{
    hit=16;
};
class STB73_95x40_AP_Tracer: STB73_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_95x40_AP_Tracer_Yellow: STB73_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_95x40_AP_Tracer_IR: STB73_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};

class OPTRE_B_95x40_Ball;

class STB73_B_95x40_Ball: OPTRE_B_95x40_Ball {
    caliber = 4.3;
    hit = 20;
    typicalSpeed = 650;

    cartridge = "FxCartridge_93x64_Ball";
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_95x40_Tracer:STB73_B_95x40_Ball{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_95x40_Tracer_Yellow:STB73_B_95x40_Ball{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};

// 12 gauge
class TCP_B_12Gauge_Pellets_Submunition;
class TCP_B_12Gauge_Slug;
class STB73_12Gauge_Pellets: TCP_B_12Gauge_Pellets_Submunition
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_12Gauge_Slugs: TCP_B_12Gauge_Slug
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class OPTRE_12Gauge_Smoke;
class STB73_12Gauge_Smoke: OPTRE_12Gauge_Smoke
{
    hit = 2;
    caliber = 0.1;
    typicalSpeed = 550;
    smokeColor[] = {1, 1, 1, 1};
    timeToLive = 10;
    fuseDistance = 0;
};

// 5.23x23mm
class MA_5x23_Caseless;

class STB73_5x23_Caseless:MA_5x23_Caseless
{
    hit=12;
    cartridge="";
    caliber=2.4;
    typicalSpeed=450;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    supersoniccracknear[]={};
    supersoniccrackfar[]={};
    soundSetSonicCrack[]={};
    simulation = "shotBullet";       // classify correctly
    // aiAmmoUsageFlags must be numeric (bitmask). 64 + 128 = 192
    aiAmmoUsageFlags = 192;   // infantry + suppression
    allowAgainstInfantry = 1;        // explicitly allow
    cost = 1;                        // low cost so AI doesn't hoard
};
class STB73_5x23_Caseless_Tracer:STB73_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_5x23_Caseless_Tracer_Yellow:STB73_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_5x23_Caseless_Tracer_IR:STB73_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};

class STB73_5x23_Caseless_NARQ:STB73_5x23_Caseless
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
};
class STB73_5x23_Caseless_NARQ_Tracer:STB73_5x23_Caseless_NARQ
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
};

// 12.7x40mm

class TCP_B_127x30_Ball;

class STB73_B_127x30_Ball:TCP_B_127x30_Ball
{
    hit=9;
};
class STB73_B_127x30_Ball_Tracer:STB73_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_127x30_Ball_Tracer_Yellow:STB73_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_B_127x30_Ball_Tracer_IR:STB73_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};
class STB73_B_127x30_NARQ_Tracer: STB73_B_127x30_Ball
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    aiAmmoUsageFlags = 192;
    allowAgainstInfantry = 1;
};

// 14.5x114mm
class nswep_m232_145x114_APFSDS;
class NSWep_M232_145x114_APFSDS_TG;
class NSWep_M232_145x114_APFSDS_TR;
class NSWep_M232_145x114_APFSDS_TC;
class NSWep_M232_145x114_APFSDS_TIR;

class STB73_M232_145x114_APFSDS:nswep_m232_145x114_APFSDS
{
    caliber=4;
    hit=105;
    ACE_ballisticCoefficients[]= {0.757};
    ACE_muzzleVelocities[] = {1400,1400};
    ACE_caliber=14.5;
    ACE_bulletLength=50;
    ACE_bulletMass=65;
    ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};

    ACE_velocityBoundaries[]={};
    ACE_standardAtmosphere="ICAO";
    ACE_dragModel=7;
    ACE_muzzleVelocityVariationSD=0.1;
    ACE_barrelLengths[]={400,450,500,550,600,700,1000};
};
class STB73_M232_145x114_APFSDS_TG:STB73_M232_145x114_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
};
class STB73_M232_145x114_APFSDS_TR:STB73_M232_145x114_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_M232_145x114_APFSDS_TC:STB73_M232_145x114_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_blue";
};
class STB73_M232_145x114_APFSDS_TIR:STB73_M232_145x114_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};


// Launcher ammo
class DMNS_M96_Rocket_HEAT;
class STB73_M96_Rocket_HEAT:DMNS_M96_Rocket_HEAT
{
    hit = 400;
    indirectHit = 250;
    indirectHitRange = 9;
};

class R_MRAAWS_HEAT_F;
class STB73_50x137_HEAT: R_MRAAWS_HEAT_F
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
class STB73_50X137_HE: R_MRAAWS_HE_F
{
    caliber=0;
    hit=400;
    indirectHit=200;
    indirectHitRange=5;
    allowAgainstInfantry=1;
};
class STB73_50x137_PEN: STB73_50X137_HE
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

class STB73_HEAT:OPTRE_M41_Rocket_HEAT_G{
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
class STB73_HEAP:OPTRE_M41_Rocket_HEAP{
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
class STB73_HEAA:OPTRE_M41_Rocket_HEAT_G_AA
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
