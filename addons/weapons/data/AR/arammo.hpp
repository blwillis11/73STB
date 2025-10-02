class OPTRE_B_762x51_Tracer_Yellow;
class OPTRE_B_762x51_UW;

class STB73_B_762x51_Tracer_Yellow:OPTRE_B_762x51_Tracer_Yellow{
    hit=16;
    caliber=2.1;
    typicalSpeed=750;
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class STB73_B_762x51_Tracer:STB73_B_762x51_Tracer_Yellow{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class STB73_B_762x51_Tracer_NARQ:STB73_B_762x51_Tracer_Yellow{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    hit=0.1;
};

class STB73_B_762x51_UW: OPTRE_B_762x51_UW
{
    typicalSpeed = 450;
};
