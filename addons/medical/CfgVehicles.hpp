class CfgVehicles {
	class ACE_morphineItem;
	class OPTRE_BiofoamItem;
	class OPTRE_MediGelItem;
	class ACE_epinephrineItem;
	class ACE_adenosineItem;

	class STB73_MorphineItem: ACE_morphineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Polypseudomorphine";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_Morphine
			{
				name="STB73_Morphine";
				count=1;
			};
		};
		mass=1;
	};
	class STB73_adenosineItem: ACE_adenosineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Narcolytic Metabolase";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_adenosine
			{
				name="STB73_adenosine";
				count=1;
			};
		};
		mass=1;
	};
	class STB73_BiofoamItem: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_Biofoam
			{
				name="STB73_Biofoam";
				count=1;
			};
		};
		mass=35;
	};
	class STB73_MediGelItem: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_Medigel
			{
				name="STB73_Medigel";
				count=1;
			};
		};
		mass=35;
	};
	class STB73_BiofoamItem_Light: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_Biofoam_Light
			{
				name="STB73_Biofoam_Light";
				count=1;
			};
		};
		mass=2;
	};
	class STB73_MediGelItem_Light: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_Medigel_Light
			{
				name="STB73_Medigel_Light";
				count=1;
			};
		};
		mass=2;
	};
	class Item_Base_F;
	class ACE_tourniquetItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Suit Constriction System";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=1;
			};
		};
		mass=0;
	};
	class STB73_epinephrineItem: ACE_epinephrineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Stim-Pak";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_STB73_epinephrine
			{
				name="STB73_epinephrine";
				count=1;
			};
		};
		mass=1;
	};
};
