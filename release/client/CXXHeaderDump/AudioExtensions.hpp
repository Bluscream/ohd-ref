#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

struct FSoundModulation
{
    TArray<class USoundModulationPluginSourceSettingsBase*> Settings;                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSoundModulationParameter
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x14

class UAudioEndpointSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UOcclusionPluginSourceSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UReverbPluginSourceSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USoundModulationPluginSourceSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class USoundfieldEffectSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USoundfieldEncodingSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USoundfieldEndpointSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USpatializationPluginSourceSettingsBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

#endif
