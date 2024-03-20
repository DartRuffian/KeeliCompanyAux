class CLASS(Helmet_Phase1_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P1 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor", "illum"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor", "illum"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase1);
        rank = "Base";
    };
};

P1_HELMET(CR,00);
P1_HELMET(CT,01);
P1_HELMET(CT_v2,01);
P1_HELMET(CT_v3,01);
P1_HELMET(CT_v4,01);
P1_HELMET(SCT,02);
P1_HELMET(VCT,03);
P1_HELMET(CLC,04);
P1_HELMET(CPL,05);
P1_HELMET(CS,06);
P1_HELMET(CSS,07);
P1_HELMET(CSFC,08);
P1_HELMET(CMS,09);
P1_HELMET(CSM,10);

// Camo Helmets
P1_CAMO_HELMET(Recruit,00,Brown,CR);
P1_CAMO_HELMET(Recruit,00,Grey,CR);
P1_CAMO_HELMET(Enlisted,01,Brown,CT);
P1_CAMO_HELMET(Enlisted,01,Grey,CT);
P1_CAMO_HELMET(NCO,06,Brown,CS);
P1_CAMO_HELMET(NCO,06,Grey,CS);
P1_CAMO_HELMET(Officer,12,Brown,WO);
P1_CAMO_HELMET(Officer,12,Grey,WO);

class CLASS(Helmet_Phase1_ARC_CT): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] SF ARC P1 Helm 01 (CT)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\ARC_CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo {};
};

class CLASS(Helmet_phase1Geo_Enlisted): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 01 (Enlisted)";
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo {
        model = QCLASS(Helmets_Phase1_Geonosis);
        rank = "Enlisted";
    };
};

class CLASS(Helmet_phase1Geo_NCO): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 02 (NCO)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Sergeant_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo: XtdGearInfo {
        rank = "NCO";
    };
};

class CLASS(Helmet_phase1Geo_Officer): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 03 (Officer)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Lieutenant_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo: XtdGearInfo {
        rank = "Officer";
    };
};

class CLASS(Helmet_phase1Geo_Captain): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 04 (CPT)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Captain_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo: XtdGearInfo {
        rank = "Captain";
    };
};

class CLASS(Helmet_phase1Geo_Commander): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 05 (CMD)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Commander_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    class XtdGearInfo: XtdGearInfo {
        rank = "Commander";
    };
};