class CLASS(Unit_Phase2_CXA): CLASS(Unit_Phase2_Base)
{
    displayName = "AVI P2 Pilot 1 (Airman)";
    editorSubcategory = QCLASS(EdSubCat_Crewmen);
    editorPreview = EDITOR_PREVIEW(CLASS(Unit_Phase2_CXA));

    uniformClass = QCLASS(Uniform_CXA);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\pilot\CXA_upper_co.paa),
        QPATHTOF(data\uniforms\pilot\CXA_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Pilot_CXA), QCLASS(Vest_Basic), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Pilot_CXA), QCLASS(Vest_Basic), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CXE): CLASS(Unit_Phase2_CXA)
{
    displayName = "AVI P2 Pilot 11 (Ensign)";
    editorPreview = EDITOR_PREVIEW(CLASS(Unit_Phase2_CXE));
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_CXE);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\pilot\CXE_upper_co.paa),
        QPATHTOF(data\uniforms\pilot\CXE_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Pilot_CXE), QCLASS(Vest_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Pilot_CXE), QCLASS(Vest_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};