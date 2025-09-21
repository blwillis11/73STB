//Standard Helmets
class 73_CH252D_Helmet_STB_Standard: CH252D_Helmet
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Standard]";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture="";
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "73_units\data\ODST\CH252DHelmets\73_Visor_Silver.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
            "73_units\data\ODST\CH252DHelmets\73_Visor_Navy.paa"      
        };
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252D_Helmet_STB";
        Roles="Standard";
    };
};
class 73_CH252D_Helmet_STB_Standard_dp: CH252D_Helmet_dp
{
    scope=1;
    scopeArsenal=1;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Standard]";
    picture="";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]=
        {
            "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
        };
    };
};
class 73_CH252D_Helmet_STB_SORC: 73_CH252D_Helmet_STB_Standard
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [SORC]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "73_units\data\ODST\CH252DHelmets\73_Visor_Red.paa"
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252D_Helmet_STB";
        Roles="SORC";
    };
};
class 73_CH252D_Helmet_STB_SORC_dp: 73_CH252D_Helmet_STB_Standard_dp
{
    scope=1;
    scopeArsenal=1;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [SORC]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
    };
};
class 73_CH252D_Helmet_STB_Lead: 73_CH252D_Helmet_STB_Standard
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Lead]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "73_units\data\ODST\CH252DHelmets\73_Visor_Gold.paa"
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252D_Helmet_STB";
        Roles="Leadership";
    };
};
class 73_CH252D_Helmet_STB_Lead_dp: 73_CH252D_Helmet_STB_Standard_dp
{
    scope=1;
    scopeArsenal=1;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Lead]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
    };
};
class 73_CH252D_Helmet_STB_Officer: 73_CH252D_Helmet_STB_Standard
{
    scope=2;
    scopeArsenal=2;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Officer]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "73_units\data\ODST\CH252DHelmets\73_Visor_Black.paa"
    };
    class XtdGearInfo
    {
        Model="73_ACE_CH252D_Helmet_STB";
        Roles="Officer";
    };
};
class 73_CH252D_Helmet_STB_Officer_dp: 73_CH252D_Helmet_STB_Standard_dp
{
    scope=1;
    scopeArsenal=1;
    author="73rd S-4 Team";
    displayName="[73] CH252D Helmet [STB] [Officer]";
    hiddenSelectionsTextures[]=
    {
        "73_units\data\ODST\CH252DHelmets\73_Helmet_Base_Batt.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
    };
};
