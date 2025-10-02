class MA_H4_SAW;

class STB73_H4_SAW:MA_H4_SAW
{
    displayName="[73] M739 SAW";
    baseWeapon="STB73_H4_SAW";
    descriptionShort="UNSC LMG";

    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_barrelMass = 15;
    ace_overheating_dispersion = 0.9;
    ace_overheating_mrbs = 3000;
};

class TCP_LMG_M731;

class STB73_LMG_M731: TCP_LMG_M731 
{
    displayName="[73] M731";
    baseWeapon="STB73_LMG_M731";
    descriptionShort="UNSC LMG";
    ace_overheating_barrelMass = 15;
    ace_overheating_dispersion = 0.9;
    ace_overheating_mrbs = 3000;
    magazineWell[]=
    {
        "STB73_LMG"
    };
    magazines[]=
    {
    "STB73_100rnd_M247_Mag_Tracer_Yellow"
    };
};
