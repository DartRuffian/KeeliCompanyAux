class CfgPatches
{
    class BNA_KC_Props_Resupply
    {
        addonRootClass= "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
			"3AS_Prop_Crates"
				// All of the resupply crates
        };
        units[] =
		{
			"BNA_KC_Resupply_SquadAmmo",
			"BNA_KC_Resupply_PlatoonAmmo"
		};
        weapons[] = {};
    };
};