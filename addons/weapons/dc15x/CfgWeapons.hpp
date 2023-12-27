class Mode_SemiAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JLTS_DC15X: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
    };
    class CLASS(DC15X_Base): JLTS_DC15X
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] DC-15X (Base)";
        baseWeapon = QCLASS(DC15X_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_15rnd_DC15X), "Aux12thFleet_Mag_DC15X"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    CLASS(DC15X_Scope) = TRUE;
                    Aux501_cows_lrps = TRUE;
                };
            };
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                class CompatibleItems
                {
                    bipod_01_f_blk = TRUE;
                };
            };
        };
        class Single: Single
        {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;

            dispersion = 0.0003;
            reloadTime = 1.5;

            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XShot)};
            };
        };
    };

    class CLASS(DC15X): CLASS(DC15X_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15X";
        baseWeapon = QCLASS(DC15X);
        JLTS_friedItem = QCLASS(DC15X_Fried);

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = QCLASS(DC15X_Scope);
            };
        };
    };
    class CLASS(DC15X_Fried): CLASS(DC15X)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15X (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15X_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class optic_LRPS;
    class InventoryOpticsItem_Base_F;
    class jlts_dc15x_scope: optic_LRPS
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip;
            };
        };
    };
    class CLASS(DC15X_Scope): jlts_dc15x_scope
    {
        author = "Keeli Company Aux Team";
        displayName = "[KC] DC-15X Scope";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {WHOT};
                };
            };
        };
    };
};