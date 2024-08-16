#ifndef UE4SS_SDK_BP_HDVehicleBase_HPP
#define UE4SS_SDK_BP_HDVehicleBase_HPP

class ABP_HDVehicleBase_C : public AArcBaseVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UAudioComponent* EngineSound;                                               // 0x02D0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02D8 (size: 0x8)
    class UWheeledVehicleMovementComponentNW* VehicleMovementOWI;                     // 0x02E0 (size: 0x8)
    TMap<class FName, class UAnimSequenceBase*> DriverAnimSet;                        // 0x02E8 (size: 0x50)
    TMap<class FName, class UAnimSequenceBase*> PassengerAnimSet;                     // 0x0338 (size: 0x50)

    void InpActEvt_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Use_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void Used(class AActor* Invoker);
    void NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HDVehicleBase(int32 EntryPoint);
}; // Size: 0x388

#endif
