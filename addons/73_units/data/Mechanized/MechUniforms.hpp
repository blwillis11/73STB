//aviation Vest
class MA_Marine_BDU_Medium_Woodland;
///////////////////////////////////////////// Woodland Variants/////////////////////////////////////////////
class 73_Mech_BDU_Medium_Woodland: MA_Marine_BDU_Medium_Woodland
{
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Woodland]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="On";
        Camo="Woodland"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Woodland";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Woodland: 73_Mech_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Woodland]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="On";
        Camo="Woodland"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Woodland";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Woodland: 73_Mech_BDU_Light_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Woodland]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="On";
        Camo="Woodland"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Woodland";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Medium_Woodland_NC: MA_Marine_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Woodland] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="Off";
        Camo="Woodland"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Woodland_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Woodland_NC: 73_Mech_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Woodland] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="Off";
        Camo="Woodland"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Woodland_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Woodland_NC: 73_Mech_BDU_Light_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Woodland] [NC]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Woodland_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="Off";
        Camo="Woodland"
    };
};
///////////////////////////////////////////// Urban Variants/////////////////////////////////////////////
class 73_Mech_BDU_Medium_Urban: MA_Marine_BDU_Medium_Woodland
{
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Urban]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="On";
        Camo="Urban"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Urban";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Urban: 73_Mech_BDU_Medium_Urban
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Urban]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="On";
        Camo="Urban"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Urban";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Urban: 73_Mech_BDU_Light_Urban
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Urban]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="On";
        Camo="Urban"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Urban";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Medium_Urban_NC: MA_Marine_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Urban] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="Off";
        Camo="Urban"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Urban_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Urban_NC: 73_Mech_BDU_Medium_Urban
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Urban] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="Off";
        Camo="Urban"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Urban_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Urban_NC: 73_Mech_BDU_Light_Urban
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Urban] [NC]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Urban_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="Off";
        Camo="Urban"
    };
};
///////////////////////////////////////////// Winter Variants/////////////////////////////////////////////
class 73_Mech_BDU_Medium_Winter: MA_Marine_BDU_Medium_Woodland
{
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Winter]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="On";
        Camo="Winter"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Winter";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Winter: 73_Mech_BDU_Medium_Winter
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Winter]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="On";
        Camo="Winter"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Winter";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Winter: 73_Mech_BDU_Light_Winter
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Winter]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="On";
        Camo="Winter"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Winter";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Medium_Winter_NC: MA_Marine_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Winter] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="Off";
        Camo="Winter"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Winter_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Winter_NC: 73_Mech_BDU_Medium_Winter
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Winter] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="Off";
        Camo="Winter"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Winter_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Winter_NC: 73_Mech_BDU_Light_Winter
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Winter] [NC]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Winter_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="Off";
        Camo="Winter"
    };
};
///////////////////////////////////////////// Arid Variants/////////////////////////////////////////////
class 73_Mech_BDU_Medium_Arid: MA_Marine_BDU_Medium_Woodland
{
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Arid]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="On";
        Camo="Arid"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Arid";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Arid: 73_Mech_BDU_Medium_Arid
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Arid]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="On";
        Camo="Arid"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Arid";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Arid: 73_Mech_BDU_Light_Arid
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Arid]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="On";
        Camo="Arid"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Arid";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Medium_Arid_NC: MA_Marine_BDU_Medium_Woodland
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Medium] [Arid] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Medium";
        Collar="Off";
        Camo="Arid"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Medium_BDU_Arid_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Light_Arid_NC: 73_Mech_BDU_Medium_Arid
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Light] [Arid] [NC]";
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Light";
        Collar="Off";
        Camo="Arid"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Light_BDU_Arid_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
};
class 73_Mech_BDU_Heavy_Arid_NC: 73_Mech_BDU_Light_Arid
{
    scope=2;
    scopeArsenal=2;
    author = "73rd S-4 Team";
    displayName="[73] Mechanized BDU [Heavy] [Arid] [NC]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_Mech_Heavy_BDU_Arid_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
    class XtdGearInfo
    {
        Model="73_ACE_Mech_BDU";
        Type="Heavy";
        Collar="Off";
        Camo="Arid"
    };
};