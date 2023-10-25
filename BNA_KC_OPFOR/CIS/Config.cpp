#include "CfgPatches.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_OPFOR_Uniform_Base: ls_redforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Uniform_Droid_Base: BNA_KC_OPFOR_Uniform_Base
    {

    };
    class BNA_KC_CIS_Uniform_B1_Droid: BNA_KC_CIS_Uniform_Droid_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] B1 Battle Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_B1_Droid";
        };
    };

    class BNA_KC_CIS_Uniform_BXDroid: BNA_KC_CIS_Uniform_Droid_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_BXDroid";
        };
    };

    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Uniform_BXDroid_Actor: BNA_KC_Uniform_Base
    {
        displayName = "[CIS] BX Commando Droid (Actor)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_BXDroid_Actor";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class ls_redforVest_base: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        };
    };
    class BNA_KC_CIS_Vest_BXDroid: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] BX Commando Droid [Gun Vest]";
        model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";

        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
            };
            uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
        };
    };
    class BNA_KC_CIS_Vest_BXDroid_Melee: BNA_KC_CIS_Vest_BXDroid
    {
        displayName = "[CIS] BX Commando Droid [Melee Vest]";
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };

    class SWLB_clone_basic_armor;
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Vest_BXDroid_Actor: BNA_KC_Vest_Basic
    {
        displayName = "[CIS] BX Commando Droid (Actor)";
        picture = "\ls_data\icons\LS_logo_ca.paa";
    };
    class BNA_KC_CIS_Vest_BXDroid_Melee_Actor: BNA_KC_CIS_Vest_BXDroid_Actor
    {
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_CIS_Unit_Droid_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_CIS";

        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = {"", "Head_NATO"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";
        canBleed = 0;

        weapons[] =
        {
            "BNA_KC_E5",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "BNA_KC_E5",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };

        linkedItems[] = {"BNA_KC_NVG_Chip", "SWLB_comlink_droid"};
        respawnLinkedItems[] = {"BNA_KC_NVG_Chip", "SWLB_comlink_droid"};

        class SoundBleeding {breath[] = {};};
        class SoundBreath {breath[] = {};};
        class SoundBurning {breath[] = {};};
        class SoundChoke {breath[] = {};};
        class SoundDrown {breath[] = {};};
        class SoundEnvironExt
        {
            generic[] =
            {
                {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
        };
        class SoundEquipment
        {
            generic[] =
            {
                {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
        };
        class SoundInjured {breath[] = {};};
        class SoundRecovered {breath[] = {};};
    };

    class BNA_KC_CIS_Unit_B1_Droid: BNA_KC_CIS_Unit_Droid_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "B1 Battle Droid";

        // Editor Properties
        editorSubcategory = "BNA_KC_SubCat_CIS_Infantry";
        editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";

        uniformClass = "BNA_KC_CIS_Uniform_B1_Droid";
        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"};

        backpack = "JLTS_B1_backpack";
    };

    class BNA_KC_CIS_Unit_BXDroid: BNA_KC_CIS_Unit_Droid_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] BX Commando Droid";

        // Editor Properties
        editorSubcategory = "BNA_KC_SubCat_CIS_SpecOps";
        editorPreview = "\BNA_KC_OPFOR\CIS\Data\Textures\Previews\BXDroid.jpg";

        uniformClass = "BNA_KC_CIS_Uniform_BXDroid";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};

        weapons[] =
        {
            "BNA_KC_E5",
            "SWLW_RG4D",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "BNA_KC_E5",
            "SWLW_RG4D",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            ITEM_2("SWLW_RG4D_Mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            ITEM_2("SWLW_RG4D_Mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        items[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };
        respawnItems[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };

        linkedItems[] = {"BNA_KC_CIS_Vest_BXDroid", "BNA_KC_NVG_Chip", "SWLB_comlink_droid"};
        respawnLinkedItems[] = {"BNA_KC_CIS_Vest_BXDroid", "BNA_KC_NVG_Chip", "SWLB_comlink_droid"};
    };

    class BNA_KC_Unit_Base;
    class BNA_KC_CIS_Unit_BXDroid_Actor: BNA_KC_Unit_Base
    {
        scope = 1;
        scopeCurator = 0;

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        uniformClass = "BNA_KC_CIS_Uniform_BXDroid_Actor";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};
    };
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_CIS
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] CIS";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_CIS_Infantry
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry";
    };

    class BNA_KC_SubCat_CIS_SpecOps: BNA_KC_SubCat_CIS_Infantry
    {
        displayName = "Spec Ops";
    };

    class BNA_KC_SubCat_CIS_Tanks: BNA_KC_SubCat_CIS_Infantry
    {
        displayName = "Tanks";
    };
};