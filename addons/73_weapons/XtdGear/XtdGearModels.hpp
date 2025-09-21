class XtdGearModels
{
    class CfgWeapons 
    {
		class 73_ACE_M45
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
		};class 73_ACE_M7
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
