#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            "ls_armor_bluefor",
            "lsd_units_bluefor",
            "lsd_equipment_bluefor",
            "SWLB_equipment_backpacks",
            "SWLB_Clones",
            "SWLB_CEE",
            "JLTS_core",
            "JLTS_characters_CloneArmor2",
            "SDT_gear"
        };
        units[] = {
            QCLASS(Unit_Base),
            QCLASS(Unit_Phase1_Base),
            QCLASS(Unit_Phase1_CR),
            QCLASS(Unit_Phase1_CT),
            QCLASS(Unit_Phase1_SCT),
            QCLASS(Unit_Phase1_VCT),
            QCLASS(Unit_Phase1_CLC),
            QCLASS(Unit_Phase1_CPL),
            QCLASS(Unit_Phase1_CS),
            QCLASS(Unit_Phase1_CSS),
            QCLASS(Unit_Phase1_CSFC),
            QCLASS(Unit_Phase1_CMS),
            QCLASS(Unit_Phase1_CSM),
            QCLASS(Unit_phase1Geo_Enlisted),
            QCLASS(Unit_phase1Geo_NCO),
            QCLASS(Unit_phase1Geo_Officer),
            QCLASS(Unit_phase1Geo_Captain),
            QCLASS(Unit_phase1Geo_Commander),
            QCLASS(Unit_Phase2_Base),
            QCLASS(Unit_Phase2_CR),
            QCLASS(Unit_Phase2_CT),
            QCLASS(Unit_Phase2_CT_Legacy),
            QCLASS(Unit_Phase2_SCT),
            QCLASS(Unit_Phase2_VCT),
            QCLASS(Unit_Phase2_CLC),
            QCLASS(Unit_Phase2_CPL),
            QCLASS(Unit_Phase2_CS),
            QCLASS(Unit_Phase2_CSS),
            QCLASS(Unit_Phase2_CSFC),
            QCLASS(Unit_Phase2_CMS),
            QCLASS(Unit_Phase2_CSM),
            QCLASS(Unit_Phase2_WO),
            QCLASS(Unit_Phase2_WO2),
            QCLASS(Unit_Phase2_WO3),
            QCLASS(Unit_Phase2_CL),
            QCLASS(Unit_Phase2_CL1),
            QCLASS(Unit_Phase2_Recruit_CamoBrown),
            QCLASS(Unit_Phase2_Recruit_CamoGrey),
            QCLASS(Unit_Phase2_Enlisted_CamoBrown),
            QCLASS(Unit_Phase2_Enlisted_CamoGrey),
            QCLASS(Unit_Phase2_NCO_CamoBrown),
            QCLASS(Unit_Phase2_NCO_CamoGrey),
            QCLASS(Unit_Phase2_Officer_CamoBrown),
            QCLASS(Unit_Phase2_Officer_CamoGrey),
            QCLASS(Unit_Phase2_Insulated_Base),
            QCLASS(Unit_Phase2_Insulated_CT),
            QCLASS(Unit_Phase1_CXA),
            QCLASS(Unit_Phase2_CXA),
            QCLASS(Unit_Phase2_CXE),
            QCLASS(Unit_Phase1_Tanker_CT),
            QCLASS(Unit_Phase2_Tanker_CT),
            QCLASS(Unit_ARC_CT),
            QCLASS(Unit_ARC_NightShade),
            QCLASS(Unit_ARC_Enlisted_CamoNight),
            QCLASS(Unit_ARF_CT),
            QCLASS(cloneCommando_unit_base),
            QCLASS(cloneCommando_unit),
            QCLASS(Unit_Jedi_Knight),
            QCLASS(Unit_Jedi_Commander),
            QCLASS(cloneBackpack_base),
            QCLASS(cloneBackpack_standard),
            QCLASS(Backpack),
            QCLASS(Backpack_Invis),
            QCLASS(Backpack_Heavy_Base),
            QCLASS(Backpack_Heavy),
            QCLASS(cloneBackpack_rocket),
            QCLASS(Backpack_Radio_Base),
            QCLASS(Backpack_Radio),
            QCLASS(Backpack_Radio_Invis),
            QCLASS(Backpack_Medic_Base),
            QCLASS(Backpack_Medic),
            QCLASS(Backpack_Medic_Heavy_Base),
            QCLASS(Backpack_Medic_Heavy),
            QCLASS(Backpack_Medic_Radio_Base),
            QCLASS(Backpack_Medic_Radio),
            QCLASS(Backpack_Radio_Mini_Base),
            QCLASS(Backpack_Radio_Mini),
            QCLASS(Backack_ARC),
            QCLASS(cloneBackpack_commando),
            QCLASS(cloneBackpack_commando_EOD),
            QCLASS(cloneBackpack_commando_RTO),
            QCLASS(cloneBackpack_commando_Tech),
            QCLASS(Jetpack_JT12),
            QCLASS(Jetpack_JT12_LR),
            QCLASS(Jetpack_CDV21),
            QCLASS(Jetpack_CDV21_LR),
            QCLASS(Jetpack_CDV19),
            QCLASS(Jetpack_CDV19_LR),
            QGROUND_CLASS(Helmet_Airborne_Base),
            QGROUND_CLASS(Helmet_Airborne_CT),
            QGROUND_CLASS(Helmet_Airborne_CT_v2),
            QGROUND_CLASS(Helmet_ARC_Base),
            QGROUND_CLASS(Helmet_ARC_CT),
            QGROUND_CLASS(Helmet_ARC_CT_Legacy),
            QGROUND_CLASS(Helmet_ARC_NightShade),
            QGROUND_CLASS(Helmet_ARC_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_ARC_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_ARC_Enlisted_CamoNight),
            QGROUND_CLASS(Helmet_ARF_Base),
            QGROUND_CLASS(Helmet_ARF_CT),
            QGROUND_CLASS(Helmet_ARF_CT_Legacy),
            QGROUND_CLASS(Helmet_ARF_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_ARF_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_BARC_Base),
            QGROUND_CLASS(Helmet_BARC_CT),
            QGROUND_CLASS(Helmet_Commando_Base),
            QGROUND_CLASS(Helmet_Engineer_Base),
            QGROUND_CLASS(Helmet_Engineer_CT),
            QGROUND_CLASS(Helmet_Engineer_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_Engineer_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_Pilot_Base),
            QGROUND_CLASS(Helmet_Phase1Geo_Pilot),
            QGROUND_CLASS(Helmet_Phase1_Pilot_CXA),
            QGROUND_CLASS(Helmet_Phase1_Tanker_Base),
            QGROUND_CLASS(Helmet_Phase1_Tanker_CT),
            QGROUND_CLASS(Helmet_Phase1_Tanker_CT_v2),
            QGROUND_CLASS(Helmet_Phase1_Base),
            QGROUND_CLASS(Helmet_Phase1_CR),
            QGROUND_CLASS(Helmet_Phase1_CT),
            QGROUND_CLASS(Helmet_Phase1_CT_v2),
            QGROUND_CLASS(Helmet_Phase1_CT_v3),
            QGROUND_CLASS(Helmet_Phase1_CT_v4),
            QGROUND_CLASS(Helmet_Phase1_SCT),
            QGROUND_CLASS(Helmet_Phase1_VCT),
            QGROUND_CLASS(Helmet_Phase1_CLC),
            QGROUND_CLASS(Helmet_Phase1_CPL),
            QGROUND_CLASS(Helmet_Phase1_CS),
            QGROUND_CLASS(Helmet_Phase1_CSS),
            QGROUND_CLASS(Helmet_Phase1_CSFC),
            QGROUND_CLASS(Helmet_Phase1_CMS),
            QGROUND_CLASS(Helmet_Phase1_CSM),
            QGROUND_CLASS(Helmet_Phase1_Recruit_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_Recruit_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_NCO_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_NCO_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_Officer_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_Officer_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_ARC_CT),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Base),
            QGROUND_CLASS(Helmet_Phase2_Pilot_CXA),
            QGROUND_CLASS(Helmet_Phase2_Pilot_CXE),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Officer_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Officer_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_Tanker_Base),
            QGROUND_CLASS(Helmet_Phase2_Tanker_CT),
            QGROUND_CLASS(Helmet_Phase2_Tanker_CT_v2),
            QGROUND_CLASS(Helmet_Phase2_Tanker_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_Tanker_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_Base),
            QGROUND_CLASS(Helmet_Phase2_CR),
            QGROUND_CLASS(Helmet_Phase2_CR_Legacy),
            QGROUND_CLASS(Helmet_Phase2_CT),
            QGROUND_CLASS(Helmet_Phase2_CT_v2),
            QGROUND_CLASS(Helmet_Phase2_CT_Legacy),
            QGROUND_CLASS(Helmet_Phase2_SCT),
            QGROUND_CLASS(Helmet_Phase2_SCT_Legacy),
            QGROUND_CLASS(Helmet_Phase2_VCT),
            QGROUND_CLASS(Helmet_Phase2_VCT_Legacy),
            QGROUND_CLASS(Helmet_Phase2_CLC),
            QGROUND_CLASS(Helmet_Phase2_CLC_Legacy),
            QGROUND_CLASS(Helmet_Phase2_CPL),
            QGROUND_CLASS(Helmet_Phase2_CS),
            QGROUND_CLASS(Helmet_Phase2_CS_Legacy),
            QGROUND_CLASS(Helmet_Phase2_CSS),
            QGROUND_CLASS(Helmet_Phase2_CSFC),
            QGROUND_CLASS(Helmet_Phase2_CMS),
            QGROUND_CLASS(Helmet_Phase2_CMS_Legacy),
            QGROUND_CLASS(Helmet_Phase2_CSM),
            QGROUND_CLASS(Helmet_Phase2_Officer),
            QGROUND_CLASS(Helmet_Phase2_WO),
            QGROUND_CLASS(Helmet_Phase2_WO2),
            QGROUND_CLASS(Helmet_Phase2_WO3),
            QGROUND_CLASS(Helmet_Phase2_CL),
            QGROUND_CLASS(Helmet_Phase2_CL1),
            QGROUND_CLASS(Helmet_Phase2_Recruit_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_Recruit_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_Enlisted_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_Enlisted_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_NCO_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_NCO_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_Officer_CamoBrown),
            QGROUND_CLASS(Helmet_Phase2_Officer_CamoGrey),
            QGROUND_CLASS(Helmet_Phase2_Insulated_Base),
            QGROUND_CLASS(Helmet_Phase2_Insulated_CT),
            QGROUND_CLASS(Helmet_Phase12_Base)
        };
        weapons[] = {
            QCLASS(cloneHelmet_base),
            QCLASS(Helmet_Phase1_Base),
            QCLASS(Helmet_Phase1_CR),
            QCLASS(Helmet_Phase1_CT),
            QCLASS(Helmet_Phase1_CT_v2),
            QCLASS(Helmet_Phase1_CT_v3),
            QCLASS(Helmet_Phase1_CT_v4),
            QCLASS(Helmet_Phase1_SCT),
            QCLASS(Helmet_Phase1_VCT),
            QCLASS(Helmet_Phase1_CLC),
            QCLASS(Helmet_Phase1_CPL),
            QCLASS(Helmet_Phase1_CS),
            QCLASS(Helmet_Phase1_CSS),
            QCLASS(Helmet_Phase1_CSFC),
            QCLASS(Helmet_Phase1_CMS),
            QCLASS(Helmet_Phase1_CSM),
            QCLASS(Helmet_Phase1_Recruit_CamoBrown),
            QCLASS(Helmet_Phase1_Recruit_CamoGrey),
            QCLASS(Helmet_Phase1_Enlisted_CamoBrown),
            QCLASS(Helmet_Phase1_Enlisted_CamoGrey),
            QCLASS(Helmet_Phase1_NCO_CamoBrown),
            QCLASS(Helmet_Phase1_NCO_CamoGrey),
            QCLASS(Helmet_Phase1_Officer_CamoBrown),
            QCLASS(Helmet_Phase1_Officer_CamoGrey),
            QCLASS(Helmet_phase1Geo_Enlisted),
            QCLASS(Helmet_phase1Geo_NCO),
            QCLASS(Helmet_phase1Geo_Officer),
            QCLASS(Helmet_phase1Geo_Captain),
            QCLASS(Helmet_phase1Geo_Commander),
            QCLASS(Helmet_Phase2_Base),
            QCLASS(Helmet_Phase2_CR),
            QCLASS(Helmet_Phase2_CR_Legacy),
            QCLASS(Helmet_Phase2_CT),
            QCLASS(Helmet_Phase2_CT_v2),
            QCLASS(Helmet_Phase2_CT_Legacy),
            QCLASS(Helmet_Phase2_SCT),
            QCLASS(Helmet_Phase2_SCT_Legacy),
            QCLASS(Helmet_Phase2_VCT),
            QCLASS(Helmet_Phase2_VCT_Legacy),
            QCLASS(Helmet_Phase2_CLC),
            QCLASS(Helmet_Phase2_CLC_Legacy),
            QCLASS(Helmet_Phase2_CPL),
            QCLASS(Helmet_Phase2_CS),
            QCLASS(Helmet_Phase2_CS_Legacy),
            QCLASS(Helmet_Phase2_CSS),
            QCLASS(Helmet_Phase2_CSFC),
            QCLASS(Helmet_Phase2_CMS),
            QCLASS(Helmet_Phase2_CMS_Legacy),
            QCLASS(Helmet_Phase2_CSM),
            QCLASS(Helmet_Phase2_Officer),
            QCLASS(Helmet_Phase2_WO),
            QCLASS(Helmet_Phase2_WO2),
            QCLASS(Helmet_Phase2_WO3),
            QCLASS(Helmet_Phase2_CL),
            QCLASS(Helmet_Phase2_CL1),
            QCLASS(Helmet_Phase2_Recruit_CamoBrown),
            QCLASS(Helmet_Phase2_Recruit_CamoGrey),
            QCLASS(Helmet_Phase2_Enlisted_CamoBrown),
            QCLASS(Helmet_Phase2_Enlisted_CamoGrey),
            QCLASS(Helmet_Phase2_NCO_CamoBrown),
            QCLASS(Helmet_Phase2_NCO_CamoGrey),
            QCLASS(Helmet_Phase2_Officer_CamoBrown),
            QCLASS(Helmet_Phase2_Officer_CamoGrey),
            QCLASS(Helmet_Phase2_Insulated_Base),
            QCLASS(Helmet_Phase2_Insulated_CT),
            QCLASS(Helmet_Phase12_Base),
            QCLASS(Helmet_ARC_Base),
            QCLASS(Helmet_ARC_CT),
            QCLASS(Helmet_ARC_CT_Legacy),
            QCLASS(Helmet_ARC_NightShade),
            QCLASS(Helmet_ARC_Enlisted_CamoBrown),
            QCLASS(Helmet_ARC_Enlisted_CamoGrey),
            QCLASS(Helmet_ARC_Enlisted_CamoNight),
            QCLASS(Helmet_Phase1_ARC_CT),
            QCLASS(Helmet_ARF_Base),
            QCLASS(Helmet_ARF_CT),
            QCLASS(Helmet_ARF_CT_Legacy),
            QCLASS(Helmet_ARF_Enlisted_CamoBrown),
            QCLASS(Helmet_ARF_Enlisted_CamoGrey),
            QCLASS(Helmet_BARC_Base),
            QCLASS(Helmet_BARC_CT),
            QCLASS(Helmet_Katarn_Base),
            QCLASS(Helmet_Airborne_Base),
            QCLASS(Helmet_Airborne_CT),
            QCLASS(Helmet_Airborne_CT_v2),
            QCLASS(Helmet_Engineer_Base),
            QCLASS(Helmet_Engineer_CT),
            QCLASS(Helmet_Engineer_Enlisted_CamoBrown),
            QCLASS(Helmet_Engineer_Enlisted_CamoGrey),
            QCLASS(Helmet_Phase1_Pilot_Base),
            QCLASS(Helmet_Phase1Geo_Pilot),
            QCLASS(Helmet_Phase1_Pilot_CXA),
            QCLASS(Helmet_Phase2_Pilot_Base),
            QCLASS(Helmet_Phase2_Pilot_CXA),
            QCLASS(Helmet_Phase2_Pilot_CXE),
            QCLASS(Helmet_Phase2_Pilot_Officer_CamoBrown),
            QCLASS(Helmet_Phase2_Pilot_Officer_CamoGrey),
            QCLASS(Helmet_Phase1_Tanker_Base),
            QCLASS(Helmet_Phase1_Tanker_CT),
            QCLASS(Helmet_Phase1_Tanker_CT_v2),
            QCLASS(Helmet_Phase2_Tanker_Base),
            QCLASS(Helmet_Phase2_Tanker_CT),
            QCLASS(Helmet_Phase2_Tanker_CT_v2),
            QCLASS(Helmet_Phase2_Tanker_Enlisted_CamoBrown),
            QCLASS(Helmet_Phase2_Tanker_Enlisted_CamoGrey),
            QCLASS(cloneCommando_helmet),
            QCLASS(Uniform_Base),
            QCLASS(Uniform_phase1Geo_Enlisted),
            QCLASS(Uniform_phase1Geo_NCO),
            QCLASS(Uniform_phase1Geo_Officer),
            QCLASS(Uniform_phase1Geo_Captain),
            QCLASS(Uniform_phase1Geo_Commander),
            QCLASS(Uniform_CR),
            QCLASS(Uniform_CT),
            QCLASS(Uniform_CT_Legacy),
            QCLASS(Uniform_SCT),
            QCLASS(Uniform_VCT),
            QCLASS(Uniform_CLC),
            QCLASS(Uniform_CPL),
            QCLASS(Uniform_CS),
            QCLASS(Uniform_CSS),
            QCLASS(Uniform_CSFC),
            QCLASS(Uniform_CMS),
            QCLASS(Uniform_CSM),
            QCLASS(Uniform_WO),
            QCLASS(Uniform_WO2),
            QCLASS(Uniform_WO3),
            QCLASS(Uniform_CL),
            QCLASS(Uniform_CL1),
            QCLASS(Uniform_Recruit_CamoBrown),
            QCLASS(Uniform_Recruit_CamoGrey),
            QCLASS(Uniform_Enlisted_CamoBrown),
            QCLASS(Uniform_Enlisted_CamoGrey),
            QCLASS(Uniform_NCO_CamoBrown),
            QCLASS(Uniform_NCO_CamoGrey),
            QCLASS(Uniform_Officer_CamoBrown),
            QCLASS(Uniform_Officer_CamoGrey),
            QCLASS(Uniform_Phase2_Insulated_Base),
            QCLASS(Uniform_Phase2_Insulated_CT),
            QCLASS(Uniform_CXA),
            QCLASS(Uniform_CXE),
            QCLASS(Uniform_ARC_CT),
            QCLASS(Uniform_ARC_NightShade),
            QCLASS(Uniform_ARC_Enlisted_CamoNight),
            QCLASS(Uniform_ARF_CT),
            QCLASS(cloneCommando_uniform),
            QCLASS(Uniform_Jedi_Knight),
            QCLASS(Uniform_Jedi_Commander),
            QCLASS(Vest_Basic),
            QCLASS(Vest_Holster),
            QCLASS(Vest_Assault),
            QCLASS(Vest_Grenadier),
            QCLASS(Vest_Heavy),
            QCLASS(Vest_Heavy_v2),
            QCLASS(Vest_Specialist),
            QCLASS(Vest_Recon),
            QCLASS(Vest_Recon_Survival),
            QCLASS(Vest_Hazard),
            QCLASS(Vest_CLC),
            QCLASS(Vest_CPL),
            QCLASS(Vest_CS),
            QCLASS(Vest_CSS),
            QCLASS(Vest_CSFC),
            QCLASS(Vest_CSM),
            QCLASS(Vest_Officer),
            QCLASS(Vest_Officer_v2),
            QCLASS(Vest_WO),
            QCLASS(Vest_Kama),
            QCLASS(Vest_Tactical_Commander),
            QCLASS(Vest_Commander),
            QCLASS(Vest_Commander_v2),
            QCLASS(Vest_Medic),
            QCLASS(Vest_MedicSenior),
            QCLASS(Vest_Medic_v2),
            QCLASS(Vest_MedicSenior_v2),
            QCLASS(Vest_MedicPlatoon),
            QCLASS(Vest_Airborne_CT),
            QCLASS(Vest_Airborne_CS),
            QCLASS(Vest_Airborne_WO),
            QCLASS(Vest_Airborne_CT_Light),
            QCLASS(Vest_Airborne_CS_Light),
            QCLASS(Vest_Airborne_LifeSaver),
            QCLASS(Vest_Airborne_LifeSaverNCO),
            QCLASS(Vest_Engineer_CT),
            QCLASS(Vest_Engineer_CS),
            QCLASS(Vest_Engineer_Officer),
            QCLASS(Vest_Tanker_CT),
            QCLASS(Vest_Tanker_CS),
            QCLASS(Vest_Tanker_WO),
            QCLASS(Vest_ARC),
            QCLASS(Vest_ARC_Light),
            QCLASS(Vest_ARC_v2),
            QCLASS(Vest_ARC_NightShade),
            QCLASS(Vest_ARC_Phase1Geo_Officer),
            QCLASS(Vest_ARC_Phase1Geo_Captain),
            QCLASS(cloneCommando_basic_vest),
            QCLASS(cloneCommando_SL_vest),
            QCLASS(cloneCommando_EOD_vest),
            QCLASS(cloneCommando_Sniper_vest),
            QCLASS(cloneCommando_Tech_vest),
            QCLASS(cloneNvg_chip),
            QCLASS(cloneNvg_phase1_visor),
            QCLASS(cloneNvg_phase2_visor),
            QCLASS(cloneNvg_phase2_visor_v2),
            QCLASS(cloneNvg_phase1_rangefinder),
            QCLASS(cloneNvg_phase2_rangefinder),
            QCLASS(cloneNvg_phase1_officerVisor),
            QCLASS(cloneNvg_phase2_officerVisor),
            QCLASS(cloneNvg_engineerComms),
            QCLASS(cloneNvg_commandoVisor),
            QCLASS(cloneNvg_commandoAntenna)
        };
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgEventHandlers.hpp"
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"