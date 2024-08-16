#ifndef UE4SS_SDK_ArcVehicles_HPP
#define UE4SS_SDK_ArcVehicles_HPP

#include "ArcVehicles_enums.hpp"

struct FArcOwnerAttachmentReference
{
    FName ComponentName;                                                              // 0x0000 (size: 0x8)
    FName SocketName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FArcVehicleSeatChangeEvent
{
    class APlayerState* Player;                                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FArcVehicleSeatReference
{
    class AArcBaseVehicle* Vehicle;                                                   // 0x0000 (size: 0x8)
    int32 SeatID;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FArcVehicleTurretMovementPostPhysicsTickFunction : public FTickFunction
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class AArcBaseVehicle : public AArcVehiclePawn
{
    class UArcVehicleSeatConfig* DriverSeatConfig;                                    // 0x0280 (size: 0x8)
    TArray<class UArcVehicleSeatConfig*> AdditionalSeatConfigs;                       // 0x0288 (size: 0x10)
    TArray<class UArcVehicleSeatConfig*> ReplicatedSeatConfigs;                       // 0x0298 (size: 0x10)
    TArray<FArcVehicleSeatChangeEvent> SeatChangeQueue;                               // 0x02A8 (size: 0x10)
    TArray<FString> ServerDebugStrings;                                               // 0x02B8 (size: 0x10)

    void SetupSeat(class UArcVehicleSeatConfig* SeatConfig);
    void ServerPrintDebug_Request();
    void RequestLeaveVehicle(class APlayerState* InPlayerState);
    void RequestEnterSeat(class APlayerState* InPlayerState, int32 RequestedSeatIndex, bool bIgnoreRestrictions);
    void RequestEnterAnySeat(class APlayerState* InPlayerState);
    void OnRep_ServerDebugStrings();
    bool IsValidSeatIndex(int32 InSeatIndex);
    void GetSortedExitPoints(FTransform InputLocation, TArray<FTransform>& OutTransformArray);
    FTransform GetNearestExitTransform(FTransform InputLocation);
    class UArcVehicleSeatConfig* GetDriverSeat();
    void GetAllSeats(TArray<class UArcVehicleSeatConfig*>& Seats);
}; // Size: 0x2C8

class AArcVehiclePawn : public APawn
{
    char padding_0[0x280];                                                            // 0x0000 (size: 0x0)

    void NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent);
    class UArcVehicleSeatConfig* GetSeatConfig();
    class AArcBaseVehicle* GetOwningVehicle();
}; // Size: 0x280

class AArcVehicleSeat : public AArcVehiclePawn
{
    class UArcVehicleSeatConfig* SeatConfig;                                          // 0x0280 (size: 0x8)

}; // Size: 0x288

class UArcVehicleBPFunctionLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool IsSeatRefValid(FArcVehicleSeatReference SeatRef);
    class UArcVehicleSeatConfig* GetVehicleSeatConfigFromRef(FArcVehicleSeatReference SeatRef);
    class AArcBaseVehicle* GetVehicleFromSeatConfig(FArcVehicleSeatReference SeatRef);
}; // Size: 0x28

class UArcVehicleDeveloperSettings : public UDeveloperSettings
{
    TSubclassOf<class UArcVehiclePlayerSeatComponent> PlayerSeatComponentClass;       // 0x0038 (size: 0x8)
    TSubclassOf<class UArcVehiclePlayerStateComponent> PlayerStateComponentClass;     // 0x0040 (size: 0x8)

}; // Size: 0x48

class UArcVehicleEngineSubsystem : public UEngineSubsystem
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UArcVehicleExitPoint : public USceneComponent
{
    char padding_0[0x1F0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x1F0

class UArcVehiclePlayerSeatComponent : public UActorComponent
{
    FArcVehicleSeatReference CurrentSeatConfig;                                       // 0x00B0 (size: 0x10)
    FArcVehicleSeatReference PreviousSeatConfig;                                      // 0x00C0 (size: 0x10)
    class APlayerState* StoredPlayerState;                                            // 0x00D0 (size: 0x8)
    char padding_0[0x58];                                                             // 0x00D8 (size: 0x58)
    TArray<FString> ServerDebugStrings;                                               // 0x0130 (size: 0x10)
    char padding_1[0x8];                                                              // 0x0140 (size: 0x8)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> PreviousVehicleCollisionResponses; // 0x0148 (size: 0x50)

    void ServerPrintDebug_Request();
    void OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType);
    void OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState);
    void OnRep_ServerDebugStrings();
    void OnRep_SeatConfig(const FArcVehicleSeatReference& InPreviousSeatConfig);
    void BP_OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState);
}; // Size: 0x198

