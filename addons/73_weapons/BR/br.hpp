class NSWep_BR55HBM1;
class NSWep_BR55HBM1CQC;

class 73_BR55HBM1_DMR:NSWep_BR55HBM1
{
    displayName = "[73] BR55HB Mod 1";
    baseWeapon = "73_BR55HBM1_DMR"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55"};
    magazines[]=
    {
        "73_95x40_36Rnd",
        "73_95x40_36Rnd_T_G",
        "73_95x40_36Rnd_T_R",
        "73_95x40_36Rnd_T_IR"
    };
};
class 73_BR55HBM1_CQC:NSWep_BR55HBM1CQC
{
    displayName = "[73] BR55HB Mod 2";
    baseWeapon = "73_BR55HBM1_DMR"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55"};
    magazines[]=
    {
        "73_95x40_36Rnd",
        "73_95x40_36Rnd_T_G",
        "73_95x40_36Rnd_T_R",
        "73_95x40_36Rnd_T_IR"
    };
};

class MA_BR55_HB;
class 73_BR55_HB:MA_BR55_HB {
    displayName = "[73] BR55HB";
    baseWeapon = "73_BR55_HB"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55HB"};
    magazines[]=
    {
        "73_36Rnd_95x40_HPSAP_Mag"
    };
};