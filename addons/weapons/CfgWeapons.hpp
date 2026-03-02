class CfgWeapons {
    class Single;
    class TCP_launch_M301;
	class STB73_launch_M301: TCP_launch_M301
	{
		author=AUTHOR;
		scope=1;
		magazines[]=
		{
			"STB73_1Rnd_40mm_Shell_HE",
            "STB73_1Rnd_40mm_Shell_TD",
            "STB73_1Rnd_40mm_Shell_Smoke_Blue",
            "STB73_1Rnd_40mm_Shell_Smoke_Green",
            "STB73_1Rnd_40mm_Shell_Smoke_Orange",
            "STB73_1Rnd_40mm_Shell_Smoke_Purple",
            "STB73_1Rnd_40mm_Shell_Smoke_White",
            "STB73_1Rnd_40mm_Shell_Smoke_Yellow",
            "STB73_1Rnd_40mm_Shell_Signal_Green",
            "STB73_1Rnd_40mm_Shell_Signal_Red",
            "STB73_1Rnd_40mm_Shell_Signal_White",
            "STB73_1Rnd_40mm_Shell_Signal_Yellow"
		};
		magazineWell[]=
		{
			"STB73_1Rnd_40mm_MagWell"
		};
	};
    #include "data\SMG\smg.hpp"
    #include "data\DMR\dmr.hpp"
    #include "data\LMG\lmg.hpp"
    #include "data\Launcher\launcher.hpp"
    #include "data\Sniper\sniper.hpp"
    #include "data\BR\br.hpp"
    #include "data\Shotgun\shotgun.hpp"
    #include "data\AR\ar.hpp"
    #include "data\Sidearm\sidearm.hpp"

    class OPTRE_102R_Turret;
    class STB73_COGV_Support_Rocket: OPTRE_102R_Turret
    {
        displayName="COG-V Rocket";
        descriptionShort="Support Launcher";
        magazineReloadTime=1;
        magazines[]=
        {
            "OPTRE_M41_Twin_Smoke_B",
            "OPTRE_M41_Twin_Smoke_G",
            "OPTRE_M41_Twin_Smoke_O",
            "OPTRE_M41_Twin_Smoke_P",
            "OPTRE_M41_Twin_Smoke_R",
            "OPTRE_M41_Twin_Smoke_W",
            "OPTRE_M41_Twin_Smoke_Y"
        };
    };
};
