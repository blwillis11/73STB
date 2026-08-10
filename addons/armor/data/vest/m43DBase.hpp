class STB73_M43D_Light_Base : STB73_M43D_Base {
    scope=1;
    scopeArsenal=1;
    displayName = Q([73] M43/D [Light]);
    author=AUTHOR;
    maximumLoad = VEST_MAXLOAD;
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_Light_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light.p3d";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        decalColor="white";
        selectionName="nameM43D";
        selectionRank="rankM43D";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "decals"
    };
    class ItemInfo: ItemInfo {
        hiddenSelections[]=
        {
        "camo",
        "camo1",
        "decals"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light.p3d";
    };
};
class STB73_M43D_Light_1_Base: STB73_M43D_Light_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_1.p3d";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        selectionAffiliation="affiliationLight";
        selectionBloodType="bloodTypeLight";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_1.p3d";
    };
};
class STB73_M43D_Light_1_1_Base: STB73_M43D_Light_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Light_1_2_Base: STB73_M43D_Light_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Light_2_Base: STB73_M43D_Light_1_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_2.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_2.p3d";
    };
};
class STB73_M43D_Light_2_1_Base: STB73_M43D_Light_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Light_2_2_Base: STB73_M43D_Light_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Light_3_Base: STB73_M43D_Light_2_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_3.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_3.p3d";
    };
};
class STB73_M43D_Light_3_1_Base: STB73_M43D_Light_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Light_3_2_Base: STB73_M43D_Light_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Light_4_Base: STB73_M43D_Light_3_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_4.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4";
        class GPS
        {
            class UGPS
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_UGPS=1;
                };
            };
            class TACPAD
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_TACPAD=1;
                };
            };
        };
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristugps",
			"wristtacpad"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light_4.p3d";
    };
};
class STB73_M43D_Light_4_Base_TACPAD: STB73_M43D_Light_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Light_4_Base_UGPS: STB73_M43D_Light_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_Light_4_1_Base: STB73_M43D_Light_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"decals",
			"collararmored",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_Light_4_1_Base_TACPAD: STB73_M43D_Light_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Light_4_1_Base_UGPS: STB73_M43D_Light_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_Light_4_2_Base: STB73_M43D_Light_4_Base
{
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_2";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"decals",
			"collarflak",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_Light_4_2_Base_TACPAD: STB73_M43D_Light_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Light_4_2_Base_UGPS: STB73_M43D_Light_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Light_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};





class STB73_M43D_Pads_1_Base: STB73_M43D_Light_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_1.p3d";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        selectionAffiliation="affiliationPads";
        selectionBloodType="bloodTypePads";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_1.p3d";
    };
};
class STB73_M43D_Pads_1_1_Base: STB73_M43D_Pads_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Pads_1_2_Base: STB73_M43D_Pads_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Pads_2_Base: STB73_M43D_Pads_1_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_2.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_2.p3d";
    };
};
class STB73_M43D_Pads_2_1_Base: STB73_M43D_Pads_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Pads_2_2_Base: STB73_M43D_Pads_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Pads_3_Base: STB73_M43D_Pads_2_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_3.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_3.p3d";
    };
};
class STB73_M43D_Pads_3_1_Base: STB73_M43D_Pads_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_Pads_3_2_Base: STB73_M43D_Pads_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_Pads_4_Base: STB73_M43D_Pads_3_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_4.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4";
        class GPS
        {
            class UGPS
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_UGPS=1;
                };
            };
            class TACPAD
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_TACPAD=1;
                };
            };
        };
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristugps",
			"wristtacpad"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Pads_4.p3d";
    };
};
class STB73_M43D_Pads_4_Base_TACPAD: STB73_M43D_Pads_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Pads_4_Base_UGPS: STB73_M43D_Pads_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_Pads_4_1_Base: STB73_M43D_Pads_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"decals",
			"collararmored",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_Pads_4_1_Base_TACPAD: STB73_M43D_Pads_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Pads_4_1_Base_UGPS: STB73_M43D_Pads_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collararmored",

			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_Pads_4_2_Base: STB73_M43D_Pads_4_Base
{
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_2";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"decals",
			"collarflak",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_Pads_4_2_Base_TACPAD: STB73_M43D_Pads_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_Pads_4_2_Base_UGPS: STB73_M43D_Pads_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_Pads_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};















