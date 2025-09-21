class CfgPatches
{
	class 73_SupplyPods
	{
		author="73rd S-4 Team";
		addonRootClass="73_supplypod";
		    
		requiredAddons[]=
		{
			"73_units",
			"OPTRE_Misc",
			"NSWep_Core",
			"DMNS_Core",
			"73_weapons"
		

		};

		requiredVersion=0.1;
		units[]=
		{
			"73_SupplyPod_NEWACE_Medical",
			"73_SupplyPod_Mortar_Ammo",
			"73_SupplyPod_Mortar",
			"73_SupplyPod_StaticHMG",
			"73_SupplyPod_StaticHMGAmmo",
			"73_SupplyPod_StaticGMG",
			"73_SupplyPod_StaticGMGAmmo",
			"73_SupplyPod_VehicleAmmo",
			"73_SupplyPod_VehicleRepair",
			"73_SupplyPod_VehicleRefuel",
			"73_supply_ARGL",
			"73_supply_Breacher",
			"73_supply_Marksman",
			"73_supply_Sniper",
			"73_supply_Autorifles",
			"73_supply_ATLauncher",
			"73_supply_ExplosivesPack",
			"73_supply_TACResupply",
			"73_supply_Squad",
			"73_supply_Emptypod",
			"73_supply_Light"
		};
		weapons[]={};
		vehicles[]={};
	};
};

class CfgVehicles
{
	class OPTRE_Ammo_SupplyPod_Empty;
	class OPTRE_Ammo_SupplyPod_Launcher;
	class Module_F;
	class 73_SupplyPod: OPTRE_Ammo_SupplyPod_Empty
	{
		scope = 1;
		editorCategory ="73_Objects"; // This places it under "Empty" in the Eden Editor
        editorSubcategory = "73_Crates";
		faction = "73_STB";
		maximumLoad=1000000;
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
	};
	class 73_SupplyPod_NEWACE_Medical: 73_SupplyPod
	{
   	scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
		displayName="73rd Supply Pod [New ACE Medical]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{
			class _xx_kat_aatKit
			{
				name="kat_aatKit";
				count=10;
			};
			class _xx_kat_ncdKit
			{
				name="kat_ncdKit";
				count=10;
			};
			class _xx_kat_stethoscope
			{
				name="kat_stethoscope";
				count=10;
			};

