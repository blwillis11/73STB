// 7.62x51mm NATO

class TCP_15Rnd_762x51_Mag;
class TCP_32Rnd_762x51_Mag;
class TCP_60Rnd_762x51_Mag;

class STB73_15Rnd_762x51_Mag: TCP_15Rnd_762x51_Mag{
    displayName="[73] 15Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="STB73_B_762x51_Ball";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_Mag_Tracer: STB73_15Rnd_762x51_Mag{
    displayName="[73] 15Rnd 7.62x51mm Magazine [Tracer]";
    ammo="STB73_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_Mag_Tracer_Yellow: STB73_15Rnd_762x51_Mag_Tracer
{
    displayName="[73] 15Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="STB73_B_762x51_Ball_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";

};
class STB73_15Rnd_762x51_Mag_Tracer_IR: STB73_15Rnd_762x51_Mag_Tracer
{
    displayName="[73] 15Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="STB73_B_762x51_Ball_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};


class STB73_15Rnd_762x51_Mag_Dual: STB73_15Rnd_762x51_Mag
{
    displayName="[73] 15Rnd 7.62x51mm Magazine [Dual]";
    ammo="STB73_B_762x51_Dual";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};


class STB73_15Rnd_762x51_BTHP_Mag:TCP_15Rnd_762x51_Mag
{
    ammo = "STB73_B_762x51_BTHP";
    displayname	= "[73] 15Rnd 7.62x51mm BTHP Magazine";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_BTHP_Mag_Tracer:STB73_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[73] 15Rnd 7.62x51mm BTHP Magazine [Tracers]";
    ammo = "STB73_B_762x51_BTHP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_BTHP_Mag_Tracer_Yellow:STB73_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[73] 15Rnd 7.62x51mm BTHP Magazine [Tracers Yellow]";
    ammo = "STB73_B_762x51_BTHP_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_BTHP_Mag_Tracer_IR:STB73_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[73] 15Rnd 7.62x51mm BTHP Magazine [Tracers IR]";
    ammo = "STB73_B_762x51_BTHP_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";

};


class STB73_15Rnd_762x51_HVAP_Mag:TCP_15Rnd_762x51_Mag
{
    displayname	= "[73] 15Rnd 7.62x51mm HVAP Magazine";
    ammo = "STB73_B_762x51_HVAP";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_HVAP_Mag_Tracer:TCP_15Rnd_762x51_Mag
{
    displayname	= "[73] 15Rnd 7.62x51mm HVAP Magazine [Tracers]";
    ammo = "STB73_B_762x51_HVAP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_HVAP_Mag_Tracer_Yellow:STB73_15Rnd_762x51_HVAP_Mag_Tracer
{
    displayname	= "[73] 15Rnd 7.62x51mm HVAP Magazine [Tracers Yellow]";
    ammo = "STB73_B_762x51_HVAP_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_15Rnd_762x51_HVAP_Mag_Tracer_IR:STB73_15Rnd_762x51_HVAP_Mag_Tracer
{
    displayname	= "[73] 15Rnd 7.62x51mm HVAP Magazine [Tracers IR]";
    ammo = "STB73_B_762x51_HVAP_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};



class STB73_32Rnd_762x51_Mag: TCP_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="STB73_B_762x51_Ball";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_32Rnd_762x51_Mag_Tracer: STB73_32Rnd_762x51_Mag{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer]";
    ammo="STB73_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 32;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_32Rnd_762x51_Mag_Tracer_Yellow: STB73_32Rnd_762x51_Mag_Tracer
{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="STB73_B_762x51_Ball_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_32Rnd_762x51_Mag_Tracer_IR: STB73_32Rnd_762x51_Mag_Tracer
{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="STB73_B_762x51_Ball_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};


class STB73_32Rnd_762x51_Mag_Dual: STB73_32Rnd_762x51_Mag
{
    displayName="[73] 32Rnd 7.62x51mm Magazine [Dual]";
    ammo="STB73_B_762x51_Dual";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};


class STB73_60Rnd_762x51_Mag: TCP_60Rnd_762x51_Mag{
    displayName="[73] 60Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="STB73_B_762x51_Ball";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_60Rnd_762x51_Mag_Tracer: STB73_60Rnd_762x51_Mag{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer]";
    ammo="STB73_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 60;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_60Rnd_762x51_Mag_Tracer_Yellow: STB73_60Rnd_762x51_Mag_Tracer
{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="STB73_B_762x51_Ball_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};
class STB73_60Rnd_762x51_Mag_Tracer_IR: STB73_60Rnd_762x51_Mag_Tracer
{
    displayName="[73] 60Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="STB73_B_762x51_Ball_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};


class STB73_60Rnd_762x51_Mag_Dual : STB73_60Rnd_762x51_Mag
{
    displayname	= "[73] 60Rnd 7.62x51mm Magazine (Dual)";
    ammo = "STB73_B_762x51_Dual";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
    greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
};

class TCP_100Rnd_762x51_Mag;
class TCP_200Rnd_762x51_Mag;

class STB73_200rnd_762x51_Mag: TCP_200Rnd_762x51_Mag{
    displayName = "[73] 200Rnd 7.62x51mm Box";
    ammo = "STB73_B_762x51_Ball";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_200rnd_762x51_Mag_Tracer: TCP_200Rnd_762x51_Mag{
    displayName = "[73] 200Rnd 7.62x51mm Box [Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 200;
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_200rnd_762x51_Mag_Tracer_Yellow: STB73_200rnd_762x51_Mag_Tracer{
    displayName = "[73] 200Rnd 7.62x51mm Box [Yellow Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer_Yellow";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_200rnd_762x51_Mag_Tracer_IR: STB73_200rnd_762x51_Mag_Tracer{
    displayName = "[73] 200Rnd 7.62x51mm Box [IR Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer_IR";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};


class STB73_100rnd_762x51_Mag: TCP_100Rnd_762x51_Mag{
    displayName = "[73] 100Rnd 7.62x51mm Box";
    ammo = "STB73_B_762x51_Ball";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_100rnd_762x51_Mag_Tracer: TCP_100Rnd_762x51_Mag{
    displayName = "[73] 100Rnd 7.62x51mm Box [Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 100;
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_100rnd_762x51_Mag_Tracer_Yellow: STB73_100rnd_762x51_Mag_Tracer{
    displayName = "[73] 100Rnd 7.62x51mm Box [Yellow Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer_Yellow";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};
class STB73_100rnd_762x51_Mag_Tracer_IR: STB73_100rnd_762x51_Mag_Tracer{
    displayName = "[73] 100Rnd 7.62x51mm Box [IR Tracers]";
    ammo = "STB73_B_762x51_Ball_Tracer_IR";
    greenmag_canSpeedload=0;
    greenmag_needBelt=1;
    greenmag_ammo="greenmag_beltlinked_762x51_tracer";
    greenmag_basicammo="greenmag_beltlinked_762x51_basic";
};

//12

// 95x40mm magazines

class TCP_36Rnd_95x40_Mag;

class STB73_95x40_36Rnd_Mag:TCP_36Rnd_95x40_Mag
{
    displayName="[73] 36Rnd 9.5x40mm Magazine";
    author= AUTHOR;
    ammo="STB73_95x40_AP";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_95x40_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_95x40_tracer_1Rnd";
};
class STB73_95x40_36Rnd_Mag_Tracer:STB73_95x40_36Rnd_Mag
{
    displayName="[73] 36Rnd 9.5x40mm Magazine [Tracer]";
    ammo="STB73_95x40_AP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 36;
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_95x40_tracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_95x40_tracer_1Rnd";
};
class STB73_95x40_36Rnd_Mag_Tracer_Yellow:STB73_95x40_36Rnd_Mag_Tracer
{
    displayName="[73] 36Rnd 9.5x40mm Magazine [Yellow Tracer]";
    ammo="STB73_95x40_AP_Tracer_Yellow";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_95x40_tracer_yellow_1Rnd";
    greenmag_basicammo="greenmag_ammo_95x40_tracer_1Rnd";
};
class STB73_95x40_36Rnd_Mag_Tracer_IR:STB73_95x40_36Rnd_Mag_Tracer
{
    displayName="[73] 36Rnd 9.5x40mm Magazine [IR Tracer]";
    ammo="STB73_95x40_AP_Tracer_IR";
    greenmag_canSpeedload=1;
    greenmag_needBelt=0;
    greenmag_ammo="greenmag_ammo_95x40_IRtracer_1Rnd";
    greenmag_basicammo="greenmag_ammo_95x40_tracer_1Rnd";
};

// Launcher

class CA_LauncherMagazine;
class STB73_M96_LAW: CA_LauncherMagazine {
    scope = 1;
    allowedSlots[] = {};
};
class DMNS_M96_HEAT;
class STB73_M96_HEAT: DMNS_M96_HEAT
{
    displayname						= "[73] M-96 HEAT Disposable Rockets";
    ammo							= "DMNS_M96_Rocket_HEAT";
    count							= 1;
    mass 							= 45;
    initSpeed 						= 650;
};
class MRAWS_HEAT_F;
class STB73_1Rnd_50x137_HEAT: MRAWS_HEAT_F
{
    scope=2;
    scopeArsenal=2;
    ammo="STB73_50x137_HEAT";
    author=AUTHOR;
    count=1;
    displayname="[73] 50x137mm HEAT Rocket";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
    mass=32;
    allowedSlots[]={901,701};
};
class MRAWS_HE_F;
class STB73_1Rnd_50x137_HE: MRAWS_HE_F
{
    ammo="STB73_50X137_HE";
    author=AUTHOR;
    count=1;
    displayname="[73] 50x137mm HE Rocket";
    displaynameshort="HE";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
    mass=27;
    allowedSlots[]={901,701};
};
class STB73_1Rnd_50x137_PEN: STB73_1Rnd_50x137_HE
{
    ammo="STB73_50x137_PEN";
    author=AUTHOR;
    count=1;
    displayname="[73] 50x137mm Penetrator Rocket";
    displaynameshort="Penetrator";
    descriptionShort="1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
    mass=50;
    allowedSlots[]={901,701};
};

class OPTRE_M41_Twin_HEAT_G;

class STB73_HEAT:OPTRE_M41_Twin_HEAT_G{
    displayname	= "[73] M19 HEAT Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAT";
    descriptionshort = "High Explosive Anti Tank";
    ammo = "STB73_HEAT";
    hiddenSelections[] = {"camo_tubes","camo_details"};
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heat.paa",
        "\optre_weapons\rockets\data\logos_ca.paa"
    };
};
class STB73_HEAP:STB73_HEAT{
    count=2;
    displayname	= "[73] M19 HEAP Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAP";
    descriptionshort = "High Explosive Anti Personnel (Un-guided)<br/>Un-guided";
    ammo = "STB73_HEAP";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heap.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heap.paa";
};
class STB73_HEAA:STB73_HEAT{
    count=2;
    displayname	= "[73] M19 HEAA Twin Rockets";
    displaynameshort = "HEAA";
    descriptionshort = "High Explosive Anti Air (Guided)<br/>Guided";
    ammo = "STB73_HEAA";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\he.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
};


// 12 gauge magazines

class OPTRE_6Rnd_8Gauge_Pellets;
class OPTRE_6Rnd_8Gauge_Slugs;

class STB73_6Rnd_12Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
{
    displayname	= "[73] 6Rnd 12 Gauge Pellets";
    ammo = "STB73_12Gauge_Pellets";
};
class STB73_6Rnd_12Gauge_Slugs: OPTRE_6Rnd_8Gauge_Slugs
{
    displayname	= "[73] 6Rnd 12 Gauge Slugs";
    ammo = "STB73_12Gauge_Slugs";
};
class STB73_6Rnd_12Gauge_Smoke: OPTRE_6Rnd_8Gauge_Slugs
{
    displayname	= "[73] 6Rnd 12 Gauge Smoke";
    ammo = "STB73_12Gauge_Smoke";
};

// 12.7x30mm magazines

class TCP_12Rnd_127x30_52_Mag;

class STB73_12Rnd_127x30_SAP_Mag: TCP_12Rnd_127x30_52_Mag
{
    author=AUTHOR;
    displayName="[73] 12Rnd 12.7x30mm SAP Magazine";
    ammo="STB73_B_127x30_Ball";
};
class STB73_12Rnd_127x30_SAP_Mag_Tracer: STB73_12Rnd_127x30_SAP_Mag
{
    displayName="[73] 12Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="STB73_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};
class STB73_12Rnd_127x30_SAP_Mag_Tracer_Yellow: STB73_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 12Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="STB73_B_127x30_Ball_Tracer_Yellow";
};
class STB73_12Rnd_127x30_SAP_Mag_Tracer_IR: STB73_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 12Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="STB73_B_127x30_Ball_Tracer_IR";
};


class STB73_12Rnd_127x30_NARQ_Mag: STB73_12Rnd_127x30_SAP_Mag 
{
    author=AUTHOR;
    displayName="[73] 12Rnd 12.7x30mm NARQ Magazine";
    ammo="STB73_B_127x30_NARQ_Tracer";
};
class STB73_12Rnd_127x30_NARQ_Mag_Tracer: STB73_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 12Rnd 12.7x30mm NARQ Magazine (Tracer)";
    ammo="STB73_B_127x30_NARQ_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};

class TCP_24Rnd_127x30_Mag;

class STB73_24Rnd_127x30_SAP_Mag: TCP_24Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[73] 24Rnd 12.7x30mm SAP Magazine";
    ammo="STB73_B_127x30_Ball";
};
class STB73_24Rnd_127x30_SAP_Mag_Tracer: STB73_24Rnd_127x30_SAP_Mag
{
    displayName="[73] 24Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="STB73_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};
class STB73_24Rnd_127x30_SAP_Mag_Tracer_Yellow: STB73_24Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 24Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="STB73_B_127x30_Ball_Tracer_Yellow";
};
class STB73_24Rnd_127x30_SAP_Mag_Tracer_IR: STB73_24Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 24Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="STB73_B_127x30_Ball_Tracer_IR";
};

class TCP_36Rnd_127x30_Mag;

class STB73_36Rnd_127x30_SAP_Mag: TCP_36Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[73] 36Rnd 12.7x30mm SAP Magazine";
    ammo="STB73_B_127x30_Ball";
};
class STB73_36Rnd_127x30_SAP_Mag_Tracer: STB73_36Rnd_127x30_SAP_Mag
{
    displayName="[73] 36Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="STB73_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};
class STB73_36Rnd_127x30_SAP_Mag_Tracer_Yellow: STB73_36Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 36Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="STB73_B_127x30_Ball_Tracer_Yellow";
};
class STB73_36Rnd_127x30_SAP_Mag_Tracer_IR: STB73_36Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[73] 36Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="STB73_B_127x30_Ball_Tracer_IR";
};


// 5x23mm Caseless magazines

class TCP_48Rnd_5x23_Mag;
class TCP_60Rnd_5x23_Mag;

class STB73_48Rnd_5x23Caseless_FMJ_Mag: TCP_48Rnd_5x23_Mag{
    displayName="[73] 48Rnd 5x23mm FMJ Magazine";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless";
};
class STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer: STB73_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 48Rnd 5x23mm FMJ Magazine (Tracer)";
    ammo="STB73_5x23_Caseless_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 48;
};
class STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow: STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 48Rnd 5x23mm FMJ Magazine (Tracer Yellow)";
    ammo="STB73_5x23_Caseless_Tracer_Yellow";
};
class STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer_IR: STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 48Rnd 5x23mm FMJ Magazine (Tracer IR)";
    ammo="STB73_5x23_Caseless_Tracer_IR";
};


class STB73_48Rnd_5x23Caseless_NARQ_Mag: STB73_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 48Rnd 5x23mm NARQ Magazine";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless_NARQ";

};
class STB73_48Rnd_5x23Caseless_NARQ_Mag_Tracer: STB73_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 48Rnd 5x23mm NARQ Magazine (Tracer)";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless_NARQ_Tracer";
};


