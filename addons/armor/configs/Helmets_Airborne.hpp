class CLASS(Helmet_Airborne_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm (Base)";

    model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet_co.paa",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

    subItems[] = {QCLASS(NVG_Chip)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Airborne);
        rank = "Base";
    };
};
AIRBORNE_HELMET(CT,01);
AIRBORNE_HELMET(CT_v2,01);