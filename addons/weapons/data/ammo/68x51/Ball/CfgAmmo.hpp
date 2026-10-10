class CfgAmmo 
{
    class BulletBase;

    class STB73_B_68x51_Ball : BulletBase
    {
        hit = __EVAL(DAMAGE);

        indirectHit=0;
        indirectHitRange=0;

        pictureWire="tcp\weapons\Ammo\65x48\Ball\data\ui\icon_ammo_65x48_W_CA.paa";

        visibleFire = 3;
        audibleFire = 45;

        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 13;

        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;

        cost = 1.6;

        airLock = 1;

        typicalSpeed = DEFAULT_VELOCITY;

        deflecting = PROJ_DEFLECT_ANGLE;

        caliber = __EVAL(CALIBER);

        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";

        tracerScale = 0.7;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;

        airFriction = PROJ_DRAG;

        class CamShakeExplode
        {
            power = 2.82843;
            duration = 0.6;
            frequency = 20;
            distance = 8.48528;
        };

        class CamShakeHit
        {
            power = 7;
            duration = 0.3;
            frequency = 20;
            distance = 1;
        };
    };

    class STB73_B_68x51_Ball_Tracer_Green: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };

    class STB73_B_68x51_Ball_Tracer_Red: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class STB73_B_68x51_Ball_Tracer_Yellow: STB73_B_68x51_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };

    class STB73_B_68x51_Ball_Tracer_IR: STB73_B_68x51_Ball
    {
        nvgOnly = 1;
    };
};