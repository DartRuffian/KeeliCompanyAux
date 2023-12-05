class CfgGroups
{
    class East
    {
        class BNA_KC_OPFOR_EPF
        {
            name = "[KC] El Presidente Forces";

            class BNA_KC_EPF_Infantry
            {
                name = "Infantry";
                class RifleSquad
                {
                    faction = "BNA_KC_OPFOR_EPF";
                    name = "Rifleman Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0
                    {
                        side = 0;
                        vehicle = "BNA_KC_EPF_Unit_SL";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = "BNA_KC_EPF_Unit_Rifleman";
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1
                    {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1
                    {
                        position[] = {10, -10, 0};
                    };
                    class Object4: Object1
                    {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object1
                    {
                        position[] = {15, -15, 0};
                    };
                    class Object6: Object1
                    {
                        position[] = {-15, -15, 0};
                    };
                };

                class AntiArmorSquad: RifleSquad
                {
                    name = "Anti-Armor Squad";
                    class Object0: Object0 {};
                    class Object1: Object1 {};
                    class Object2: Object2 {};
                    class Object3: Object3
                    {
                        vehicle = "BNA_KC_EPF_Unit_AT";
                    };
                    class Object4: Object4
                    {
                        vehicle = "BNA_KC_EPF_Unit_AT";
                    };
                    class Object5: Object5 {};
                    class Object6: Object6 {};
                };

                class AntiAirSquad: RifleSquad
                {
                    name = "Anti-Air Squad";
                    class Object0: Object0 {};
                    class Object1: Object1 {};
                    class Object2: Object2 {};
                    class Object3: Object3
                    {
                        vehicle = "BNA_KC_EPF_Unit_AA";
                    };
                    class Object4: Object3
                    {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object5 {};
                    class Object6: Object6 {};
                };

                class AssaultSquad: RifleSquad
                {
                    name = "Assault Squad";

                    class Object0: Object0 {};
                    class Object1: Object1 {};
                    class Object2: Object2 {};
                    class Object3: Object3
                    {
                        vehicle = "BNA_KC_EPF_Unit_AssaultMedium";
                    };
                    class Object4: Object4
                    {
                        vehicle = "BNA_KC_EPF_Unit_AssaultMedium";
                    };
                    class Object5: Object5
                    {
                        vehicle = "BNA_KC_EPF_Unit_AssaultHeavy";
                    };
                    class Object6: Object6
                    {
                        vehicle = "BNA_KC_EPF_Unit_AssaultHeavy";
                    };
                };
            };
        };
    };
};