#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base
    {
        class ACE_SelfActions;
        class UserActions;
    };
    class BNA_KC_LAATc: lsd_heli_laatc
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAir";
        editorPreview = "\BNA_KC_Vehicles\Air\LAATc\Data\Previews\LAATc.jpg";

        displayName = "LAAT/c";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        ls_impulsor_soundOn = "BNA_KC_Sound_ImpulseOn";
        ls_impulsor_soundOff = "BNA_KC_Sound_ImpulseOff";
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;
        // ls_impulsor_boostSpeed_1 = 400; // Impulse speeds, default values listed
        // ls_impulsor_boostSpeed_2 = 600;

        weapons[] = {"ls_laat_gun", "ls_weapon_CMFlareLauncher"};
        magazines[] = {"200rnd_laat_he_mag", "200rnd_laat_he_mag", "ls_mag_240rnd_CMFlareChaff_blue", "ls_mag_240rnd_CMFlareChaff_blue"};

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Auxiliary.paa",
            "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Cockpit.paa",
            "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
            "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Hull.paa",
            "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Wings.paa"
        };
        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\cockpit_co.paa",
                    "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\hull_co.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\wings_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Auxiliary.paa",
                    "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Cockpit.paa",
                    "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Hull.paa",
                    "\BNA_KC_Vehicles\Air\LAATc\Data\Textures\KeeliCompany\Wings.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        class UserActions: UserActions
        {
            class Impulse
            {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;

                shortcut = "User19";
                onlyforplayer = 0;
                hideOnUse = 1;

                condition = QUOTE(isEngineOn this and ace_player == currentPilot this and !isTouchingGround this);
                statement = QUOTE(this call ls_vehicle_fnc_ImpulseJoystick);
            };
            class Repulse: Impulse
            {
                displayName = "Repulse";
                shortcut = "User20";
                statement = QUOTE(this call ls_vehicle_fnc_RepulseJoystick);
            };

            SPECIAL_LOAD
        };
    };
};