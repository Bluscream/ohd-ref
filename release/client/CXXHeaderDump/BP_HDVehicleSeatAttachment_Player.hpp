#ifndef UE4SS_SDK_BP_HDVehicleSeatAttachment_Player_HPP
#define UE4SS_SDK_BP_HDVehicleSeatAttachment_Player_HPP

class UBP_HDVehicleSeatAttachment_Player_C : public UArcVehicleSeatConfig_PlayerAttachment
{
    TSubclassOf<class UAnimInstance> SeatAnimInstanceLinked;                          // 0x00D8 (size: 0x8)
    EDFItemEnabledMode SeatItemMode;                                                  // 0x00E0 (size: 0x1)

}; // Size: 0xE1

#endif
