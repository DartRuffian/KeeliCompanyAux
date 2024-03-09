class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Helmets (P1)";
            author = AUTHOR;
            options[] = {"camo"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Axel",
                    "Burnt",
                    "Catholic",
                    "Cutthroat",
                    "Defter",
                    "Dexus",
                    "Drake",
                    "Grey",
                    "Hazard",
                    "Jaws",
                    "Jester",
                    "Joe",
                    "Keeli",
                    "Lou",
                    "Ox",
                    "Patriot",
                    "Rat",
                    "Rev",
                    "Rodger",
                    "Sage",
                    "Sin",
                    "Splashdown",
                    "Swoop",
                    "Talyn",
                    "Tyrant",
                    "Woods"
                };

                class Axel { label = "Axel"; };
                class Burnt { label = "Burnt"; };
                class Catholic { label = "Catholic"; };
                class Cutthroat { label = "Cutthroat"; };
                class Defter { label = "Defter"; };
                class Dexus { label = "Dexus"; };
                class Drake { label = "Drake"; };
                class Grey { label = "Grey"; };
                class Hazard { label = "Hazard"; };
                class Jaws { label = "Jaws"; };
                class Jester { label = "Jester"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
                class Lou { label = "Lou"; };
                class Ox { label = "Ox"; };
                class Patriot { label = "Patriot"; };
                class Rat { label = "Rat"; };
                class Rev { label = "Rev"; };
                class Rodger { label = "Rodger"; };
                class Sage { label = "Sage"; };
                class Sin { label = "Sin"; };
                class Splashdown { label = "Splashdown"; };
                class Swoop { label = "Swoop"; };
                class Talyn { label = "Talyn"; };
                class Tyrant { label = "Tyrant"; };
                class Woods { label = "Woods"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase1_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Pilot Helmets (P1)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Bailout",
                    "Blue",
                    "Mischief"
                };

                class Bailout { label = "Bailout"; };
                class Blue { label = "Blue"; };
                class Mischief { label = "Mischief"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase1_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Tanker Helmets (P1)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Grey"
                };

                class Grey { label = "Grey"; };
            };
        };

        class CLASS(Helmets_Phase2_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Helmets (P2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Axel",
                    "Bob",
                    "Burnt",
                    "Dexus",
                    "Evo",
                    "Grey",
                    "Harry",
                    "Hazard",
                    "Jackal",
                    "Jaws",
                    "Joe",
                    "Keeli",
                    "Keeli_CamoBrown",
                    "Keeli_CamoGrey",
                    "Leon",
                    "Lou",
                    "Ox",
                    "Patriot",
                    "Rodger",
                    "Sage",
                    "Scvrpio",
                    "Sogi",
                    "Star",
                    "Swoop",
                    "Sytha",
                    "Talyn",
                    "Tugz",
                    "Vortex",
                    "Woods"
                };

                class Axel { label = "Axel"; };
                class Bob { label = "Bob"; };
                class Burnt { label = "Burnt"; };
                class Dexus { label = "Dexus"; };
                class Evo { label = "Evo"; };
                class Grey { label = "Grey"; };
                class Harry { label = "Harry"; };
                class Hazard { label = "Hazard"; };
                class Jackal { label = "Jackal"; };
                class Jaws { label = "Jaws"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
                class Keeli_CamoBrown { label = "Keeli Brown"; };
                class Keeli_CamoGrey { label = "Keeli Grey"; };
                class Leon { label = "Leon"; };
                class Lou { label = "Lou"; };
                class Ox { label = "Ox"; };
                class Patriot { label = "Patriot"; };
                class Rodger { label = "Rodger"; };
                class Sage { label = "Sage"; };
                class Scvrpio { label = "Scvrpio"; };
                class Sogi { label = "Sogi"; };
                class Star { label = "Star"; };
                class Swoop { label = "Swoop"; };
                class Sytha { label = "Sytha"; };
                class Talyn { label = "Talyn"; };
                class Tugz { label = "Tugz"; };
                class Vortex { label = "Vortex"; };
                class Woods { label = "Woods"; };
            };
        };

        class CLASS(Helmets_Insulated_Phase2_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Snow Helmets (P2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Dexus",
                    "Joe",
                    "Keeli"
                };

                class Dexus { label = "Dexus"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase2_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Pilot Helmets (P2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Bailout",
                    "Blue",
                    "Mischief"
                };

                class Bailout { label = "Bailout"; };
                class Blue { label = "Blue"; };
                class Mischief { label = "Mischief"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase2_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Tanker Helmets (P2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Catholic",
                    "Grey"
                };

                class Catholic { label = "Catholic"; };
                class Grey { label = "Grey"; };
            };
        };

        class CLASS(Helmets_Phase12_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Helmets (P1-2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Joe"
                };

                class Joe { label = "Joe"; };
            };
        };

        class CLASS(Helmets_Engineer_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Engineer Helmets";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Bob",
                    "Splashdown"
                };

                class Bob { label = "Bob"; };
                class Splashdown { label = "Splashdown"; };
            };
        };

        class CLASS(Helmets_ARC_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom ARC Helmets";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Drake",
                    "Hagrid",
                    "Sin",
                    "Tyrant"
                };

                class Drake { label = "Drake"; };
                class Hagrid { label = "Hagrid"; };
                class Sin { label = "Sin"; };
                class Tyrant { label = "Tyrant"; };
            };
        };

        class CLASS(Helmets_ARF_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom ARF Helmets";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Defter",
                    "Jester",
                    "Patriot",
                    "Rev",
                    "Sogi",
                    "Tugz"
                };

                class Defter { label = "Defter"; };
                class Jester { label = "Jester"; };
                class Patriot { label = "Patriot"; };
                class Rev { label = "Rev"; };
                class Sogi { label = "Sogi"; };
                class Tugz { label = "Tugz"; };
            };
        };

        class CLASS(Helmets_BARC_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom BARC Helmets";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Rat"
                };

                class Rat { label = "Rat"; };
            };
        };

        class CLASS(Uniforms_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Uniforms";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Axel",
                    "Bob",
                    "Burnt",
                    "Catholic",
                    "Defter",
                    "Dexus",
                    "Drake",
                    "Hagrid",
                    "Joe",
                    "Keeli",
                    "Keeli_CamoBrown",
                    "Keeli_CamoGrey",
                    "Rat",
                    "Sin",
                    "Tyrant"
                };

                class Axel { label = "Axel"; };
                class Bob { label = "Bob"; };
                class Burnt { label = "Burnt"; };
                class Catholic { label = "Catholic"; };
                class Defter { label = "Defter"; };
                class Dexus { label = "Dexus"; };
                class Drake { label = "Drake"; };
                class Hagrid { label = "Hagrid"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
                class Keeli_CamoBrown { label = "Keeli Brown"; };
                class Keeli_CamoGrey { label = "Keeli Grey"; };
                class Rat { label = "Rat"; };
                class Sin { label = "Sin"; };
                class Tyrant { label = "Tyrant"; };
            };
        };

        class CLASS(Uniforms_Insulated_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Insulated Uniforms (P2)";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Dexus",
                    "Joe",
                    "Keeli"
                };

                class Dexus { label = "Dexus"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
            };
        };

        class CLASS(Vests_Custom): CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Vests";

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Keeli",
                    "Ponds",
                    "Rat"
                };

                class Keeli { label = "Keeli"; };
                class Ponds { label = "Ponds"; };
                class Rat { label = "Rat"; };
            };
        };
    };
};