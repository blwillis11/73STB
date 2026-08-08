class CfgWeapons
{
    class VestItem;
    class ItemInfo;
    class TCP_V_M43A_BaseSec_3_Black;
    class TCP_V_M43D_Light_Black;
    class ItemCore;
    class UniformItem;
    class TCP_equipmentTypes;
    class TCP_uniformDecals;

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
        };
    };
    
    NEW_VEST_43A(Aviator)

    NEW_VEST_M43D_NONE(Black,Company)
    NEW_VEST_M43D_LIGHT(Black,Company)
    NEW_VEST_M43D_PADS(Black,Company)
    NEW_VEST_M43D_ODST(Black,Company)
    NEW_VEST_M43D_SHARPSHOOTER(Black,Company)
    NEW_VEST_M43D_BREACHER(Black,Company)

    NEW_VEST_M43D_NONE(Black,Standard)
    NEW_VEST_M43D_LIGHT(Black,Standard)
    NEW_VEST_M43D_PADS(Black,Standard)
    NEW_VEST_M43D_ODST(Black,Standard)
    NEW_VEST_M43D_SHARPSHOOTER(Black,Standard)
    NEW_VEST_M43D_BREACHER(Black,Standard)

    NEW_VEST_M43D_NONE(Black,Atlas1)
    NEW_VEST_M43D_LIGHT(Black,Atlas1)
    NEW_VEST_M43D_PADS(Black,Atlas1)
    NEW_VEST_M43D_ODST(Black,Atlas1)
    NEW_VEST_M43D_SHARPSHOOTER(Black,Atlas1)
    NEW_VEST_M43D_BREACHER(Black,Atlas1)
    
    NEW_VEST_M43D_NONE(Black,SORC)
    NEW_VEST_M43D_LIGHT(Black,SORC)
    NEW_VEST_M43D_PADS(Black,SORC)
    NEW_VEST_M43D_ODST(Black,SORC)
    NEW_VEST_M43D_SHARPSHOOTER(Black,SORC)
    NEW_VEST_M43D_BREACHER(Black,SORC)
    


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

    class STB73_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic : TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Kneepads_Base
    {
        scope=1;
        scopeArsenal=1;
        CBRN_protectionLevel="4";
        displayName = QUOTE([73] Medic CBUU SHIRT Full Gloves Bloused Kneepads); 
        ACE_GForceCoef=0.4;
        class ItemInfo : UniformItem {
            uniformClass = QUOTE(STB73_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
            containerClass="Supply50";
            mass=1;
            uniformType = "Neopren";
            allowedSlots[]={"701","801","901"};
            armor=20;
        };
        hiddenSelectionsTextures[] = {
            QP(data\uniform\Medic\CBUU_FieldTop_CO.paa)
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment=QUOTE(STB73_U_B_FieldTop_Full_Gloves_Bloused_Kneepads_Medic);
        };
    };

    class TCP_V_M43A_Pads_2_Base;
    class STB73_V_M43A_Pads_2_Medic: TCP_V_M43A_Pads_2_Base
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([10MEB] M43/A Medic);
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="black";
		};
		hiddenSelectionsTextures[]=
		{
			Q(STB73_TEXPATH(vest,medic\vest_M43A_01_CO.paa)),
			Q(STB73_TEXPATH(vest,medic\vest_M43A_02_CO.paa)),
			Q(STB73_TEXPATH(vest,medic\vest_M43A_03_CO.paa)),
            Q(STB73_TEXPATH(vest,medic\vest_M43_DecalSheet_CA.paa))
        };
	};

    class TCP_H_Helmet_CH43A_White;
    class TCP_H_Helmet_CH43A_White_ChinstrapOffset;
    class STB73_H_Helmet_CH43A_Medic: TCP_H_Helmet_CH43A_White
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([73] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="STB73_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			Q(STB73_TEXPATH(helmets,medic\helmet_CH43A_CO.paa)),
			Q(STB73_TEXPATH(vest,medic\vest_M43_DecalSheet_CA.paa))
		};
	};
	class STB73_H_Helmet_CH43A_Medic_ChinstrapOffset: TCP_H_Helmet_CH43A_White_ChinstrapOffset
	{
		author=AUTHOR;
		scope=1;
		displayName=Q([73] CH43A Helmet Medic);
		picture="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\data\ui\White\icon_headgear_CH43A_CA.paa";
		class TCP_uniformDecals: TCP_uniformDecals
		{
			decalColor="white";
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="STB73_H_Helmet_CH43A_Medic";
		};
		hiddenSelectionsTextures[]=
		{
			Q(STB73_TEXPATH(helmets,medic\helmet_CH43A_CO.paa)),
			Q(STB73_TEXPATH(vest,medic\vest_M43_DecalSheet_CA.paa))
		};
	};


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
    
    ECH55D_HELMET(Company,Black,Officer,Standard)
    ECH55D_HELMET(Company,Red,SORC,SORC)
    ECH55D_HELMET(Company,Gold,NCO,Standard)
    ECH55D_HELMET(Company,Silver,Specialist,Standard)
    ECH55D_HELMET(Company,Blue,Enlisted,Standard)

    ECH55D_HELMET(Standard,Black,Officer,Standard)
    ECH55D_HELMET(Standard,Red,SORC,SORC)
    ECH55D_HELMET(Standard,Gold,NCO,Standard)
    ECH55D_HELMET(Standard,Silver,Specialist,Standard)
    ECH55D_HELMET(Standard,Blue,Enlisted,Standard)

    ECH55D_HELMET(Atlas1,Black,Officer,Standard)
    ECH55D_HELMET(Atlas1,Red,SORC,SORC) 
    ECH55D_HELMET(Atlas1,Gold,NCO,Standard)
    ECH55D_HELMET(Atlas1,Silver,Specialist,Standard)
    ECH55D_HELMET(Atlas1,Blue,Enlisted,Standard)

    CUS_ECH55D_HELMET(Dove,Blue)
    CUS_ECH55D_HELMET(Ninja,Silver)
    CUS_ECH55D_HELMET(Ridge,Red)
    CUS_ECH55D_HELMET(Mendez,Gold)
    CUS_ECH55D_HELMET(Stauss,Gold)
    CUS_ECH55D_HELMET(Price,Black)
    CUS_ECH55D_HELMET(Smith,Black)

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
        author="73rd S-4 Team";
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
    };
    class STB73_VX19_Helmet_Senior: STB73_VX19_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author="73rd S-4 Team";
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
