class OPTRE_FC_Marines_Uniform;

class 73_OCLF_Uniform:OPTRE_FC_Marines_Uniform
{
    scope=2;
    displayName="[OCLF] Standard Uniform"
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_OCLFBase";
        containerClass="Supply40";
        mass=35;
        modelSides[]={6};
    };
};

class OPTRE_FC_Marines_Uniform_BLK;
class 73_OCLF_Uniform_Blk:OPTRE_FC_Marines_Uniform_BLK
{
    scope=2;
    displayName="[OCLF] Lancer Uniform"
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_OCLFSpecOpsBase";
        containerClass="Supply40";
        mass=35;
        modelSides[]={6};
    };
};