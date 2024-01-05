class CfgSoundSets
{
    class MBT_01_Engine_RPM0_EXT_SoundSet;
    class CLASS(Engine_RPM0_EXT_SoundSet): MBT_01_Engine_RPM0_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(Engine_RPM0_EXT_SoundShader)};
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0,0,-4};
        volumeFactor = 0.85000002;
    };

    class MBT_01_Engine_RPM1_EXT_SoundSet;
    class CLASS(Engine_RPM1_EXT_SoundSet): MBT_01_Engine_RPM1_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM1_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 0.94999999;
    };

    class MBT_01_Engine_RPM2_EXT_SoundSet;
    class CLASS(Engine_RPM2_EXT_SoundSet): MBT_01_Engine_RPM2_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM2_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 1.05;
    };

    class MBT_01_Engine_RPM3_EXT_SoundSet;
    class CLASS(Engine_RPM3_EXT_SoundSet): MBT_01_Engine_RPM3_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM3_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 1.1;
    };

    class MBT_01_Engine_RPM4_EXT_SoundSet;
    class CLASS(Engine_RPM4_EXT_SoundSet): MBT_01_Engine_RPM4_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM4_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 1.15;
    };

    class MBT_01_Engine_RPM5_EXT_SoundSet;
    class CLASS(Engine_RPM5_EXT_SoundSet): MBT_01_Engine_RPM5_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM5_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 1.2;
    };

    class MBT_01_Engine_RPM6_EXT_SoundSet;
    class CLASS(Engine_RPM6_EXT_SoundSet): MBT_01_Engine_RPM6_EXT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM6_EXT_SoundShader"
        };
        sound3DProcessingType = "VehicleExt_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,-4};
        volumeFactor = 1.3;
    };

    class MBT_01_Engine_RPM0_INT_SoundSet;
    class CLASS(Engine_RPM0_INT_SoundSet): MBT_01_Engine_RPM0_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM0_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        posOffset[] = {0,0,0};
        volumeFactor = 0.85000002;
    };

    class MBT_01_Engine_RPM1_INT_SoundSet;
    class CLASS(Engine_RPM1_INT_SoundSet): MBT_01_Engine_RPM1_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM1_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 0.94999999;
    };

    class MBT_01_Engine_RPM2_INT_SoundSet;
    class CLASS(Engine_RPM2_INT_SoundSet): MBT_01_Engine_RPM2_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM2_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 1.05;
    };

    class MBT_01_Engine_RPM3_INT_SoundSet;
    class CLASS(Engine_RPM3_INT_SoundSet): MBT_01_Engine_RPM3_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM3_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 1.1;
    };

    class MBT_01_Engine_RPM4_INT_SoundSet;
    class CLASS(Engine_RPM4_INT_SoundSet): MBT_01_Engine_RPM4_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM4_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 1.15;
    };

    class MBT_01_Engine_RPM5_INT_SoundSet;
    class CLASS(Engine_RPM5_INT_SoundSet): MBT_01_Engine_RPM5_INT_SoundSet
    {
        soundShaders[] =
        {
            "BNA_KC_Engine_RPM5_INT_SoundShader"
        };
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 1.2;
    };

    class MBT_01_Engine_RPM6_INT_SoundSet;
    class CLASS(Engine_RPM6_INT_SoundSet): MBT_01_Engine_RPM6_INT_SoundSet
    {
        soundShaders[] = {QCLASS(Engine_RPM6_INT_SoundShader)};
        sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
        volumeCurve = "InverseSquare3Curve";
        posOffset[] = {0,0,0};
        volumeFactor = 1.3;
    };

    class APC_Wheeled_01_Engine_RPM0_EXT_SoundSet;
    class CLASS(APC_Engine_RPM0_EXT_SoundSet): APC_Wheeled_01_Engine_RPM0_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM0_EXT_SoundShader)};
    };

    class APC_Wheeled_01_Engine_RPM1_EXT_SoundSet;
    class CLASS(APC_Engine_RPM1_EXT_SoundSet): APC_Wheeled_01_Engine_RPM1_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM1_EXT_SoundShader)};
    };

    class APC_Wheeled_01_Engine_RPM2_EXT_SoundSet;
    class CLASS(APC_Engine_RPM2_EXT_SoundSet): APC_Wheeled_01_Engine_RPM2_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM2_EXT_SoundShader)};
    };

    class APC_Wheeled_01_Engine_RPM3_EXT_SoundSet;
    class CLASS(APC_Engine_RPM3_EXT_SoundSet): APC_Wheeled_01_Engine_RPM3_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM3_EXT_SoundShader)};
    };

    class APC_Wheeled_01_Engine_RPM4_EXT_SoundSet;
    class CLASS(APC_Engine_RPM4_EXT_SoundSet): APC_Wheeled_01_Engine_RPM4_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM4_EXT_SoundShader)};
    };

    class APC_Wheeled_01_Engine_RPM5_EXT_SoundSet;
    class CLASS(APC_Engine_RPM5_EXT_SoundSet): APC_Wheeled_01_Engine_RPM5_EXT_SoundSet
    {
        soundShaders[] = {QCLASS(APC_Engine_RPM5_EXT_SoundShader)};
    };
};