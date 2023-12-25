class CfgAmmo
{
    class CLASS(Grenade_Base_Ammo);
    class CLASS(Grenade_EMP_Ammo): CLASS(Grenade_Base_Ammo)
    {
        hit = 0;
        indirectHit = 0;
        explosive = 0;
        explosionTime = 5;

        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_metal = 0;
        ace_frag_charge = 0;

        model = "\ls_weapons\grenades\thermalDet\ls_grenade_thermalDet";

        // Sound and visual effects
        ace_grenades_pullPinSound[] = {"\ls_sounds\weapons\grenade\pin.wss", 3, 1, 10};
        soundFly[] = {"\ls_sounds\weapons\grenade\thermalDet_classC_fuse.wss", 3, 1, 40};
        soundSetExplosion[] = {};

        explosionEffects = "JLTS_fx_exp_EMP";
        explosionEffectRadius = 3;
        explosionForceCoef = 0;

        craterEffects = "";
        craterShape = "";

        aiAmmoUsageFlags = AMMO_USAGE_NONE;
    };

    class CLASS(GrenadeSmoke_Base_Ammo);
    class CLASS(Grenade_Bacta_Ammo): CLASS(GrenadeSmoke_Base_Ammo)
    {
        simulation = "shotSmoke";
        deflectionSlowDown = 0;

        model = "\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
        effectsSmoke = QCLASS(Effect_GrenadeBacta);
        smokeColor[] = {0.38, 0.54, 0.91, 0.35};

        aiAmmoUsageFlags = AMMO_USAGE_NONE;
    };
};