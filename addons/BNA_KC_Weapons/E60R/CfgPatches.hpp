class CfgPatches
{
    class BNA_KC_Weapons_E60R
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Sound Set/Shader
            "JLTS_weapons_E60R",
                // E-60R
            "A3_Weapons_F_Launchers_RPG32",
                // E-60R AT base class
            "LS_weapon_core",
                // Firing sound
            "A3_Weapons_F",
                // Base Missile Magazines
                // Base Missile Ammo
            "A3_Data_F_ParticleEffects"
                // Base cloudlet
                // Missile3 effect
                // RocketLight
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_E60R_AA_Base",
            "BNA_KC_E60R_AA",
            "BNA_KC_E60R_AA_Fried",
            "BNA_KC_E60R_AT_Base",
            "BNA_KC_E60R_AT",
            "BNA_KC_E60R_AT_Fried"
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_E60R_AT",
            "Aux12thFleet_Mag_E60R_HE",
            "Aux12thFleet_Mag_E60R_AA"
        };
        ammo[] =
        {
            "Aux12thFleet_Ammo_E60R_AT",
            "Aux12thFleet_Ammo_E60R_HE",
            "Aux12thFleet_Ammo_E60R_AA"
        };
    };
};