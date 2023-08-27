class CfgPatches
{
	class BNA_KC_Scripts
	{
		author = "Monkey";
		requiredVersion = 1;
		requiredAddons[]=
        {
            "cba_settings",
                // Addon Options
            "ace_fortify",
                // Fortify system
            "lsb_fob_hblock"
                // LS's Hesco Blocks
                // Comes from Legion Studios: Battlefields
        };
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class BNAKC
	{
        class Developer
        {
            file = "BNA_KC_Scripts\Data\Functions\Developer";
            class devLog {};
        };

		class Helmets
		{
			file = "BNA_KC_Scripts\Data\Functions\Helmets";
			class helmetNVGSwitch{};
		};
        
		class Misc
		{
			file = "BNA_KC_Scripts\Data\Functions\Misc";
			class FixInfiniteLoading{};
			class getConfigProperty {};
		};

		class Fortifications
		{
			file = "BNA_KC_Scripts\Data\Functions\Fortification";
			class FortificationsPostInit{};
            class RegisterPreset{};
		};

        class Map
        {
            file = "BNA_KC_Scripts\Data\Functions\Map";
			class CreateMarkOnSelf{};
            class CreateMarkAction{};
        };

        class EMP
        {
            file = "BNA_KC_Scripts\Data\Functions\EMP";
            class killDroids;
            class disableDekaShields;
            class tempDisableVehicles;
            class playDroidPopperSound;
        };

        class Weapons
        {
            file = "BNA_KC_Scripts\Data\Functions\Weapons";
            class specialGrenadesEH;
        };

        class Medical
        {
            file = "BNA_KC_Scripts\Data\Functions\Medical";
            class slowHeal {};
            class areaSlowHeal {};
            class sortUnitsByInjuries {};
            class isFullyHealed {};
        };

        class Settings
        {
            class miscOptions
            {
                file = "BNA_KC_Scripts\Data\Functions\Settings\fn_miscOptions.sqf";
            };
            class miscKeybinds
            {
                file = "BNA_KC_Scripts\Data\Functions\Settings\fn_miscKeybinds.sqf";
            };
            class weapOptions
            {
                file = "BNA_KC_Scripts\Data\Functions\Settings\fn_weapOptions.sqf";
            };
        };
	};
};

class Extended_PreInit_EventHandlers
{
    class BNA_KC_Misc_SettingsPreInit
    {
        init = "call BNAKC_fnc_miscOptions; call BNAKC_fnc_miscKeybinds;";
    };
    class BNA_KC_Weap_OptionsPreInit
    {
        init = "call BNAKC_fnc_weapOptions;";
    };
};

class Extended_PostInit_EventHandlers
{
    class BNA_KC_Scripts_HelmetPostInit
	{
        init = "call BNAKC_fnc_helmetNVGSwitch";
    };
    class BNA_KC_Scripts_FortificationsPostInit
	{
        init = "call BNAKC_fnc_FortificationsPostInit";
    };
    class BNA_KC_Scripts_CreateMarkAction
    {
        init = "call BNAKC_fnc_CreateMarkAction";
    };
    class BNA_KC_Scripts_FixInfiniteLoading
    {
        init = "if (BNA_KC_Misc_FixInfiniteLoading) then { call BNAKC_fnc_FixInfiniteLoading; };";
    };
    class BNA_KC_Weap_specialGrenadesEH
    {
        init = "['ace_firedPlayer'] call BNAKC_fnc_specialGrenadesEH;";
    };
};

#include "FortifyPresets.hpp"