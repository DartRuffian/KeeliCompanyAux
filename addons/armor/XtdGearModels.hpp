class XtdGearModels {
    class CLASS(Rank_Base) {
        label = "";
        author = AUTHOR;
        options[] = {"rank"};

        class rank: rank {
            label = "Rank";
            alwaysSelectable = TRUE;
            changeInGame = FALSE;
            values[] = {};
        };

        XTDMODELS_CAMO;
    };

    class CfgWeapons {
        class CLASS(Helmets_Phase1): CLASS(Rank_Base) {
            label = "Helmets (P1)";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "CT_v2",
                    "CT_v3",
                    "CT_v4",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class CT_v2 { label = "CT v2"; };
                class CT_v3 { label = "CT v3"; };
                class CT_v4 { label = "CT v4"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };
        };

        class CLASS(Helmets_Phase1_Geonosis): CLASS(Rank_Base) {
            label = "Helmets (Geonosis)";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "NCO",
                    "Officer",
                    "Captain",
                    "Commander"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
                class Officer { label = "Officer"; };
                class Captain { label = "Captain"; };
                class Commander { label = "Commander"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase1): CLASS(Rank_Base) {
            label = "Pilot Helmets (P1)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CXA"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase1): CLASS(Rank_Base) {
            label = "Tanker Helmets (P1)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "CT_v2"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class CT_v2 { label = "CT v2"; };
            };
        };

        class CLASS(Helmets_Phase2): CLASS(Rank_Base) {
            label = "Helmets (P2)";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };

            class style {
                label = "Style";

                values[] = {"Standard", "V2", "Legacy"};

                class Standard { label = "Standard"; };
                class V2 { label = "v2"; };
                class Legacy { label = "Legacy"; };
            };
        };

        class CLASS(Helmets_Insulated_Phase2): CLASS(Rank_Base) {
            label = "Insulated Helmets (P2)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase2): CLASS(Rank_Base) {
            label = "Pilot Helmets (P2)";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CXA",
                    "CXE"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase2): CLASS(Rank_Base) {
            label = "Tanker Helmets (P2)";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "CT_v2"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Helmets_Airborne): CLASS(Rank_Base) {
            label = "Airborne Helmets";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "CT_v2"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class CT_v2 { label = "CT v2"; };
            };
        };

        class CLASS(Helmets_Engineer): CLASS(Rank_Base) {
            label = "Engineer Helmets";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_ARC): CLASS(Rank_Base) {
            label = "ARC Helmets";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "CT_Legacy",
                    "NightShade"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class CT_Legacy { label = "CT (Legacy)"; };
                class NightShade { label = "NightShade"; };
            };

            class camo: camo {};
        };

        class CLASS(Helmets_ARF): CLASS(Rank_Base) {
            label = "ARF Helmets";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "CT_Legacy"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class CT_Legacy { label = "CT (Legacy)"; };
            };
        };

        class CLASS(Helmets_BARC): CLASS(Rank_Base) {
            label = "BARC Helmets";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Ranks_Infantry): CLASS(Rank_Base) {
            label = "Infantry Rank Uniforms";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "CT_Legacy",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class CT_Legacy { label = "CT (Legacy)"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };
        };

        class CLASS(Uniforms_Ranks_Geonosis): CLASS(Rank_Base) {
            label = "Geonosis Rank Uniforms";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "NCO",
                    "Officer",
                    "Captain",
                    "Commander"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
                class Officer { label = "Officer"; };
                class Captain { label = "Captain"; };
                class Commander { label = "Commander"; };
            };
        };

        class CLASS(Uniforms_Insulated_Phase2)
        {
            label = "Insulated Uniforms (P2)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Pilot): CLASS(Rank_Base) {
            label = "Pilot Uniforms";

            class rank: rank {
                values[] = {
                    "CXA",
                    "CXE"
                };

                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Uniforms_Tanker): CLASS(Rank_Base) {
            label = "Tanker Uniforms";

            class rank: rank {
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_ARC): CLASS(Rank_Base) {
            label = "ARC Uniforms";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "CT",
                    "NightShade",
                    "Enlisted_CamoNight"
                };

                class CT { label = "CT"; };
                class NightShade { label = "NightShade"; };
            };
        };

        class CLASS(Uniforms_ARF): CLASS(Rank_Base) {
            label = "ARF Uniforms";

            class rank: rank {
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Vests_Infantry): CLASS(Rank_Base) {
            label = "Infantry Vests";
            options[] = {"type"};

            class type: rank {
                label = "Type";
                values[] = {
                    "Basic",
                    "Holster",
                    "Assault",
                    "Grenadier",
                    "Heavy",
                    "Heavy_v2",
                    "Specialist",
                    "Recon",
                    "Recon_Survival",
                    "Hazard",
                    "Kama",
                    "Tactical_Commander"
                };

                class Basic { label = "Basic"; };
                class Holster { label = "Holster"; };
                class Assault { label = "Assault"; };
                class Grenadier { label = "Grenadier"; };
                class Heavy { label = "Heavy"; };
                class Heavy_v2 { label = "Heavy (v2)"; };
                class Specialist { label = "Specialist"; };
                class Recon { label = "Recon"; };
                class Recon_Survival { label = "Survival"; };
                class Hazard { label = "Hazard"; };
                class Kama { label = "Kama"; };
                class Tactical_Commander { label = "Tactical Commander"; };
            };
        };

        class CLASS(Vests_Infantry_Ranked): CLASS(Rank_Base) {
            label = "Infantry Ranked Vests";

            class rank: rank {
                values[] = {
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CSM",
                    "Officer",
                    "Officer_v2",
                    "WO",
                    "CMD",
                    "CMD_v2"
                };

                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CSM { label = "CSM"; };
                class Officer { label = "Officer"; };
                class Officer_v2 { label = "Officer (v2)"; };
                class WO { label = "WO"; };
                class CMD { label = "CMD"; };
                class CMD_v2 { label = "CMD (v2)"; };
            };
        };

        class CLASS(Vests_Infantry_Medic): CLASS(Rank_Base) {
            label = "Infantry Medic Vests";

            class rank: rank {
                values[] = {
                    "Medic",
                    "Senior",
                    "Medic_v2",
                    "Senior_v2",
                    "Platoon"
                };

                class Medic { label = "Medic"; };
                class Senior { label = "Senior"; };
                class Medic_v2 { label = "Medic (v2)"; };
                class Senior_v2 { label = "Senior (v2)"; };
                class Platoon { label = "Platoon"; };
            };
        };

        class CLASS(Vests_Airborne): CLASS(Rank_Base)
        {
            label = "Airborne Vests";

            class rank: rank {
                values[] = {
                    "CT",
                    "CT_Light",
                    "CS",
                    "CS_Light",
                    "Officer"
                };

                class CT { label = "Trooper"; };
                class CT_Light { label = "Trooper (Light)"; };
                class CS { label = "NCO"; };
                class CS_Light { label = "NCO (Light)"; };
                class Officer { label = "Officer"; };
            };
        };

        class CLASS(Vests_Airborne_Medic): CLASS(Rank_Base) {
            label = "Airborne Medic Vests";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "NCO"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
            };
        };

        class CLASS(Vests_Engineer): CLASS(Rank_Base) {
            label = "Engineer Vests";

            class rank: rank {
                changeInGame = FALSE;
                values[] = {
                    "CT",
                    "CS",
                    "Officer"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class Officer { label = "Officer"; };
            };
        };

        class CLASS(Vests_Tanker): CLASS(Rank_Base) {
            label = "Tanker Vests";

            class rank: rank {
                changeInGame = FALSE;
                values[] = {
                    "CT",
                    "CS",
                    "WO"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class WO { label = "Officer"; };
            };
        };

        class CLASS(Vests_ARC): CLASS(Rank_Base) {
            label = "ARC Vests";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "Alternate",
                    "Light",
                    "NightShade",
                    "GEO_Officer",
                    "GEO_Captain"
                };

                class Trooper { label = "Trooper"; };
                class Alternate { label = "Alternate"; };
                class Light { label = "Light"; };
                class NightShade { label = "NightShade"; };
                class GEO_Officer { label = "GEO Officer"; };
                class GEO_Captain { label = "GEO Captain"; };
            };
        };

        class CLASS(Vests_Commando): CLASS(Rank_Base) {
            label = "Commando Vests";
            options[] = {"type"};

            class type: rank {
                label = "Type";
                values[] = {
                    "Basic",
                    "SL",
                    "EOD",
                    "Sniper",
                    "Tech"
                };

                class Basic { label = "Basic"; };
                class SL { label = "Squad Leader"; };
                class EOD { label = "EOD"; };
                class Sniper { label = "Sniper"; };
                class Tech { label = "Tech"; };
            };
        };
    };
};