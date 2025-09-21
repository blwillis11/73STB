class TCP_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland;

class 73_CEUniform_inf_B: TCP_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Woodland
{
    scope=2;
    scopecurator=2;
    scopearsenal=2;
    linkedItems[]=
    {
        "",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    side=1;
    displayName="[73] Marine Uniform";
    backpack="";
    uniformClass="73_CEUniform_U_B";
};

////////////////////////////////////////////10th MEB Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_dress_base;

class 10MEB_Dress_Uniform_v: 73_dress_base
{
    displayName="[10MEB] Officer Dress Uniform [Marine]";

    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "insignia",
        "clan",
//		"awards",
		"nametag",
		"ODST"
    };
    hiddenSelectionsTextures[]=
    {
        "\73_misc\10thMEB\data\dress_uniform_10MEB_co.paa",
        ""
    };
};
