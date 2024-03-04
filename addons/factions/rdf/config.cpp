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
            "sc_equipment"
        };
        units[] =
        {
            QCLASS(RDF_Unit_Base),
            QCLASS(RDF_Unit_Grenadier)
        };
        weapons[] =
        {
            QCLASS(RDF_Uniform)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"