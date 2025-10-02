class NSWep_BR55HBM1;
class NSWep_BR55HBM1CQC;

class STB73_BR55HBM1_DMR:NSWep_BR55HBM1
{
    displayName = "[73] BR55HB Mod 1";
    baseWeapon = "STB73_BR55HBM1_DMR";
    author= "73rd S-4 Team";
    magazineWell[] = {"STB73_BR55"};
    magazines[]=
    {
        "STB73_95x40_36Rnd",
        "STB73_95x40_36Rnd_T_G",
        "STB73_95x40_36Rnd_T_R",
        "STB73_95x40_36Rnd_T_IR"
    };
};
class STB73_BR55HBM1_CQC:NSWep_BR55HBM1CQC
{
    displayName = "[73] BR55HB Mod 2";
    baseWeapon = "STB73_BR55HBM1_DMR";
    author= "73rd S-4 Team";
    magazineWell[] = {"STB73_BR55"};
    magazines[]=
    {
        "STB73_95x40_36Rnd",
        "STB73_95x40_36Rnd_T_G",
        "STB73_95x40_36Rnd_T_R",
        "STB73_95x40_36Rnd_T_IR"
    };
};

class MA_BR55_HB;
class STB73_BR55_HB:MA_BR55_HB {
    displayName = "[73] BR55HB";
    baseWeapon = "STB73_BR55_HB";
    author= "73rd S-4 Team";
    magazineWell[] = {"STB73_BR55HB"};
    magazines[]=
    {
        "STB73_36Rnd_95x40_HPSAP_Mag"
    };
};
