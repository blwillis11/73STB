class CfgWeapons {
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;

	class ACE_splint: ACE_ItemCore
    {
        displayName="[73] Bone-Knitting Polymer";
    };
	class STB73_Morphine: ACE_Morphine
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Polypseudomorphine";
		picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model="\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort="A sedative that numbs pain in very small doses.";
		descriptionUse="Injection eases the pain of the patient.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class ACE_adenosine;
	class STB73_adenosine: ACE_adenosine
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Narcolytic Metabolase";
		descriptionShort="Consumes analgesic agents in the patient.";
		descriptionUse="Injection will help wake someone up.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class ACE_bloodIV;
	class STB73_PolyHemoglobinIV_2000: ACE_bloodIV
    {
        scope=2;
        displayName="[73] 2000cc Polymerized Hemoglobin";
        descriptionShort="2000cc of Poly-Hemo";
        descriptionUse="Gives Poly-Hemo (2000cc)";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=12;
        };
    };
	class STB73_PolyHemoglobinIV_1000: ACE_bloodIV
	{
		scope=2;
		displayName="[73] 1000cc Polymerized Hemoglobin";
		descriptionShort="1000cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (1000cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=6;
		};
	};
	class ACE_bloodIV_500;
	class STB73_PolyHemoglobinIV_500: ACE_bloodIV_500
	{
		scope=2;
		displayName="[73] 500cc Polymerized Hemoglobin";
		descriptionShort="500cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (500cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class ACE_bloodIV_250;
	class STB73_PolyHemoglobinIV_250: ACE_bloodIV_250
	{
		scope=2;
		displayName="[73] 250cc Polymerized Hemoglobin";
		descriptionShort="250cc of Poly-Hemo";
		descriptionUse="Gives Poly-Hemo (250cc)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1.5;
		};
	};
	class OPTRE_Biofoam;
	class STB73_MedKit: OPTRE_Biofoam
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Medkit";
		picture="\OPTRE_weapons\items\icons\medkit.paa";
		model="\OPTRE_Weapons\items\MedKit.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=32;
		};
	};
	class STB73_Biofoam: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class OPTRE_Medigel;
	class STB73_Medigel: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Optican Medigel";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class STB73_Biofoam_Light: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Light Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class STB73_Medigel_Light: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Light Optican Medigel";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_tourniquet: ACE_ItemCore
	{
		scope=2;
		displayName="[73] Suit Constriction System";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0;
		};
	};
	class ACE_epinephrine;
    class STB73_epinephrine: ACE_epinephrine
    {
        author="73rd S-4 Team";
        displayName="[73] Stim-Pak";
        descriptionShort="A Strong stimulant.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=0.1;
        };
    };
};
