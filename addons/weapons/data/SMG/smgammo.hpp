class MA_5x23_Caseless;
class OPTRE_B_127x40_Tracer;

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
class STB73_5x23_Caseless_NARQ:STB73_5x23_Caseless
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
};
class STB73_B_127x40_Tracer:OPTRE_B_127x40_Tracer
{
    hit=15;
    caliber=2.1;
    typicalSpeed=450;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    // allow AI to use tracer rounds as well
    aiAmmoUsageFlags = 192;
    allowAgainstInfantry = 1;
};
class STB73_B_127x40_Tracer_NARQ:STB73_B_127x40_Tracer
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    aiAmmoUsageFlags = 192;
    allowAgainstInfantry = 1;
};
