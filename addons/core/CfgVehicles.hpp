class CfgVehicles
{
    class Headgear_Base_F;
    class DOUBLES(Ground,CLASS(Holder_Base)): Headgear_Base_F
    {
        SCOPE_PRIVATE;
        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(Edsubcat_Helmets);

        class TransportItems {};
    };
};