class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland;

class 73_CEUniform_U_B: TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland
{
    scope=2;
    allowedSlots[]=
    {
        "BACKPACK_SLOT"
    };
    displayName="[73] CBUU Marine Uniform";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_CEUniform_inf_B";
        containerClass="Supply90";
        mass=80;
    };
};
////////////////////////////////////////////Marine Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_Dress_Base;

class 10MEB_O_Dress_Uniform: 73_Dress_Base
{
    displayName="[10MEB] Infantry Dress Uniform [Marine]";

    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="10MEB_Dress_Uniform_v";
    };
};