class STB73_M43D_ODST_1_Base: STB73_M43D_Light_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_1.p3d";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        selectionAffiliation="affiliationODST";
        selectionBloodType="bloodTypeODST";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
        "camo3",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_1.p3d";
    };
};
class STB73_M43D_ODST_1_1_Base: STB73_M43D_ODST_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
        "camo3",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_ODST_1_2_Base: STB73_M43D_ODST_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
        "camo3",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_ODST_2_Base: STB73_M43D_ODST_1_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_2.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_2.p3d";
    };
};
class STB73_M43D_ODST_2_1_Base: STB73_M43D_ODST_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_ODST_2_2_Base: STB73_M43D_ODST_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_ODST_3_Base: STB73_M43D_ODST_2_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_3.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_3.p3d";
    };
};
class STB73_M43D_ODST_3_1_Base: STB73_M43D_ODST_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_ODST_3_2_Base: STB73_M43D_ODST_3_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_ODST_4_Base: STB73_M43D_ODST_3_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4";
        class GPS
        {
            class UGPS
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_UGPS=1;
                };
            };
            class TACPAD
            {
                indirectCompatibility=2;
                class compatibleItems
                {
                    TCP_TACPAD=1;
                };
            };
        };
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
            "collarflak",
			"wristugps",
			"wristtacpad"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d";
    };
};
class STB73_M43D_ODST_4_Base_TACPAD: STB73_M43D_ODST_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_ODST_4_Base_UGPS: STB73_M43D_ODST_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_ODST_4_1_Base: STB73_M43D_ODST_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
            "camo4",
			"decals",
			"collararmored",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_ODST_4_1_Base_TACPAD: STB73_M43D_ODST_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_ODST_4_1_Base_UGPS: STB73_M43D_ODST_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
        "camo4",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_ODST_4_2_Base: STB73_M43D_ODST_4_Base
{
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_2";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
        "camo4",
			"decals",
			"collarflak",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_ODST_4_2_Base_TACPAD: STB73_M43D_ODST_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_ODST_4_2_Base_UGPS: STB73_M43D_ODST_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_ODST_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};


















class STB73_M43D_BREACHER_1_Base: STB73_M43D_Light_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_1_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_1.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_1.p3d";
    };
};
class STB73_M43D_BREACHER_1_1_Base: STB73_M43D_BREACHER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_1_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_BREACHER_1_2_Base: STB73_M43D_BREACHER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_1_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_BREACHER_2_Base: STB73_M43D_BREACHER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_2_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_2.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_2.p3d";
    };
};
class STB73_M43D_BREACHER_2_1_Base: STB73_M43D_BREACHER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_2_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_BREACHER_2_2_Base: STB73_M43D_BREACHER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_2_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_BREACHER_3_Base: STB73_M43D_BREACHER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_3_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_3.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_3.p3d";
    };
};
class STB73_M43D_BREACHER_3_1_Base: STB73_M43D_BREACHER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_3_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_BREACHER_3_2_Base: STB73_M43D_BREACHER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_3_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_BREACHER_4_Base: STB73_M43D_BREACHER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_4_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_4.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4";
        class GPS
        {
            class UGPS
            {
                class compatibleItems
                {
                    TCP_UGPS=1;
                };
            };
            class TACPAD
            {
                class compatibleItems
                {
                    TCP_TACPAD=1;
                };
            };
        };
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristugps",
			"wristtacpad"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_BREACHER_4.p3d";
    };
};
class STB73_M43D_BREACHER_4_Base_TACPAD: STB73_M43D_BREACHER_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_BREACHER_4_Base_UGPS: STB73_M43D_BREACHER_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_BREACHER_4_1_Base: STB73_M43D_BREACHER_4_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_4_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"decals",
			"collararmored",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_BREACHER_4_1_Base_TACPAD: STB73_M43D_BREACHER_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_BREACHER_4_1_Base_UGPS: STB73_M43D_BREACHER_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_BREACHER_4_2_Base: STB73_M43D_BREACHER_4_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\UI\M43D_BREACHER_4_2_CA.paa";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_2";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
            "camo4",
            "camo5",
			"decals",
			"collarflak",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_BREACHER_4_2_Base_TACPAD: STB73_M43D_BREACHER_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_BREACHER_4_2_Base_UGPS: STB73_M43D_BREACHER_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_BREACHER_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};














