class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_RPS6_Disposable): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] RPS-6 HEAT Disposable Rocket";
        displayNameShort = "HEAT";
        descriptionShort = "High Explosive Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-6";

        model = "\ls_weapons\tertiary\rps6\ls_magazine_rps6";
        picture = "\ls_weapons\_ui\RPS6_mag_ca.paa";

        modelSpecial = "\ls_weapons\tertiary\rps6\ls_magazine_rps6";
        modelSpecialIsProxy = TRUE;

        ammo = QCLASS(Rocket_RPS6);
        count = 1;

        allowedSlots[] = {BACKPACK_SLOT};
        mass = MASS_MAGAZINE;
    };
};