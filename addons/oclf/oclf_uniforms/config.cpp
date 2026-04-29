class CfgPatches
{
    class STB73_OCLF_Uniforms
    {
        authors[] = {"B. Salmon"};
        name = "Outer Colony Liberation Front - Uniforms";
        
        units[]=
        {
        };
        weapons[]=
        {
        };
        
        requiredVersion = "2.20.153649";
        requiredAddons[] =
        {
            "STB73_OCLF",
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
	class TCP_equipmentTypes;
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base;
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base;

    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Standard)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arid)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
        };
    };
    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic: TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
        };
        class TCP_equipmentTypes: TCP_equipmentTypes
        {
            baseEquipment="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
        };
    };


    class OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard: TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Standard, Unzipped)";
        scope = 2;
        scopeCurator = 2;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass="OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
        };
    };
};
class CfgVehicles
{
	class TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base;
	class TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base;

    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Pants_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Standard";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Woodland)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_FieldTop_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_Pants_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\woodland\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Woodland";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arid)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_FieldTop_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_Pants_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arid\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arid";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Arctic)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_FieldTop_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_Pants_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\arctic\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Arctic";
    };
    class OCLF_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic: TCP_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Base
    {
        displayName="[OCLF] Combat Uniform (Tropic)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
        {
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_FieldTop_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_Pants_CO.paa",
            "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\tropic\CBUU_Gloves_CO.paa"
        };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Kneepads_Tropic";
    };


    class OCLF_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard: TCP_B_CBUU_FieldTop_QuarterRoll_Unzipped_Base
    {
        displayName="[OCLF] Combat Uniform (Standard, Unzipped)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelectionsTextures[]=
            {
                "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_FieldTop_CO.paa",
                "\z\73STB\addons\oclf\oclf_uniforms\data\uniforms\standard\CBUU_Pants_CO.paa"
            };
        uniformClass="OCLF_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_Standard";
    };
};