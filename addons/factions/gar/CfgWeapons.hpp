class CfgWeapons
{
    class CLASS(Helmet_Phase1_Base);
    class CLASS(Helmet_Phase1_HowzerBlue): CLASS(Helmet_Phase1_Base)
    {
        displayName = "[KC] INF P1 Helm ('Howzer') [Blue]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase1\HowzerBlue_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase1_HowzerBrown): CLASS(Helmet_Phase1_Base)
    {
        displayName = "[KC] INF P1 Helm ('Howzer') [Brown]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase1\HowzerBrown_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase1_91st_Ponds): CLASS(Helmet_Phase1_Base)
    {
        displayName = "[91st] INF P1 Helm ('Ponds')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase1\Ponds_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };
    };

    class CLASS(Helmet_Phase2_Base);
    class CLASS(Helmet_Phase2_Fil): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Fil')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\Fil_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_FilSquad): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Fil's Squad')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\FilSquad_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_HowzerBlue): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Howzer') [Blue]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\HowzerBlue_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_HowzerBrown): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Howzer') [Brown]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\HowzerBrown_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_91st_Ponds): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[91st] INF P2 Helm ('Ponds')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\Ponds_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_91st_Stone): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[91st] INF P2 Helm ('Stone')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\Stone_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_187th): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[187th] INF P2 Helm";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\phase2\187th_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };
};