class STB73_M43D_SHARPSHOOTER_1_Base: STB73_M43D_Light_Base
{
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_1.p3d";
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_1.p3d";
    };
};
class STB73_M43D_SHARPSHOOTER_1_1_Base: STB73_M43D_SHARPSHOOTER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_1_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
			"camo3",
			"camo4",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_1_2_Base: STB73_M43D_SHARPSHOOTER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_1_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
			"camo3",
			"camo4",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_2_Base: STB73_M43D_SHARPSHOOTER_1_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_2_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_2.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_2.p3d";
    };
};
class STB73_M43D_SHARPSHOOTER_2_1_Base: STB73_M43D_SHARPSHOOTER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_2_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_2_2_Base: STB73_M43D_SHARPSHOOTER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_2_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_3_Base: STB73_M43D_SHARPSHOOTER_2_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_3_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_3.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_3.p3d";
    };
};
class STB73_M43D_SHARPSHOOTER_3_1_Base: STB73_M43D_SHARPSHOOTER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_3_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_3_2_Base: STB73_M43D_SHARPSHOOTER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_3_2_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_Base: STB73_M43D_SHARPSHOOTER_3_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_4_CA.paa";
    model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_4.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4";
        class GPS
        {
            class UGPS
            {
                class compatibleItems
                {
                    TCP_UGPS=1;
                };
            };
            class TACPAD
            {
                class compatibleItems
                {
                    TCP_TACPAD=1;
                };
            };
        };
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristugps",
			"wristtacpad"
        };
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_SHARPSHOOTER_4.p3d";
    };
};
class STB73_M43D_SHARPSHOOTER_4_Base_TACPAD: STB73_M43D_SHARPSHOOTER_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_Base_UGPS: STB73_M43D_SHARPSHOOTER_4_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_1_Base: STB73_M43D_SHARPSHOOTER_4_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_4_1_CA.paa";
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristugps",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
            "camo4",
            "camo5",
			"decals",
			"collararmored",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_SHARPSHOOTER_4_1_Base_TACPAD: STB73_M43D_SHARPSHOOTER_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_1_Base_UGPS: STB73_M43D_SHARPSHOOTER_4_1_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collararmored",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_1";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collararmored",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_2_Base: STB73_M43D_SHARPSHOOTER_4_Base
{
    picture="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\ui\Black\icon_vest_M43D_SHARPSHOOTER_4_2_CA.paa";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_2";
    };
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak",
        "wristugps",
        "wristtacpad"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
            "camo4",
            "camo5",
			"decals",
			"collarflak",
			"wristugps",
			"wristtacpad"
		};
    };
};
class STB73_M43D_SHARPSHOOTER_4_2_Base_TACPAD: STB73_M43D_SHARPSHOOTER_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristugps"
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristugps"
        };
    };
};
class STB73_M43D_SHARPSHOOTER_4_2_Base_UGPS: STB73_M43D_SHARPSHOOTER_4_2_Base
{
    hiddenSelections[]=
    {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "decals",
        "collarflak",
        "wristdefaultl",
        "wristtacpad"
    };
    class TCP_equipmentTypes
    {
        baseEquipment="STB73_M43D_SHARPSHOOTER_4_2";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "decals",
            "collarflak",
			"wristdefaultl",
			"wristtacpad"
        };
    };
};