class STB73_SupplyPod: OPTRE_Ammo_SupplyPod_Empty
{
    scope = 1;
    editorCategory ="STB73_Objects";
    editorSubcategory = "STB73_SupplyPods_EdSubCat";
    faction = "STB73_STB";
    maximumLoad=1000000;
    hiddenselections[]=
    {
        "camo"
    };
};
class STB73_SupplyPod_Medical: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
    displayName="[73] Supply Pod [Medical]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_Medical_Pod.paa"
    };
    #include "transportItems\Medical.hpp"
};
class STB73_SupplyPod_VehicleAmmo: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [Rearm]";
    hiddenselections[]=
    {
        "camo"
    };
    ace_rearm_defaultSupply=1000;
};
class STB73_SupplyPod_VehicleRepair: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [Repair]";
    hiddenselections[]=
    {
        "camo"
    };
    ace_repair_canRepair=1;
    ace_cargo_space=20;
    ace_cargo_hasCargo=1;
    class TransportItems
    {
        class _xx_ToolKit
        {
            name="ToolKit";
            count=2;
        };
    };
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";
                amount = 8;

            };
            class ACE_Tracks{
                    type = "ACE_Track";
                    amount= 4;
            };
        };
    };
};
class STB73_SupplyPod_VehicleRefuel: STB73_SupplyPod
{
    scope=2;
    scopeCurator = 2;
    ace_refuel_fuelCargo = 600;
    displayName="[73] Supply Pod [Refuel]";
    hiddenselections[]=
    {
        "camo"
    };
};
class STB73_SupplyPod_ARGL: STB73_SupplyPod
{
    scope=2;
    scopeCurator = 2;
    displayName="[73] Supply Pod [ARGL]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_MA37GL_Pod.paa"
    };
    #include "transportItems\Grenadier.hpp"
};
class STB73_SupplyPod_AR: STB73_SupplyPod
{
    scope=2;
    scopeCurator = 2;
    displayName="[73] Supply Pod [AR]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_MA37_Pod.paa"
    };
    #include "transportItems\Rifleman.hpp"
};
class STB73_SupplyPod_CQB: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
    displayName="[73] Supply Pod [CQB]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_M45_Pod.paa"
    };
    #include "transportItems\CQB.hpp"
};
class STB73_SupplyPod_Marksman: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [BR/DMR]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_BR55_Pod.paa"
    };
    #include "transportItems\Marksman.hpp"
};
class STB73_SupplyPod_Sniper: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [Sniper]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_SRSC_Pod.paa"
    };
    #include "transportItems\Sniper.hpp"
};
class STB73_SupplyPod_Autorifles: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
    displayName="[73] Supply Pod [LMGs]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_M73_Pod.paa"
    };
    #include "transportItems\Autorifleman.hpp"
};
class STB73_SupplyPod_AT: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [AT]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_M41_Pod.paa"
    };
    #include "transportItems\AT.hpp"
};
class STB73_SupplyPod_EOD: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [EOD]";
    hiddenselections[]=
    {
        "camo"
    };
    #include "transportItems\EOD.hpp"
};
class STB73_SupplyPod_SMG: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="[73] Supply Pod [SMG/Sidearm]";
    hiddenselections[]=
    {
        "camo"
    };
    hiddenselectionstextures[] = 
    {
        "optre_misc\crates\data\OPTRE_M7_Pod.paa"
    };
    #include "transportItems\SMG.hpp"
};
class STB73_SupplyPod_Emptypod: STB73_SupplyPod
{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus

    displayName="73rd Empty pod";
    class TransportItems
    {

    };
};
class Module_OPTRE_PelicanSupplyDrop: Module_F
{
    class Arguments
    {
        class box1
        {
            defaultValue="none";
            class values
            {
                class n1
                {
                    name="none";
                    value="none";
                };
                class n2
                {
                    name="Random Supply Pod";
                };
                class n3
                {
                    name="[73] Medical Supply Pod";
                    value="STB73_SupplyPod_Medical";
                };
                class n4
                {
                    name="[73] Grenadier Supply Pod";
                    value="STB73_SupplyPod_ARGL";
                };
                class n5
                {
                    name="[73] Assault Rifle Supply Pod";
                    value="STB73_SupplyPod_AR";
                };
                class n6
                {
                    name="[73] CQB Supply Pod";
                    value="STB73_SupplyPod_CQB";
                };
                class n7
                {
                    name="[73] Marksman Supply Pod";
                    value="STB73_SupplyPod_Marksman";
                };
                class n8
                {
                    name="[73] Sniper Supply Pod";
                    value="STB73_SupplyPod_Sniper";
                };
                class n9
                {
                    name="[73] Autorifle Supply Pod";
                    value="STB73_SupplyPod_Autorifles";
                };
                class n10
                {
                    name="[73] AT Supply Pod";
                    value="STB73_SupplyPod_AT";
                };
                class n11
                {
                    name="[73] Mortar Ammo Supply Pod";
                    value="STB73_SupplyPod_Mortar_Ammo";
                };
                class n12
                {
                    name="[73] EOD Supply Pod";
                    value="STB73_SupplyPod_EOD";
                };
                class n13
                {
                    name="[73] SMG Supply Pod";
                    value="STB73_SupplyPod_SMG";
                };
                class n14
                {
                    name="[73] Vehicle Ammo";
                    value="STB73_SupplyPod_VehicleAmmo";
                };
                class n15
                {
                    name="[73] Vehicle Repair";
                    value="STB73_SupplyPod_VehicleRepair";
                };
                class n16
                {
                    name="[73] Vehicle Refuel";
                    value="STB73_SupplyPod_VehicleRefuel";
                };
                class n17
                {
                    name="[73] Empty Supply Pod";
                    value="STB73_SupplyPod_Emptypod";
                };
            };
        };
    };
};
