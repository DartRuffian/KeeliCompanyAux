class CLASS(Unit_ARC_CT): CLASS(Unit_Phase2_Base)
{
    displayName = "SF ARC 01 - Trooper";
    editorSubcategory = QCLASS(EdSubCat_SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_ARC_CT);

    uniformClass = QCLASS(Uniform_ARC_CT);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arc\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arc\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_ARC_CT), QCLASS(Vest_Arc), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_ARC_CT), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Backpack_ARC);
};

class CLASS(Unit_ARC_NightShade): CLASS(Unit_ARC_CT)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_ARC_NightShade);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arc\NightShade_upper_co.paa),
        QPATHTOF(data\uniforms\arc\NightShade_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_ARC_Enlisted_CamoNight): CLASS(Unit_ARC_CT)
{
    SCOPE_HIDDEN;

    uniformClass = QCLASS(Uniform_ARC_Enlisted_CamoNight);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arc\camo\night\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arc\camo\night\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};