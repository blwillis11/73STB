class B_UGV_01_rcws_F;

class 73_POGV_RCWS: B_UGV_01_rcws_F
{
    ace_cargo_space=14;
    cargoProxyIndexes[]={};
    displayName="POG-V Mk.1";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew="B_UAV_AI";
    textureList[]=
    {
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
        "\A3\Data_F\Vehicles\Turret_co.paa"
    };
    cargoCanControlUAV=1;
    canFloat=1;
    waterLeakiness=0.079999998;
    waterResistanceCoef=0.0044999998;
    waterResistance=10;
    waterLinearDampingCoefY="3*2";
    waterLinearDampingCoefX="5*2";
    waterAngularDampingCoef="2.3*2";
    waterSpeedFactor=2;
    enginePower=140;
    waterEffectSpeed=5;
    waterFastEffectSpeed=28;
    smokeLauncherAngle=60;
    smokeLauncherGrenadeCount=10;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=24;
    maxSpeed=69;
    thrustDelay=0.0099999998;
    maxOmega=960;
    peakTorque=1000;
    turnCoef=8;
    canBeTransported = 1;
    transportVehicleMass = 1000;  // Mongoose mass (approx.)
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass			= B_Parachute_02_F;	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
    };
    class TransportMagazines
    {
        class _xx_DemoCharge_Remote_Mag
        {
            magazine="DemoCharge_Remote_Mag";
            count=1;
        };
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
        class _xx_ACE_EntrenchingTool
        {
            name="ACE_EntrenchingTool";
            count=1;
        };
        class _xx_Toolkit
        {
            name="Toolkit";
            count=1;
        };
        class _xx_B_UavTerminal
        {
            name="B_UavTerminal";
            count=2;
        };
        class _xx_ItemcTab
        {
            name="ItemcTab";
            count=2;
        };
        };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            turretInfoType="Rsc_ACE_Helo_UI_Turret";
            weapons[]=
            {
                "HMG_127_UGV",
                "CMFlareLauncher",
                "SmokeLauncher",
                "Laserdesignator_pilotCamera"
            };
            magazines[]=
            {
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "168Rnd_CMFlare_Chaff_Magazine",
                "168Rnd_CMFlare_Chaff_Magazine",
                "Laserbatteries",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_turret";
                    name="hit_main_turret_point";
                    visual="OtocVez";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.25;
                    isTurret=1;
                };
                class HitGun
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_gun";
                    name="hit_main_gun_point";
                    visual="OtocHlaven";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.2;
                    isGun=1;
                };
            };
            class ViewOptics: ViewOptics
            {
                minFov=0.0125;
                visionMode[]=
                {
                    "Normal",
                    "NVG",
                    "TI"
                };
            };
        };
        class CargoTurret_01: CargoTurret_01
        {
            isCopilot=1;
            proxyIndex=69;
        };
    };
    class TextureSources
    {
    };
    class AnimationSources: AnimationSources
    {
        class muzzle_rot_MG
        {
            source="ammorandom";
            weapon="HMG_127_UGV";
        };
        class muzzle_hide_MG
        {
            source="reload";
            weapon="HMG_127_UGV";
        };
    };
    armor=240;
    armorStructural=4;
    class HitPoints: HitPoints
    {
        class HitHull
        {
            armor=0.69999999;
            material=50;
            armorComponent="hit_hull";
            name="hit_hull_point";
            visual="zbytek";
            passThrough=1;
            minimalHit=0.2;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitEngine
        {
            armor=1;
            material=-1;
            armorComponent="hit_engine";
            name="hit_engine_point";
            visual="-";
            passThrough=0.5;
            minimalHit=0.2;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitFuel
        {
            armor=1;
            material=-1;
            armorComponent="hit_fuel";
            name="hit_fuel_point";
            visual="-";
            passThrough=0.30000001;
            minimalHit=0.1;
            explosionShielding=0.60000002;
            radius=0.30000001;
        };
        class HitLBWheel: HitLBWheel
        {
            armor=1;
        };
        class HitLFWheel: HitLFWheel
        {
            armor=1;
            name="wheel_1_1";
        };
        class HitLF2Wheel: HitLF2Wheel
        {
            armor=1;
            name="wheel_1_2";
        };
        class HitLMWheel: HitLMWheel
        {
            armor=1;
            name="wheel_1_3";
        };
        class HitRBWheel: HitRBWheel
        {
            armor=1;
        };
        class HitRFWheel: HitRFWheel
        {
            armor=1;
            name="wheel_2_1";
        };
        class HitRF2Wheel: HitRF2Wheel
        {
            armor=1;
            name="wheel_2_2";
        };
        class HitRMWheel: HitRMWheel
        {
            armor=1;
            name="wheel_2_3";
        };
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_Wheel
            {
                type="ACE_Wheel";
                amount=12;
            };
        };
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Drone";
            Type = "POG-V";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa"",""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa"",""\A3\Data_F\Vehicles\Turret_co.paa""]]",
            };
        };
    };
};

