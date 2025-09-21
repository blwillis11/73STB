class OPTRE_8Gauge_Pellets;
class OPTRE_8Gauge_Slugs;
class OPTRE_8Gauge_HEDP;

class 73_8Gauge_Pellets: OPTRE_8Gauge_Pellets
{
    cartridge = "FxCartridge_slug";
//    submunitionConeType[] = {
//      "poissondisc",
//      24
//};
    caliber = 3;
    hit = 30;
    thrustTime = 4.5;
    thrust = 510;
    timeToLive = 20;
    submunitionConeType[]={"random", 12};
    submunitionConeAngle=1;
};

class 73_8Gauge_Slugs: OPTRE_8Gauge_Slugs
{
    cartridge = "FxCartridge_slug";
    caliber = 8;
    hit = 40;
    ACE_caliber=20;
    ACE_bulletLength=60;
    ACE_bulletMass=85.4;
    ACE_ballisticCoefficients[]={0.23};
};

class 73_8Gauge_HEDP: OPTRE_8Gauge_HEDP
{
    cartridge = "FxCartridge_slug";
    hit = 60;
    indirectHit = 30;
    indirectHitRange = 0.5;
    explosionEffects = "ExploAmmoExplosion";
    craterEffects = "ExploAmmoCrater";
    explosionSoundEffect = "DefaultExplosion";
    explosive = 0.5;
};
class 73_12Gauge_Pellets: 73_8Gauge_Pellets
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";

    //for now our balance design for 12g vs 8g is that 12g will do less dmg (less pellets) and spread more, but weight less
    submunitionConeType[] = {"poissondisc",16};
    submunitionConeAngle = 1.6;
    submunitionAmmo = "73_12Gauge_Pellets_Deploy";

    tracerScale = 1;
    tracerStartTime = 0;
    tracerEndTime = 10;
};
class 73_12Gauge_Slugs: OPTRE_8Gauge_Slugs
{
    cartridge = "FxCartridge_slug";
    caliber = 8;
    hit = 50;
    ACE_caliber=20;
    ACE_bulletLength=60;
    ACE_bulletMass=85.4;
    ACE_ballisticCoefficients[]={0.23};
};
class OPTRE_12Gauge_Pellets_Deploy;
class 73_12Gauge_Pellets_Deploy: OPTRE_12Gauge_Pellets_Deploy
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerScale = 1;
    tracerStartTime = 0;
    tracerEndTime = 10;
};

class OPTRE_12Gauge_HE;
//basically from Sahara DLC
class 73_12Gauge_HE: OPTRE_12Gauge_HE
{
    hit = 18;
    caliber = 2;
    indirectHit = 4;
    indirectHitRange = 3.5;
    explosive = 0.7;
    fuseDistance = 5;
};
class OPTRE_12Gauge_Smoke;
class 73_12Gauge_Smoke: OPTRE_12Gauge_Smoke
{
    hit = 2;
    caliber = 0.1;
    typicalSpeed = 550;
    smokeColor[] = {1, 1, 1, 1};
    timeToLive = 10;
    fuseDistance = 0;
};