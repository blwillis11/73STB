class 73_beret: H_Beret_02
{
    displayName = "[73] Beret"
    hiddenSelectionsTextures[]=
    {
        "73_units\data\Dress Gear\data\73Beret_co.paa"
    };
};

//Dress Uniform Base
//Courtesy of 105th and Bman
class 73_Dress_Base: OPTRE_UNSC_Army_Soldier_DressGray
{
    displayName="[73] Dress Uniform";
    author="73rd S-4 Team";
    scope = 1;
    scopeArsenal = 1;
    mass=40;
    cmImmunity=1;
    detectRange=0;
    muzzles[] = {};
    nameSound = "";
    type=131072;
    selectionFireAnim="zasleh";
    simulation="Weapon";
    fireLightAmbient[] = {0,0,0};
    fireLightDiffuse[] = {0.937,0.631,0.259};
    fireLightDuration=0.05;
    fireLightIntensity=0.012;
    lockedTargetSound[] = {"",0.000316228,6};
    lockingTargetSound[] = {"",0.000316228,6};
    weaponLockDelay=0;
    weaponLockSystem=0;
    weight=0;
    class Library {
        libTextDesc = "This dress uniform can be used during non combat scenarios such as graduations and ceremonies.";
    };
    picture="\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model="\OPTRE_UNSC_Units\Army\officer.p3d";
    class ItemInfo: UniformItem
    {
        containerClass="Supply100";
        uniformClass="73_dress_base";
        uniformModel="-";
    };
};

//Custom Dress Uniforms
class 73_Dress_Uniform_smith: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Smith]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Smith_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="B. Smith";
    };
};
class 73_Dress_Uniform_Freeman: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Freeman]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Freeman_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="D. Freeman";
    };
};
class 73_Dress_Uniform_Price: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Price]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Price_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="L. Price";
    };
};
class 73_Dress_Uniform_Salmon: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Salmon]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Salmon_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="B. Salmon";
    };
};
class 73_Dress_Uniform_Morgan: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Morgan]";

    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Morgan_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="T. Morgan";
    };
};
class 73_Dress_Uniform_Ramirez: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Ramirez]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Ramirez_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Ramirez";
    };
};
class 73_Dress_Uniform_Barrier: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Barrier]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Barrier_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="C. Barrier";
    };
};
class 73_Dress_Uniform_Fletcher: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Fletcher]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Fletcher_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Fletcher";
    };
};
class 73_Dress_Uniform_Dex: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Dex]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Dex_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="D. Dex";
    };
};
class 73_Dress_Uniform_Cypher: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Cypher]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Cypher_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="K. Cypher";
    };
};
class 73_Dress_Uniform_Deckard: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Deckard]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Deckard_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="R. Deckard";
    };
};
class 73_Dress_Uniform_Bear: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Bear]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Bear_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="T. Bear";
    };
};
class 73_Dress_Uniform_Winters: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Winters]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Winters_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="C. Winters";
    };
};
class 73_Dress_Uniform_Mustang: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Mustang]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Mustang_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Mustang";
    };
};
class 73_Dress_Uniform_Mendez: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Mendez]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Mendez_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Mendez";
    };
};
class 73_Dress_Uniform_Grayson: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Grayson]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Grayson_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="A. Grayson";
    };
};
class 73_Dress_Uniform_Tidakszel: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Tidakszel]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Tidakszel_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="V. Tidakszel";
    };
};
class 73_Dress_Uniform_Metal: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Metal]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Metal_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="P. Metal";
    };
};
class 73_Dress_Uniform_Solaman: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Solaman]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Solaman_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="R. Solaman";
    };
};
class 73_Dress_Uniform_Dawn: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Dawn]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Dawn_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="D. Dawn";
    };
};
class 73_Dress_Uniform_Cowboy: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Cowboy]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Cowboy_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="T. Cowboy";
    };
};
class 73_Dress_Uniform_Vargas: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Vargas]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Vargas_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Vargas";
    };
};
class 73_Dress_Uniform_Mitchel: 73_Dress_Base
{
    displayName="[73] Dress Uniform [Mitchel]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Dress_Uniform_Mitchel_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="J. Mitchel";
    };
};
////////////////////////////////////////////Infantry Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_ODST_Dress_Uniform: 73_Dress_Base
{
    displayName="[73] Infantry Dress Uniform [ODST]";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_ODST_Dress_Uniform_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="ODST";
    };
};
////////////////////////////////////////////Aviation Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_air_Dress_Uniform: 73_Dress_Base
{
    displayName="[73] Infantry Dress Uniform [Aviation]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Aviation_Dress_Uniform_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="Aviation";
    };
};
////////////////////////////////////////////Officer Dress Uniforms\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
class 73_O_Dress_Uniform: 73_Dress_Base
{
    displayName="[73] Infantry Dress Uniform [Officer]";
    
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo:ItemInfo
    {
        uniformclass="73_Officer_Dress_Uniform_v";
    };
    class XtdGearInfo
    {
        model="73_ACE_Dress_Uniform";
        Variant="Officer";
    };
};