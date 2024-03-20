#define CLONE_LINKED_ITEMS_RADIO LINKED_ITEMS, "SWLB_Comlink"

#define XTDMODELS_CAMO class camo { \
    label = "Camo"; \
    changeInGame = FALSE; \
    values[] = { \
        "Brown", \
        "Grey" \
    }; \
    class Brown { \
        label = "Brown"; \
        image = QPATHTOEF(core,data\ui\CamoBrown_co.paa); \
    }; \
    class Grey { \
        label = "Grey"; \
        image = QPATHTOEF(core,data\ui\CamoGrey_co.paa); \
    }; \
}

#define P1_HELMET(var1,var2) class CLASS(DOUBLES(Helmet_Phase1,var1)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([KC] INF P1 Helm var2 (##var1##)); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var1); \
    }; \
}

#define P1_CAMO_HELMET(var1,var2,var3,var4) class CLASS(TRIPLES(Helmet_Phase1,var1,Camo##var3##)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([KC] INF P1 Helm var2 (##var1##) - var3 Camo); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1\camo\##var3##\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var4); \
        camo = QUOTE(var3); \
    }; \
}

#define P1_PILOT_HELMET(var1,var2) class CLASS(DOUBLES(Helmet_Phase1_Pilot,var1)): CLASS(Helmet_Phase1_Pilot_Base) { \
    displayName = QUOTE([KC] AVI P1 Helm var2 (##var1##)); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1Pilot\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var1); \
    }; \
}

#define P2_HELMET(var1,var2) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([KC] INF P2 Helm var2 (##var1##)); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var1); \
    }; \
}

#define P2_CAMO_HELMET(var1,var2,var3,var4) class CLASS(TRIPLES(Helmet_Phase2,var1,Camo##var3##)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([KC] INF P2 Helm var2 (##var1##) - var3 Camo); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\camo\##var3##\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var4); \
        camo = QUOTE(var3); \
    }; \
}

#define INSULATED_HELMET(var1,var2) class CLASS(DOUBLES(Helmet_Phase2_Insulated,var1)): CLASS(Helmet_Phase2_Insulated_Base) { \
    displayName = QUOTE([KC] INF P2 Insulated Helm var2 (##var1##)); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\insulated\DOUBLES(var1,camo1_co.paa)) \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var1); \
    }; \
}

#define AIRBORNE_HELMET(var1,var2) class CLASS(DOUBLES(Helmet_Airborne,var1)): CLASS(Helmet_Airborne_Base) { \
    displayName = QUOTE([KC] AB Helm var2 (##var1##)); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\airborne\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa" \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        rank = QUOTE(var1); \
    }; \
}