class CfgPatches
{
    class BNA_KC_Vehicles_LAATc
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_Vehicles",
                // Core Vehicle Addon
            "lsd_vehicles_heli",
                // LAAT/c
            "ls_vehicles_weapons",
                // Weapons
                // Flares
            "BNA_KC_Gear_Aviation",
                // Pilot unit
            "BNA_KC_Vehicles_Sounds"
                // Impulse sounds
        };
        units[] =
        {
            "BNA_KC_LAATc"
        };
        weapons[] = {};
    };
};