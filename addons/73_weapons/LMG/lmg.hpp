class MA_H4_SAW;

class 73_H4_SAW:MA_H4_SAW
{
    displayName="[73] M739 SAW";
    baseWeapon="73_H4_SAW";
    descriptionShort="UNSC LMG";

    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_barrelMass = 15;
    ace_overheating_dispersion = 0.9;
    ace_overheating_mrbs = 3000;
};

class TCP_LMG_M731;

class 73_LMG_M731: TCP_LMG_M731 {
        displayName="[73] M731";
        baseWeapon="73_LMG_M731";
        descriptionShort="UNSC LMG";
		ace_overheating_barrelMass = 15;
		ace_overheating_dispersion = 0.9;
		ace_overheating_mrbs = 3000;
        magazineWell[]=
        {
            "73_LMG"
        };
        magazines[]=
        {
        "73_100rnd_M247_Mag_Tracer_Yellow"
        };
	}
