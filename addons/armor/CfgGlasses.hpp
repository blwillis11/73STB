class cfgGlasses
{
    // Glasses configurations go here
    class None;
	class TCP_G_Balaclava_Base: None
	{
        hoa_sling_hideWhenSlung = 1; // 0-Nothing 1-Hide item when slung
        hoa_sling_slingWithHelmet = 0;
	};

	class TCP_G_Neck_Vacseal_Base;
	class TCP_G_Neck_Vacseal_Black : TCP_G_Neck_Vacseal_Base
	{
		CBRN_protectionLevel = "4";
		hoa_sling_hideWhenSlung = 1; // 0-Nothing 1-Hide item when slung
        hoa_sling_slingWithHelmet = 0;
	};
	class STB73_G_Neck_Vacseal_Black : TCP_G_Neck_Vacseal_Black
	{
		CBRN_protectionLevel = "4";
		hoa_sling_hideWhenSlung = 1; // 0-Nothing 1-Hide item when slung
        hoa_sling_slingWithHelmet = 0;
	};

	class STB73_ReconCloak : None
	{
		author = AUTHOR;
		scope = 1;
		displayName = "[73] Recon Cloak";
		model = "z\73STB\addons\armor\data\facewear\data\reconHood\ReconCloak.p3d";
	};
};
