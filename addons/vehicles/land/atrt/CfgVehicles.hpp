class CBA_Extended_EventHandlers_base;

class CfgVehicles
{
    class 3AS_ATRT_Base;
    class 3AS_ATRT: 3AS_ATRT_Base
    {
        class EventHandlers;
    };
    class CLASS(ATRT): 3AS_ATRT
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Walkers);
        // editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,ATRT);

        displayName = "AT-RT";
        uniformClass = QCLASS(Uniform_ATRT);
        nakedUniform = QCLASS(Uniform_ATRT);
        impactEffectsBlood = "ImpactMetal";

        weapons[] = {QCLASS(Turret_ATRT)};
        magazines[] = {QCLASS(Mag_9999rnd_ATRT)};

        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Euro"};
    };
};