class VES_M875_SPH;

class 73_M875:VES_M875_SPH
{
    displayName="[73] M875 Scorpion [SPH]";
    author= AUTHOR;
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    armor=450;
    crew = "73_Crewman";
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Scorpion";
            Type = "SPH";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_ART_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_DET1_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa""]]",
            };
        };
    };
};
class VES_M808BM_MBT;

class 73_M808BM_MBT:VES_M808BM_MBT
{
    displayName="[73] M808B/M Scorpion";
    author= AUTHOR;
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    normalSpeedForwardCoef=0.69999999;
    slowSpeedForwardCoef=0.34999999;
    maxSpeed=80;
    maxFordingDepth=1.7;
    waterResistance=0;
    waterDamageEngine=0.2;
    waterLeakiness=10;
    enginePower=1821;
    maxOmega=775.57501;
    peakTorque=12000;
    torqueCurve[]=
    {
        {0,1},
        {0.142875,1},
        {0.28575,1},
        {0.42862499,1},
        {0.5715,1},
        {0.71437502,1},
        {0.85724998,1},
        {1,1}
    };
    thrustDelay=0.050000001;
    clutchStrength=50;
    idleRPM=850;
    redRPM=3000;
    fuelCapacity=1200;
    fuelConsumptionRate=100;
    brakeIdleSpeed=0.2;
    tankTurnForce=1597200;
    tankTurnForceAngMinSpd=0.60000002;
    tankTurnForceAngSpd=0.91000003;
    accelAidForceCoef=1;
    accelAidForceYOffset=-2;
    accelAidForceSpd=1.6;
    antiRollbarForceCoef=24;
    antiRollbarForceLimit=42;
    antiRollbarSpeedMin=30;
    antiRollbarSpeedMax=75;
    engineLosses=25;
    transmissionLosses=15;
    damageResistance=0.02;
    crewVulnerable=0;
    crewExplosionProtection=1;
    crewCrashProtection=0.0099999998;
    lockDetectionSystem=4;
    incomingMissileDetectionSystem=4;
    tf_range=25000;
    tf_isolatedAmount=0.40000001;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio=1;
    enableRadio=1;
    class complexGearbox
    {
        GearboxRatios[]=
        {
            "R1",
            -0.40000001,
            "N",
            0,
            "D1",
            2
        };
        TransmissionRatios[]=
        {
            "High",
            7.8499999
        };
        gearBoxMode="auto";
        moveOffGear=1;
        driveString="D";
        neutralString="N";
        reverseString="R";
        transmissionDelay=0.1;
};
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Scorpion";
            Type = "MBT";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa""]]",
            };
        };
    };
};
class VES_M808B2_MBT;

class 73_M808B2_MBT:VES_M808B2_MBT
{
    displayName="[73] M808B2 Sun Devil";
    author= AUTHOR;
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Sun Devil";
            Type = "AA";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa""]]",
            };
        };
    };
};

class DMNS_M808B;
class 73_M808BMk2:DMNS_M808B
{
    displayName="[73] M808B Scorpion MBT Mk.2";
    author= AUTHOR;
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    hiddenSelectionsTextures[]=
    {
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Hull_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Turret_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Housing_Front_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Housing_Rear_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Commander_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Details_EXT_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Details_EXT_2_co.paa",
        "DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Scorpion";
            Type = "MBT Mk.2";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Hull_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Turret_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Housing_Front_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Housing_Rear_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Commander_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Details_EXT_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Details_EXT_2_co.paa"",""DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa""]]",
            };
        };
    };
};

