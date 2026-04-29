class TCP_H_Helmet_CH43A_Olive;
class TCP_H_Helmet_CH43A_Olive_ChinstrapOffset;


class OCLF_H_Helmet_CH43A_Standard: TCP_H_Helmet_CH43A_Olive
{
    author=AUTHOR;
    scope=1;
    displayName="[OCLF] Helmet CH43A (Standard)";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        decalColor="black";
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Standard";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\standard\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Standard_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    author=AUTHOR;
    scope=1;
    displayName="[OCLF] Helmet CH43A (Standard)";
    class TCP_uniformDecals: TCP_uniformDecals
    {
        decalColor="white";
    };
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Standard";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\standard\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Arctic: OCLF_H_Helmet_CH43A_Standard
{
    displayName="[OCLF] Helmet CH43A (Arctic)";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Arctic";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\arctic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Arctic_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    displayName="[OCLF] Helmet CH43A (Arctic)";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Arctic";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\arctic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Tropic: OCLF_H_Helmet_CH43A_Standard
{
    displayName="[OCLF] Helmet CH43A (Tropic)";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Tropic";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\tropic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};
class OCLF_H_Helmet_CH43A_Tropic_ChinstrapOffset: TCP_H_Helmet_CH43A_Olive_ChinstrapOffset
{
    displayName="[OCLF] Helmet CH43A (Tropic)";
    class TCP_equipmentTypes: TCP_equipmentTypes
    {
        baseEquipment="OCLF_H_Helmet_CH43A_Tropic";
    };
    hiddenSelectionsTextures[]=
    {
        QP(data\headgear\tropic\helmet_CH43A_CO.paa),
        QP(data\vest\vest_M43_DecalSheet_CA.paa)
    };
    class ItemInfo:ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class Head
            {
            hitpointName="HitHead";
            armor=10;
            passThrough=0.4;
            };
        };
    };
};