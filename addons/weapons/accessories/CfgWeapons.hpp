class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class CLASS(Optic_Base): ItemCore
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0;

        class ItemInfo: InventoryOpticsItem_Base_F
        {
            modelOptics = "\A3\Weapons_F\empty.p3d";
            optics = TRUE;
            opticType = OPTIC_ZOOM_LEVEL_LOW;
        };
    };

    class CLASS(Optic_MR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Medium Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class Sight
                {
                    opticsID = 1;
                    memoryPointCamera = "eye";
                    useModelOptics = FALSE;

                    opticsFlare = FALSE;
                    opticsDisablePeripherialVision = FALSE;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;

                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };

                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomMin = __EVAL(0.25/6);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomInit = __EVAL(0.25/2);

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    discretefov[] = {QUOTE(__EVAL(0.25/2)), QUOTE(__EVAL(0.25/6))};
                    discreteInitIndex = 1;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };
};