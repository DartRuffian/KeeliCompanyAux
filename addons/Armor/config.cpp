#include "script_component.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class BNA_KC_Armor
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "BNA_KC_Main",
            "ls_armor_bluefor",
            "lsd_units_bluefor",
            "lsd_equipment_bluefor",
            "SWLB_equipment_backpacks",
            "SWLB_Clones",
            "SWLB_CEE",
            "JLTS_core"
        };
        units[] =
        {
            "BNA_KC_Unit_Base",
            "BNA_KC_Unit_Phase1_Base",
            "BNA_KC_Unit_Phase1_CR",
            "BNA_KC_Unit_Phase1_CT",
            "BNA_KC_Unit_Phase1_SCT",
            "BNA_KC_Unit_Phase1_VCT",
            "BNA_KC_Unit_Phase1_CLC",
            "BNA_KC_Unit_Phase1_CPL",
            "BNA_KC_Unit_Phase1_CS",
            "BNA_KC_Unit_Phase1_CSS",
            "BNA_KC_Unit_Phase1_CSFC",
            "BNA_KC_Unit_Phase1_CMS",
            "BNA_KC_Unit_Phase1_CSM",
            "BNA_KC_Unit_Phase2_Base",
            "BNA_KC_Unit_Phase2_CR",
            "BNA_KC_Unit_Phase2_CT",
            "BNA_KC_Unit_Phase2_CT_Legacy",
            "BNA_KC_Unit_Phase2_SCT",
            "BNA_KC_Unit_Phase2_VCT",
            "BNA_KC_Unit_Phase2_CLC",
            "BNA_KC_Unit_Phase2_CPL",
            "BNA_KC_Unit_Phase2_CS",
            "BNA_KC_Unit_Phase2_CSS",
            "BNA_KC_Unit_Phase2_CSFC",
            "BNA_KC_Unit_Phase2_CMS",
            "BNA_KC_Unit_Phase2_CSM",
            "BNA_KC_Unit_Phase2_WO",
            "BNA_KC_Unit_Phase2_WO2",
            "BNA_KC_Unit_Phase2_WO3",
            "BNA_KC_Unit_Phase2_CL",
            "BNA_KC_Unit_Phase2_CL1",
            "BNA_KC_Unit_Phase2_Recruit_CamoBrown",
            "BNA_KC_Unit_Phase2_Recruit_CamoGrey",
            "BNA_KC_Unit_Phase2_Enlisted_CamoBrown",
            "BNA_KC_Unit_Phase2_Enlisted_CamoGrey",
            "BNA_KC_Unit_Phase2_NCO_CamoBrown",
            "BNA_KC_Unit_Phase2_NCO_CamoGrey",
            "BNA_KC_Unit_Phase2_Officer_CamoBrown",
            "BNA_KC_Unit_Phase2_Officer_CamoGrey",
            "BNA_KC_Unit_Phase2_Insulated_Base",
            "BNA_KC_Unit_Phase2_Insulated_CT",
            "BNA_KC_Unit_Phase1_CXA",
            "BNA_KC_Unit_Phase2_CXA",
            "BNA_KC_Unit_Phase2_CXE",
            "BNA_KC_Unit_Phase1_Tanker_CT",
            "BNA_KC_Unit_Phase2_Tanker_CT",
            "BNA_KC_Unit_ARC_CT",
            "BNA_KC_Unit_ARC_Enlisted_CamoNight",
            "BNA_KC_Unit_ARF_CT",
            "BNA_KC_Unit_Commando_Base",
            "BNA_KC_Unit_Jedi_Knight",
            "BNA_KC_Unit_Jedi_Commander",
            "BNA_KC_Backpack_Base",
            "BNA_KC_Backpack",
            "BNA_KC_Backpack_Heavy_Base",
            "BNA_KC_Backpack_Heavy",
            "BNA_KC_Backpack_Radio_Base",
            "BNA_KC_Backpack_Radio",
            "BNA_KC_Backpack_Medic_Base",
            "BNA_KC_Backpack_Medic",
            "BNA_KC_Backpack_Medic_Heavy_Base",
            "BNA_KC_Backpack_Medic_Heavy",
            "BNA_KC_Backpack_Medic_Radio_Base",
            "BNA_KC_Backpack_Medic_Radio",
            "BNA_KC_Backpack_Radio_Mini_Base",
            "BNA_KC_Backpack_Radio_Mini"
        };
        weapons[] =
        {
            "BNA_KC_Helmet_Base",
            "BNA_KC_Helmet_Phase1_Base",
            "BNA_KC_Helmet_Phase1_CR",
            "BNA_KC_Helmet_Phase1_CT",
            "BNA_KC_Helmet_Phase1_CT_v2",
            "BNA_KC_Helmet_Phase1_CT_v3",
            "BNA_KC_Helmet_Phase1_CT_v4",
            "BNA_KC_Helmet_Phase1_SCT",
            "BNA_KC_Helmet_Phase1_VCT",
            "BNA_KC_Helmet_Phase1_CLC",
            "BNA_KC_Helmet_Phase1_CPL",
            "BNA_KC_Helmet_Phase1_CS",
            "BNA_KC_Helmet_Phase1_CSS",
            "BNA_KC_Helmet_Phase1_CSFC",
            "BNA_KC_Helmet_Phase1_CMS",
            "BNA_KC_Helmet_Phase1_CSM",
            "BNA_KC_Helmet_Phase1_Recruit_CamoBrown",
            "BNA_KC_Helmet_Phase1_Recruit_CamoGrey",
            "BNA_KC_Helmet_Phase1_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Phase1_Enlisted_CamoGrey",
            "BNA_KC_Helmet_Phase1_NCO_CamoBrown",
            "BNA_KC_Helmet_Phase1_NCO_CamoGrey",
            "BNA_KC_Helmet_Phase1_Officer_CamoBrown",
            "BNA_KC_Helmet_Phase1_Officer_CamoGrey",
            "BNA_KC_Helmet_Phase2_Base",
            "BNA_KC_Helmet_Phase2_CR",
            "BNA_KC_Helmet_Phase2_CR_Legacy",
            "BNA_KC_Helmet_Phase2_CT",
            "BNA_KC_Helmet_Phase2_CT_v2",
            "BNA_KC_Helmet_Phase2_CT_Legacy",
            "BNA_KC_Helmet_Phase2_SCT",
            "BNA_KC_Helmet_Phase2_SCT_Legacy",
            "BNA_KC_Helmet_Phase2_VCT",
            "BNA_KC_Helmet_Phase2_VCT_Legacy",
            "BNA_KC_Helmet_Phase2_CLC",
            "BNA_KC_Helmet_Phase2_CLC_Legacy",
            "BNA_KC_Helmet_Phase2_CPL",
            "BNA_KC_Helmet_Phase2_CS",
            "BNA_KC_Helmet_Phase2_CS_Legacy",
            "BNA_KC_Helmet_Phase2_CSS",
            "BNA_KC_Helmet_Phase2_CSFC",
            "BNA_KC_Helmet_Phase2_CMS",
            "BNA_KC_Helmet_Phase2_CMS_Legacy",
            "BNA_KC_Helmet_Phase2_CSM",
            "BNA_KC_Helmet_Phase2_Officer",
            "BNA_KC_Helmet_Phase2_WO",
            "BNA_KC_Helmet_Phase2_WO2",
            "BNA_KC_Helmet_Phase2_WO3",
            "BNA_KC_Helmet_Phase2_CL",
            "BNA_KC_Helmet_Phase2_CL1",
            "BNA_KC_Helmet_Phase2_Recruit_CamoBrown",
            "BNA_KC_Helmet_Phase2_Recruit_CamoGrey",
            "BNA_KC_Helmet_Phase2_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Phase2_Enlisted_CamoGrey",
            "BNA_KC_Helmet_Phase2_NCO_CamoBrown",
            "BNA_KC_Helmet_Phase2_NCO_CamoGrey",
            "BNA_KC_Helmet_Phase2_Officer_CamoBrown",
            "BNA_KC_Helmet_Phase2_Officer_CamoGrey",
            "BNA_KC_Helmet_Phase2_Insulated_Base",
            "BNA_KC_Helmet_Phase2_Insulated_CT",
            "BNA_KC_Helmet_ARC_Base",
            "BNA_KC_Helmet_ARC_CT",
            "BNA_KC_Helmet_ARC_CT_v2",
            "BNA_KC_Helmet_ARC_Enlisted_CamoBrown",
            "BNA_KC_Helmet_ARC_Enlisted_CamoGrey",
            "BNA_KC_Helmet_ARC_Enlisted_CamoNight",
            "BNA_KC_Helmet_Phase1_ARC_CT",
            "BNA_KC_Helmet_ARF_Base",
            "BNA_KC_Helmet_ARF_CT",
            "BNA_KC_Helmet_ARF_CT_v2",
            "BNA_KC_Helmet_ARF_Enlisted_CamoBrown",
            "BNA_KC_Helmet_ARF_Enlisted_CamoGrey",
            "BNA_KC_Helmet_BARC_Base",
            "BNA_KC_Helmet_BARC_CT",
            "BNA_KC_Helmet_Katarn_Base",
            "BNA_KC_Helmet_Airborne_Base",
            "BNA_KC_Helmet_Airborne_CT",
            "BNA_KC_Helmet_Airborne_CT_v2",
            "BNA_KC_Helmet_Engineer_Base",
            "BNA_KC_Helmet_Engineer_CT",
            "BNA_KC_Helmet_Engineer_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Engineer_Enlisted_CamoGrey",
            "BNA_KC_Helmet_Phase1_Pilot_Base",
            "BNA_KC_Helmet_Phase1_Pilot_CXA",
            "BNA_KC_Helmet_Phase2_Pilot_Base",
            "BNA_KC_Helmet_Phase2_Pilot_CXA",
            "BNA_KC_Helmet_Phase2_Pilot_CXE",
            "BNA_KC_Helmet_Phase2_Pilot_Officer_CamoBrown",
            "BNA_KC_Helmet_Phase2_Pilot_Officer_CamoGrey",
            "BNA_KC_Helmet_Phase1_Tanker_Base",
            "BNA_KC_Helmet_Phase1_Tanker_CT",
            "BNA_KC_Helmet_Phase1_Tanker_CT_v2",
            "BNA_KC_Helmet_Phase2_Tanker_Base",
            "BNA_KC_Helmet_Phase2_Tanker_CT",
            "BNA_KC_Helmet_Phase2_Tanker_CT_v2",
            "BNA_KC_Helmet_Phase2_Tanker_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Phase2_Tanker_Enlisted_CamoGrey",
            "BNA_KC_Uniform_Base",
            "BNA_KC_Uniform_CR",
            "BNA_KC_Uniform_CT",
            "BNA_KC_Uniform_CT_Legacy",
            "BNA_KC_Uniform_SCT",
            "BNA_KC_Uniform_VCT",
            "BNA_KC_Uniform_CLC",
            "BNA_KC_Uniform_CPL",
            "BNA_KC_Uniform_CS",
            "BNA_KC_Uniform_CSS",
            "BNA_KC_Uniform_CSFC",
            "BNA_KC_Uniform_CMS",
            "BNA_KC_Uniform_CSM",
            "BNA_KC_Uniform_WO",
            "BNA_KC_Uniform_WO2",
            "BNA_KC_Uniform_WO3",
            "BNA_KC_Uniform_CL",
            "BNA_KC_Uniform_CL1",
            "BNA_KC_Uniform_Recruit_CamoBrown",
            "BNA_KC_Uniform_Recruit_CamoGrey",
            "BNA_KC_Uniform_Enlisted_CamoBrown",
            "BNA_KC_Uniform_Enlisted_CamoGrey",
            "BNA_KC_Uniform_NCO_CamoBrown",
            "BNA_KC_Uniform_NCO_CamoGrey",
            "BNA_KC_Uniform_Officer_CamoBrown",
            "BNA_KC_Uniform_Officer_CamoGrey",
            "BNA_KC_Uniform_Phase2_Insulated_Base",
            "BNA_KC_Uniform_Phase2_Insulated_CT",
            "BNA_KC_Uniform_CXA",
            "BNA_KC_Uniform_CXE",
            "BNA_KC_Uniform_ARC_CT",
            "BNA_KC_Uniform_ARC_Enlisted_CamoNight",
            "BNA_KC_Uniform_ARF_CT",
            "BNA_KC_Uniform_Commando_Base",
            "BNA_KC_Uniform_Jedi_Knight",
            "BNA_KC_Uniform_Jedi_Commander",
            "BNA_KC_Vest_Basic"
        };
    };
};