class NSWep_BR55HBM1;
class NSWep_BR55HBM1CQC;

class STB73_BR55HBM1_DMR:NSWep_BR55HBM1
{
    displayName = "[73] BR55HB Mod 1";
    baseWeapon = "STB73_BR55HBM1_DMR";
    author= AUTHOR;
    magazineWell[] = {"STB73_36Rnd_95x40_MagWell"};
    magazines[]=
    {
        "STB73_95x40_36Rnd_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_BR";
        variant="BR55HBM1_DMR";
    };
};
class STB73_BR55HBM1_CQC:NSWep_BR55HBM1CQC
{
    displayName = "[73] BR55HB Mod 2";
    baseWeapon = "STB73_BR55HBM1_CQC";
    author= AUTHOR;
    magazineWell[] = {"STB73_36Rnd_95x40_MagWell"};
    magazines[]=
    {
        "STB73_95x40_36Rnd_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_BR";
        variant="BR55HBM1_CQC";
    };
};

class MA_BR55_HB;
class STB73_BR55_HB:MA_BR55_HB {
    displayName = "[73] BR55HB";
    baseWeapon = "STB73_BR55_HB";
    author= AUTHOR;
    magazineWell[] = {"STB73_36Rnd_95x40_MagWell"};
    magazines[]=
    {
        "STB73_95x40_36Rnd_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_BR";
        variant="BR55_HB";
    };
};
class TCP_arifle_BR55;
class STB73_BR55:TCP_arifle_BR55 {
    displayName = "[73] BR55 SR";
    baseWeapon = "STB73_BR55";
    author= AUTHOR;
    magazineWell[] = {"STB73_36Rnd_95x40_MagWell"};
    magazines[]=
    {
        "STB73_95x40_36Rnd_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_BR";
        variant="BR55";
    };
};
class OPTRE_BR45_Black;
class STB73_BR45:OPTRE_BR45_Black {
    displayName = "[73] BR45";
    baseWeapon = "STB73_BR45";
    author= AUTHOR;
    magazineWell[] = {"STB73_36Rnd_95x40_MagWell"};
    magazines[]=
    {
        "STB73_95x40_36Rnd_Mag_Tracer"
    };
    class XtdGearInfo
    {
        model="STB73_ACE_BR";
        variant="BR45";
    };
};