class LandVehicle;
class Tank: LandVehicle
{
    class NewTurret;
};
class Tank_F: Tank
{
    class Turrets
    {
        class MainTurret: NewTurret
        {
            class Turrets;
        };
    };
};
class MBT_01_base_F: Tank_F
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                class CommanderOptics;
            };
        };
    };
};
class B_MBT_01_base_F: MBT_01_base_F
{
};
class B_MBT_01_cannon_F: B_MBT_01_base_F
{
};
class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
{
    class Components;
};
class 73_Merkava : B_MBT_01_TUSK_F
{
    displayName="[73] Merkava";
    author= AUTHOR;
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    armor=450;
    crew = "73_Crewman";
    typicalCargo[]=
    {
        "73_Marine_Rifleman"
    };
    transportSoldier=7;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    hiddenSelectionsTextures[] =
    {
        "A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
        "A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa",
        "A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa",
        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    class VehicleSpawnerInfo {
    class 73_GroundSpawner
    {
        scope = 1;
        spawner= "73rd Mechanized";
        vehicle = "Merkava";
        Type = "MBT";
        cost = 5;

        priority = 1;
        liveries[]=
        {
         "[""Standard"",[""A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa"",""A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa"",""A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa"",""a3\Armor_F\Data\camonet_NATO_Green_CO.paa""]]",
        };
    };
};
    class UserActions
    {
        class Flip
        {
            displayNameDefault="Press SPACEBAR to Flip Merkava";
            displayName="Press SPACEBAR to Flip Merkava";
            position="";
            radius=6;
            onlyForPlayer=1;
            condition="(alive this) AND !(canmove this)";
            statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 4]; this setVectorUp surfaceNormal getposATL this;";
        };
    };
    class TransportWeapons
    {};
    class TransportMagazines
    {
        class _xx_OPTRE_60Rnd_762x51_Mag_AP
        {
            magazine="OPTRE_60Rnd_762x51_Mag_AP";
            count=20;
        };
        class _xx_OPTRE_60Rnd_762x51_Mag_APT
        {
            magazine="OPTRE_60Rnd_762x51_Mag_APT";
            count=20;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_JHP
        {
            magazine="OPTRE_36Rnd_95x40_Mag_JHP";
            count=20;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_JHPT
        {
            magazine="OPTRE_36Rnd_95x40_Mag_JHPT";
            count=20;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJ
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJ";
            count=20;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJT
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJT";
            count=20;
        };
        class _xx_OPTRE_20Rnd_86x70_Mag_AP
        {
            magazine="OPTRE_20Rnd_86x70_Mag_AP";
            count=20;
        };
        class _xx_OPTRE_20Rnd_86x70_Mag_APT
        {
            magazine="OPTRE_20Rnd_86x70_Mag_APT";
            count=20;
        };
        class _xx_OPTRE_M41_Twin_HEAP
        {
            magazine="OPTRE_M41_Twin_HEAP";
            count=4;
        };
        class _xx_OPTRE_M41_Twin_HEAT_Thermal
        {
            magazine="OPTRE_M41_Twin_HEAT_Thermal";
            count=2;
        };
    };
    class TransportItems
    {
        delete _xx_FirstAidKit;
        class _xx_Toolkit
        {
            name="Toolkit";
            count=1;
        };
        class _xx_ACE_plasmaIV_1000
        {
            name="ACE_plasmaIV_1000";
            count=10;
        };
        class _xx_ACE_epinephrine
        {
            name="ACE_epinephrine";
            count=4;
        };
        class _xx_ACE_adenosine
        {
            name="ACE_adenosine";
            count=4;
        };
        class _xx_ACE_Banana
        {
            name="ACE_Banana";
            count=5;
        };
        class _xx_ACE_splint
        {
            name="ACE_splint";
            count=10;
        };
    };
    ace_hunterkiller[]=
    {

        {
            {0},
            3
        },

        {
            {0,0},
            3
        }
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
                    weapons[]=
                    {
                        "HMG_127_APC",
                        "SmokeLauncher"
                    };
                    magazines[]=
                    {
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag"
                    };
                };
            };
            weapons[]=
            {
                "cannon_120mm",
                "HMG_127_APC"
            };
            magazines[]=
            {
                "12Rnd_120mm_HE_shells_Tracer_Red",
                "12Rnd_120mm_HE_shells_Tracer_Red",
                "12Rnd_120mm_HEAT_MP_T_Red",
                "12Rnd_120mm_HEAT_MP_T_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red"
            };
        };
    };
    ace_cargo_space=4;
    ace_cargo_hasCargo=1;
    irScanGround=0;
    irScanRangeMax=10000;
    irScanRangeMin=2000;
    irScanToEyeFactor=2;
    radarType=2;
    reportRemoteTargets=1;
    receiveRemoteTargets=1;
    incomingMissileDetectionSystem=16;
    LockDetectionSystem=16;
    class Components: Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent: SensorTemplateIR
                {
                    class AirTarget
                    {
                        minRange=50;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=50;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    maxTrackableSpeed=1e+010;
                    animDirection="Gun";
                    angleRangeHorizontal=46;
                    angleRangeVertical=34;
                    aimdown=-0.25;
                };
                class VisualSensorComponent: SensorTemplateVisual
                {
                    class AirTarget
                    {
                        minRange=50;
                        maxRange=8000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=50;
                        maxRange=8000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    maxTrackableSpeed=1e+010;
                    animDirection="Gun";
                    angleRangeHorizontal=46;
                    angleRangeVertical=34;
                    aimdown=-0.25;
                };
                class ActiveRadarSensorComponent: SensorTemplateActiveRadar
                {
                    class AirTarget
                    {
                        minRange=20;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=20;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    maxTrackableSpeed=1e+010;
                    angleRangeHorizontal=180;
                    angleRangeVertical=90;
                    groundNoiseDistanceCoef=-1;
                    maxGroundNoiseDistance=-1;
                    minSpeedThreshold=0;
                    maxSpeedThreshold=0;
                    aimDown=30;
                };
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                {
                    class AirTarget
                    {
                        minRange=50;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=5;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    maxTrackableSpeed=1e+010;
                    angleRangeHorizontal=180;
                    angleRangeVertical=90;
                    groundNoiseDistanceCoef=-1;
                    maxGroundNoiseDistance=-1;
                    minSpeedThreshold=0;
                    maxSpeedThreshold=0;
                    aimDown=30;
                };
                class LaserSensorComponent: SensorTemplateLaser
                {
                    class AirTarget
                    {
                        minRange=50;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=5;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    maxTrackableSpeed=1e+010;
                    angleRangeHorizontal=180;
                    angleRangeVertical=90;
                    groundNoiseDistanceCoef=-1;
                    maxGroundNoiseDistance=-1;
                    minSpeedThreshold=0;
                    maxSpeedThreshold=0;
                    aimDown=30;
                };
                class NVSensorComponent: SensorTemplateNV
                {
                    class AirTarget
                    {
                        minRange=50;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget
                    {
                        minRange=5;
                        maxRange=16000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    maxTrackableSpeed=1e+010;
                    angleRangeHorizontal=180;
                    angleRangeVertical=90;
                    groundNoiseDistanceCoef=-1;
                    maxGroundNoiseDistance=-1;
                    minSpeedThreshold=0;
                    maxSpeedThreshold=0;
                    aimDown=30;
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
        {
            class Components: Components
            {
                class VehiclePrimaryGunnerDisplay
                {
                    componentType="TransportFeedDisplayComponent";
                    source="PrimaryGunner";
                };
                class VehicleMissileDisplay
                {
                    componentType="TransportFeedDisplayComponent";
                    source="Missile";
                };
                class SensorDisplay
                {
                    componentType="SensorsDisplayComponent";
                    range[]={2000,4000,8000,12000,16000};
                    resource="RscCustomInfoSensors";
                };
                class MineDetectorDisplay
                {
                    componentType="MineDetectorDisplayComponent";
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
        {
            defaultDisplay="SensorDisplay";
            class Components: Components
            {
                class VehiclePrimaryGunnerDisplay
                {
                    componentType="TransportFeedDisplayComponent";
                    source="PrimaryGunner";
                };
                class VehicleMissileDisplay
                {
                    componentType="TransportFeedDisplayComponent";
                    source="Missile";
                };
                class SensorDisplay
                {
                    componentType="SensorsDisplayComponent";
                    range[]={2000,4000,8000,12000,16000};
                    resource="RscCustomInfoSensors";
                };
                class MineDetectorDisplay
                {
                    componentType="MineDetectorDisplayComponent";
                };
            };
        };
    };
};
