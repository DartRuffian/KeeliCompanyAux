class XtdGearModels {
    class CfgWeapons {
        class CLASS(Helmets_Phase1) {
            label = "Helmets (P1)";
            author = AUTHOR;
            options[] = {"rank", "camo"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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
                    "WO"
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
            };

            XTDMODELS_CAMO;
        };

        class CLASS(Helmets_Phase1_Geonosis): CLASS(Helmets_Phase1) {
            label = "Helmets (Geonosis)";
            options[] = {"rank"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Enlisted",
                    "NCO",
                    "Officer",
                    "Captain",
                    "Commander"
                };

                class Enlisted { label = "Enlisted"; };
                class NCO { label = "NCO"; };
                class Officer { label = "Officer"; };
                class Captain { label = "Captain"; };
                class Commander { label = "Commander"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase1): CLASS(Helmets_Phase1) {
            label = "Pilot Helmets (P1)";
            author = AUTHOR;
            options[] = {"rank"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Base",
                    "CXA"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase1): CLASS(Helmets_Phase1) {
            label = "Tanker Helmets (P1)";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Helmets_Phase2): CLASS(Helmets_Phase1) {
            label = "Helmets (P2)";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Base",
                    "CR",
                    "CR_Legacy",
                    "CT",
                    "CT_v2",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CR_Legacy { label = "CR (Legacy)"; };
                class CT { label = "CT"; };
                class CT_v2 { label = "CT v2"; };
                class CT_Legacy { label = "CT (Legacy)"; };
                class SCT { label = "SCT"; };
                class SCT_Legacy { label = "SCT (Legacy)"; };
                class VCT { label = "VCT"; };
                class VCT_Legacy { label = "VCT (Legacy)"; };
                class CLC { label = "CLC"; };
                class CLC_Legacy { label = "CLC (Legacy)"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CS_Legacy { label = "CS (Legacy)"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CMS_Legacy { label = "CMS (Legacy)"; };
                class CSM { label = "CSM"; };
                class Officer { label = "Officer"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };
        };

        class CLASS(Helmets_Insulated_Phase2): CLASS(Helmets_Phase1) {
            label = "Insulated Helmets (P2)";
            options[] = {"rank"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase2): CLASS(Helmets_Phase1) {
            label = "Pilot Helmets (P2)";
            author = AUTHOR;
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Helmets_Tanker_Phase2): CLASS(Helmets_Phase1) {
            label = "Tanker Helmets (P2)";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Helmets_Airborne): CLASS(Helmets_Phase1) {
            label = "Airborne Helmets";
            author = AUTHOR;
            options[] = {"rank"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Helmets_Engineer): CLASS(Helmets_Phase1) {
            label = "Engineer Helmets";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_ARC): CLASS(Helmets_Phase1) {
            label = "ARC Helmets";
            options[] = {"rank", "camo"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

            class camo: camo {
                values[] += {"Night"};
                class Night {
                    label = "Night";
                    image = "#(rgb,8,8,3)color(0.145,0.141,0.145,1)";
                };
            };
        };

        class CLASS(Helmets_ARF): CLASS(Helmets_Phase1) {
            label = "ARF Helmets";
            options[] = {"rank", "camo"};

            class rank {
                label = "Rank";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Helmets_BARC): CLASS(Helmets_Phase1) {
            label = "BARC Helmets";
            options[] = {"camo"};

            class camo {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Ranks_Infantry): CLASS(Helmets_Phase1) {
            label = "Infantry Rank Uniforms";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Uniforms_Ranks_Geonosis): CLASS(Helmets_Phase1) {
            label = "Geonosis Rank Uniforms";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Uniforms_Insulated_Phase2): CLASS(Helmets_Phase1) {
            label = "Insulated Uniforms (P2)";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Pilot): CLASS(Helmets_Phase1) {
            label = "Pilot Uniforms";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                values[] = {
                    "CXA",
                    "CXE"
                };

                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Uniforms_Tanker): CLASS(Helmets_Phase1) {
            label = "Tanker Uniforms";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_ARC): CLASS(Helmets_Phase1) {
            label = "ARC Uniforms";
            options[] = {"rank", "camo"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "CT",
                    "NightShade"
                };

                class CT { label = "CT"; };
                class NightShade { label = "NightShade"; };
            };

            class camo: camo {
                values[] = {"Night"};
                class Night {
                    label = "Night";
                };
            };
        };

        class CLASS(Uniforms_ARF): CLASS(Helmets_Phase1) {
            label = "ARF Uniforms";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Vests_Infantry): CLASS(Helmets_Phase1) {
            label = "Infantry Vests";
            options[] = {"style"};

            class style {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Vests_Infantry_Ranked): CLASS(Helmets_Phase1) {
            label = "Infantry Ranked Vests";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
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

        class CLASS(Vests_Infantry_Medic): CLASS(Helmets_Phase1) {
            label = "Infantry Medic Vests";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
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

        class CLASS(Vests_Airborne): CLASS(Helmets_Phase1) {
            label = "Airborne Vests";
            options[] = {"rank", "style"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "CT",
                    "CS",
                    "Officer"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class Officer { label = "Officer"; };
            };

            class style {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Standard",
                    "Light"
                };

                class Standard { label = "Standard"; };
                class Light { label = "Light"; };
            };
        };

        class CLASS(Vests_Airborne_Medic): CLASS(Helmets_Phase1) {
            label = "Airborne Medic Vests";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Trooper",
                    "NCO"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
            };
        };

        class CLASS(Vests_Engineer): CLASS(Helmets_Phase1) {
            label = "Engineer Vests";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Vests_ARC): CLASS(Helmets_Phase1) {
            label = "ARC Vests";
            options[] = {"rank"};

            class rank {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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

        class CLASS(Vests_Commando): CLASS(Helmets_Phase1) {
            label = "Commando Vests";
            options[] = {"role"};

            class role {
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
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