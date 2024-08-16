#ifndef UE4SS_SDK_BP_HDVehiclePlayerSeatComponent_HPP
#define UE4SS_SDK_BP_HDVehiclePlayerSeatComponent_HPP

class UBP_HDVehiclePlayerSeatComponent_C : public UHDVehiclePlayerSeatComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0198 (size: 0x8)

    void GetValidSeatConfig(class UArcVehicleSeatConfig*& SeatConfig);
    void ReceiveBeginPlay();
    void OnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType);
    void ResetPlayerCameraConstraints(class APlayerController* PC);
    void SetupPlayerCameraConstraints(class APlayerController* PC);
    void ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent(int32 EntryPoint);
}; // Size: 0x1A0

#endif
