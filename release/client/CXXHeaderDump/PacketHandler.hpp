#ifndef UE4SS_SDK_PacketHandler_HPP
#define UE4SS_SDK_PacketHandler_HPP

class UHandlerComponentFactory : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UPacketHandlerProfileConfig : public UObject
{
    TArray<FString> Components;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
