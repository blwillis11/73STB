class MA_10x31_SAP;

class 73_10x31_SAP: MA_10x31_SAP
{
    hit=13;
    cartridge="FxCartridge_9mm";
    caliber=2;
    typicalSpeed=750;
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    // --- AI IMPORTANT VALUES ---
    simulation = "shotBullet";       // classify correctly
    aiAmmoUsageFlags = "64 + 128";   // infantry + suppression
    allowAgainstInfantry = 1;        // explicitly allow
    cost = 1;                        // low cost so AI doesn't hoard
};
class 73_10x31_NARQ: 73_10x31_SAP
{
   hit=1;
   caliber=0.1;
   dosage=1.2;
};