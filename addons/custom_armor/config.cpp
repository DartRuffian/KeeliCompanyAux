#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            QCLASS(armor)
        };
        units[] =
        {
            QCLASS(Unit_Axel),
            QCLASS(Unit_Burnt),
            QCLASS(Unit_Defter),
            QCLASS(Unit_Dexus),
            QCLASS(Unit_Drake),
            QCLASS(Unit_Joe),
            QCLASS(Unit_Keeli),
            QCLASS(Unit_Keeli_CamoBrown),
            QCLASS(Unit_Keeli_CamoGrey),
            QCLASS(Unit_Rat),
            QCLASS(Unit_Sin),
            QCLASS(Unit_Tyrant),
            QCLASS(Unit_Phase2_Insulated_Dexus),
            QCLASS(Unit_Phase2_Insulated_Joe),
            QCLASS(Unit_Phase2_Insulated_Keeli),
            QCLASS(Backpack_Keeli),
            QGROUND_CLASS(Helmet_Phase1_Axel),
            QGROUND_CLASS(Helmet_Phase1_Burnt),
            QGROUND_CLASS(Helmet_Phase1_BurntBacta),
            QGROUND_CLASS(Helmet_Phase1_Catholic),
            QGROUND_CLASS(Helmet_Phase1_CatholicKyber),
            QGROUND_CLASS(Helmet_Phase1_Cutthroat),
            QGROUND_CLASS(Helmet_Phase1_Defter),
            QGROUND_CLASS(Helmet_Phase1_DefterBacta),
            QGROUND_CLASS(Helmet_Phase1_Dexus),
            QGROUND_CLASS(Helmet_Phase1_DexusBacta),
            QGROUND_CLASS(Helmet_Phase1_Drake),
            QGROUND_CLASS(Helmet_Phase1_DrakeBacta),
            QGROUND_CLASS(Helmet_Phase1_Grey),
            QGROUND_CLASS(Helmet_Phase1_Hazard),
            QGROUND_CLASS(Helmet_Phase1_Jaws),
            QGROUND_CLASS(Helmet_Phase1_Jester),
            QGROUND_CLASS(Helmet_Phase1_Joe),
            QGROUND_CLASS(Helmet_Phase1_JoeCrimson),
            QGROUND_CLASS(Helmet_Phase1_Keeli),
            QGROUND_CLASS(Helmet_Phase1_KeeliCrimson),
            QGROUND_CLASS(Helmet_Phase1_Keeli_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_KeeliCrimson_CamoBrown),
            QGROUND_CLASS(Helmet_Phase1_Keeli_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_KeeliCrimson_CamoGrey),
            QGROUND_CLASS(Helmet_Phase1_Lou),
            QGROUND_CLASS(Helmet_Phase1_LouPlasma),
            QGROUND_CLASS(Helmet_Phase1_Ox),
            QGROUND_CLASS(Helmet_Phase1_Patriot),
            QGROUND_CLASS(Helmet_Phase1_Rev),
            QGROUND_CLASS(Helmet_Phase1_Rodger),
            QGROUND_CLASS(Helmet_Phase1_Sage),
            QGROUND_CLASS(Helmet_Phase1_Sin),
            QGROUND_CLASS(Helmet_Phase1_Splashdown),
            QGROUND_CLASS(Helmet_Phase1_Swoop),
            QGROUND_CLASS(Helmet_Phase1_Tyrant),
            QGROUND_CLASS(Helmet_Phase1_TyrantCrimson),
            QGROUND_CLASS(Helmet_Phase1_Woods),
            QGROUND_CLASS(Helmet_Phase1_Pilot_Bailout),
            QGROUND_CLASS(Helmet_Phase1_Pilot_Blue),
            QGROUND_CLASS(Helmet_Phase1_Pilot_BlueBacta),
            QGROUND_CLASS(Helmet_Phase1_Pilot_Mischief),
            QGROUND_CLASS(Helmet_Phase1_Tanker_Grey),
            QGROUND_CLASS(Helmet_Phase2_Axel),
            QGROUND_CLASS(Helmet_Phase2_Bob),
            QGROUND_CLASS(Helmet_Phase2_BobKyber),
            QGROUND_CLASS(Helmet_Phase2_Burnt),
            QGROUND_CLASS(Helmet_Phase2_BurntBacta),
            QGROUND_CLASS(Helmet_Phase2_Dexus),
            QGROUND_CLASS(Helmet_Phase2_DexusBacta),
            QGROUND_CLASS(Helmet_Phase2_Evo),
            QGROUND_CLASS(Helmet_Phase2_Grey),
            QGROUND_CLASS(Helmet_Phase2_Harry),
            QGROUND_CLASS(Helmet_Phase2_Hazard),
            QGROUND_CLASS(Helmet_Phase2_Jackal),
            QGROUND_CLASS(Helmet_Phase2_Jaws),
            QGROUND_CLASS(Helmet_Phase2_Jester),
            QGROUND_CLASS(Helmet_Phase2_Joe),
            QGROUND_CLASS(Helmet_Phase2_JoeCrimson),
            QGROUND_CLASS(Helmet_Phase2_Keeli),
            QGROUND_CLASS(Helmet_Phase2_KeeliCrimson),
            QGROUND_CLASS(Helmet_Phase2_Leon),
            QGROUND_CLASS(Helmet_Phase2_Lou),
            QGROUND_CLASS(Helmet_Phase2_LouPlasma),
            QGROUND_CLASS(Helmet_Phase2_Ox),
            QGROUND_CLASS(Helmet_Phase2_Patriot),
            QGROUND_CLASS(Helmet_Phase2_Rev),
            QGROUND_CLASS(Helmet_Phase2_Rodger),
            QGROUND_CLASS(Helmet_Phase2_Sage),
            QGROUND_CLASS(Helmet_Phase2_Scvrpio),
            QGROUND_CLASS(Helmet_Phase2_Sogi),
            QGROUND_CLASS(Helmet_Phase2_Splashdown),
            QGROUND_CLASS(Helmet_Phase2_Star),
            QGROUND_CLASS(Helmet_Phase2_Swoop),
            QGROUND_CLASS(Helmet_Phase2_Sytha),
            QGROUND_CLASS(Helmet_Phase2_Tugz),
            QGROUND_CLASS(Helmet_Phase2_Vortex),
            QGROUND_CLASS(Helmet_Phase2_Woods),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Bailout),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Blue),
            QGROUND_CLASS(Helmet_Phase2_Pilot_BlueBacta),
            QGROUND_CLASS(Helmet_Phase2_Pilot_Mischief),
            QGROUND_CLASS(Helmet_Phase2_Insulated_Dexus),
            QGROUND_CLASS(Helmet_Phase2_Insulated_Joe),
            QGROUND_CLASS(Helmet_Phase2_Insulated_Keeli),
            QGROUND_CLASS(Helmet_Phase2_Tanker_Catholic),
            QGROUND_CLASS(Helmet_Phase2_Tanker_CatholicKyber),
            QGROUND_CLASS(Helmet_Phase2_Tanker_Grey),
            QGROUND_CLASS(Helmet_Phase12_Joe),
            QGROUND_CLASS(Helmet_Engineer_Bob),
            QGROUND_CLASS(Helmet_Engineer_BobKyber),
            QGROUND_CLASS(Helmet_ARC_Drake),
            QGROUND_CLASS(Helmet_ARC_DrakeBacta),
            QGROUND_CLASS(Helmet_ARC_Hagrid),
            QGROUND_CLASS(Helmet_ARC_HagridPlasma),
            QGROUND_CLASS(Helmet_ARC_Sin),
            QGROUND_CLASS(Helmet_ARC_Tyrant),
            QGROUND_CLASS(Helmet_ARC_TyrantCrimson),
            QGROUND_CLASS(Helmet_ARF_Patriot),
            QGROUND_CLASS(Helmet_ARF_Tugz),
            QGROUND_CLASS(Helmet_BARC_Rat),
            QGROUND_CLASS(Helmet_BARC_RatCrimson)
        };
        weapons[] =
        {
            QCLASS(Helmet_Phase1_Axel),
            QCLASS(Helmet_Phase1_Burnt),
            QCLASS(Helmet_Phase1_BurntBacta),
            QCLASS(Helmet_Phase1_Catholic),
            QCLASS(Helmet_Phase1_CatholicKyber),
            QCLASS(Helmet_Phase1_Cutthroat),
            QCLASS(Helmet_Phase1_Defter),
            QCLASS(Helmet_Phase1_DefterBacta),
            QCLASS(Helmet_Phase1_Dexus),
            QCLASS(Helmet_Phase1_DexusBacta),
            QCLASS(Helmet_Phase1_Drake),
            QCLASS(Helmet_Phase1_DrakeBacta),
            QCLASS(Helmet_Phase1_Grey),
            QCLASS(Helmet_Phase1_Hazard),
            QCLASS(Helmet_Phase1_Jaws),
            QCLASS(Helmet_Phase1_Jester),
            QCLASS(Helmet_Phase1_Joe),
            QCLASS(Helmet_Phase1_JoeCrimson),
            QCLASS(Helmet_Phase1_Keeli),
            QCLASS(Helmet_Phase1_KeeliCrimson),
            QCLASS(Helmet_Phase1_Lou),
            QCLASS(Helmet_Phase1_LouPlasma),
            QCLASS(Helmet_Phase1_Ox),
            QCLASS(Helmet_Phase1_Patriot),
            QCLASS(Helmet_Phase1_Rev),
            QCLASS(Helmet_Phase1_Rodger),
            QCLASS(Helmet_Phase1_Sage),
            QCLASS(Helmet_Phase1_Sin),
            QCLASS(Helmet_Phase1_Splashdown),
            QCLASS(Helmet_Phase1_Swoop),
            QCLASS(Helmet_Phase1_Tyrant),
            QCLASS(Helmet_Phase1_TyrantCrimson),
            QCLASS(Helmet_Phase1_Woods),
            QCLASS(Helmet_Phase1_Pilot_Bailout),
            QCLASS(Helmet_Phase1_Pilot_Blue),
            QCLASS(Helmet_Phase1_Pilot_BlueBacta),
            QCLASS(Helmet_Phase1_Pilot_Mischief),
            QCLASS(Helmet_Phase1_Tanker_Grey),
            QCLASS(Helmet_Phase2_Axel),
            QCLASS(Helmet_Phase2_Bob),
            QCLASS(Helmet_Phase2_BobKyber),
            QCLASS(Helmet_Phase2_Burnt),
            QCLASS(Helmet_Phase2_BurntBacta),
            QCLASS(Helmet_Phase2_Dexus),
            QCLASS(Helmet_Phase2_DexusBacta),
            QCLASS(Helmet_Phase2_Evo),
            QCLASS(Helmet_Phase2_Grey),
            QCLASS(Helmet_Phase2_Harry),
            QCLASS(Helmet_Phase2_Hazard),
            QCLASS(Helmet_Phase2_Jackal),
            QCLASS(Helmet_Phase2_Jaws),
            QCLASS(Helmet_Phase2_Jester),
            QCLASS(Helmet_Phase2_Joe),
            QCLASS(Helmet_Phase2_JoeCrimson),
            QCLASS(Helmet_Phase2_Keeli),
            QCLASS(Helmet_Phase2_KeeliCrimson),
            QCLASS(Helmet_Phase2_Keeli_CamoBrown),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown),
            QCLASS(Helmet_Phase2_Keeli_CamoGrey),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey),
            QCLASS(Helmet_Phase2_Leon),
            QCLASS(Helmet_Phase2_Lou),
            QCLASS(Helmet_Phase2_LouPlasma),
            QCLASS(Helmet_Phase2_Ox),
            QCLASS(Helmet_Phase2_Patriot),
            QCLASS(Helmet_Phase2_Rev),
            QCLASS(Helmet_Phase2_Rodger),
            QCLASS(Helmet_Phase2_Sage),
            QCLASS(Helmet_Phase2_Scvrpio),
            QCLASS(Helmet_Phase2_Sogi),
            QCLASS(Helmet_Phase2_Splashdown),
            QCLASS(Helmet_Phase2_Star),
            QCLASS(Helmet_Phase2_Swoop),
            QCLASS(Helmet_Phase2_Sytha),
            QCLASS(Helmet_Phase2_Tugz),
            QCLASS(Helmet_Phase2_Vortex),
            QCLASS(Helmet_Phase2_Woods),
            QCLASS(Helmet_Phase2_Pilot_Bailout),
            QCLASS(Helmet_Phase2_Pilot_Blue),
            QCLASS(Helmet_Phase2_Pilot_BlueBacta),
            QCLASS(Helmet_Phase2_Pilot_Mischief),
            QCLASS(Helmet_Phase2_Tanker_Catholic),
            QCLASS(Helmet_Phase2_Tanker_CatholicKyber),
            QCLASS(Helmet_Phase2_Tanker_Grey),
            QCLASS(Helmet_Phase2_Insulated_Dexus),
            QCLASS(Helmet_Phase2_Insulated_Joe),
            QCLASS(Helmet_Phase2_Insulated_Keeli),
            QCLASS(Helmet_Phase12_Joe),
            QCLASS(Helmet_Engineer_Bob),
            QCLASS(Helmet_Engineer_BobKyber),
            QCLASS(Helmet_ARC_Drake),
            QCLASS(Helmet_ARC_DrakeBacta),
            QCLASS(Helmet_ARC_Hagrid),
            QCLASS(Helmet_ARC_HagridPlasma),
            QCLASS(Helmet_ARC_Sin),
            QCLASS(Helmet_ARC_Tyrant),
            QCLASS(Helmet_ARC_TyrantCrimson),
            QCLASS(Helmet_ARF_Patriot),
            QCLASS(Helmet_ARF_Tugz),
            QCLASS(Helmet_BARC_Rat),
            QCLASS(Helmet_BARC_RatCrimson),
            QCLASS(Uniform_Axel),
            QCLASS(Uniform_Burnt),
            QCLASS(Uniform_Defter),
            QCLASS(Uniform_Dexus),
            QCLASS(Uniform_Drake),
            QCLASS(Uniform_Joe),
            QCLASS(Uniform_Keeli),
            QCLASS(Uniform_Keeli_CamoBrown),
            QCLASS(Uniform_Keeli_CamoGrey),
            QCLASS(Uniform_Rat),
            QCLASS(Uniform_Sin),
            QCLASS(Uniform_Tyrant),
            QCLASS(Uniform_Phase2_Insulated_Dexus),
            QCLASS(Uniform_Phase2_Insulated_Joe),
            QCLASS(Uniform_Phase2_Insulated_Keeli),
            QCLASS(Vest_Commander_Keeli),
            QCLASS(Vest_Officer_Ponds),
            QCLASS(Vest_Officer_Rat),
            QCLASS(Vest_WO_Howzer),
            QCLASS(NVG_phase2_Officer_Keeli)
        };
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"