class STB73_60Rnd_5x23Caseless_FMJ_Mag: TCP_60Rnd_5x23_Mag{
    displayName="[73] 60Rnd 5x23mm FMJ Magazine";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless";

};
class STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer: STB73_60Rnd_5x23Caseless_FMJ_Mag{
    displayName="[73] 60Rnd 5x23mm FMJ Magazine (Tracer)";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 60;
};
class STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow: STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 60Rnd 5x23mm FMJ Magazine (Tracer Yellow)";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless_Tracer_Yellow";
};
class STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer_IR: STB73_60Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[73] 60Rnd 5x23mm FMJ Magazine (Tracer IR)";
    author= AUTHOR;
    ammo="STB73_5x23_Caseless_Tracer_IR";
};

// 14.5x114mm magazines

class NSWep_M232_145x114x4_APFSDS;
class NSWep_M232_145x114x4_APFSDS_TG;
class NSWep_M232_145x114x4_APFSDS_TR;
class NSWep_M232_145x114x4_APFSDS_TC;
class NSWep_M232_145x114x4_APFSDS_TIR;

class STB73_M232_145x114x4_APFSDS:NSWep_M232_145x114x4_APFSDS
{
    mass=25;
    ammo="STB73_M232_145x114_APFSDS";

};
class STB73_M232_145x114x4_APFSDS_TG:NSWep_M232_145x114x4_APFSDS_TG
{
    mass=25;
    ammo="STB73_M232_145x114_APFSDS_TG";
};
class STB73_M232_145x114x4_APFSDS_TR:NSWep_M232_145x114x4_APFSDS_TR
{
    mass=25;
    ammo="STB73_M232_145x114_APFSDS_TR";
};
class STB73_M232_145x114x4_APFSDS_TC:NSWep_M232_145x114x4_APFSDS_TC
{
    mass=25;
    ammo="STB73_M232_145x114_APFSDS_TC";
};
class STB73_M232_145x114x4_APFSDS_TIR:NSWep_M232_145x114x4_APFSDS_TIR
{
    mass=25;
    ammo="STB73_M232_145x114_APFSDS_TIR";
};
class STB73_M232_145x114x4_APFSDS_Stun:NSWep_M232_145x114x4_APFSDS_TC
{
    displayname	= "[73] M232 Stun Extended Magazine (4rnd)";
    mass=50;
    ammo="STB73_M232_145x114_APFSDS_Stun";
};

