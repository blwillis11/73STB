class CfgWeapons
{
	class optic_Arco;
    class ItemInfo;
	class STB73_optic_A7Scope: optic_Arco
	{
		author = AUTHOR;
		dlc = QUOTE(PREFIX);

		scope = 2;
        scopeArsenal = 2;
        baseWeapon = "STB73_optic_A7Scope";

		displayName = QUOTE(A7 Scope);

        model = QUOTE(z\73STB\addons\weapons\data\acc\AUGA7Scope\AugA7Scope.p3d);

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
                    opticsDisablePeripherialVision = 1;
                    discreteFov[] = {0.16666, 0.08333};
                    discreteDistance[] = {100,200,300,400,500};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                    cameraDir = "";
                    visionMode[] = {"Normal"};
                    opticsPPEffects[] = {"Default"};
                };
            };
        };
	};
};