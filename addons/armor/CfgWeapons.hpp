class CfgWeapons
{
    class VestItem;
    class ItemInfo;
    class TCP_V_M43A_BaseSec_3_Black;
    class TCP_V_M43D_Light_Black;
    class ItemCore;
    class UniformItem;

    class DetectorCore;
    class MineDetector: DetectorCore
    {
        class ItemInfo : ItemInfo
        {
            mass=0;
        };
    };

    class TCP_V_M43D_Light_Base;
    class STB73_M43D_Base: TCP_V_M43D_Light_Base {
        class itemInfo: ItemInfo
        {
           VEST_HITPOINT_INFO
           containerClass="STB73_vest_supply";
           mass=VEST_MASS;
           vestType="Rebreather";
        };
    };

    #include "data\vest\m43DBase.hpp"

    
    NEW_VEST_43A(Black,Aviator)
    VEST_M43D_CAMOS(Standard)
    VEST_M43D_CAMOS(SORC)


    TCP_WEP_CLASS_DEF

    WEP_UNI_CLASS(Arctic)
    WEP_UNI_CLASS(Arid)
    WEP_UNI_CLASS(Black)
    WEP_UNI_CLASS(Green)
    WEP_UNI_CLASS(Gray)
    WEP_UNI_CLASS(Olive) 
    WEP_UNI_CLASS(Tan)
    WEP_UNI_CLASS(Tropic)
    WEP_UNI_CLASS(Tundra)
    WEP_UNI_CLASS(Urban)
    WEP_UNI_CLASS(White)
    WEP_UNI_CLASS(Woodland)

    class TCP_H_Helmet_ECH55D_Black_Black;
    class TCP_H_Helmet_ECH55D_Black_Black_DP;
    class HeadgearItem;

    class STB73_Helmet_ECH55D_Base: TCP_H_Helmet_ECH55D_Black_Black
	{
        scope=1;
        class ItemInfo:ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Face
                {
                    hitpointName="HitFace";
                    armor=LVL3_ARMOR;
                    passThrough=LVL3_PASS;
                };
                class Head
                {
                    hitpointName="HitHead";
                    armor=LVL4_ARMOR;
                    passThrough=LVL4_PASS;
                };
            };
        };
	};
    class STB73_Helmet_ECH55D_DP_Base: TCP_H_Helmet_ECH55D_Black_Black_DP
	{
	};

    ECH55D_HELMET_VISORS(Company)
    ECH55D_HELMET_VISORS(Standard)
    ECH55D_HELMET_VISORS(Atlas1)

    ECH55D_CUS_HELMET_CAMOS(Dove,Blue)
    ECH55D_CUS_HELMET_CAMOS(Mendez,Gold)
    ECH55D_CUS_HELMET_CAMOS(Ninja,Silver)
    ECH55D_CUS_HELMET_CAMOS(Price,Black)
    ECH55D_CUS_HELMET_CAMOS(Smith,Black)
    ECH55D_CUS_HELMET_CAMOS(Stauss,Gold)
    ECH55D_CUS_HELMET_CAMOS(Winters,Gold)
    ECH55D_CUS_HELMET_CAMOS(Mitchel,Red)

    // ECH55D_HELMET(Atlas2,Black,Officer,Standard)
    // ECH55D_HELMET(Atlas2,Red,SORC,SORC)
    // ECH55D_HELMET(Atlas2,Gold,NCO,Standard)
    // ECH55D_HELMET(Atlas2,Silver,Specialist,Standard)
    // ECH55D_HELMET(Atlas2,Blue,Enlisted,Standard)

    class Uniform_Base;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class CH252D_Helmet;
    class CH252D_Helmet_dp;
    class VES_CH252_WDL_Crew;
    
    class OPTRE_FC_VX19_Helmet;
    class STB73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author=AUTHOR;
        displayName="[73] VX19 Flight Helmet [Aviator]";
        ace_hearing_protection = 0.80;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73_VX19_aviator_co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "optre_fc_units\marines\data\h3_pilothelmet.rvmat",
            "optre_fc_units\marines\data\h3_pilothelmet_visor.rvmat"
        };
        class XtdGearInfo
        {
            Model="STB73_ACE_VX19_Helmet";
            Roles="Aviator";
        };
        class ItemInfo:ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Face
                {
                    hitpointName="HitFace";
                    armor=LVL3_ARMOR;
                    passThrough=LVL3_PASS;
                };
                class Head
                {
                    hitpointName="HitHead";
                    armor=LVL4_ARMOR;
                    passThrough=LVL4_PASS;
                };
            };
        };
    };
    class STB73_VX19_Helmet_Senior: STB73_VX19_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author=AUTHOR;
        displayName="[73] VX19 Flight Helmet [Sr Aviator]";
        ace_hearing_protection = 0.80;
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73_VX19_senioraviator_co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
        class XtdGearInfo
        {
            Model="STB73_ACE_VX19_Helmet";
            Roles="Sr Aviator";
        };
    };

    class OPTRE_UNSC_Recon_Helmet;

    class STB73_Recon_Helmet_Base: OPTRE_UNSC_Recon_Helmet
    {
        scope=1;
        scopeArsenal=1;
        author=AUTHOR;
        displayName="[73] Recon Helmet [Standard]";
        ace_hearing_protection = 0.80;
        class ItemInfo:ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Face
                {
                    hitpointName="HitFace";
                    armor=LVL3_ARMOR;
                    passThrough=LVL3_PASS;
                };
                class Head
                {
                    hitpointName="HitHead";
                    armor=LVL4_ARMOR;
                    passThrough=LVL4_PASS;
                };
            };
        };
    };
    class STB73_Recon_Helmet_Grayson: STB73_Recon_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author=AUTHOR;
        displayName="[73] Recon Helmet [Grayson]";
        ace_hearing_protection = 0.80;
        hiddenSelectionsTextures[] = {
            "z\73STB\addons\armor\data\helmets\custom\Grayson\graysonhelmmage.paa",
            "optre_unsc_units\army\data\recon_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        class ItemInfo:ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Face
                {
                    hitpointName="HitFace";
                    armor=LVL3_ARMOR;
                    passThrough=LVL3_PASS;
                };
                class Head
                {
                    hitpointName="HitHead";
                    armor=LVL4_ARMOR;
                    passThrough=LVL4_PASS;
                };
            };
        };
    };

    class H_Beret_Colonel;
    class STB73_beret: H_Beret_Colonel
    {
        displayName = "[73] STB Beret";
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\73Beret_co.paa"
        };
    };
    class STB73_aviation_beret: H_Beret_Colonel
    {
        displayName = "[73] VC-713 Beret";
        hiddenSelectionsTextures[]=
        {
            "z\73STB\addons\armor\data\helmets\vc713Beret_co.paa"
        };
    };

    class NVGoggles;
    class OPTRE_NVG : NVGoggles
    {
        hoa_sling_slingWithHelmet = 0;
        model="";
    };
    class OPTRE_NVGT_C : NVGoggles
    {
        hoa_sling_slingWithHelmet = 0;
        model="";
    };

    class UavTerminal_base;
    class InventoryUavTerminalItem_Base_F;
	class TCP_TACPAD: UavTerminal_base
	{
		author="$STR_TCP_Data_Author";
		dlc="TCP";
		scope=2;
		class Library
		{
			artist="Hawkinism & tScar";
			libTextDesc="$STR_TCP_Weapons_Equipment_TACPAD_TACPAD_description";
		};
		displayName="$STR_TCP_Weapons_Equipment_TACPAD_displayName";
		descriptionShort="$STR_TCP_Weapons_Equipment_TACPAD_descriptionShort";
		picture="\TCP\Weapons\Equipment\TACPAD\data\ui\icon_TACPAD_CA.paa";
		model="\TCP\Weapons\Equipment\TACPAD\tacpad.p3d";
        ctab_devicetype=3;
        simulation="ItemGPS";
        class ItemInfo: InventoryUavTerminalItem_Base_F
		{
			side=1;
            mass=20;
			createConnectionRadius=5;
		};
	};
};
