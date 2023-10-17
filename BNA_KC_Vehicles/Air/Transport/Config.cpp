#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base
    {
        class ACE_SelfActions;
    };
    class BNA_KC_RepublicTransport: 3AS_Republic_Transport_01
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
        editorPreview = "\BNA_KC_Vehicles\Air\Transport\Data\Previews\RepublicTransport.jpg";

        displayName = "Republic Transport";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        weapons[] = {"3as_ARC_Light_Canon", "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] =
        {
            "3as_ARC_500Rnd_Light_Shells",
            "3as_ARC_500Rnd_Light_Shells",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "Laserbatteries"
        };

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Air\Transport\Data\Textures\KeeliCompany\Body.paa",
            "\3as\3as_starships\data\hs_int_co.paa",
            "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3as_starships\data\hs_ext_co.paa",
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "\3as\3as_starships\data\hs_Imp_ext_co.paa",
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Air\Transport\Data\Textures\KeeliCompany\Body.paa",
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        INVENTORY_VEHICLE_BASE(2)
    };

    class BNA_KC_RepubTransport: BNA_KC_RepublicTransport
    {
        scope = 1;
        scopeCurator = 1;
    };
};