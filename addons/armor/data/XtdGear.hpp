class XtdGearModels
{
    class STB73_CamoBase
	{
		label="Camouflage";
		class Black
		{
			label="$STR_TCP_Data_Black";
			image="#(rgb,8,8,3)color(0.22,0.22,0.22,1)";
		};
		class Brown
		{
			label="$STR_TCP_Data_Brown";
			image="#(rgb,8,8,3)color(0.36,0.29,0.27,1)";
		};
		class Gray
		{
			label="$STR_TCP_Data_Gray";
			image="#(rgb,8,8,3)color(0.33,0.36,0.36,1)";
		};
		class Green
		{
			label="$STR_TCP_Data_Green";
			image="#(rgb,8,8,3)color(0.37,0.42,0.30,1)";
		};
		class Olive
		{
			label="$STR_TCP_Data_Olive";
			image="#(rgb,8,8,3)color(0.31,0.33,0.27,1)";
		};
		class Tan
		{
			label="$STR_TCP_Data_Tan";
			image="#(rgb,8,8,3)color(0.73,0.62,0.50,1)";
		};
		class White
		{
			label="$STR_TCP_Data_White";
			image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
		};
		class Arctic
		{
			label="$STR_TCP_Data_Arctic";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\arctic\fabric.paa";
		};
		class Arid
		{
			label="$STR_TCP_Data_Arid";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\arid\fabric.paa";
		};
		class Tropic
		{
			label="$STR_TCP_Data_Tropic";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tropic\fabric.paa";
		};
		class Tundra
		{
			label="$STR_TCP_Data_Tundra";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tundra\fabric.paa";
		};
		class Urban
		{
			label="$STR_TCP_Data_Urban";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\urban\fabric.paa";
		};
		class Woodland
		{
			label="$STR_TCP_Data_Woodland";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\woodland\fabric.paa";
		};
	};
    class STB73_CamoFabric: STB73_CamoBase
	{
		class Black
		{
			label="$STR_TCP_Data_Black";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\black\fabric.paa";
		};
		class Blue
		{
			label="$STR_TCP_Data_Blue";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\blue\fabric.paa";
		};
		class Gray
		{
			label="$STR_TCP_Data_Gray";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\gray\fabric.paa";
		};
		class Green
		{
			label="$STR_TCP_Data_Green";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\green\fabric.paa";
		};
		class Olive
		{
			label="$STR_TCP_Data_Olive";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\olive\fabric.paa";
		};
		class Red
		{
			label="$STR_TCP_Data_Red";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\red\fabric.paa";
		};
		class Tan
		{
			label="$STR_TCP_Data_Tan";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tan\fabric.paa";
		};
		class White
		{
			label="$STR_TCP_Data_White";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\white\fabric.paa";
		};
		class Arctic: Arctic
		{
		};
		class Arid: Arid
		{
		};
		class Tropic: Tropic
		{
		};
		class Tundra: Tundra
		{
		};
		class Urban: Urban
		{
		};
		class Woodland: Woodland
		{
		};
	};
	class STB73_CamoMetal: STB73_CamoBase
	{
		class Black
		{
			label="$STR_TCP_Data_Black";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\black\metal.paa";
		};
		class Brown
		{
			label="$STR_TCP_Data_Brown";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\brown\metal.paa";
		};
		class Gray
		{
			label="$STR_TCP_Data_Gray";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\gray\metal.paa";
		};
		class Green
		{
			label="$STR_TCP_Data_Green";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\green\metal.paa";
		};
		class Olive
		{
			label="$STR_TCP_Data_Olive";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\olive\metal.paa";
		};
		class Tan
		{
			label="$STR_TCP_Data_Tan";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\tan\metal.paa";
		};
		class White
		{
			label="$STR_TCP_Data_White";
			image="\TCP\Compat_ACEAX\GearInfo\data\camo\white\metal.paa";
		};
	};
    class CfgWeapons
    {
        class STB73_ACE_M43D_Vest
        {
            label = "[73] M43D Vest";
            author = AUTHOR;
            options[]=
            {
                "Billet",
                "Camo",
                "Variant",
				"Collar"
            };
            class Billet
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Billet";
                values[]=
                {
                    "Standard",
                    "Company",
                    "Atlas1",
					"Atlas2",
					"SORC"
                };
            };
            class Camo
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Camo";
                values[]=
                {
                    "Black"
                };
            };
            class Variant
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Variant";
                values[]=
                {
                    "ODST",
                    "Sharpshooter",
                    "Breacher"
                };
            };
            class Collar
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Collar";
                values[]=
                {
                    "None",
                    "Flak",
                    "Armored"
                };
            };
        };
        class STB73_ACE_ECH55D_Helmet
        {
            label = "[73] ECH55D Helmet";
            author = AUTHOR;
            options[]=
            {
                "Billet",
				"Variant"
            };
			class Billet
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Billet";
                values[]=
                {
                    "Standard",
					"Company",
                    "Atlas1",
					"Atlas2"
                };
            };
            class Variant
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Variant";
                values[]=
                {
                    "Officer",
                    "SORC",
                    "NCO",
                    "Enlisted"
                };
            };
        };

        class STB73_ACE_VX19_Helmet
		{
		    label="[73] VX19 Flight Helmet";
			author="73rd S-4 Team";
			options[] =
			{
				"Roles"
			};
			class Roles
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Roles";
		        values[]=
		        {
		            "Aviator",
		            "Sr Aviator"
		        };
		    };
		};

        // Uniforms
        class SleevesBase
		{
			class Full;
			class Quarter;
			class Half;
		};
        class STB73_U_B_CBUU
		{
			label="CBUU";
			author=AUTHOR;
			options[]=
			{
				"camo",
				"top",
				"zipper",
				"sleeves",
				"gloves",
				"blouse",
				"kneepads"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Arctic",
					"Arid",
					"Black",
					"Gray",
					"Green",
					"Olive",
					"Tan",
					"Tropic",
					"Tundra",
					"Urban",
					"White",
					"Woodland"
				};
			};
			class top
			{
				label="Top";
				values[]=
				{
					"FieldTop",
					"TacShirt"
				};
				class FieldTop
				{
					label="Field Top";
				};
				class TacShirt
				{
					label="Tac-Shirt";
				};
			};
			class tuck
			{
				label="Tuck";
				values[]=
				{
					"Tucked",
					"Untucked"
				};
				changeInGame=1;
				class Tucked
				{
					label="Tucked";
					actionLabel="Tuck shirt";
				};
				class Untucked
				{
					label="Untucked";
					actionLabel="Untuck shirt";
				};
			};
			class zipper
			{
				label="Zipper";
				values[]=
				{
					"Zipped",
					"Unzipped"
				};
				changeInGame=1;
				class Zipped
				{
					label="Zipped";
					actionLabel="Zip shirt";
				};
				class Unzipped
				{
					label="Unzipped";
					actionLabel="Unzip shirt";
				};
			};
			class sleeves: SleevesBase
			{
				label="Sleeves";
				values[]=
				{
					"Full",
					"QuarterRoll",
					"HalfRoll"
				};
				class Full: Full
				{
					label="Full";
				};
				class QuarterRoll: Quarter
				{
					label="Quarter";
				};
				class HalfRoll: Half
				{
					label="Half";
				};
			};
			class gloves
			{
				label="Gloves";
				values[]=
				{
					"None",
					"Gloves"
				};
				changeInGame=1;
				class None
				{
					label="None";
					actionLabel="Remove gloves";
				};
				class Gloves
				{
					label="Gloves";
					actionLabel="Put on gloves";
				};
			};
			class blouse
			{
				label="Boot Blousings";
				values[]=
				{
					"Bloused",
					"Unbloused"
				};
				changeInGame=1;
				class Bloused
				{
					label="Bloused";
					actionLabel="Blouse boots";
				};
				class Unbloused
				{
					label="Unbloused";
					actionLabel="Unblouse boots";
				};
			};
			class kneepads
			{
				label="Kneepads";
				values[]=
				{
					"None",
					"Kneepads"
				};
				changeInGame=1;
				class None
				{
					label="None";
					actionLabel="Remove kneepads";
				};
				class Kneepads
				{
					label="Kneepads";
					actionLabel="Put on kneepads";
				};
			};
		};
		class STB73_U_B_TShirt: STB73_U_B_CBUU
		{
			options[]=
			{
				"camo",
				"tuck",
				"gloves",
				"blouse",
				"kneepads"
			};
		};
    };
    class cfgVehicles
	{
		class STB73_ACE_Rucksack
		{
			label = "[73] Rucksack";
			author="73rd S-4 Team";
			options[] = 
			{
				"Role"
			};
			class Role
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Role";
				values[] =
				{
					"Standard",
					"Medic",
					"Heavy",
                    "EOD",
					"RTO",
					"Invis",
					"Invis RTO"
				};
			};
		};
        class STB73_B_Ammo_Bearer_1
		{
			label="Ammo Bearer 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Assaulter_1
		{
			label="Assaulter 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Assaulter_2
		{
			label="Assaulter 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Autorifleman_1
		{
			label="Autorifleman 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Autorifleman_2
		{
			label="Autorifleman 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Breacher_1
		{
			label="Breacher 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Engineer_1
		{
			label="Engineer 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Grenadier_1
		{
			label="Grenadier 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Grenadier_2
		{
			label="Grenadier 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_M2_Buttpack
		{
			label="M2 Buttpack";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
		};
		class STB73_B_EM39_MLBE_Hardcase
		{
			label="EM39 M/LBE Hardcase";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"roll",
				"pouch_level"
			};
			class roll
			{
				label="Sleeping Roll";
				values[]=
				{
					"None",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class Roll
				{
					label="Roll";
				};
			};
			class pouch_level
			{
				label="Pouch Level";
				values[]=
				{
					"None",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
		};
		class STB73_B_M43_Medium_Rucksack
		{
			label="M43 Medium Rucksack";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"roll",
				"pouch_level"
			};
			class camo: STB73_CamoMetal
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class roll
			{
				label="Sleeping Roll";
				values[]=
				{
					"None",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class Roll
				{
					label="Roll";
				};
			};
			class pouch_level
			{
				label="Pouch Level";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Assault
				{
					label="Assault";
				};
				class Engineer
				{
					label="Engineer";
				};
				class Field
				{
					label="Field";
				};
				class Medical
				{
					label="Medical";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
		};
		class STB73_B_Marksman_1
		{
			label="Marksman 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Marksman_2
		{
			label="Marksman 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Marksman_3
		{
			label="Marksman 3";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Medic_1
		{
			label="Medic 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White",
					"Medic"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Medic_2
		{
			label="Medic 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_NCO_1
		{
			label="NCO 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_NCO_2
		{
			label="NCO 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_NCO_3
		{
			label="NCO 3";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_1
		{
			label="Rifleman 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_2
		{
			label="Rifleman 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_3
		{
			label="Rifleman 3";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_4
		{
			label="Rifleman 4";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_5
		{
			label="Rifleman 5";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_6
		{
			label="Rifleman 6";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Rifleman_7
		{
			label="Rifleman 7";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_RTO_1
		{
			label="RTO 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Sapper_1
		{
			label="Sapper 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Sniper_1
		{
			label="Sniper 1";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Sniper_2
		{
			label="Sniper 2";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"camo",
				"backpack",
				"backpackPouchLevel",
				"buttpack"
			};
			class camo: STB73_CamoFabric
			{
				values[]=
				{
					"Black",
					"Olive",
					"Tan",
					"White"
				};
			};
			class backpack
			{
				label="Backpack";
				values[]=
				{
					"None",
					"M43_Medium_Rucksack",
					"EM39_MLBE_Hardcase"
				};
				class None
				{
					label="None";
				};
				class M43_Medium_Rucksack
				{
					label="M43 Medium Rucksack";
				};
				class EM39_MLBE_Hardcase
				{
					label="EM39 M/LBE Hard Case";
				};
			};
			class backpackPouchLevel
			{
				label="Backpack Pouches";
				values[]=
				{
					"None",
					"Assault",
					"Engineer",
					"Field",
					"Medical",
					"Patrol"
				};
				class None
				{
					label="None";
				};
				class Patrol
				{
					label="Patrol";
				};
			};
			class buttpack
			{
				label="Buttpack";
				values[]=
				{
					"None",
					"M2_Buttpack",
					"M35_Buttpack",
					"EM39_Buttpack",
					"Roll"
				};
				class None
				{
					label="None";
				};
				class M2_Buttpack
				{
					label="M2 Buttpack";
				};
				class M35_Buttpack
				{
					label="M35 Hydration Pack";
				};
				class EM39_Buttpack
				{
					label="EM39 M/LBE Buttpack";
				};
				class Roll
				{
					label="Sleeping Roll";
				};
			};
		};
		class STB73_B_Utility_Rig
		{
			label="Utility Rig";
			author="$STR_TCP_Data_Author";
			options[]=
			{
				"attachments",
				"bandolier"
			};
			class attachments
			{
				label="Attachments";
				values[]=
				{
					"None",
					"Sapper",
					"Grenadier"
				};
				alwaysSelectable=1;
				class None
				{
					label="None";
				};
				class Sapper
				{
					label="Sapper";
				};
				class Grenadier
				{
					label="Grenadier";
				};
			};
			class bandolier
			{
				label="Bandolier";
				values[]=
				{
					"None",
					"Both",
					"Left",
					"Right"
				};
				class None
				{
					label="None";
				};
				class Both
				{
					label="Both";
				};
				class Left
				{
					label="Left";
				};
				class Right
				{
					label="Right";
				};
			};
		};
	};
};
class XtdGearInfos
{
    class CfgWeapons
    {
    #include "cfg/Uniforms.hpp"
    };
};
