#define MAGNIFICATION(var) __EVAL(0.25 / var)
class CfgWeapons
{
	class optic_Arco;
    class ItemInfo;
	class STB73_optic_A7Scope: optic_Arco
	{
		author = AUTHOR;
		dlc = QUOTE(PREFIX);

		scope = 1;
        scopeArsenal = 1;
        baseWeapon = "STB73_optic_A7Scope";

		displayName = QUOTE(A7 Scope);

        model = QUOTE(z\73STB\addons\weapons\data\acc\AUGA7Scope\A7Scope.p3d);

        class ItemInfo : ItemInfo
        {
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes
            {
                class STB73_Optics_3D
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    // FOV limits defining 1.5x to 3x zoom
                    opticsZoomMin = 0.08333;   // 3x Zoom (Minimum FOV / Max Zoom)
                    opticsZoomMax = 0.16666;   // 1.5x Zoom (Maximum FOV / Min Zoom)
                    opticsZoomInit = 0.16666;  // Starts looking through the optic at 1.5x
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    discreteFov[] = {0.16666, 0.08333};
                    discreteDistance[] = {100,200,300,400,500};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                    cameraDir = "";
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {0, 1};
                    opticsPPEffects[] = {"Default"};
                };
            };
        };
	};
	class STB73_optic_2D_A7Scope: optic_Arco
	{
		author = AUTHOR;
		dlc = QUOTE(PREFIX);

		scope = 1;
        scopeArsenal = 1;
        baseWeapon = "STB73_optic_2D_A7Scope";

		displayName = QUOTE(A7 Scope);

        model = QUOTE(z\73STB\addons\weapons\data\acc\AUGA7Scope\A7Scope.p3d);

        class ItemInfo : ItemInfo
        {
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes
            {
                class STB73_Optics_2D
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = MAGNIFICATION(3);
                    opticsZoomMax = MAGNIFICATION(1);
                    opticsZoomInit = MAGNIFICATION(1);
                    discreteDistance[] =
                    {100,200,300,400,500,600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    discretefov[] = {
                        MAGNIFICATION(1),
                        MAGNIFICATION(2),
                        MAGNIFICATION(3)
                    };
                    discreteInitIndex = 0;
                    memoryPointCamera = "eye";
                    modelOptics[] = {
                        "\tcp\weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_1x.p3d",
                        "\tcp\weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_2x.p3d",
                        "\tcp\weapons_ins\Acc\Optic\M43RCO\reticle_M43RCO_3x.p3d",
                    };
                    visionMode[] = {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
	};
};