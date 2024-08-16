#ifndef UE4SS_SDK_ArcVehiclesExtra_HPP
#define UE4SS_SDK_ArcVehiclesExtra_HPP

class AArcVehicleSampleCharacter : public ACharacter
{
    bool bUseAttachedVehicleRelevancy;                                                // 0x04B8 (size: 0x1)

}; // Size: 0x4C0

class AArcVehicleSpawner : public AActor
{
    class UChildActorComponent* EditorVehicleMesh;                                    // 0x0220 (size: 0x8)
    TSubclassOf<class AArcBaseVehicle> VehicleClass;                                  // 0x0228 (size: 0x8)
    bool bSpawnImmediately;                                                           // 0x0230 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0231 (size: 0x3)
    float RespawnDelay;                                                               // 0x0234 (size: 0x4)
    int32 MaxVehiclesAlive;                                                           // 0x0238 (size: 0x4)

    void SpawnVehicleTimerEnd();
    void OnVehicleDestroyed(class AActor* DestroyedActor);
}; // Size: 0x258

#endif
