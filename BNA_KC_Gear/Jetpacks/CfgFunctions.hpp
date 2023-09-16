class CfgFunctions
{
    class BNAKC_Jetpacks
    {
        class Main
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Main";
            class jetpack {};
            class frameHandler {};
            class effectHandler {};
            class deleteEffects {};
            class soundHandler {};
            class fuelHandler {};
        };

        class JetDialog
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\JetDialog";
            class jetDialogOnLoad {};
            class jetDialogUpdateFuelLevel {};
            class shouldShowJetDialog {};
            class jetDialogShowHide {};
            class jetDialogShowHideCreateHandlers {};
        };

        class Utils
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Utils";
            class hasJetpack {};
            class canUseJetpack {};
            class getJetpackFuel {};
            class playErrorSound {};
        };

        class Fuel
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Refuel";
            class setJetpackFuel {};
            class addRefuelActions {};

            class refuelFromBody {};
            class canRefuelFromBody {};
            class refuelOtherPlayer {};
            class canRefuelOtherPlayer {};

            class addJetpackNameIcon {};

            class getFuelCan {};
        };

        class Settings
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Settings";
            class jetKeybinds {};
            class jetSettings {};
        };
    };
};


class Extended_PreInit_EventHandlers
{
    class BNA_KC_Jetpacks_Settings
    {
        init = "call BNAKC_Jetpacks_fnc_jetKeybinds; call BNAKC_Jetpacks_fnc_jetSettings;";
    };
};


class Extended_PostInit_EventHandlers
{
    class BNA_KC_Jetpacks_Effects_PostInit
    {
        init = "['BNA_KC_Jet_JetpackFired', BNAKC_Jetpacks_fnc_effectHandler] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_FuelChanged_PostInit
    {
        init = "['BNA_KC_Jet_FuelChanged', BNAKC_Jetpacks_fnc_jetDialogUpdateFuelLevel] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_showHideHandlers_PostInit
    {
        init = "['BNA_KC_Jet_showHideDisplay', BNAKC_Jetpacks_fnc_jetDialogShowHide] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_showHideCreateHandlers_PostInit
    {
        init = "call BNAKC_Jetpacks_fnc_jetDialogShowHideCreateHandlers;";
    };
};


class Extended_Killed_EventHandlers
{
    class CAManBase
    {
        class BNA_KC_Jetpacks_Killed_Effects
        {
            killed = "_this call BNAKC_Jetpacks_fnc_deleteEffects";
        };
    };
};

class Extended_Deleted_EventHandlers
{
    class CAManBase
    {
        class BNA_KC_Jetpacks_Deleted_Effects
        {
            deleted = "_this call BNAKC_Jetpacks_fnc_deleteEffects";
        };
    };
};