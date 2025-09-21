class OPTRE_B_762x51_Tracer_Yellow;
class OPTRE_B_762x51_UW;

class 73_B_762x51_Tracer_Yellow:OPTRE_B_762x51_Tracer_Yellow{
    hit=16;
    caliber=2.1
    typicalSpeed=750;
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
}
class 73_B_762x51_Tracer:73_B_762x51_Tracer_Yellow{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
}
class 73_B_762x51_Tracer_NARQ:73_B_762x51_Tracer_Yellow{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    hit=0.1;
}

class 73_B_762x51_UW: OPTRE_B_762x51_UW
{
    typicalSpeed = 450;
};