class cfgGlasses
{
    // Glasses configurations go here
    class None;
	class TCP_G_Balaclava_Base: None
	{
		author="$STR_TCP_Data_Author";
		dlc="TCP";
		scope=0;
		model="\TCP\Characters\BLUFOR\UNSC\Army\Facewear\balaclava\g_Balaclava.p3d";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Facewear\balaclava\data\camo\black\g_Balaclava_CO.paa"
		};
        hoa_sling_hideWhenSlung = 1; // 0-Nothing 1-Hide item when slung
        hoa_sling_slingWithHelmet = 0;
	};

	class MA_ODST_Facewear_Rebreather;
	class STB73_ODST_CBRN : MA_ODST_Facewear_Rebreather
	{
		displayName=Q([73] ODST CBRN Mask);
		author=AUTHOR;
		CBRN_protectionLevel = "8";
	};
};
