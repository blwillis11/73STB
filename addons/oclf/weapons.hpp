class STB73_MA37;
class STB73_MA37_TCP_optic_M11VERO: STB73_MA37
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M11VERO";
         };
    };
};

class STB73_MA37GL;
class STB73_MA37GL_TCP_optic_M11VERO: STB73_MA37GL
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M11VERO";
         };
    };
};
class STB73_M41_SSR;
class STB73_M41_SSR_AA : STB73_M41_SSR
{
    displayName = "[CENTCOM] M41 SSR MAV/AW AA";
    baseWeapon="STB73_M41_SSR_AA";
    scope = 1;
    scopeArsenal = 1;
    magazines[]={
        "STB73_Twin_HEAA",
    };
    magazineWell[] = {"STB73_rockets"};
    hiddenSelections[]= {
        "camo",
        "camo_tubes",
        "camo_details"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\rockets\data\launcher_co.paa",
        "optre_weapons\rockets\data\tubes_co.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
};

class STB73_MA37K;
class STB73_MA37K_TCP_optic_M11VERO: STB73_MA37K
{
    scope = 1;
    hiddenSelectionsTextures[]=
    {
        "\TCP\Weapons\Rifles\MA37\data\camo\default\MA37_01_CO.paa",
        "\TCP\Weapons\Rifles\MA37\data\camo\default\MA37_02_CO.paa"
    };
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M11VERO";
         };
    };
};

class STB73_M392;
class STB73_M392_TCP_optic_M43RCO: STB73_M392
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M43RCO";
         };
    };
};

class STB73_SRS99;
class STB73_SRS99_TCP_optic_Oracle_N: STB73_SRS99
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_Oracle_N";
         };
    };
};

class STB73_M6G;
class STB73_M6G_TCP_acc_flashlight_M6G_TCP_optic_KFA_M6G_TCP_bipod_handGuard_M6G: STB73_M6G
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_KFA_M6G";
         };
         class LinkedItemsRail
         {
             slot = "PointerSlot";
             item = "TCP_acc_flashlight_M6G";
         };
         class LinkedItemsUnder
         {
             slot = "UnderBarrelSlot";
             item = "TCP_bipod_handGuard_M6G";
         };
    };
};

class STB73_M731;
class STB73_M731_TCP_acc_carryHandle_M731_TCP_optic_EVOSD_TCP_bipod_01: STB73_M731
{
    scope = 1;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_EVOSD";
         };
         class LinkedItemsRail
         {
             slot = "PointerSlot";
             item = "TCP_acc_carryHandle_M731";
         };
         class LinkedItemsUnder
         {
             slot = "UnderBarrelSlot";
             item = "TCP_bipod_01";
         };
    };
};

class STB73_BR45;
class STB73_BR45_TCP_optic_M27RCO: STB73_BR45
{
    scope = 1  ;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M27RCO";
         };
    };
};

class STB73_BR45_TCP_optic_M11VERO: STB73_BR45
{
    scope = 1  ;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M11VERO";
         };
    };
};

class STB73_M7_SMG;
class STB73_M7_SMG_TCP_optic_M11VERO: STB73_M7_SMG
{
    scope = 1  ;
    class LinkedItems
    {
         class LinkedItemsOptic
         {
             slot = "CowsSlot";
             item = "TCP_optic_M11VERO";
         };
    };
};

class rockets_230mm_GAT;

class STB73_MLRS_230mm_rockets: rockets_230mm_GAT
{
    magazines[] = {
        "STB73_12Rnd_230mm_rockets"
    };
};
class mortar_155mm_AMOS;

class STB73_mortar_155mm_AMOS: mortar_155mm_AMOS
{
    magazines[] = {
        "STB73_12Rnd_105mm_Con",
        "6Rnd_155mm_Mo_smoke"
    };
};