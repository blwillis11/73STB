class TCP_srifle_M392;

class 73_M392_DMR:TCP_srifle_M392
{
    displayName = "[73] M392 DMR";
    baseWeapon = "73_M392_DMR"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_DMR"};
    magazines[]={"73_15Rnd_10x40_Mag"};
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot="CowsSlot";
            item="TCP_optic_EVOSD"
        };
    };
};