class UArcVehiclePlayerStateComponent : public UActorComponent
{
    class APawn* StoredPlayerPawn;                                                    // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UArcVehicleSeatConfig : public UActorComponent
{
    FArcOwnerAttachmentReference AttachSeatToComponent;                               // 0x00B0 (size: 0x10)
    class APlayerState* PlayerInSeat;                                                 // 0x00C0 (size: 0x8)
    class UArcVehiclePlayerSeatComponent* PlayerSeatComponent;                        // 0x00C8 (size: 0x8)
    bool bPlayerVisible;                                                              // 0x00D0 (size: 0x1)

    void UnAttachPlayerFromSeat(class APlayerState* Player);
    void SetupSeatAttachment();
    bool IsOpenSeat();
    bool IsDriverSeat();
    class AArcBaseVehicle* GetVehicleOwner();
    void BP_UnAttachPlayerFromSeat(class APlayerState* Player);
    void BP_AttachPlayerToSeat(class APlayerState* Player);
    void AttachPlayerToSeat(class APlayerState* Player);
}; // Size: 0xD8

class UArcVehicleSeatConfig_PlayerAttachment : public UArcVehicleSeatConfig
{
    char padding_0[0xD8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xD8

class UArcVehicleSeatConfig_SeatPawn : public UArcVehicleSeatConfig_PlayerAttachment
{
    TSubclassOf<class AArcVehicleSeat> SeatPawnClass;                                 // 0x00D8 (size: 0x8)
    FArcOwnerAttachmentReference PlayerCharacterAttachToComponent;                    // 0x00E0 (size: 0x10)
    bool bResetControlRotationOnEnter;                                                // 0x00F0 (size: 0x1)
    char padding_0[0x7];                                                              // 0x00F1 (size: 0x7)
    class AArcVehiclePawn* SeatPawn;                                                  // 0x00F8 (size: 0x8)

    void OnRep_SeatPawn(class AArcVehiclePawn* OldSeatPawn);
}; // Size: 0x100

class UArcVehicleTurretMovementComp : public UPawnMovementComponent
{
    bool bIgnoreBaseRotation;                                                         // 0x0138 (size: 0x1)
    bool bIgnorePitch;                                                                // 0x0139 (size: 0x1)
    bool bIgnoreYaw;                                                                  // 0x013A (size: 0x1)
    bool bIgnoreRoll;                                                                 // 0x013B (size: 0x1)
    char padding_0[0x4];                                                              // 0x013C (size: 0x4)
    class USceneComponent* UpdatedPitchComponent;                                     // 0x0140 (size: 0x8)
    FRotator RotationRate;                                                            // 0x0148 (size: 0xC)
    char padding_1[0x2C];                                                             // 0x0154 (size: 0x2C)
    class USceneComponent* CurrentBase;                                               // 0x0180 (size: 0x8)
    FArcVehicleTurretMovementPostPhysicsTickFunction PostPhysicsTickFunction;         // 0x0188 (size: 0x30)

    void Server_ServerMove(FRotator FullRotation);
}; // Size: 0x1C0

#endif
