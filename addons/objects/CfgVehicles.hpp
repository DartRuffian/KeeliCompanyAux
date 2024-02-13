class CBA_Extended_EventHandlers;

class CfgVehicles
{
    class ls_flag_base;
    class CLASS(Flag_KC_Pole): ls_flag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Pole)";

        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_co.paa));
        };
    };

    class ls_staticFlag_base;
    class CLASS(Flag_KC_Vertical): ls_staticFlag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Vertical)";

        model = "\LS_statics_props\flags\ls_vertical_flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Horizontal): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Flag (Horizontal)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_co.paa)};
    };

    class CLASS(Flag_KC_Damaged_Pole): CLASS(Flag_KC_Pole)
    {
        displayName = "KC Damaged Flag (Pole)";
        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_Damaged_co.paa));
        };
    };
    class CLASS(Flag_KC_Damaged_Vertical): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Damaged Flag (Vertical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal, Mirrored)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal_Mirrored): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Mirrored_co.paa)};
    };

    class 3as_GNK;
    class CLASS(Gonk_Base): 3as_GNK
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        // Editor Attributes
        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubcat_Utility);
        editorPreview = EDITOR_PREVIEW(Gonk_Base);

        class EventHandlers
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };

    class CLASS(Gonk_Uniforms): CLASS(Gonk_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Uniform Dispenser";

        class UserActions
        {
            class ChangeMenu_Uniforms
            {
                displayName = "<t color='#FFFFFF'>View Rank Uniforms</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(UNIFORMMENU_PAGE_RANKUNIFORMS););
            };

            class ChangeMenu_Helmets: ChangeMenu_Uniforms
            {
                priority = 99;
                displayName = "<t color='#FFFFFF'>View Helmets</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(UNIFORMMENU_PAGE_DETACHMENTHELMETS));
            };

            class Arsenal_Customs: ChangeMenu_Uniforms
            {
                priority = 98;
                displayName = "<t color='#FFFFFF'>Customs Arsenal</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE('customs' call FUNC(openArsenal));
            };

            class ChangeMenu_Home: ChangeMenu_Uniforms
            {
                displayName = "<t font='RobotoCondensedBold' color='#FFFFFF'>Home</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE != MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(nil));
            };

            class DetachmentHelmet_Tanker: ChangeMenu_Uniforms
            {
                displayName = "<t color='#FFFFFF'>Grab Crew Helmet</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(ace_player addHeadgear QQCLASS(Helmet_Phase2_Tanker_CT));
            };
        };
    };

    class CLASS(Gonk_Loadouts): CLASS(Gonk_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Loadouts Gonk";

        class UserActions
        {
            class ChangeMenu_Home
            {
                displayName = "<t color='#FFFFFF' font='RobotoCondensedBold'>Home</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = QUOTE(LOADOUTMENU_GETPAGE != MENU_PAGE_HOME);
                statement = QUOTE(LOADOUTMENU_SETPAGE(nil));
            };

            class Arsenal_Attachments: ChangeMenu_Home
            {
                displayName = "<t color='#FFFFFF'>Weapon Attachments</t>";
                priority = 99;

                condition = QUOTE(LOADOUTMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE('attachments' call FUNC(openArsenal));
            };
        };
    };

    class CLASS(Gonk_Permissions): CLASS(Gonk_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Permissions Gonk";

        class UserActions
        {
            class Assign_Medic
            {
                displayName = QUOTE(<t color='#c40000'><img image=QQPATHTOEF(core,data\ui\Medic_White_ca.paa)/> Assign Medic Permissions</t>);

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = TRUE;
                priority = 100;

                condition = QUOTE(!(ace_player getUnitTrait 'Medic'));
                statement = QUOTE(ace_player setUnitTrait [ARR_2('Medic',true)]);
            };
            class Unassign_Medic: Assign_Medic
            {
                displayName = QUOTE(<t color='#c40000'><img image=QQPATHTOEF(core,data\ui\Medic_White_ca.paa)/> Unassign Medic Permissions</t>);
                condition = QUOTE(ace_player getUnitTrait 'Medic');
                statement = QUOTE(ace_player setUnitTrait [ARR_2('Medic',false)]);
            };
            class Assign_Engineer: Assign_Medic
            {
                displayName = QUOTE(<t color='#f0be00'><img image=QQPATHTOEF(core,data\ui\EOD_White_ca.paa)/> Assign Engineer Permissions</t>);
                condition = QUOTE(!(ace_player getUnitTrait 'Engineer'));
                statement = QUOTE(ace_player setUnitTrait [ARR_2('Engineer',true)]);
            };
            class Unassign_Engineer: Assign_Engineer
            {
                displayName = QUOTE(<t color='#f0be00'><img image=QQPATHTOEF(core,data\ui\EOD_White_ca.paa)/> Unassign Engineer Permissions</t>);
                condition = QUOTE(ace_player getUnitTrait 'Engineer');
                statement = QUOTE(ace_player setUnitTrait [ARR_2('Engineer',false)]);
            };
        };
    };

    class CLASS(Utility_Arsenal): CLASS(Gonk_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Arsenal Terminal";
        model = "\3AS\3AS_Props\Terminals\Terminal_short.p3d";
        editorPreview = EDITOR_PREVIEW(Utility_Arsenal);

        class UserActions
        {
            class Arsenal_ACE
            {
                displayName = "<t color='#3996e7'><img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\rearm_ca.paa'/> Open ACE Arsenal</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = TRUE;
                priority = 100;

                condition = "true";
                statement = QUOTE([ARR_3(ace_player,ace_player,true)] call ace_arsenal_fnc_openBox;);
            };
            class Arsenal_BIS: Arsenal_ACE
            {
                displayName = "<t color='#E6E6E6'><img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\rearm_ca.paa'/> Open BIS Arsenal</t>";
                statement = QUOTE([ARR_2('Open',[true])] call BIS_fnc_arsenal;);
            };
        };
    };

    class CLASS(Utility_FullHeal): CLASS(Gonk_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Full Heal Droid";
        model = "\RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";
        editorPreview = EDITOR_PREVIEW(Utility_FullHeal);

        class UserActions
        {
            class FullHeal
            {
                displayName = "<t color='#c40000'><img image='z\ace\addons\zeus\ui\icon_module_zeus_heal_ca.paa'/> Recieve Treatment</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = "true";
                statement = QUOTE([ARR_2(ace_player,ace_player)] call ace_medical_treatment_fnc_fullHeal; playSound3D [ARR_2(QQPATHTOEF(medical,data\audio\MedicalDroid_Treat.wss),ARR_8(objNull,false,getPosASL this,3,1,10,0,true))];);
            };
        };
    };
};