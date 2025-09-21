class XtdGearModels
{
    class CfgWeapons
    {
        class 73_ACE_M43D_Vest
        {
            label = "[73] M43D Vest";
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
                    "ODST",
                    "Sharpshooter",
                    "Breacher"
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
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
    #include "CBUU.hpp"
    };

};