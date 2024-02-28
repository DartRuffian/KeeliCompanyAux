class Extended_PreStart_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
        clientInit = QUOTE(call COMPILE_SCRIPT(XEH_postInitClient));
    };
};

class Extended_Init_EventHandlers
{
    class CLASS(Resupply_JetpackFuel)
    {
        class GVAR(refuel)
        {
            init = QUOTE(_this#0 lockInventory true; [ARR_2(_this#0,1)] call BNA_KC_Jetpacks_fnc_addRefuelActions);
        };
    };
};

class Extended_Killed_EventHandlers
{
    class CAManBase
    {
        class GVAR(clearEffects)
        {
            killed = QUOTE(_this call BNA_KC_Jetpacks_fnc_deleteEffects);
        };
    };
};

class Extended_Deleted_EventHandlers
{
    class CAManBase
    {
        class GVAR(clearEffects)
        {
            deleted = QUOTE(_this call BNA_KC_Jetpacks_fnc_deleteEffects);
        };
    };
};