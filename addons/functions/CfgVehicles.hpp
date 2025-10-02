class CfgVehicles
{
	// Jetpacks
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_S12_SOLA_Jetpack_ON;

    class STB73_JumpPack: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[73] JumpPack";
        author="73rd S-4 Team";
        maximumLoad=250;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };

    class STB73_JumpPack_on: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[73] JumpPack";
        author="73rd S-4 Team";
        maximumLoad=250;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class Add_Marker {
                displayName = "Mark Position";
                condition = "true";
                statement = "";
                class MarkClear {
                    displayName = "Add Clear Dot";
                    statement = "call QUI_fnc_ClearMarker;";
                    condition = "true";
                };
            };
        };
    };
};
