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
    class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Edit;
			class ModuleDescription;
		};
		class ModuleDescription{};
	};
    class Sign_Sphere10cm_F;
    class STB73_Stand_In : Sign_Sphere10cm_F
    {
        displayName= "DO NOT DELETE!";
    };
	class OPTRE_PelicanSupplyDrop;
	class Module_OPTRE_HEV;
	class Module_OPTRE_ODSTDrop;
	class OPTRE_ODSTDrop;

    class ACE_Module: Module_F{};
	class IK_Modules_MakeAceArsenal : ACE_Module
	{
		scope = 2; // 1 = Hidden, 2 = Visible
		author = AUTHOR;
		displayName = "Make ACE Arsenal";
		function = "STB73_fnc_makeAceArsenal";	// Name of function triggered once conditions are met
		category = "STB73_Modules";
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable
		is3DEN = 0;							// 1 = run in 3DEN
		curatorCanAttach = 0;				// 1 = drag and drop on entity

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// 1 = allows Area Attributes

		class Attributes : AttributesBase
		{
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to make a ACE Arsenal. WARNING! Does not work on Simple Objects!";	// Short description, structured text
			sync[] = {"Anything"};				// Array of synced entities (can contain base classes)
		};
	};
    class IK_Modules_RescaleObjects : ACE_Module
	{
		scope = 2;
		displayName = "Rescale Objects";
		function = "STB73_fnc_rescaleObjects";
		category = "STB73_Modules";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		canSetArea = 0;

		class Attributes : AttributesBase
		{
			class RescaleFactor : Edit
			{
				displayName = "Rescale Factor";
				tooltip = "Factor to rescale the objects by. 1 = no change, 2 = double size, 0.5 = half size.";
				property = "STB73_Modules_RescaleObjects_RescaleFactor";
				typeName = "NUMBER";
				defaultValue = "1";
			};
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to rescale.";
			sync[] = {"AnyStaticObject"};
		};
	};
    class IK_Modules_MakeTrippleRArea : ACE_Module
	{
		scope = 2;
		displayName = "Repair, Refuel, Rearm Area";
		function = "STB73_fnc_repairRefuelRearmArea";
		category = "STB73_Modules";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		canSetArea = 0;

		class ModuleDescription : ModuleDescription
		{
			description = "Sync trigger areas to make them a RRR area. Any vehicle that enters this area will be repaired, refuled, and rearmed.";
			sync[] = {"EmptyDetector"};
		};
	};

	class STB73_Module_HEV: Module_OPTRE_HEV
	{
		displayName="[73] HEV Module";
		category="STB73_Modules";
		function="STB73_fnc_ModuleHEV";
		author= AUTHOR;
		class Arguments
		{
			class shipDeployment
			{
				displayName="Deployment Mode";
				description="This controls the drop scene for the players. The drop will always be directly above the module.";
				defaultValue="Frigate";
				typeName="STRING";
				class values
				{
					class n1
					{
						name="Deploy without ship";
						value="No Ship";
					};
					class n2
					{
						name="Deploy from Frigate";
						value="Frigate";
						default=1;
					};
				};
			};
			class LaunchDelay
			{
				displayName="Count Down Timer";
				description="This is the time that the HEVs will be hanging waiting until drop.";
				defaultValue="10";
				typeName="NUMBER";
			};
			class randomXYVelocity
			{
				displayName="Randomised X/Y Velocity";
				description="Random drift of pods on the horizontal axis. This must be at least 2 (otherwise the script will set it to 2) to minimize pods hitting each other.";
				defaultValue="2";
				typeName="NUMBER";
			};
			class launchSpeed
			{
				displayName="Down Velocity On Launch";
				description="A negative value of how fast the pods descend. Should keep at -1.";
				defaultValue="-1";
				typeName="NUMBER";
			};
			class manualControl
			{
				displayName="Player Control Of HEV";
				description="Depreciated Entry. No longer in use";
				defaultValue=1;
				typeName="NUMBER";
				class values
				{
					class n1
					{
						name="Empty";
						value=0;
					};
					class n2
					{
						name="Empty";
						value=1;
						default=1;
					};
				};
			};
			class startHeight
			{
				displayName="STAGE1: Start Height";
				description="Height that the pods will drop from. Recommend above 5000m";
				defaultValue="5000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereStartHeight
			{
				displayName="STAGE2A: Atmospheric Entry Height";
				description="At what height to engage the atmo entry fire effects. The difference between this and the start hieight shouldn't be more then 2000";
				defaultValue="3000";
				typeName="NUMBER";
			};
			class hevDropArmtmosphereEndHeight
			{
				displayName="STAGE2B: End Entry Height";
				description="At what height to end the entry atmo effects.";
				defaultValue="2000";
				typeName="NUMBER";
			};
			class chuteDeployHeightHeight
			{
				displayName="STAGE3A: Chute Deployment Height";
				description="Self explanitory.";
				defaultValue="1000";
				typeName="NUMBER";
			};
			class chuteDetachHeight
			{
				displayName="STAGE3B: Chute Detach Height";
				description="Self explanitory.";
				defaultValue="500";
				typeName="NUMBER";
			};
			class boasterHeight
			{
				displayName="STAGE4: Booster Up Height";
				description="Depreciated entry. No longer in use.";
				defaultValue="0";
				typeName="NUMBER";
			};
			class deleteFrigate
			{
				displayName="Delete Ship";
				description="If spawning with a ship, should it be deleted after drop?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Delete Ship";
						value=1;
						default=1;
					};
					class n2
					{
						name="Dont Delete Ship";
						value=0;
					};
				};
			};
			class deleteChutes
			{
				displayName="Delete Chutes After Detach";
				description="Should the chutes auto delete upon detach or be added to the cleanup module?";
				defaultValue=1;
				typeName="BOOL";
				class values
				{
					class n1
					{
						name="Add Chutes To HEV CleanUp Module";
						value=0;
						default=1;
					};
					class n2
					{
						name="Delete Chutes On Detach";
						value=1;
					};
				};
			};
			class deleteHEVafter
			{
				displayName="HEVs Can Be Delete After";
				description="If the cleanup module is present, HEVs will be deleted after X amount of seconds.";
				defaultValue="600";
				typeName="NUMBER";
			};
		};
	};
    class STB73_Module_ODSTDrop: Module_OPTRE_ODSTDrop
    {
        scope=2;
        displayName="[73] AI ODST Drop Module";
        category="STB73_Modules";
        function="STB73_fnc_ModuleODSTHEV";
        functionPriority=99;
        isGlobal=0;
        isTriggerActivated=1;
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class ODST_Man_1
            {
                displayName="Team Leader";
                description="Class of ODST to be inserted via HEV.";
                defaultValue="random";
                typeName="STRING";
                class values
                {
                    class n0
                    {
                        name="None";
                        value="none";
                    };
                    class n1
                    {
                        name="Random";
                        value="random";
                        default=1;
                    };
                    class n3
                    {
                        name="[73] ODST STB Rifleman";
                        value="73_STB_ODST_Rifleman";
                    };
                    class n4
                    {
                        name="[73] ODST STB Rifleman AT";
                        value="73_STB_ODST_AT";
                    };
                    class n5
                    {
                        name="[73] ODST STB Autorifleman";
                        value="73_STB_ODST_Autorifleman";
                    };
                    class n6
                    {
                        name="[73] ODST STB Marksman";
                        value="73_STB_ODST_Marksman";
                    };
                    class n7
                    {
                        name="[73] ODST STB Grenadier";
                        value="73_STB_ODST_Grenadier";
                    };
                    class n8
                    {
                        name="[73] ODST STB Sniper";
                        value="73_STB_ODST_Sniper";
                    };
                    class n9
                    {
                        name="[73] ODST STB Demo";
                        value="73_STB_ODST_Demo";
                    };
                    class n10
                    {
                        name="[73] ODST STB Scout";
                        value="73_STB_ODST_Scout";
                    };
                    class n11
                    {
                        name="[73] ODST STB Team Lead";
                        value="73_STB_ODST_Team_Lead";
                    };
                    class n12
                    {
                        name="[73] ODST STB SORC";
                        value="73_STB_ODST_Medic";
                    };
                    class n13
                    {
                        name="[73] ODST STB Squad Lead";
                        value="73_STB_ODST_Squad_Lead";
                    };
                };
            };
            class ODST_Man_2: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_3: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_4: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_5: ODST_Man_1
            {
                displayName="Squad Leader";
            };
            class ODST_Man_6: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_7: ODST_Man_1
            {
                displayName="Team Member";
            };
            class ODST_Man_8: ODST_Man_1
            {
                displayName="Team Member";
            };
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class STB73_ODSTDrop: OPTRE_ODSTDrop
    {
        displayName="[73] ODST Drop Module";
        category="STB73_Modules";
        scopeCurator=2;
        curatorInfoType="STB73_ZeusDisplay_ODSTDrop";
        function="STB73_fnc_ModuleODSTHEV";
        portrait="OPTRE_Vehicles\HEV\Data\icon2.paa";
        author="Article 2 Studios";
    };
    class STB73_Module_BattlejumperDrop: Module_OPTRE_ODSTDrop
    {
        scope=2;
        displayName="[73] AI Battlejumper Drop Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="STB73_Modules";
        function="STB73_fnc_ModuleBJHEV";
        class Arguments
        {
            class BJ_Man_1
            {
                displayName="Team Leader";
                description="Class of Battlejumper to be inserted via HEV.";
                defaultValue="random";
                typeName="STRING";
                class values
                {
                    class n0
                    {
                        name="None";
                        value="none";
                    };
                    class n1
                    {
                        name="Random";
                        value="random";
                        default=1;
                    };
                    class n3
                    {
                        name="Battlejumper Rifleman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR";
                    };
                    class n4
                    {
                        name="Battlejumper Rifleman AT";
                        value="OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT";
                    };
                    class n5
                    {
                        name="Battlejumper Autorifleman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman";
                    };
                    class n6
                    {
                        name="Battlejumper Marksman";
                        value="OPTRE_Ins_BJ_Soldier_URB_Marksman";
                    };
                    class n7
                    {
                        name="Battlejumper Grenadier";
                        value="OPTRE_Ins_BJ_Soldier_URB_Grenadier";
                    };
                    class n8
                    {
                        name="Battlejumper Shield";
                        value="OPTRE_Ins_BJ_Soldier_URB_Shield";
                    };
                    class n9
                    {
                        name="Battlejumper Demo";
                        value="OPTRE_Ins_BJ_Soldier_URB_Demolitions";
                    };
                    class n10
                    {
                        name="Battlejumper Scout";
                        value="OPTRE_Ins_BJ_Soldier_URB_Scout";
                    };
                    class n11
                    {
                        name="Battlejumper Team Lead";
                        value="OPTRE_Ins_BJ_Soldier_URB_TeamLeader";
                    };
                    class n12
                    {
                        name="Battlejumper SORC";
                        value="OPTRE_Ins_BJ_Soldier_URB_Corpsman";
                    };
                    class n13
                    {
                        name="Battlejumper Breacher";
                        value="OPTRE_Ins_BJ_Soldier_URB_Engineer2";
                    };
                };
            };
            class BJ_Man_2: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_3: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_4: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_5: BJ_Man_1
            {
                displayName="Squad Leader";
            };
            class BJ_Man_6: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_7: BJ_Man_1
            {
                displayName="Team Member";
            };
            class BJ_Man_8: BJ_Man_1
            {
                displayName="Team Member";
            };
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
    class STB73_BattlejumperDrop: OPTRE_ODSTDrop
    {
        displayName="[73] Battlejumper Drop Module";
        category="STB73_Modules";
        scopeCurator=2;
        curatorInfoType="STB73_ZeusDisplay_BJDrop";
        function="STB73_fnc_ModuleBJHEV";
        author="Article 2 Studios";
    };
    class STB73_Module_OCLSSquadDrop: Module_F
    {
        scope=2;
        displayName="[73] AI OCLS Squad Drop Module";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="STB73_Modules";
        function="STB73_fnc_ModuleOCLSSquadPod";
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class waypoints
            {
                displayName="WayPoints";
                description="An array or map marker variable names that the groups spawned will follow once on the ground as waypoints. No quotations are needed for example: M1,Marker2,MapMarker1";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="What should the group do on their final waypoint. If you have given no waypoints then this option is ignored. If CBA Garrison is selected units will find houses within 75m of last waypoint. If CBA patrol is selected group will patrol within a 300m area of last waypoint.";
                defaultValue=" ";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="BIS Cycle Back To First Waypoint";
                        value="cycle";
                    };
                    class n2
                    {
                        name="CBA Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="CBA Patrol Around Final Waypoint";
                        value="patrol";
                    };
                    class n4
                    {
                        name="Stop, Do Nothing";
                        value="";
                        default=1;
                    };
                };
            };
        };
    };
	class OPTRE_OCLSSquadDrop;
    class STB73_OCLSSquadDrop: OPTRE_PelicanSupplyDrop
    {
        displayName="[73] OCLS Squad Drop Module";
        category="STB73_Modules";
        scopeCurator=2;
        curatorInfoType="";
        function="STB73_fnc_ModuleOCLSSquadPod";
        author="Article 2 Studios";
    };
	class Module_OPTRE_PelicanAirAssault;
    class STB73_Module_PelicanAirAssault: Module_OPTRE_PelicanAirAssault
    {
        scope=2;
        displayName="[73] Pelican Air Assault Event";
        icon="\OPTRE_Modules\data\picture\Icon_OPTRE.paa";
        category="STB73_Modules";
        function="STB73_fnc_ModulePelicanAirAssault";
		curatorInfoType="STB73_ZeusDisplay_PelicanAirAssault";
        author="Article 2 Studios";
        is3DEN=0;
        class Arguments
        {
            class Pelican_Unarmed_Colour
            {
                displayName="D77-TC Pelican";
                description="[Pelican] The D77-TC is a variant of the Pelican Drop Ship, this option determines what authority the Pelican falls under.";
                defaultValue="10th";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="73rd STB Pelican";
                        value="73rd";
                    };
                    class n2
                    {
                        name="10th MEB Pelican";
                        value="10th";
                        default=1;
                    };
                };
            };
            class spawnDir
            {
                displayName="Spawn Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="360";
                typeName="NUMBER";
            };
            class exitDir
            {
                displayName="Exit Direction";
                description="A number that determines the direction from the module the Pelican will spawn.";
                defaultValue="180";
                typeName="NUMBER";
            };
            class distance
            {
                displayName="Spawn / De-spawn Distance";
                description="A number that determines the distance the Pelican will be spawned in the direction of Exit and Spawn.";
                defaultValue="3000";
                typeName="NUMBER";
            };
            class flyInHeight
            {
                displayName="Fly In Height";
                description="A number that determines the height the Pelican will fly at.";
                defaultValue="100";
                typeName="NUMBER";
            };
            class side
            {
                displayName="Side Of Pelican / Groups";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="WEST";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Side: EAST";
                        value="EAST";
                    };
                    class n2
                    {
                        name="Side: WEST";
                        value="WEST";
                        default=1;
                    };
                    class n3
                    {
                        name="Side: Independent";
                        value="INDEPENDENT ";
                    };
                    class n4
                    {
                        name="Side: civilian";
                        value="CIVILIAN";
                    };
                };
            };
            class vehicle
            {
                displayName="Vehicle To Drop";
                description="Type of vehicle required. A driver and a gunner will be added to the vehicles.";
                defaultValue="";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Don't Drop A Vehicles";
                        value="";
                        default=1;
                    };
                };
            };
            class box1
            {
                displayName="Branch Of Military";
                description="Type of units to be spawned, 73rd, 10th MEB..";
                defaultValue="Marines";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="73rd STB";
                        value="73rd STB";
                    };
                    class n2
                    {
                        name="10th MEB";
                        value="10th MEB";
                        default=1;
                    };
                };
            };
            class box2
            {
                displayName="Squad Sizes";
                description="The number of units in both squads spawned. 2 squads will always be spawned.";
                defaultValue="6";
                typeName="NUMBER";
                class values
                {
                    class n6
                    {
                        name="Six";
                        value=6;
                        default=1;
                    };
                };
            };
            class box3
            {
                displayName="WayPoints";
                description="An array or marker position that the groups spawned will follow once on the ground. For Example: M1,M2,Marker1,MapMarkerZ (No Spaces).";
                defaultValue="";
                typeName="STRING";
            };
            class finalWaypoint
            {
                displayName="Final Waypoint Task";
                description="Side Of Pelican, WEST or EAST";
                defaultValue="cycle";
                typeName="STRING";
                class values
                {
                    class n1
                    {
                        name="Cycle Back To First Waypoint";
                        value="cycle";
                        default=1;
                    };
                    class n2
                    {
                        name="Garrison Near Final Waypoint";
                        value="garrison";
                    };
                    class n3
                    {
                        name="Patrol Around Final Waypoint";
                        value="patrol ";
                    };
                };
            };
            class code
            {
                displayName="Custom Box Code";
                description="A script that will be run on any pod assigned as CUSTOM. _This refers to the pod that is spawned. For example: _this addMagazineCargoGlobal ['OPTRE_60Rnd_5x23mm_Mag',4];";
                defaultValue="";
                typeName="STRING";
            };
        };
        class ModuleDescription
        {
            description[]=
            {
                "This module will spawn a Pelican drop ship that can deliver 2 squads and / or a vehicle the spawned groups can be controlled by zeus. Place the module where you would like the supplies to be dropped on the map. Note that if a Landing Pad is nearby the pelican will always try to land on that position when delivering vehicles as this module uses the LAND command, this may cause a problem if more than one Pelican try to land on a pad at once (This apply s to Landing Pads native to the map as well a spawned / placed pads.)."
            };
            sync[]=
            {
                "EmptyDetector"
            };
            position=1;
            direction=0;
            class EmptyDetector
            {
                duplicate=1;
                position=0;
                direction=0;
                optional=1;
            };
        };
    };
	class OPTRE_PelicanAirAssault;
    class STB73_PelicanAirAssault: OPTRE_PelicanAirAssault
    {
        displayName="[73] Pelican Air Assault";
        category="STB73_Modules";
        scopeCurator=2;
        curatorInfoType="STB73_ZeusDisplay_PelicanAirAssault";
        function="STB73_fnc_ModulePelicanAirAssault";
        portrait="OPTRE_Vehicles\Pelican\Data\icon2.paa";
        author="Article 2 Studios";
    };
};
