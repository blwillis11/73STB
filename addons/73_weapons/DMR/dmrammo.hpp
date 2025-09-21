class OPTRE_B_762x51_Ball;

class 73_B_10x40_Ball: OPTRE_B_762x51_Ball
{
    caliber = 6;
    hit = 22;
    indirectHit=0;
    indirectHitRange=0;
    typicalSpeed=1000;
    airFriction=-0.0005;
    deflecting=0;
    cartridge="FxCartridge_762";
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    tracerScale=.8;
    tracerStartTime=0.0;
    tracerEndTime=8;
    nvgOnly=0;
    audibleFire=40;
    visibleFire=3;
    initspeed=1000;
    visibleFireTime=3;
    dangerRadiusBulletClose=8;
    suppressionRadiusBulletClose=6;
    dangerRadiusHit=12;
    suppressionRadiusHit=8;
    ACE_caliber=7.62;
    ACE_bulletLength=30;
    ACE_bulletMass=12.6;
    ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
    ACE_ballisticCoefficients[]={0.43};
    ACE_velocityBoundaries[]={};
    ACE_standardAtmosphere="ICAO";
    ACE_dragModel=1;
    ACE_muzzleVelocityVariationSD=0.1;
    ACE_muzzleVelocities[]={935,977,998,1021,1040,1055,1350};
    ACE_barrelLengths[]={400,450,500,550,600,700,800};
}
class 73_B_10x40_Ball_Tracer: 73_B_10x40_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class 73_B_10x40_Ball_Tracer_Yellow: 73_B_10x40_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class 73_B_10x40_HVAP: 73_B_10x40_Ball
{
    caliber = 8;
    hit = 28;
    indirectHit=0;
    indirectHitRange=0;
    typicalSpeed=1300;
    airFriction=-0.0003;
    deflecting=0;
    cartridge="FxCartridge_762";
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerScale=1;
    tracerStartTime=0.0;
    tracerEndTime=8;
    nvgOnly=0;
    audibleFire=40;
    visibleFire=3;
    initspeed=1300;
    visibleFireTime=3;
    dangerRadiusBulletClose=8;
    suppressionRadiusBulletClose=6;
    dangerRadiusHit=12;
    suppressionRadiusHit=8;
    ACE_caliber=7.62;
    ACE_bulletLength=30;
    ACE_bulletMass=14.8;
    ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
    ACE_ballisticCoefficients[]={0.73};
    ACE_velocityBoundaries[]={};
    ACE_standardAtmosphere="ICAO";
    ACE_dragModel=1;
    ACE_muzzleVelocityVariationSD=0.1;
    ACE_muzzleVelocities[]={1135,1177,1198,1221,1240,1355,1550};
    ACE_barrelLengths[]={400,450,500,550,600,700,800};
}
class 73_B_10x40_HVAP_Tracer: 73_B_10x40_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class 73_B_10x40_HVAP_Tracer_Yellow: 73_B_10x40_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};