class TCP_srifle_M392;

class STB73_M392_DMR:TCP_srifle_M392
{
    displayName = "[73] M392 DMR";
    baseWeapon = "STB73_M392_DMR";
    author= "73rd S-4 Team";
    magazineWell[] = {"STB73_15Rnd_762x51_DMR_MagWell"};
    magazines[]={"STB73_15Rnd_762x51_Mag_Tracer"};
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot="CowsSlot";
            item="TCP_optic_EVOSD";
        };
    };
};
