class MA_Marine_BDU_ODST_HJ;

class 73_BDU_ODST_Urban: MA_Marine_BDU_ODST_HJ
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Urban]";
    maximumLoad = 125;
    class ItemInfo: UniformItem
    {
       	scope=2;
       	scopeArsenal=2;
        uniformModel="-";
        uniformClass="73_ODST_BDU_Urban";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Urban";
		Collar="On";
	};
};
class 73_BDU_ODST_Woodland: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Woodland]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Woodland";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Woodland";
		Collar="On";
	};
};
class 73_BDU_ODST_Arid: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Arid]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Arid";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Arid";
		Collar="On";
	};
};
class 73_BDU_ODST_Winter: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Winter]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Winter";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Winter";
		Collar="On";
	};
};
class 73_BDU_ODST_Urban_NC: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Urban]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Urban_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Urban";
		Collar="Off";
	};
};
class 73_BDU_ODST_Woodland_NC: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Woodland]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Woodland_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Woodland";
		Collar="Off";
	};
};
class 73_BDU_ODST_Arid_NC: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Arid]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Arid_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Arid";
		Collar="Off";
	};
};
class 73_BDU_ODST_Winter_NC: 73_BDU_ODST_Urban
{
	author="73rd S-4 Team";
    displayName="[73] M52D BDU [Winter]";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="73_ODST_BDU_Winter_NC";
        containerClass="Supply150";
        mass=10;
        uniformType="Neopren";
        modelSides[]={6};
    };
	class XtdGearInfo
	{
		Model="73_ACE_ODST_BDU";
		Camo="Winter";
		Collar="Off";
	};
};