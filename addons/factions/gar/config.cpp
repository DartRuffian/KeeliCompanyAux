#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QCLASS(armor)
        };
        units[] =
        {
            QCLASS(Unit_CG),
            QCLASS(Unit_CG_Stone),
            QCLASS(Unit_DC),
            QCLASS(Unit_Fil),
            QCLASS(Unit_FilSquad),
            QCLASS(Unit_Phase2_HowzerBlue),
            QCLASS(Unit_Phase2_HowzerBrown),
            QCLASS(Unit_187th_Trooper),
            QCLASS(Unit_212th_Trooper),
            QCLASS(Unit_91st_Ponds),

            QGROUND_CLASS(Helmet_Phase1_CG),
            QGROUND_CLASS(Helmet_Phase1_DC),
            QGROUND_CLASS(Helmet_Phase1_GC),
            QGROUND_CLASS(Helmet_Phase1_HowzerBlue),
            QGROUND_CLASS(Helmet_Phase1_HowzerBrown),
            QGROUND_CLASS(Helmet_Phase1_212th),
            QGROUND_CLASS(Helmet_Phase1_91st_Ponds),

            QGROUND_CLASS(Helmet_Phase2_CG),
            QGROUND_CLASS(Helmet_Phase2_CG_Stone),
            QGROUND_CLASS(Helmet_Phase2_DC),
            QGROUND_CLASS(Helmet_Phase2_Fil),
            QGROUND_CLASS(Helmet_Phase2_FilSquad),
            QGROUND_CLASS(Helmet_Phase2_GC),
            QGROUND_CLASS(Helmet_Phase2_HowzerBlue),
            QGROUND_CLASS(Helmet_Phase2_HowzerBrown),
            QGROUND_CLASS(Helmet_Phase2_187th),
            QGROUND_CLASS(Helmet_Phase2_212th),
            QGROUND_CLASS(Helmet_Phase2_91st_Ponds)
        };
        weapons[] =
        {
            QCLASS(Helmet_Phase1_CG),
            QCLASS(Helmet_Phase1_DC),
            QCLASS(Helmet_Phase1_GC),
            QCLASS(Helmet_Phase1_HowzerBlue),
            QCLASS(Helmet_Phase1_HowzerBrown),
            QCLASS(Helmet_Phase1_91st_Ponds),

            QCLASS(Helmet_Phase2_CG),
            QCLASS(Helmet_Phase2_CG_Stone),
            QCLASS(Helmet_Phase2_DC),
            QCLASS(Helmet_Phase2_Fil),
            QCLASS(Helmet_Phase2_FilSquad),
            QCLASS(Helmet_Phase2_GC),
            QCLASS(Helmet_Phase2_HowzerBlue),
            QCLASS(Helmet_Phase2_HowzerBrown),
            QCLASS(Helmet_Phase2_187th),
            QCLASS(Helmet_Phase2_212th),
            QCLASS(Helmet_Phase2_91st_Ponds),

            QCLASS(Uniform_CG),
            QCLASS(Uniform_CG_Stone),
            QCLASS(Uniform_DC),
            QCLASS(Uniform_Fil),
            QCLASS(Uniform_FilSquad),
            QCLASS(Uniform_HowzerBlue),
            QCLASS(Uniform_HowzerBrown),
            QCLASS(Uniform_187th),
            QCLASS(Uniform_212th),
            QCLASS(Uniform_91st_Ponds)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"