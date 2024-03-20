class CLASS(Helmet_Phase2_Insulated_Base): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Insulated Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ls_armor_bluefor\helmet\gar\phase2Insulated\data\helmet_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo1"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Insulated_Phase2);
        rank = "Base";
    };
};

INSULATED_HELMET(CT,01);