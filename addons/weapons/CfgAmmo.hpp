class CfgAmmo
{
    class BulletBase;
    class CLASS(Bullet_Base): BulletBase
    {
        SCOPE_PRIVATE;
    };

    class CLASS(Bullet_PlasmaBase): CLASS(Bullet_Base)
    {
        coefGravity = 0.01;
        airFriction = 0;
        deflecting = 0;
        cartridge = "";

        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY;
        audibleFire = 80;

        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_dragModel = 7;
        ACE_standardAtmosphere = "ICAO";
        ACE_transonicStabilityCoef = 1;
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_velocityBoundaries[] = {};

        supersoniccrackfar[] = {};
        supersoniccracknear[] = {};

        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };

    class CLASS(Bullet_PlasmaRifle_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 16;
        caliber = 2;
        typicalSpeed = 890;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        tracerEndTime = 10;
        tracerScale = 1.1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaRifle_Red): CLASS(Bullet_PlasmaRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaRifle_Green): CLASS(Bullet_PlasmaRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaCarbine_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 10;
        caliber = 1;
        typicalSpeed = 820;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 6;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
    };
    class CLASS(Bullet_PlasmaCarbine_Red): CLASS(Bullet_PlasmaCarbine_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaCarbine_Green): CLASS(Bullet_PlasmaCarbine_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaSniper_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 24;
        caliber = 2.4;
        typicalSpeed = 910;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 7;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        timeToLive = 7;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;
        visibleFire = 5;
        visibleFireTime = 3;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508,660.4,711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880,915,925};
    };
    class CLASS(Bullet_PlasmaSniper_Red): CLASS(Bullet_PlasmaSniper_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaSniper_Green): CLASS(Bullet_PlasmaSniper_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaAutoRifle_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 17.5;
        caliber = 2.8;
        typicalSpeed = 890;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        timeToLive = 6;
        tracerEndTime = 10;
        tracerscale = 1.5;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508,660.4,711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880,915,925};
    };
    class CLASS(Bullet_PlasmaAutoRifle_Red): CLASS(Bullet_PlasmaAutoRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaAutoRifle_Green): CLASS(Bullet_PlasmaAutoRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaPistol_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 5;
        caliber = 1.2;
        typicalSpeed = 380;
        dangerRadiusHit = 8;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.5;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_barrelLengths[] = {93.5,101.6,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 7.452;
        ACE_caliber = 9.042;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {380,390,420,435};
    };
    class CLASS(Bullet_PlasmaPistol_Red): CLASS(Bullet_PlasmaPistol_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaPistol_Green): CLASS(Bullet_PlasmaPistol_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaScatter_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 20;
        caliber = 2;
        typicalSpeed = 400;
        dangerRadiusHit = 40;
        dangerRadiusBulletClose = 16;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 5;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        simulationStep = 0.0001;
        submunitionAmmo = QCLASS(Bullet_PlasmaPistol_Blue);
        submunitionConeAngle = 1;
        submunitionConeType[] = {"poissondisc", 9};

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
        fireSpreadAngle = 8;
        triggerTime = 0.0003; // Gives the shotgun pellet spread
    };
    class CLASS(Bullet_PlasmaScatter_Red): CLASS(Bullet_PlasmaScatter_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        submunitionAmmo = QCLASS(Bullet_PlasmaPistol_Red);
    };
    class CLASS(Bullet_PlasmaScatter_Green): CLASS(Bullet_PlasmaScatter_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        submunitionAmmo = QCLASS(Bullet_PlasmaPistol_Green);
    };

    class CLASS(Bullet_PlasmaScatterHP_Blue): CLASS(Bullet_PlasmaScatter_Blue)
    {
        submunitionAmmo = QCLASS(Bullet_PlasmaCarbine_Blue);
    };
    class CLASS(Bullet_PlasmaScatterHP_Red): CLASS(Bullet_PlasmaScatterHP_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        submunitionAmmo = QCLASS(Bullet_PlasmaCarbine_Red);
    };
    class CLASS(Bullet_PlasmaScatterHP_Green): CLASS(Bullet_PlasmaScatterHP_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        submunitionAmmo = QCLASS(Bullet_PlasmaCarbine_Green);
    };

    class CLASS(Bullet_PlasmaStun): CLASS(Bullet_PlasmaPistol_Blue)
    {
        hit = 0;
        typicalSpeed = 30;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        suppressionRadiusBulletClose = -1;

        aiAmmoUsageFlags = AMMO_USAGE_NONE;

        model = "\MRC\JLTS\weapons\Core\effects\stun.p3d";
        timetolive = 3;

        JLTS_isStunAmmo = TRUE;
    };

    class F_40mm_White;
    class CLASS(Flare_Base): F_40mm_White
    {
        SCOPE_PRIVATE;
    };

    class CLASS(Flare_Blue): CLASS(Flare_Base)
    {
        SCOPE_PUBLIC;
        lightColor[] = {0.25, 0.25, 0.5, 0.5};
    };

    // TODO: Update to inherit from base KC bullet
    class SWLW_ammo_40mm_at;
    class CLASS(Bullet_Plasma40mm_AT): SWLW_ammo_40mm_at
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        craterWaterEffects = "ImpactEffectsWaterExplosion";

        hit = 800;
        typicalSpeed = 1550;

        submunitionAmmo = QCLASS(Bullet_Plasma40mm_ATSubmunition);
        submunitionInitialOffset[] = {0,0, -0.5};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
    };

    class ammo_Penetrator_Titan_AT;
    class CLASS(Bullet_Plasma40mm_ATSubmunition): ammo_Penetrator_Titan_AT
    {
        hit = 650;
        caliber = 60;

        thrust = 210;
        thrustTime = 1.5;
        typicalSpeed = 1000;
    };

    class RocketBase;
    class CLASS(Rocket_Base): RocketBase
    {
        SCOPE_PUBLIC;

        hit = 150;
        indirectHit = 100;
        indirectHitRange = 10;
        cost = 100;
        maxSpeed = 140;
        explosive = 1;
        fuseDistance = 10;
        initTime = 0;
        maneuvrability = 0;
        airFriction = 0.075;
        sideAirFriction = 0.075;
        airLock = 0;
        irLock = 1;

        thrust = 500;
        thrustTime = 0.1;
        timeToLive = 10;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        warheadName = "TandemHEAT";
        simulationStep = 0.02;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_VEHICLES + AMMO_USAGE_AIRCRAFT + AMMO_USAGE_ARMORED_VEHICLES);
        allowAgainstInfantry = FALSE;

        model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
        effectsMissile = "EmptyEffect";
        explosionEffects = "M136_Explode";
        craterEffects = "M136_Smoke";
        effectsMissileInit = "";

        submunitionAmmo = "";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;

        multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
        soundFly[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
        soundHit1[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
        soundHit2[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
        soundHit3[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
        soundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};

        class CamShakeFire
        {
            distance = 35.7771;
            duration = 0.8;
            frequency = 20;
            power = 2.11474;
        };
        class CamShakePlayerFire
        {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 1;
        };
        class CamShakeHit
        {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };
        class CamShakeExplode
        {
            distance = 99.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };
    };

    class ammo_Penetrator_Base;
    class CLASS(Rocket_Submunition_Base): ammo_Penetrator_Base
    {
        SCOPE_PUBLIC;

        hit = 480;
        caliber = 43.3333;
        warheadName = "TandemHEAT";
    };

    class GrenadeHand;
    class CLASS(Grenade_Base_Ammo): GrenadeHand
    {
        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY;
    };

    class SmokeShell;
    class CLASS(GrenadeSmoke_Base_Ammo): SmokeShell {};
};