class NSWep_M232_145x114x8_APFSDS;
class NSWep_M232_145x114x8_APFSDS_TG;
class NSWep_M232_145x114x8_APFSDS_TR;
class NSWep_M232_145x114x8_APFSDS_TC;
class NSWep_M232_145x114x8_APFSDS_TIR;

class STB73_M232_145x114x8_APFSDS:NSWep_M232_145x114x8_APFSDS
{
    mass=50;
    ammo="STB73_M232_145x114_APFSDS";
    descriptionShort="Contains 8 rounds of 14.5x114 AP ammo <br />Used in: SRS99 rifles";
};
class STB73_M232_145x114x8_APFSDS_TG:NSWep_M232_145x114x8_APFSDS_TG
{
    mass=50;
    ammo="STB73_M232_145x114_APFSDS_TG";
    descriptionShort="Contains 8 rounds of 14.5x114 AP ammo <br />Used in: SRS99 rifles";
};
class STB73_M232_145x114x8_APFSDS_TR:NSWep_M232_145x114x8_APFSDS_TR
{
    mass=50;
    ammo="STB73_M232_145x114_APFSDS_TR";
    descriptionShort="Contains 8 rounds of 14.5x114 AP ammo <br />Used in: SRS99 rifles";
};
class STB73_M232_145x114x8_APFSDS_TC:NSWep_M232_145x114x8_APFSDS_TC
{
    mass=50;
    ammo="STB73_M232_145x114_APFSDS_TC";
    descriptionShort="Contains 8 rounds of 14.5x114 AP ammo <br />Used in: SRS99 rifles";
};
class STB73_M232_145x114x8_APFSDS_TIR:NSWep_M232_145x114x8_APFSDS_TIR
{
    mass=50;
    ammo="STB73_M232_145x114_APFSDS_TIR";
    descriptionShort="Contains 8 rounds of 14.5x114 AP ammo <br />Used in: SRS99 rifles";
};

