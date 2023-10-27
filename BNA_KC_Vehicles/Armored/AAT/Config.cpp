#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Tank_F;
    class 3AS_AAT_base_F: Tank_F
    {
        class Turrets;
    };
    class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class 3AS_AAT: 3AS_CIS_AAT_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };
    class BNA_KC_AAT_Base: 3AS_AAT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";

        displayName = "AAT";

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};

        textureList[] =
        {
            "CIS", 1,
            "TradeFederation", 0,
            "Green", 0,
            "Red", 0,
            "Desert", 0,
            "Geonosis", 0,
            "Woodland", 0,
            "Tropical", 0,
            "Arid", 0,
            "Winter", 0,
            "Aqua", 0
        };
        class TextureSources
        {
            class CIS
            {
                displayName = "CIS";
                author = "$STR_3AS_Studio";
                factions[] = {"BNA_KC_OPFOR_CIS"};
                textures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
            };
            class TradeFederation: CIS
            {
                displayName = "Trade Federation";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
            };
            class Green: CIS
            {
                displayName = "Green";
                factions[] = {"BNA_KC_OPFOR_CIS", "BNA_KC_OPFOR_TU"};
                textures[] = {"\3AS\3AS_AAT\data\Green_AAT_CO.paa"};
            };
            class Red: Green
            {
                displayName = "Red";
                textures[] = {"\3AS\3AS_AAT\data\Red_AAT_CO.paa"};
            };
            class Desert: Green
            {
                displayName = "Camo - Desert";
                textures[] = {"\3AS\3AS_AAT\data\Desert_AAT_CO.paa"};
            };
            class Geonosis: Green
            {
                displayName = "Camo - Geonosis";
                textures[] = {"\3AS\3AS_AAT\data\Geonosis_AAT_CO.paa"};
            };
            class Woodland: Green
            {
                displayName = "Camo - Woodland";
                textures[] = {"\3AS\3AS_AAT\data\Woodland_AAT_CO.paa"};
            };
            class Tropical: Green
            {
                displayName = "Camo - Tropical";
                textures[] = {"\3AS\3AS_AAT\data\Tropical_AAT_CO.paa"};
            };
            class Arid: Green
            {
                displayName = "Camo - Arid";
                textures[] = {"\3AS\3AS_AAT\data\Arid_AAT_CO.paa"};
            };
            class Winter: Green
            {
                displayName = "Camo - Winter";
                textures[] = {"\3AS\3AS_AAT\data\Winter_AAT_CO.paa"};
            };
            class Aqua: Green
            {
                displayName = "Camo - Aqua";
                textures[] = {"\3AS\3AS_AAT\data\Aqua_AAT_CO.paa"};
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"3AS_AATCannon", "SmokeLauncher"};
                magazines[] =
                {
                    "3AS_24Rnd_AAT_AP",
                    "3AS_24Rnd_AAT_AP",
                    "SmokeLauncherMag"
                };

                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
                        magazines[] =
                        {
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };

        class AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "3AS_AATCannon";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
        };
    };

    class BNA_KC_AAT_Heavy_Base: BNA_KC_AAT_Base
    {
        displayName = "AAT (Heavy)";
        hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\Red_AAT_CO.paa"};
        accuracy = 1000;
        armor = 1250;
    };

    class All;
    class AllVehicles: All
    {
        class NewTurret;
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Tank: LandVehicle {};
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
            };
        };
    };
    class ls_ground_aat_base: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };
    class BNA_KC_AAT_King_Base: ls_ground_aat_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";

        displayName = "AAT (King)";

        armor = 2000;
        armorStructural = 10;

        hiddenSelectionsTextures[] =
        {
            "\ls_vehicles_ground\aat\data\black\body1_black_co.paa",
            "\ls_vehicles_ground\aat\data\black\body2_black_co.paa",
            "\ls_vehicles_ground\aat\data\black\gun_black_co.paa"
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {

                    };
                };
            };
        };
    };
};