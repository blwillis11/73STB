class NSWep_SRS99AM_Stealth;

class STB73_SRS99AM_Stealth:NSWep_SRS99AM_Stealth
{
    displayName = "[73] SRS99AM [Stealth]";
    baseWeapon = "STB73_SRS99AM_Stealth";
    author= "73rd S-4 Team";
    initSpeed = 1400;
    minRange=1;
    minRangeProbab=0.30000001;
    midRange=1200;
    midRangeProbab=0.57999998;
    maxRange=1400;
    maxRangeProbab=0.039999999;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot="CowsSlot";
            item="NSWep_ORACLE_N_Optic_E";
        };
    };
    magazineWell[]=
    {
        "STB73_4Rnd_145x114_MagWell",
        "STB73_8Rnd_145x114_MagWell"
    };
    magazines[]=
    {
        "STB73_M232_145x114x4_APFSDS",
        "STB73_M232_145x114x4_APFSDS_TG",
        "STB73_M232_145x114x4_APFSDS_TR",
        "STB73_M232_145x114x4_APFSDS_TC",
        "STB73_M232_145x114x4_APFSDS_TIR",
        "STB73_M232_145x114x8_APFSDS",
        "STB73_M232_145x114x8_APFSDS_TG",
        "STB73_M232_145x114x8_APFSDS_TR",
        "STB73_M232_145x114x8_APFSDS_TC",
        "STB73_M232_145x114x8_APFSDS_TIR"
    };
};
