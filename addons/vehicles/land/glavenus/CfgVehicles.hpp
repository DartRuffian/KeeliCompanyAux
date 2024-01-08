class CfgVehicles
{
    class O_MRAP_02_F;
    class CLASS(Glavenus_Unarmed): O_MRAP_02_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\glavenus\data\previews\CLASS(Glavenus_Unarmed).jpg);

        displayName = "Glavenus (Unarmed)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_COMMON;
    };

    class CLASS(Glavenus_Medic): CLASS(Glavenus_Unarmed)
    {
        displayName = "Glavenus (Medic)";
        editorPreview = QPATHTOF(land\glavenus\data\previews\CLASS(Glavenus_Medic).jpg);

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};
        attendant = 1;

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\glavenus\data\textures\Medic\Body_co.paa),
            QPATHTOF(land\glavenus\data\textures\Medic\Body2_co.paa),
            ""
        };
        textureList[] = {};
        class TextureSources {};

        INVENTORY_VEHICLE_MEDICAL;
    };

    class Car;
    class Car_F: Car
    {
        class Turrets;
    };
    class MRAP_02_base_F: Car_F {};
    class MRAP_02_hmg_base_F: MRAP_02_base_F
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {};
    class CLASS(Glavenus_HMG): O_MRAP_02_hmg_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\glavenus\data\previews\CLASS(Glavenus_HMG).jpg);

        displayName = "Glavenus (HMG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_COMMON;

        class AnimationSources: AnimationSources
        {
            class muzzle_hide
            {
                source = "reload";
                weapon = QCLASS(Coax_Badger);
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = QCLASS(Coax_Badger);
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {QCLASS(Coax_Badger)};
                magazines[] =
                {
                    QCLASS(MAG_1000rnd_Coax),
                    QCLASS(MAG_1000rnd_Coax),
                    QCLASS(MAG_1000rnd_Coax)
                };
            };
        };
    };

    class O_MRAP_02_gmg_F;
    class CLASS(Glavenus_GMG): O_MRAP_02_gmg_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\glavenus\data\previews\CLASS(Glavenus_HMG).jpg);

        displayName = "Glavenus (GMG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_COMMON;
    };
};