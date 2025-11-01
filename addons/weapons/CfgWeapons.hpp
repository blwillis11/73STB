class CfgWeapons {

    #include "data\ammo\greenMag.hpp"
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
