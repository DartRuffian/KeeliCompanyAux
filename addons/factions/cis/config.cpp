#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(armor),
            "JLTS_characters_DroidArmor",
            "SWLB_radios"
        };
        units[] = {
            QCLASS(CIS_Unit_Base),
            QCLASS(CIS_Unit_Droid_Base),
            QCLASS(CIS_Unit_Droid_B1),
            QCLASS(CIS_Unit_Droid_B1_Heavy),
            QCLASS(CIS_Unit_Droid_B1_AT),
            QCLASS(CIS_Unit_Droid_B1_AA),
            QCLASS(CIS_Unit_Droid_B1_Sniper),
            QCLASS(CIS_Unit_Droid_B1_Marine),
            QCLASS(CIS_Unit_Droid_B1_CQC),
            QCLASS(CIS_Unit_Droid_B1_Security),
            QCLASS(CIS_Unit_Droid_B1_Commander),
            QCLASS(CIS_Unit_Droid_B1_Crew),
            QCLASS(CIS_Unit_Droid_B1_Pilot),
            QCLASS(CIS_Unit_Droid_B1_Saboteur),
            QCLASS(CIS_Unit_Droid_B1_Prototype),
            QCLASS(CIS_Unit_Droid_B1_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Heavy_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_AT_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_AA_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Sniper_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_CQC_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Commander_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Training),
            QCLASS(CIS_Unit_Droid_B1_Heavy_Training),
            QCLASS(CIS_Unit_Droid_B1_AT_Training),
            QCLASS(CIS_Unit_Droid_B1_AA_Training),
            QCLASS(CIS_Unit_Droid_B1_Sniper_Training),
            QCLASS(CIS_Unit_Droid_B1_CQC_Training),
            QCLASS(CIS_Unit_Droid_B1_Commander_Training),
            QCLASS(CIS_Unit_Droid_BX),
            QCLASS(CIS_Backpack_Droid_B1),
            QCLASS(CIS_Backpack_Droid_B1_predef_AT),
            QCLASS(CIS_Backpack_Droid_B1_predef_AA),
            QCLASS(CIS_Backpack_Droid_B1_Saboteur),
            QCLASS(CIS_Backpack_Droid_B1_Prototype),
            QCLASS(CIS_Backpack_Droid_B1_Geonosis),
            QCLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AT),
            QCLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AA),
            QCLASS(CIS_Backpack_Droid_B1_Training),
            QCLASS(CIS_Backpack_Droid_B1_Training_predef_AT),
            QCLASS(CIS_Backpack_Droid_B1_Training_predef_AA),
            QCLASS(CIS_Backpack_Droid_B1_Antenna),
            QCLASS(CIS_Backpack_Droid_B1_Antenna_Geonosis),
            QCLASS(CIS_Backpack_Droid_B1_Antenna_Training),
            QCLASS(AAT_CIS)
        };
        weapons[] = {
            QCLASS(CIS_Uniform_Base),
            QCLASS(CIS_Uniform_Droid_Base),
            QCLASS(CIS_Uniform_Droid_B1),
            QCLASS(CIS_Uniform_Droid_B1_Marine),
            QCLASS(CIS_Uniform_Droid_B1_Security),
            QCLASS(CIS_Uniform_Droid_B1_Commander),
            QCLASS(CIS_Uniform_Droid_B1_Crew),
            QCLASS(CIS_Uniform_Droid_B1_Pilot),
            QCLASS(CIS_Uniform_Droid_B1_Saboteur),
            QCLASS(CIS_Uniform_Droid_B1_Prototype),
            QCLASS(CIS_Uniform_Droid_B1_Geonosis),
            QCLASS(CIS_Uniform_Droid_B1_Commander_Geonosis),
            QCLASS(CIS_Uniform_Droid_B1_Training),
            QCLASS(CIS_Uniform_Droid_BX),
            QCLASS(CIS_Vest_Droid_BX),
            QCLASS(CIS_Vest_Droid_BX_Actor)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "XtdGearModels.hpp"