params ["_switch"];

closeDialog 2;
switch (_switch) do
{
	case "Main";
	case "Back":
	{
		createDialog "STB73_TraitSelector_Main_UI";
	};
	case "Traits":
	{
		createDialog "STB73_TraitSelector_Traits_UI";
	};
	default {};
};