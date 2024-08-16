#ifndef UE4SS_SDK_RCON_HPP
#define UE4SS_SDK_RCON_HPP

class URCONServerSystem : public UObject
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0029 (size: 0x7)
    FString ListenAddress;                                                            // 0x0030 (size: 0x10)
    uint16 ListenPort;                                                                // 0x0040 (size: 0x2)
    char padding_1[0x6];                                                              // 0x0042 (size: 0x6)
    FString Password;                                                                 // 0x0048 (size: 0x10)
    uint32 MaxActiveConnections;                                                      // 0x0058 (size: 0x4)
    uint32 MaxAuthAttempts;                                                           // 0x005C (size: 0x4)

    void Shutdown();
    void Init();
}; // Size: 0x70

#endif
