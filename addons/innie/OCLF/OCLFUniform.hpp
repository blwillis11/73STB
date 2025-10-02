class OPTRE_FC_Marines_Uniform;

class STB73_OCLF_Uniform:OPTRE_FC_Marines_Uniform
{
    scope=2;
    displayName="[OCLF] Standard Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="STB73_OCLFBase";
        containerClass="Supply40";
        mass=35;
        modelSides[]={6};
    };
};

class OPTRE_FC_Marines_Uniform_BLK;
class STB73_OCLF_Uniform_Blk:OPTRE_FC_Marines_Uniform_BLK
{
    scope=2;
    displayName="[OCLF] Lancer Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="STB73_OCLFSpecOpsBase";
        containerClass="Supply40";
        mass=35;
        modelSides[]={6};
    };
};