class 73_COGV_RCWS: 73_POGV_RCWS
{
    cargoProxyIndexes[]={};
    enginePower=128;
    armor=4000;
    armorStructural=12;
    explosionShielding=0.30000001;
    maxSpeed=25;
    displayName="COG-V Mk.1";
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
        "\A3\Data_F\Vehicles\Turret_co.paa"
    };
    turnCoef=2;
    smokeLauncherAngle=360;
    smokeLauncherGrenadeCount=16;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=14;
    fuelCapacity=6;
    fuelConsumptionRate=0.0099999998;
    canBeTransported = 1;
    transportVehicleMass = 1000;  // Mongoose mass (approx.)
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass			= B_Parachute_02_F;	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
    };
    class TransportMagazines
    {
        class _xx_DemoCharge_Remote_Mag
        {
            magazine="DemoCharge_Remote_Mag";
            count=1;
        };
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
        class _xx_ACE_EntrenchingTool
        {
            name="ACE_EntrenchingTool";
            count=1;
        };
        class _xx_Toolkit
        {
            name="Toolkit";
            count=1;
        };
        class _xx_B_UavTerminal
        {
            name="B_UavTerminal";
            count=2;
        };
        class _xx_ItemcTab
        {
            name="ItemcTab";
            count=2;
        };
        };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            turretInfoType="RscOptics_UGV_gunner";
            weapons[]=
            {
                "73_COGV_Support_Rocket",
                "OPTRE_M12_SOC",
                "CMFlareLauncher",
                "SmokeLauncher",
                "Laserdesignator_pilotCamera"
            };
            magazines[]=
            {
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "168Rnd_CMFlare_Chaff_Magazine",
                "168Rnd_CMFlare_Chaff_Magazine",
                "Laserbatteries",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_turret";
                    name="hit_main_turret_point";
                    visual="OtocVez";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.25;
                    isTurret=1;
                };
                class HitGun
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_gun";
                    name="hit_main_gun_point";
                    visual="OtocHlaven";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.2;
                    isGun=1;
                };
            };
            class ViewOptics: ViewOptics
            {
                minFov=0.0125;
                visionMode[]=
                {
                    "Normal",
                    "NVG",
                    "TI"
                };
            };
        };
        class CargoTurret_01: CargoTurret_01
        {
            isCopilot=1;
            proxyIndex=69;
        };
    };
    class TextureSources
    {};
    class AnimationSources: AnimationSources
    {
        class muzzle_rot_MG
        {
            source="ammorandom";
            weapon="OPTRE_M12_SOC";
        };
        class muzzle_hide_MG
        {
            source="reload";
            weapon="OPTRE_M12_SOC";
        };
    };
    class HitPoints: HitPoints
    {
        class HitHull
        {
            armor=400;
            material=50;
            armorComponent="hit_hull";
            name="hit_hull_point";
            visual="zbytek";
            passThrough=1;
            minimalHit=0.2;
            explosionShielding=0.1;
            radius=0.30000001;
        };
        class HitEngine
        {
            armor=60;
            material=-1;
            armorComponent="hit_engine";
            name="hit_engine_point";
            visual="-";
            passThrough=0.5;
            minimalHit=0.2;
            explosionShielding=0.1;
            radius=0.30000001;
        };
        class HitFuel
        {
            armor=40;
            material=-1;
            armorComponent="hit_fuel";
            name="hit_fuel_point";
            visual="-";
            passThrough=0.30000001;
            minimalHit=0.1;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitLBWheel: HitLBWheel
        {
            armor=0.5;
        };
        class HitLFWheel: HitLFWheel
        {
            armor=0.5;
            name="wheel_1_1";
        };
        class HitLF2Wheel: HitLF2Wheel
        {
            armor=0.5;
            name="wheel_1_2";
        };
        class HitLMWheel: HitLMWheel
        {
            armor=0.5;
            name="wheel_1_3";
        };
        class HitRBWheel: HitRBWheel
        {
            armor=0.5;
        };
        class HitRFWheel: HitRFWheel
        {
            armor=0.5;
            name="wheel_2_1";
        };
        class HitRF2Wheel: HitRF2Wheel
        {
            armor=0.5;
            name="wheel_2_2";
        };
        class HitRMWheel: HitRMWheel
        {
            armor=0.5;
            name="wheel_2_3";
        };
};
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Drone";
            Type = "COG-V";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa"",""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa"",""\A3\Data_F\Vehicles\Turret_co.paa""]]",
            };
        };
    };
};