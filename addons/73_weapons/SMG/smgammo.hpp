class MA_5x23_Caseless;
class OPTRE_B_127x40_Tracer;

class 73_5x23_Caseless:MA_5x23_Caseless
{
    hit=14;
    cartridge="";
    caliber=2.8;
    typicalSpeed=450;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    supersoniccracknear[]={};
    supersoniccrackfar[]={};
    soundSetSonicCrack[]={};
    simulation = "shotBullet";       // classify correctly
    aiAmmoUsageFlags = "64 + 128";   // infantry + suppression
    allowAgainstInfantry = 1;        // explicitly allow
    cost = 1;                        // low cost so AI doesn't hoard
}
class 73_5x23_Caseless_NARQ:73_5x23_Caseless
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
}
class 73_B_127x40_Tracer:OPTRE_B_127x40_Tracer
{
    hit=15;
    caliber=2.1;
    typicalSpeed=450;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
}
class 73_B_127x40_Tracer_NARQ:73_B_127x40_Tracer
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
}