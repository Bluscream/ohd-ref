#ifndef UE4SS_SDK_OnlineSubsystemSteam_HPP
#define UE4SS_SDK_OnlineSubsystemSteam_HPP

class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class USteamNetConnection : public UIpConnection
{
    bool bIsPassthrough;                                                              // 0x1B20 (size: 0x1)

}; // Size: 0x1B28

class USteamNetDriver : public UIpNetDriver
{
    char padding_0[0x7C0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x7C0

#endif
