/*
	Source:
		https://en.wikipedia.org/wiki/.375_SOCOM
		https://community.bistudio.com/wiki/CfgAmmo_Config_Reference
		https://community.bistudio.com/wiki/Weapons_settings
*/

#define TMUZZLE(classname) class classname##Muzzle: ThrowMuzzle\
{\
	magazines[] = {classname};\
}

/*
	Weight Evaluation (lbs)
*/
#define EVAL_WEIGHT __EVAL(WEIGHT * 10)
#define LBS2MASS(var1) (var1 * 10)

/*
	Convert from Grains to Grams
*/
#define GR2G(var1) (var1 / 15.432)

/*
	Convert from Grams to Grains
*/
#define G2GR(var1) (var1 * 15.432)

/*
	Convert from Grams to Kilograms
*/
#define G2KG(var1) (var1 / 1000)

/*
	Convert from Kilgrams to Pounds
*/
#define KG2LBS(var1) (var1 * 2.20462)

/*
	Convert from World Units to Meters
	A Halo world unit (WU) is equal to 10 feet or 3.048 meters
*/
#ifndef WU2M
		#define WU2M(var1) __EVAL(var1 * 3.048)
#endif

/*
	Derivation of projectile mass from Velocity and Rate of Fire using the Kinetic Energy Formula

	Kinetic Energy (Joules) = 1 / 2 * Mass (KG) * ((Velocity (m/s))^2)
	KE (J) = 1 / 2 * M * V^2

	Mass (KG) = 2 * Kinetic Energy (Joules) / ((Velocity (m/s))^2)
	M = 2 * E / V^2

	Energy (Joules) = Volts * Coulombs
	E = V * Q

	Mass (KG) = 2 * (Volts * Coulombs) / ((Velocity (m/s))^2)
	M = 2 * (V * Q) / V^2

	Coulombs = Amps * Time (seconds)
	Q = I * T

	Mass (KG) = 2 * (Volts * (Amps * Time (seconds))) / ((Velocity (m/s))^2)
	M = 2 * (V * (I * T)) / v^2

	Time per shot (seconds) = 60 / Rounds of Fire

	2 * Volts * Amps * (60 / ROF) / Velocity^2 = Mass (KG)

	Mass (KG) * 15432.4 = Mass (grain)
*/
#ifdef KV
		#define PROJ_MASS ((2 * (KV * 1000) * (DA * 0.1) * (60 / ROF) / (DEFAULT_VELOCITY * DEFAULT_VELOCITY)) * 15432.4)
#endif

/*
	Hit Damage Evaluation // Kinetic Energy Formula
	https://community.bistudio.com/wiki/Weapons_settings

	sqrt(weight/2)*speed/5

	PROJ_MASS (gr)
	DEFAULT_VELOCITY (m/s)
*/
#define DAMAGE (sqrt(((PROJ_MASS * 0.064799) / 1000) / 2)) * (DEFAULT_VELOCITY / 5)

/*
	Weight Calculation for Magazines based on mass of cartridge (does not consider actual magazine for sake of ease)
*/
#define MAG_MASS(count) LBS2MASS(KG2LBS(G2KG(TOTAL_MASS))) * count

/*
	Caliber Evaluation
	https://community.bistudio.com/wiki/CfgAmmo_Config_Reference#caliber
	
	(Depth(mm) * 1000) / (Velocity(m/s) * Penetrability) * 1.6
*/
#define CALIBER ((PROJ_PEN_DEPTH * 1000) / (DEFAULT_VELOCITY * 15)) * 1.6


/*
	Rate of Fire & reloadTime Evaluation
	ROF (RPM)
*/
#define RELOADTIME (60 / ROF)

/*
	Dispersion Evaluation
	ACCURACY (deg)

	Degrees >> Minute of Angle

	As of current, I do not understand the coefficient of 10. It may result of Bohemia's European and metric roots regarding miliradians, but the connection hasn't been found.
*/
#define DISPERSION ((ACCURACY * (pi / (60 * 180))) * 10)

/*
	Calculation for InitSpeed on weapons based on muzzle velocity from ammunition against weapon's muzzle velocity
*/
#define INITSPEED -1 * (MUZZLE_VELOCITY / DEFAULT_VELOCITY)