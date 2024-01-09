class CfgPatches
{
    class BNA_KC_Vehicles_Glavenus
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "A3_Soft_F_MRAP_02",
                // Karetel
            "BNA_KC_Vehicles_Hydra",
                // Turret textures
            "BNA_KC_Vehicles_Weapons",
                // Co-Ax
            "BNA_KC_Gear_Infantry"
                // Unit
        };
        units[] =
        {
            "BNA_KC_Glavenus_Unarmed",
            "BNA_KC_Glavenus_Medic",
            "BNA_KC_Glavenus_HMG",
            "BNA_KC_Glavenus_GMG"
        };
        weapons[] = {};
    };
};