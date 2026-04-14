class XtdGearModels
{
    class CfgWeapons 
    {
		class STB73_ACE_M45
		{
			label= "[73] M45 Tactical Shotgun";
			author="73rd S-4 Team";
			options[] = 
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variants";
                values[]= 
				{
					"M45",
					"M45A",
					"M45ATAC",
					"M45TAC",
					"M45E"
				};
			};
		};
		class STB73_ACE_MA_AR
		{
			label= "[73] MA Series Assault Rifle";
			author="73rd S-4 Team";
			options[] =
			{
				"variant",
				"grenadeLauncher"
			};
			class variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variants";
                values[]=
				{
					"MA37",
					"MA37K",
					"MA40",
					"MA5A",
					"MA5B",
					"MA5C",
					"MA5K"
				};
			};
			class grenadeLauncher
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label= "Grenade Launcher";
				values[]=
				{
					"None",
					"M301"
				};
			};
		};
		class STB73_ACE_BR
		{
			label= "[73] BR series Battle Rifle";
			author="73rd S-4 Team";
			options[] =
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variants";
                values[]=
				{
					"BR45",
					"BR55",
					"BR55_HB",
					"BR55HBM1_DMR",
					"BR55HBM1_CQC"
				};
			};
		};
		class STB73_ACE_M7
		{
			label= "[73] M7 SMG";
			author="73rd S-4 Team";
			options[] =
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variants";
                values[]=
				{
					"Standard",
					"Salmon",
					"Vargas",
					"Solaman"
				};
			};
		};
	};
	class cfgVehicles
	{
	};
};
