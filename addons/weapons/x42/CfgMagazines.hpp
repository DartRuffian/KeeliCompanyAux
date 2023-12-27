class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_150rnd_X42): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] X-42 Fuel Tank";
        descriptionShort = "Flamethrower Fuel Tank<br/>Burn Time: 2.5 minutes<br/>Used In: X-42 Heavy Flamethrower";

        initSpeed = 50;
        mass = 130;

        model = "\MRC\JLTS\contraband\Credits\icecream.p3d";
        picture = "\MRC\JLTS\contraband\Credits\data\ui\icecream_ui_ca.paa";

        ammo = "Flamethrower_Fuel";
        count = 150;
    };
};