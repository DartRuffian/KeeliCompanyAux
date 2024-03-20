class CLASS(Helmet_Phase2_Insulated_Base);
class CLASS(Helmet_Phase2_Insulated_Dexus): CLASS(Helmet_Phase2_Insulated_Base) {
    displayName = "[KC] INF P2 Snow Helm ('Dexus')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\insulated\Dexus_camo1_co.paa)
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Insulated_Phase2_Custom);
        custom = "Dexus";
    };
};
class CLASS(Helmet_Phase2_Insulated_Joe): CLASS(Helmet_Phase2_Insulated_Base) {
    displayName = "[KC] INF P2 Snow Helm ('Joe')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\insulated\Joe_camo1_co.paa)
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Insulated_Phase2_Custom);
        custom = "Joe";
    };
};
class CLASS(Helmet_Phase2_Insulated_Keeli): CLASS(Helmet_Phase2_Insulated_Base) {
    displayName = "[KC] INF P2 Snow Helm ('Keeli')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\insulated\Keeli_camo1_co.paa)
    };

    class XtdGearInfo {
        model = QCLASS(Helmets_Insulated_Phase2_Custom);
        custom = "Keeli";
    };
};