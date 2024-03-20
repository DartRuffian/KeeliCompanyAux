class CLASS(Helmet_Phase2_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase2);
        rank = "Base";
    };
};

P2_HELMET(CR,00);
P2_HELMET(CR_Legacy,00);
P2_HELMET(CT,01);
P2_HELMET(CT_v2,01);
P2_HELMET(CT_Legacy,01);
P2_HELMET(SCT,02);
P2_HELMET(SCT_Legacy,02);
P2_HELMET(VCT,03);
P2_HELMET(VCT_Legacy,03);
P2_HELMET(CLC,04);
P2_HELMET(CLC_Legacy,04);
P2_HELMET(CPL,05);
P2_HELMET(CS,06);
P2_HELMET(CS_Legacy,06);
P2_HELMET(CSS,07);
P2_HELMET(CSFC,08);
P2_HELMET(CMS,09);
P2_HELMET(CMS_Legacy,09);
P2_HELMET(CSM,10);
P2_HELMET(Officer,11+);
P2_HELMET(WO,11);
P2_HELMET(WO2,12);
P2_HELMET(WO3,13);
P2_HELMET(CL,14);
P2_HELMET(CL1,15);

// Camo Helmets
P2_CAMO_HELMET(Recruit,00,Brown,CR);
P2_CAMO_HELMET(Recruit,00,Grey,CR);
P2_CAMO_HELMET(Enlisted,01,Brown,CT);
P2_CAMO_HELMET(Enlisted,01,Grey,CT);
P2_CAMO_HELMET(NCO,06,Brown,CS);
P2_CAMO_HELMET(NCO,06,Grey,CS);
P2_CAMO_HELMET(Officer,11,Brown,WO);
P2_CAMO_HELMET(Officer,11,Grey,WO);