class B_SDV_01_F;
class STB73_SDV_ODST: B_SDV_01_F
{
    displayName="[73] SDV";
    author= AUTHOR;
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    editorSubcategory="EdSubcat_Submersibles";
    fuelCapacity=300;
    crew="STB73_STB_ODST_Rifleman";
    armor=100;
    acceleration=12;
    maxSpeed=65;
    waterSpeedFactor=1;
    periscopeDepth=1.2;
    idleRpm=300;
    redRpm=1200;
    thrustDelay=4;
    overSpeedBrakeCoef=0.80000001;
    enginePower=130;
    engineShiftY=0.40000001;
    waterLeakiness=0;
    waterResistanceCoef=0.0099999998;
    waterLinearDampingCoefX=2;
    waterLinearDampingCoefY=1.2;
    waterAngularDampingCoef=1.1;
    rudderForceCoef=0.1;
    rudderForceCoefAtMaxSpeed=0.050000001;
    class TransportItems
    {
    };
    ace_cargo_space=4;
    ace_cargo_hasCargo=1;
    canBeTransported = 1;
    transportVehicleMass = 1000;  // Mongoose mass (approx.)
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass			= "B_Parachute_02_F";	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
    };
};

class B_Boat_Transport_01_F;

class STB73_Boat_Transport:B_Boat_Transport_01_F
{
    displayName="[73] Transport Boat";
    faction = "STB73_STB";
    editorCategory = "STB73_STB";
    crew="STB73_STB_ODST_Rifleman";
    enginePower=120;
    acceleration=15;
    maxSpeed=80;
    ace_cargo_space=4;
    ace_cargo_hasCargo=1;
    canBeTransported = 1;
    transportVehicleMass = 1000;
    engineShiftY=0.3;
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass			= "B_Parachute_02_F";	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
    };
};