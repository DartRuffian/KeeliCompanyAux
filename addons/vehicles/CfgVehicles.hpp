class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ace_csw_deploy
            {
                modifierFunction = QUOTE(call FUNC(cswDeployModifier));
            };
        };

        class UserActions
        {
            class GVAR(CSW_Deploy)
            {
                displayName = "Deploy Tripod";
                displayNameDefault = "";

                position = "camera";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(ace_player isEqualTo this and GVAR(showCSWUserAction) and ace_player call ace_csw_fnc_assemble_canDeployTripod);
                statement = QUOTE(ace_player call ace_csw_fnc_assemble_deployTripod);
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
    class Tank: LandVehicle
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };

    class Air;
    class Helicopter: Air
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
    class Plane: Air
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };

    class Ship;
    class Ship_F: Ship
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
};