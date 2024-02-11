class CLASS(Unit_Phase2_Base);
class CLASS(Unit_CG_Trooper): CLASS(Unit_Phase2_Base)
{
    displayName = "Clone Trooper";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_CoruscantGuard);
    editorPreview = EDITOR_PREVIEW(Unit_CG_Trooper);

    uniformClass = QCLASS(Uniform_CG);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\CG_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\CG_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_CG), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_CG), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_CG_Stone): CLASS(Unit_CG_Trooper)
{
    displayName = "Commander Stone";
    editorPreview = EDITOR_PREVIEW(Unit_CG_Stone);

    uniformClass = QCLASS(Uniform_CG_Stone);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_CG_Stone), QCLASS(Vest_Holster), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_CG_Stone), QCLASS(Vest_Holster), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_DC_Trooper): CLASS(Unit_Phase2_Base)
{
    displayName = "Clone Trooper";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_DoomCompany);
    editorPreview = EDITOR_PREVIEW(Unit_DC_Trooper);

    uniformClass = QCLASS(Uniform_DC);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\DC_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\DC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_DC), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_DC), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Fil): CLASS(Unit_Phase2_Base)
{
    displayName = "Commander Fil";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_FilSquad);
    editorPreview = EDITOR_PREVIEW(Unit_Fil);

    uniformClass = QCLASS(Uniform_Fil);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Fil), QCLASS(Vest_Officer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Fil), QCLASS(Vest_Officer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_FilSquad): CLASS(Unit_Phase2_Base)
{
    displayName = "Clone Trooper";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_FilSquad);
    editorPreview = EDITOR_PREVIEW(Unit_FilSquad);

    uniformClass = QCLASS(Uniform_FilSquad);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_FilSquad), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_FilSquad), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_HowzerBlue): CLASS(Unit_Phase2_Base)
{
    displayName = "Captain Howzer";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_HowzerSquad);
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_HowzerBlue);

    uniformClass = QCLASS(Uniform_HowzerBlue);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Phase2_HowzerBrown): CLASS(Unit_Phase2_HowzerBlue)
{
    displayName = "Captain Howzer (Brown)";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_HowzerBrown);

    uniformClass = QCLASS(Uniform_HowzerBrown);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_187th_Trooper): CLASS(Unit_Phase2_Base)
{
    displayName = "Clone Trooper";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_187th);
    editorPreview = EDITOR_PREVIEW(Unit_187th_Trooper);

    uniformClass = QCLASS(Uniform_187th);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_187th), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_187th), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_212th_Trooper): CLASS(Unit_Phase2_Base)
{
    displayName = "Clone Trooper";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_212th);
    editorPreview = EDITOR_PREVIEW(Unit_212th_Trooper);

    uniformClass = QCLASS(Uniform_212th);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\212th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\212th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_212th), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_212th), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_91st_Ponds): CLASS(Unit_Phase2_Base)
{
    displayName = "Commander Ponds";
    faction = QCLASS(Faction_GAR);
    editorSubcategory = QCLASS(EdSubCat_91st);
    editorPreview = EDITOR_PREVIEW(Unit_91st_Ponds);

    uniformClass = QCLASS(Uniform_91st_Ponds);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_91st_Ponds), QCLASS(Vest_Kama), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_91st_Ponds), QCLASS(Vest_Kama), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};