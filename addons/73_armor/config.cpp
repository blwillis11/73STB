#include "macros\config_macros.hpp"
#include "macros\standard_macros.hpp"
#include "data\XtdGear.hpp"

class CfgPatches
{
    class 73_armor
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux";
		units[] =
        {};
        weapons[] =
        {
        };
        requiredAddons[] =
        {
            "TCP_Characters_BLUFOR_UNSC_Marines_Vests_M43D",
            "TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU"
        };
        requiredVersion = 0.1;
    };
};

class CfgVehicles
{
    class ContainerSupply;
    class STB73_vest_supply: ContainerSupply
    {
        maximumLoad = VEST_MAXLOAD;
    };

};

class CfgWeapons
{

    class ItemCore;
    class VestItem;
    NEW_VEST(ODST_4)
    NEW_VEST(SHARPSHOOTER_4)
    NEW_VEST(BREACHER_4)
    class TCP_H_Helmet_ECH55D_Black_Black;
    class TCP_H_Helmet_ECH55D_Black_Black_DP;

    class STB73_Helmet_ECH55D: TCP_H_Helmet_ECH55D_Black_Black
    {
        author = AUTHOR;
        displayName="[73] ECH55/D Helmet"
        scope=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
        {
            "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_CO.paa",
            "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CO.paa",
            "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
        };
    };
    class STB73_Helmet_ECH55D_dp: TCP_H_Helmet_ECH55D_Black_Black_DP
    {
        author = AUTHOR;
        displayName="[73] ECH55/D Helmet"
        scope=1;
        scopeArsenal=1;
		hiddenSelectionsTextures[]=
		{
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
    };

    class STB73_M43D_ODST_Standard : TCP_V_M43D_ODST_4_Black
    {
        scope= 2;
        scopeArsenal=2;
        author = AUTHOR;
        displayName="[73] M43D ODST Vest [Standard";
        class ItemInfo: ItemInfo
        {
            containerClass="STB73_vest_supply";
            mass = VEST_MASS;
            VEST_HITPOINT_INFO
        };
		hiddenSelectionsTextures[]=
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class XtdGearInfo
        {
            Model="73_ACE_M43D_Vest";
            Variant="ODST";
        };
    };
    class STB73_M43D_ODST_Sharpshooter : TCP_V_M43D_SHARPSHOOTER_4_Black
    {
        scope= 2;
        scopeArsenal=2;
        author = AUTHOR;
        displayName="[73] M43D ODST Vest";
        class ItemInfo: ItemInfo
        {
            containerClass="STB73_vest_supply";
            mass = VEST_MASS;
            VEST_HITPOINT_INFO
        };
		hiddenSelectionsTextures[]=
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_SHARPSHOOTER_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class XtdGearInfo
        {
            Model="73_ACE_M43D_Vest";
            Variant="Sharpshooter";
        };
    };
    class STB73_M43D_ODST_Breacher : TCP_V_M43D_BREACHER_4_Black
    {
        scope= 2;
        scopeArsenal=2;
        author = AUTHOR;
        displayName="[73] M43D ODST Vest";
        class ItemInfo: ItemInfo
        {
            containerClass="STB73_vest_supply";
            mass = VEST_MASS;
            VEST_HITPOINT_INFO
        };
		hiddenSelectionsTextures[]=
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_BREACHER_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class XtdGearInfo
        {
            Model="73_ACE_M43D_Vest";
            Variant="Breacher";
        };
    };
};