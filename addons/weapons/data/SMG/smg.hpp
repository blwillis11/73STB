class TCP_SMG_M7;
class TCP_arifle_M6J;

class STB73_M7_SMG: TCP_SMG_M7 {
    author= AUTHOR;
    displayName = "[73] M7S SMG";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    baseWeapon="STB73_M7_SMG";
    magazineWell[]={
    "STB73_48Rnd_5x23Caseless_MagWell",
    "STB73_60Rnd_5x23Caseless_MagWell"
    };
    magazines[] =
    {
        "STB73_48Rnd_5x23Caseless_FMJ_Mag"
    };
};
class STB73_M6J : TCP_arifle_M6J
{
    author= AUTHOR;
    baseWeapon 	= "STB73_M6J";
    displayName = "[73] M6J PDWS";
    scope = 2;
    magazines[] = {"STB73_36Rnd_127x30_SAP_Mag_Tracer"};
    magazineWell[]=
    {
        "STB73_12Rnd_127x30_MagWell",
        "STB73_24Rnd_127x30_MagWell",
        "STB73_36Rnd_127x30_MagWell"
    };
};
