class CA_LauncherMagazine;
class 73_M96_LAW: CA_LauncherMagazine {
    scope = 1;
    allowedSlots[] = {};
};
class DMNS_M96_HEAT;
class 73_M96_HEAT: DMNS_M96_HEAT
{
    displayname						= "[73] M-96 HEAT Disposable Rockets";
    ammo							= "DMNS_M96_Rocket_HEAT";
    count							= 1;
    mass 							= 45;
    initSpeed 						= 650;
};
class MRAWS_HEAT_F;
class 73_1Rnd_50x137_HEAT: MRAWS_HEAT_F
{
    scope=2;
    scopeArsenal=2;
    ammo="73_50x137_HEAT";
    author="73rd S-4 Team";
    count=1;
    displayname="[73] 50x137mm HEAT Rocket";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
    mass=32;
    allowedSlots[]={901,701};
};
class MRAWS_HE_F;
class 73_1Rnd_50x137_HE: MRAWS_HE_F
{
    ammo="73_50X137_HE";
    author="73rd S-4 Team";
    count=1;
    displayname="[73] 50x137mm HE Rocket";
    displaynameshort="HE";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
    mass=27;
    allowedSlots[]={901,701};
};
class 73_1Rnd_50x137_PEN: 73_1Rnd_50x137_HE
{
    ammo="73_50x137_PEN";
    author="73rd S-4 Team";
    count=1;
    displayname="[73] 50x137mm Penetrator Rocket";
    displaynameshort="Penetrator";
    descriptionShort="1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
    mass=50;
    allowedSlots[]={901,701};
};

class OPTRE_M41_Twin_HEAT_G;

class 73_HEAT:OPTRE_M41_Twin_HEAT_G{
    displayname	= "[73] M19 HEAT Twin Rockets";
    author="73rd S-4 Team";
    displaynameshort = "HEAT";
    descriptionshort = "High Explosive Anti Tank";
    ammo = "73_HEAT";
    hiddenSelections[] = {"camo_tubes","camo_details"};
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heat.paa",
        "\optre_weapons\rockets\data\logos_ca.paa"
    };
};
class 73_HEAP:73_HEAT{
    count=2;
    displayname	= "[73] M19 HEAP Twin Rockets";
    author="73rd S-4 Team";
    displaynameshort = "HEAP";
    descriptionshort = "High Explosive Anti Personnel (Un-guided)<br/>Un-guided";
    ammo = "73_HEAP";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heap.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heap.paa";
};
class 73_HEAA:73_HEAT{
    count=2;
    displayname	= "[73] M19 HEAA Twin Rockets";
    displaynameshort = "HEAA";
    descriptionshort = "High Explosive Anti Air (Guided)<br/>Guided";
    ammo = "73_HEAA";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\he.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
};