class CA_Magazine;
class STB73_1Rnd_40mm_Shell_Smoke_Blue: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm Smoke Round (Blue)";
    displayNameShort="40mm Smoke Round (Blue)";
    descriptionShort="A blue impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Blue_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Blue";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Blue.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Blue.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_Green: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (Green)";
    displayNameShort="40mm Smoke Round (Green)";
    descriptionShort="A green impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Green_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Green";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Green.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Green.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_Orange: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (Orange)";
    displayNameShort="40mm Smoke Round (Orange)";
    descriptionShort="An orange impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Orange_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Orange";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Orange.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Orange.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_Purple: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (Purple)";
    displayNameShort="40mm Smoke Round (Purple)";
    descriptionShort="A purple impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Purple_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Purple";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Purple.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Purple.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_Red: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (Red)";
    displayNameShort="40mm Smoke Round (Red)";
    descriptionShort="A red impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Red_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Red";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Red.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Red.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_White: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (White)";
    displayNameShort="40mm Smoke Round (White)";
    descriptionShort="A white impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_White_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_White";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Smoke_Yellow: STB73_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[73] 40mm Smoke Round (Yellow)";
    displayNameShort="40mm Smoke Round (Yellow)";
    descriptionShort="A yellow impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Yellow_1Rnd_CA.paa";
    ammo="STB73_40mm_Shell_Smoke_Yellow";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Yellow.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Yellow.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_HE: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm HE Round";
    displayNameShort="40mm HE Round";
    descriptionShort="A high-explosive round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\HE\data\ui\icon_40mm_1rnd_CA.paa";
    ammo="STB73_40mm_Shell_HE";
    model="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_TD: STB73_1Rnd_40mm_Shell_HE
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm TD Round";
    displayNameShort="40mm TD Round";
    descriptionShort="A time explosive round for a grenade launcher";
    ammo="STB73_40mm_Shell_TD";
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class STB73_1Rnd_40mm_Shell_Signal_Green: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm Flare Round (Green)";
    displayNameShort="40mm Flare Round (Green)";
    descriptionShort="A green flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Green_1rnd_CA.paa";
    ammo="STB73_F_40_Signal_Green";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Green.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Green.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class STB73_1Rnd_40mm_Shell_Signal_Red: STB73_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm Flare Round (Red)";
    displayNameShort="40mm Flare Round (Red)";
    descriptionShort="A red flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Red_1rnd_CA.paa";
    ammo="STB73_F_40_Signal_Red";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Red.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Red.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class STB73_1Rnd_40mm_Shell_Signal_White: STB73_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm Flare Round (White)";
    displayNameShort="40mm Flare Round (White)";
    descriptionShort="A white flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_White_1rnd_CA.paa";
    ammo="STB73_F_40_Signal_White";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_White.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_White.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class STB73_1Rnd_40mm_Shell_Signal_Yellow: STB73_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[73] 40mm Flare Round (Yellow)";
    displayNameShort="40mm Flare Round (Yellow)";
    descriptionShort="A yellow flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Yellow_1rnd_CA.paa";
    ammo="STB73_F_40_Signal_Yellow";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Yellow.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Yellow.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
