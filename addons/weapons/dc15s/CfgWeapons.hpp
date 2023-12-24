class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
    class CLASS(Muzzle_Stun);
    class CLASS(Muzzle_Stun_Fried);

    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JLTS_DC15S: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
        class Stun;
    };
    class CLASS(DC15S_Base): JLTS_DC15S
    {
        SCOPE_PRIVATE;
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] DC-15S (Base)";
        baseWeapon = QCLASS(DC15S_Base);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] = {QCLASS(Mag_60rnd_DC15S), "Aux12thFleet_Mag_DC15S"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    // Short
                    Aux501_cows_RCO = TRUE;
                    Aux501_cows_RCO_2 = TRUE;
                    Aux501_cows_RCO_3 = TRUE;
                    // Medium
                    Aux501_cows_MRCO = TRUE;
                    Aux501_cows_MRCO_2 = TRUE;
                    Aux501_cows_MRCO_3 = TRUE;
                    // Sights
                    Aux501_cows_Holosight = TRUE;
                    Aux501_cows_Holosight_2 = TRUE;
                    Aux501_cows_Holosight_3 = TRUE;
                    Aux501_cows_reflex_optic = TRUE;
                };
            };
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    acc_pointer_ir = TRUE;
                    ace_acc_pointer_green = TRUE;
                    jlts_dc17sa_flashlight = TRUE;
                };
            };
            class UnderBarrelSlot;
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
        class Stun: CLASS(Muzzle_Stun) {};
    };

    class CLASS(DC15S): CLASS(DC15S_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15S";
        baseWeapon = QCLASS(DC15S);
        JLTS_shieldedWeapon = QCLASS(DC15S_RiotShield);
        JLTS_friedItem = QCLASS(DC15S_Fried);
    };
    class CLASS(DC15S_Fried): CLASS(DC15S)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15S (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";

        baseWeapon = QCLASS(DC15S_Fried);
        JLTS_shieldedWeapon = QCLASS(DC15S_RiotShield_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };

    class CLASS(DC15S_RiotShield): CLASS(DC15S)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15S (Shield)";

        baseWeapon = QCLASS(DC15S_RiotShield);
        JLTS_isShielded = TRUE;
        JLTS_baseWeapon = QCLASS(DC15S);
        JLTS_friedItem = QCLASS(DC15S_RiotShield_Fried);

        model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa",
            "\MRC\JLTS\weapons\Shield\data\shield_co.paa"
        };
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
        };

        // reloadAction = "GestureReload";
        // inertia = 0.80000001;
        recoil = "recoil_pdw"; // More recoil since the gun is held in one hand

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                class CompatibleItems
                {
                    JLTS_riot_shield_attachment = TRUE;
                    JLTS_riot_shield_212_attachment = TRUE;
                    JLTS_riot_shield_501_attachment = TRUE;
                    JLTS_riot_shield_101_attachment = TRUE;
                    JLTS_riot_shield_CG_attachment = TRUE;
                    JLTS_riot_shield_GD_attachment = TRUE;
                    JLTS_riot_shield_droid_attachment = TRUE;
                };
            };
        };
    };
    class CLASS(DC15S_RiotShield_Fried): CLASS(DC15S_RiotShield)
    {
        displayName = "[KC] DC-15S (Shield, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";

        baseWeapon = QCLASS(DC15S_RiotShield_Fried);
        JLTS_baseWeapon = QCLASS(DC15S_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };
};