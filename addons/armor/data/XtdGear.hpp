class XtdGearModels
{
    class CfgWeapons
    {
        class STB73_ACE_M43D_Vest
        {
            label = "[73] M43D Vest";
            author = AUTHOR;
            options[]=
            {
                "Billet",
                "Roles",
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
                    "Company",
                    "Alpha1"
                };
            };
            class Roles
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
        };
        class STB73_ACE_ECH55D_Helmet
        {
            label = "[73] ECH55D Helmet";
            author = AUTHOR;
            options[]=
            {
                "Variant"
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

        class TCP_ACE_CBUU
        {
            label = "[73] CBUU";
            author = AUTHOR;
            options[]=
            {
                "Camo",
                "Top",
                "Shirt",
                "Pants",
                "Sleeves",
                "Collar",
                "Gloves"
            };
            class Camo
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Camo";
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
            class Top
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Top";
                values[]=
                {
                    "Field Top",
                    "Tac-Shirt",
                    "T-Shirt"
                };
            };
            class Shirt
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Shirt";
                values[]=
                {
                    "Tucked",
                    "Untucked"
                };
            };
            class Pants
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Pants";
                values[]=
                {
                    "Bloused",
                    "Untucked"
                };
            };
            class Sleeves
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Sleeves";
                values[]=
                {
                    "Full-Roll",
                    "Half-Roll",
                    "Quarter-Roll",
                    "Slim-Sleeve"
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
                    "Zipped",
                    "Unzipped"
                };
            };
            class Gloves
            {
                alwaysSelectable=1;
                changeingame=0;
                changedelay=0;
                label= "Gloves";
                values[]=
                {
                    "On",
                    "Off"
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
        class STB73_new_uniforms {
            label="[73] CBBU Uniform";
            options[] = {"camo", "sleeves","gloves","shirt","Pants","zip"};
            class camo {
                alwaysSelectable = 1;
                label="Camouflage";
                values[]={"Urban","Woodland","Arctic","Arid","Tropic","Black","Grey","Green","Olive","Tan","White"};
                class Urban {label="Urban";};
                class Woodland {label="Woodland";};
                class Arctic {label="Arctic";};
                class Arid {label="Arid";};
                class Tropic {label="Tropic";};
                class Black {label="Black";};
                class Grey {label="Grey";};
                class Green {label="Green";};
                class Olive {label="Olive";};
                class Tan {label="Tan";};
                class White {label="White";};
            };
            class sleeves {
                alwaysSelectable = 1;
                label="Sleeve Type";
                values[]={"Tucked","Full","QuarterRoll","HalfRoll","SlimSleeve","Untucked"};
                class Tucked  {label="Tucked";};
                class Full  {label="Full";};
                class QuarterRoll {label="Quarter Roll";};
                class HalfRoll {label="Half Roll";};
                class SlimSleeve {label="Slim Sleeve";};
                class Untucked  {label="Untucked";};
            };
            class gloves {
                alwaysSelectable = 1;
                label="Gloves";
                values[]={"Yes","No"};
                class Yes  {label="Gloves On";};
                class No {label="No Gloves";};
            };
            class shirt {
                alwaysSelectable = 1;
                label="Shirt Type";
                values[]={"TShirt","TacShirt","FieldTop"};
                class TShirt  {label="T-shirt";};
                class TacShirt {label="Tac-Shirt";};
                class FieldTop {label="Field Top";};
            };
            class Pants {
                alwaysSelectable=1;
                label="Pants Type";
                values[]={"Bloused","Loose"};
                class Bloused {label="Bloused";};
                class Loose {label="Loose";};
            };
            class zip {
                alwaysSelectable=1;
                label="Zipper Type";
                values[]={"Zipped","Unzipped"};
                class Zipped {label="Zipped Up";};
                class Unzipped {label="Unzipped";};
            };
        };

        class 73_ACE_CH252D_Helmet_STB
		{
			label= "[73] CH252D Helmet [STB]";
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
					"Recruit",
					"Standard",
					"SORC",
					"Leadership",
					"Officer"
				};
			};
		};
		class 73_ACE_CH252D_Helmet_ACo
		{
			label= "[73] CH252D Helmet [ACo]";
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
					"Recruit",
					"Standard",
					"SORC",
					"Leadership",
					"Officer"
				};
			};
		};
		class 73_ACE_cus_CH252D_Helmet
		{
			label= "[73] CH252D Helmet [Custom]";
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
                label= "Variant";
                values[]=
				{
				    "Smith",
				    "Price",
					"Salmon",
					"Winters",
					"Metal",
					"Solaman",
					"Vargas",
					"Mendez",
					"Mac",
					"Bear",
					"Dawn",
					"Grayson",
					"Pug",
					"Pinky",
					"Brooks",
					"Norwood",
					"Riverwood",
					"Wolf"
				};
			};
		};
		class 73_ACE_M52_Armor_STB
		{
			label= "[73] M52 Vest";
			author="73rd S-4 Team";
			options[] = 
			{
				"Billet",
				"MOS"
			};
			class Billet
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Billet";
                values[]= 
				{
					"Recruit",
					"Standard",
					"Command"
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"Medic",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_M52_Armor_Cus
		{
			label= "[73] M52 Vest Customs";
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
                label= "Variant";
                values[]=
				{
					"Smith",
					"Salmon"
				};
			};
		};
		class 73_ACE_M52_Armor_ACo
		{
			label= "[73] M52 Vest [ACo]";
			author="73rd S-4 Team";
			options[] = 
			{
				"Platoon",
				"Billet",
				"MOS"
			};
			class Platoon
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Platoon";
                values[]= 
				{
					"Company",
					"1st Platoon",
					"2nd Platoon",
					"3rd Platoon"
				};
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
					"SORC",
					"PltCmd",
					"CmdSORC",
					"ACoCmd"
				};
			};
			class MOS
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "MOS";
				values[]=
				{
					"Basic",
					"SORC",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
		};
		class 73_ACE_ODST_BDU
		{
			label= "[73] M52D BDU";
			author="73rd S-4 Team";
			options[] =
			{
				"Camo",
				"Collar"
			};
			class Camo
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Camo";
                values[]=
				{
					"Urban",
					"Woodland",
					"Arid",
					"Winter"
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
					"On",
					"Off"
				};
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
	};
};

class XtdGearInfos
{
    class CfgWeapons
    {
    #include "CBUU.hpp"
    NEW_UNIFROM_GI(Urban)
    NEW_UNIFROM_GI(Woodland)
    NEW_UNIFROM_GI(Arctic)
    NEW_UNIFROM_GI(Arid)
    NEW_UNIFROM_GI(Tropic)
    NEW_UNIFROM_GI(Black)
    NEW_UNIFROM_GI(Grey)
    NEW_UNIFROM_GI(Green)
    NEW_UNIFROM_GI(Olive)
    NEW_UNIFROM_GI(Tan)
    NEW_UNIFROM_GI(White)
    };

};