			class _xx_73_Medigel_Light
			{
				name="73_Medigel_Light";
				count=50;
			};
			class _xx_73_Biofoam_Light
			{
				name="73_Biofoam_Light";
				count=50;
			};
			class _xx_73_Biofoam
			{
				name="73_Biofoam";
				count=20;
			};
			class _xx_73_Medigel
			{
				name="73_Medigel";
				count=20;
			};
			class _xx_73_PolyHemoglobinIV_250
			{
				name="73_PolyHemoglobinIV_250";
				count=30;
			};
			class _xx_73_PolyHemoglobinIV_500
			{
				name="73_PolyHemoglobinIV_500";
				count=20;
			};
			class _xx_73_PolyHemoglobinIV_1000
			{
				name="73_PolyHemoglobinIV_1000";
				count=10;
			};
			class _xx_73_PolyHemoglobinIV_2000
			{
				name="73_PolyHemoglobinIV_2000";
				count=5;
			};
			class _xx_73_MedKit
			{
				name="73_MedKit";
				count=5;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=5;
			};
			class _xx_kat_TXA
			{
				name="kat_TXA";
				count=10;
			};
			class _xx_kat_Pulseoximeter
			{
				name="kat_Pulseoximeter";
				count=10;
			};
			class _xx_kat_X_AED
			{
				name="kat_X_AED";
				count=3;
			};
			class _xx_kat_EACA
			{
				name="kat_EACA";
				count=10;
			};
			class _xx_kat_ChestSeal
			{
				name="kat_ChestSeal";
				count=20;
			};
			class _xx_73_epinephrine
			{
				name="73_epinephrine";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=10;
			};
			class _xx_73_Morphine
			{
				name="73_Morphine";
				count=20;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=20;
			};
			class _xx_73_adenosine
			{
				name="73_adenosine";
				count=20;
			};
		};
	};
	class 73_SupplyPod_Mortar_Ammo: 73_SupplyPod
	{
    scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
		displayName="73rd Supply Pod [Mortar Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_Smoke_white
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_Smoke_white";
				count=30;
			};
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_Flare_white
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_Flare_white";
				count=30;
			};
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_shells
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_shells";
				count=50;
			};
		};
	};
	class 73_SupplyPod_Mortar: 73_SupplyPod
	{
 	 	scope = 2; // Visible in Zeus and Eden
    scopeCurator = 2; // Allow spawning in Zeus
		displayName="73rd Supply Pod [Mortar Tube]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_shells
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_shells";
				count=15;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_CSW_AU44_Mortar_Carry
			{
				weapon="OPTRE_CSW_AU44_Mortar_Carry";
				count=1;
			};
			class _xx_OPTRE_CSW_AU44_Carry_Baseplate
			{
				weapon="OPTRE_CSW_AU44_Carry_Baseplate";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticHMG: 73_SupplyPod
  {
   		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus
		displayName="73rd Supply Pod [Static HMG]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_csw_400Rnd_762x51
			{
				magazine="OPTRE_csw_400Rnd_762x51";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag_red
			{
				magazine="ace_csw_100Rnd_127x99_mag_red";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag
			{
				magazine="ace_csw_100Rnd_127x99_mag";
				count=15;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_CSW_M247T_Weapon
			{
				weapon="OPTRE_CSW_M247T_Weapon";
				count=1;
			};
			class _xx_OPTRE_CSW_M247T_Carry_Tripod
			{
				weapon="OPTRE_CSW_M247T_Carry_Tripod";
				count=1;
			};
			class _xx_OPTRE_CSW_M247H_Weapon
			{
				weapon="ace_csw_staticM2ShieldCarry";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripod
			{
				weapon="ace_csw_m3CarryTripod";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripodLow
			{
				weapon="ace_csw_m3CarryTripodLow";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticHMGAmmo: 73_SupplyPod
  {
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Static HMG Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_csw_400Rnd_762x51
			{
				magazine="OPTRE_csw_400Rnd_762x51";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag_red
			{
				magazine="ace_csw_100Rnd_127x99_mag_red";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag
			{
				magazine="ace_csw_100Rnd_127x99_mag";
				count=15;
			};
		};
	};
	class 73_SupplyPod_StaticGMG: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Static GMG]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_ace_csw_20Rnd_20mm_G_belt
			{
				magazine="ace_csw_20Rnd_20mm_G_belt";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_ace_csw_staticGMGCarry
			{
				weapon="ace_csw_staticGMGCarry";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripod
			{
				weapon="ace_csw_m3CarryTripod";
				count=1;
			};
						class _xx_ace_csw_m3CarryTripodLow
			{
				weapon="ace_csw_m3CarryTripodLow";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticGMGAmmo: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Static GMG Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_ace_csw_20Rnd_20mm_G_belt
			{
				magazine="ace_csw_20Rnd_20mm_G_belt";
				count=40;
			};
		};
	};
	class 73_SupplyPod_VehicleAmmo: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Vehicle Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		ace_rearm_defaultSupply=1000;
	};
	class 73_SupplyPod_VehicleRepair: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Vehicle Repair]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
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
	class 73_SupplyPod_VehicleRefuel: 73_SupplyPod
	{
		scope=2;
		scopeCurator = 2;
		ace_refuel_fuelCargo = 600;
		displayName="73rd Supply Pod [Vehicle Refuel]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
	};
	class 73_supply_ARGL: 73_SupplyPod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Grenadier Supply Pod";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_73_32Rnd_762x51_Mag
			{
				magazine="73_32Rnd_762x51_Mag";
				count=30;
			};
			class _xx_73_32Rnd_762x51_Mag_Tracer
			{
				magazine="73_32Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag
			{
				magazine="73_60Rnd_762x51_Mag";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag_Tracer
			{
				magazine="73_60Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag_Tracer_Yellow
			{
				magazine="73_60Rnd_762x51_Mag_Tracer_Yellow";
				count=30;
			};
			class _xx_73_32Rnd_762x51_Mag_Tracer_Yellow
			{
				magazine="73_32Rnd_762x51_Mag_Tracer_Yellow";
				count=30;
			};
			
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_M319_HEDP_Grenade_Shell
			{
				magazine="M319_HEDP_Grenade_Shell";
				count=30;
			};
			class _xx_Commando_20Rnd_65_Mag
			{
				magazine="Commando_20Rnd_65_Mag";
				count=100;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine="OPTRE_36Rnd_95x40_Mag";
				count=30;
			};
			class _xx_OPTRE_42Rnd_95x40_Mag
			{
				magazine="OPTRE_42Rnd_95x40_Mag";
				count=30;
			};
			class _xx_OPTRE_42Rnd_95x40_Mag_Tracer
			{
				magazine="OPTRE_42Rnd_95x40_Mag_Tracer";
				count=20;
			};
			class _xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine="OPTRE_32Rnd_762x51_Mag";
				count=20;
			};
			class _xx_OPTRE_32Rnd_762x51_Mag_Tracer
			{
				magazine="OPTRE_32Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_OPTRE_3Rnd_Smoke_Grenade_shell
			{
				magazine="OPTRE_3Rnd_Smoke_Grenade_shell";
				count=20;
			};

			class _xx_OPTRE_3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeOrange_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_3Rnd_SmokeRed_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeRed_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeBlue_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_signalSmokeB
			{
				magazine="OPTRE_signalSmokeB";
				count=20;
			};
			class _xx_OPTRE_signalSmokeP
			{
				magazine="OPTRE_signalSmokeP";
				count=20;
			};
			class _xx_OPTRE_signalSmokeY
			{
				magazine="OPTRE_signalSmokeY";
				count=20;
			};
			class _xx_OPTRE_signalSmokeG
			{
				magazine="OPTRE_signalSmokeG";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_73_MA37BGL
			{
				weapon="73_MA37BGL";
				count=3;
			};
			class _xx_73_MA5BGL
			{
				weapon="73_MA5BGL";
				count=2;
			};
		};
	};
	class 73_supply_Squad: 73_SupplyPod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Squad Supply Pod";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_73_32Rnd_762x51_Mag
			{
				magazine="73_32Rnd_762x51_Mag";
				count=30;
			};
			class _xx_73_32Rnd_762x51_Mag_Tracer
			{
				magazine="73_32Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag
			{
				magazine="73_60Rnd_762x51_Mag";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag_Tracer
			{
				magazine="73_60Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_73_60Rnd_762x51_Mag_Tracer_Yellow
			{
				magazine="73_60Rnd_762x51_Mag_Tracer_Yellow";
				count=30;
			};
			class _xx_73_32Rnd_762x51_Mag_Tracer_Yellow
			{
				magazine="73_32Rnd_762x51_Mag_Tracer_Yellow";
				count=30;
			};
			class _xx_73_95x40_36Rnd
			{
				magazine="73_95x40_36Rnd";
				count=30;
			};
			class _xx_73_95x40_36Rnd_T_R
			{
				magazine="73_95x40_36Rnd_T_R";
				count=30;
			};
			class _xx_73_36Rnd_95x40_HPSAP_Mag
			{
				magazine="73_36Rnd_95x40_HPSAP_Mag";
				count=30;
			};
			class _xx_73_36Rnd_95x40_HPSAP_Mag_Tracer
			{
				magazine="73_36Rnd_95x40_HPSAP_Mag_Tracer";
				count=30;
			};
			class _xx_73_48Rnd_5x23Caseless_FMJ_Mag
			{
				magazine="73_48Rnd_5x23Caseless_FMJ_Mag";
				count=20;
			};
			class _xx_73_48Rnd_5x23Caseless_FMJ_Mag_Tracer
			{
				magazine="73_48Rnd_5x23Caseless_FMJ_Mag_Tracer";
				count=30;
			};
			class _xx_73_48Rnd_5x23Caseless_NARQ_Mag
			{
				magazine="73_48Rnd_5x23Caseless_NARQ_Mag";
				count=20;
			};

			class _xx_73_60Rnd_5x23Caseless_FMJ_Mag
			{
				magazine="73_60Rnd_5x23Caseless_FMJ_Mag";
				count=30;
			};
			class _xx_73_60Rnd_5x23Caseless_FMJ_Mag_Tracer
			{
				magazine="73_60Rnd_5x23Caseless_FMJ_Mag_Tracer";
				count=30;
			};
			class _xx_73_26Rnd_127x40_Mag_Black_Tracer
			{
				magazine="73_26Rnd_127x40_Mag_Black_Tracer";
				count=30;
			};
			class _xx_73_40Rnd_127x40_Drum_Black_Tracer
			{
				magazine="73_40Rnd_127x40_Drum_Black_Tracer";
				count=30;
			};
			class _xx_OPTRE_signalSmokeB
			{
				magazine="OPTRE_signalSmokeB";
				count=20;
			};
			class _xx_OPTRE_signalSmokeP
			{
				magazine="OPTRE_signalSmokeP";
				count=20;
			};
			class _xx_OPTRE_signalSmokeY
			{
				magazine="OPTRE_signalSmokeY";
				count=20;
			};
			class _xx_OPTRE_signalSmokeG
			{
				magazine="OPTRE_signalSmokeG";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_73_M7_SMG
			{
				weapon="73_M7_SMG";
				count=3;
			};
			class _xx_73_M6DS_Carbine_Foregrip
			{
				weapon="73_M6DS_Carbine_Foregrip";
				count=3;
			};
			class _xx_73_MA37B
			{
				weapon="73_MA37B";
				count=3;
			};
			class _xx_73_MA37K
			{
				weapon="73_MA37K";
				count=3;
			};
			class _xx_73_MA5B
			{
				weapon="73_MA5B";
				count=3;
			};
			class _xx_73_MA5K
			{
				weapon="73_MA5K";
				count=3;
			};
			class _xx_73_BR55HBM1_DMR
			{
				weapon="73_BR55HBM1_DMR";
				count=3;
			};
			class _xx_73_BR55_HB
			{
				weapon="73_BR55_HB";
				count=3;
			};
		};
	};
	class 73_supply_Breacher: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Shotgun Kit]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_73_6Rnd_8Gauge_Pellets
			{
				magazine="73_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_73_6Rnd_8Gauge_Slugs
			{
				magazine="73_6Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_73_12Rnd_8Gauge_Pellets
			{
				magazine="73_12Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_73_12Rnd_8Gauge_Slugs
			{
				magazine="73_12Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_73_6Rnd_8Gauge_HEDP
			{
				magazine="73_6Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_73_12Rnd_8Gauge_HEDP
			{
				magazine="73_12Rnd_8Gauge_HEDP";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_73_M90A
			{
				weapon="73_M90A";
				count=3;
			};
			class _xx_73_M45
			{
				weapon="73_M45";
				count=2;
			};

			class _xx_OPTRE_CQS48_Bulldog_Automatic
			{
				weapon="OPTRE_CQS48_Bulldog_Automatic";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m7_sight
			{
				name="optre_m7_sight";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
			class _xx_optre_m7_laser
			{
				name="optre_m7_laser";
				count=2;
			};
		};
	};
	class 73_supply_Marksman: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Marksman Rifles]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			
			class _xx_73_15Rnd_10x40_Mag
			{
				magazine="73_15Rnd_10x40_Mag";
				count=30;
			};
			class _xx_73_15Rnd_10x40_Mag_Tracer
			{
				magazine="73_15Rnd_10x40_Mag_Tracer";
				count=30;
			};
			class _xx_73_15Rnd_10x40_Mag_Tracer_Yellow
			{
				magazine="73_15Rnd_10x40_Mag_Tracer_Yellow";
				count=30;
			};
		};
		class TransportWeapons
		{
			class _xx_73_M395S_DMR
			{
				weapon="73_M395S_DMR";
				count=2;
			};
			class _xx_73_M395_DMR
			{
				weapon="73_M395_DMR";
				count=2;
			};
			class _xx_73_M392_DMR
			{
				weapon="73_M392_DMR";
				count=2;
			};
			class _xx_73_M295_BMR
			{
				weapon="73_M295_BMR";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m392_scope
			{
				name="optre_m392_scope";
				count=2;
			};
			class _xx_optic_ams
			{
				name="optic_ams";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
			class _xx_NSWep_SRS99C_MuzzleBrake
			{
				name="NSWep_SRS99C_MuzzleBrake";
				count=2;
			};
		};
	};
	class 73_supply_Sniper: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [SR99DX Sniper]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			
			class _xx_73_M232_145x114x4_APFSDS
			{
				magazine="73_M232_145x114x4_APFSDS";
				count=20;
			};
			class _xx_73_M232_145x114x4_APFSDS_TC
			{
				magazine="73_M232_145x114x4_APFSDS_TC";
				count=20;
			};
			class _xx_73_M232_145x114x8_APFSDS
			{
				magazine="73_M232_145x114x8_APFSDS";
				count=5;
			};
			class _xx_73_M232_145x114x8_APFSDS_TC
			{
				magazine="73_M232_145x114x8_APFSDS_TC";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_73_SRS99AM
			{
				weapon="73_SRS99AM";
				count=2;
			};
			class _xx_73_SRS99AM_Stealth
			{
				weapon="73_SRS99AM_Stealth";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_srs99_scope
			{
				name="optre_srs99_scope";
				count=2;
			};
			class _xx_optre_srs99d_suppressor
			{
				name="optre_srs99d_suppressor";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
		};
	};
	class 73_supply_Autorifles: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayname="73rd Supply Pod [Machine Guns]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			
			class _xx_73_200rnd_M247_Mag
			{
				magazine="73_200rnd_M247_Mag";
				count=10;
			};
			class _xx_73_200rnd_M247_Mag_Tracer
			{
				magazine="73_200rnd_M247_Mag_Tracer";
				count=15;
			};
			class _xx_73_100rnd_M247_Mag
			{
				magazine="73_100rnd_M247_Mag";
				count=10;
			};
			class _xx_73_100rnd_M247_Mag_Tracer
			{
				magazine="73_100rnd_M247_Mag_Tracer";
				count=10;
			};
			class _xx_MA_200Rnd_762x51_Shredder_Mag
			{
				magazine="MA_200Rnd_762x51_Shredder_Mag";
				count=10;
			};
			class _xx_MA_200Rnd_762x51_Shredder_Mag_Tracer
			{
				magazine="MA_200Rnd_762x51_Shredder_Mag_Tracer";
				count=10;
			};
			class _xx_MA_100Rnd_762x51_Shredder_Mag
			{
				magazine="MA_100Rnd_762x51_Shredder_Mag";
				count=10;
			};
			class _xx_MA_100Rnd_762x51_Shredder_Mag_Tracer
			{
				magazine="MA_100Rnd_762x51_Shredder_Mag_Tracer";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_73_M247
			{
				weapon="73_M247";
				count=2;
			};
			class _xx_73_H4_SAW
			{
				weapon="73_H4_SAW";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m7_sight
			{
				name="optre_m7_sight";
				count=2;
			};
			class _xx_optic_hamr
			{
				name="optic_hamr";
				count=2;
			};
			class _xx_optre_m73_smartlink
			{
				name="optre_m73_smartlink";
				count=2;
			};
			class _xx_bipod_01_f_blk
			{
				name="bipod_01_f_blk";
				count=4;
			};
			class _xx_Optre_Evo_Sight_Riser
			{
				name="Optre_Evo_Sight_Riser";
				count=4;
			};
		};
	};
	class 73_supply_ATLauncher: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [AT Launchers]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			
			
			class _xx_73_1Rnd_50x137_HE
			{
				magazine="73_1Rnd_50x137_HE";
				count=10;
			};
			class _xx_73_1Rnd_50x137_HEAT
			{
				magazine="73_1Rnd_50x137_HEAT";
				count=10;
			};
			class _xx_73_1Rnd_50x137_PEN
			{
				magazine="73_1Rnd_50x137_PEN";
				count=10;
			};
			class _xx_73_HEAT
			{
				magazine="73_HEAT";
				count=10;
			};
			class _xx_73_HEAP
			{
				magazine="73_HEAP";
				count=10;
			};
			class _xx_73_HEAA
			{
				magazine="73_HEAA";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_73_M96_LAW
			{
				weapon="73_M96_LAW";
				count=3;
			};
			class _xx_73_Fang2
			{
				weapon="73_Fang2";
				count=3;
			};
			class _xx_73_Fang
			{
				weapon="73_Fang";
				count=3;
			};
			class _xx_73_M41_SSR
			{
				weapon="73_M41_SSR";
				count=3;
			};
		};
	};
	class 73_supply_ExplosivesPack: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Supply Pod [Explosives]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_UNSCMine_Range_Mag
			{
				magazine="UNSCMine_Range_Mag";
				count=2;
			};
			class _xx_C7_Remote_Mag
			{
				magazine="C7_Remote_Mag";
				count=25;
			};
			class _xx_C12_Remote_Mag
			{
				magazine="C12_Remote_Mag";
				count=8;
			};
			class _xx_M168_Remote_Mag
			{
				magazine="M168_Remote_Mag";
				count=4;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=15;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 73_supply_TACResupply: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName=" 73rd Supply Pod [Utility/Sidearm]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{
			class _xx_tf_anprc152
			{
				name="tf_anprc152";
				count=10;
			};
			class _xx_ACE_UAVBattery
			{
				name="ACE_UAVBattery";
				count=10;
			};
			class _xx_ACE_bodyBag
			{
				name="ACE_bodyBag";
				count=20;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=20;
			};
			class _xx_B_UavTerminal
			{
				name="B_UavTerminal";
				count=2;
			};

		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_16rnd_10mm_AP
			{
				magazine="16rnd_10mm_AP";
				count=30;
			}; 
			class _xx_OPTRE_M9_Frag
			{
				magazine="OPTRE_M9_Frag";
				count=20;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=100;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=10;
			};
			class _xx_OPTRE_M2_Smoke_Green
			{
				magazine="OPTRE_M2_Smoke_Green";
				count=10;
			};
			class _xx_ACE_HandFlare_Green
			{
				magazine="ACE_HandFlare_Green";
				count=25;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=25;
			};
			class _xx_ACE_Chemlight_HiGreen
			{
				magazine="ACE_Chemlight_HiGreen";
				count=25;
			};
			class _xx_ACE_Chemlight_HiBlue
			{
				magazine="ACE_Chemlight_HiBlue";
				count=25;
			};
			class _xx_ACE_Chemlight_HiWhite
			{
				magazine="ACE_Chemlight_HiWhite";
				count=25;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=25;
			};
			
		};
	};
	class 73_supply_Emptypod: 73_SupplyPod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayName="73rd Empty pod";
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{

		};
	};
		class 73_supply_Light: 73_supplypod
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus

		displayname="73rd Supply Pod Light";
		class TransportMagazines
		{
			class _xx_73_60Rnd_762x51_Mag_Tracer
			{
				magazine="73_60Rnd_762x51_Mag_Tracer";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{

			class _xx_73_PolyHemoglobinIV_500
			{
				name="73_PolyHemoglobinIV_500";
				count=3;
			};
			class _xx_B_UavTerminal
			{
				name="B_UavTerminal";
				count=2;
			};
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
						name="73rd Autorifle Supply Pod";
						value="73_supply_Autorifles";
					};
					class n4
					{
						name="73rd AT Launcher Supply Pod";
						value="73_supply_ATLauncher";
					};
					class n5
					{
						name="73rd Explosives Supply Pod";
						value="73_supply_ExplosivesPack";
					};
					class n6
					{
						name="73rd Grenadier Supply Pod";
						value="73_supply_ARGL";
					};
					class n7
					{
						name="73rd Shotgun Supply Pod";
						value="73_supply_Breacher";
					};
					class n8
					{
						name="73rd Marksman Supply Pod";
						value="73_supply_Marksman";
					};
					class n9
					{
						name="73rd Sniper Supply Pod";
						value="73_supply_Sniper";
					};
					class n10
					{
						name="73rd Medical Supply Pod";
						value="73_SupplyPod_NEWACE_Medical";
					};
					class n11
					{
						name="73rd Mortar Ammo Supply Pod";
						value="73_SupplyPod_Mortar_Ammo";
					};
					class n12
					{
						name="73rd Mortar Supply Pod";
						value="73_SupplyPod_Mortar";
					};
					class n13
					{
						name="73rd Static HMG";
						value="73_SupplyPod_StaticHMG";
					};
					class n14
					{
						name="73rd Static HMG Ammo";
						value="73_SupplyPod_StaticHMGAmmo";
					};
					class n15
					{
						name="73rd Static GMG";
						value="73_SupplyPod_StaticGMG";
					};
					class n16
					{
						name="73rd Static GMG Ammo";
						value="73_SupplyPod_StaticGMGAmmo";
					};
					
					class n17
					{
						name="73rd Vehicle Ammo";
						value="73_SupplyPod_VehicleAmmo";
					};
					class n18
					{
						name="73rd Vehicle Repair";
						value="73_SupplyPod_VehicleRepair";
					};
					class n19
					{
						name="73rd Vehicle Refuel";
						value="73_SupplyPod_VehicleRefuel";
					};
					class n20
					{
						name="73rd Tactical/Misc Supply Pod";
						value="73_supply_TACResupply";
					};
					class n21
					{
						name="73rd Squad Supply Pod";
						value="73_supply_Squad";
					};
					class n22
					{
						name="73rd Empty Supply pod";
						value="73_supply_Emptypod";
					};
				};
			};
		};
	};
	class 73_SupplyPod_Light: 73_SupplyPod
	{
		scope=2;
		displayname="73rd Supply Pod Light";
		class TransportMagazines
		{
			class _xx_OPTRE_60Rnd_762x51_Mag_JHPT
			{
				magazine="OPTRE_60Rnd_762x51_Mag_JHPT";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
            class _xx_ACE_plasmaIV_500
            {
                name="ACE_plasmaIV_500";
                count=3;
            };
            class _xx_B_UavTerminal
            {
                name="B_UavTerminal";
                count=2;
            };
        };
    };
};
	
