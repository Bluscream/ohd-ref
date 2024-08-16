#ifndef UE4SS_SDK_BP_HDProj_SPDeployableBase_HPP
#define UE4SS_SDK_BP_HDProj_SPDeployableBase_HPP

class ABP_HDProj_SPDeployableBase_C : public AHDProj_SpawnPointDeployable
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class USphereComponent* HitDetectionSphere;                                       // 0x0398 (size: 0x8)
    class USphereComponent* SpawnSphere;                                              // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* ProjectileCollision;                                  // 0x03A8 (size: 0x8)
    class UDFPOIComponent* POI;                                                       // 0x03B0 (size: 0x8)
    bool bOnlySquadMembersCanSpawn;                                                   // 0x03B8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x03B9 (size: 0x3)
    float PostTriggerLifeSpan;                                                        // 0x03BC (size: 0x4)
    float PlacementRestrictionDistance;                                               // 0x03C0 (size: 0x4)
    bool bSpawnable;                                                                  // 0x03C4 (size: 0x1)
    char padding_1[0x3];                                                              // 0x03C5 (size: 0x3)
    FBP_HDProj_SPDeployableBase_COnSpawnPointActivationChanged OnSpawnPointActivationChanged; // 0x03C8 (size: 0x10)
    void OnSpawnPointActivationChanged(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled);
    TArray<FVector> SpawnPointLocOffsets;                                             // 0x03D8 (size: 0x10)
    TArray<FSpawnPointDef> GeneratedSpawnPoints;                                      // 0x03E8 (size: 0x10)
    bool bIgnoreFriendlyFire;                                                         // 0x03F8 (size: 0x1)
    char padding_2[0x3];                                                              // 0x03F9 (size: 0x3)
    float Health;                                                                     // 0x03FC (size: 0x4)
    bool bDisableWhenOverrun;                                                         // 0x0400 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0401 (size: 0x3)
    int32 NumberOfEnemiesToDisable;                                                   // 0x0404 (size: 0x4)
    bool bDestroyWhenOverrun;                                                         // 0x0408 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0409 (size: 0x3)
    int32 NumberOfEnemiesToDestroy;                                                   // 0x040C (size: 0x4)
    int32 CurrentNumberOfEnemies;                                                     // 0x0410 (size: 0x4)
    char padding_5[0x4];                                                              // 0x0414 (size: 0x4)
    class AHDSquadState* OwnerSquadState;                                             // 0x0418 (size: 0x8)
    bool bDestroyWhenSquadDisbands;                                                   // 0x0420 (size: 0x1)
    bool bOnlyOnePerSquad;                                                            // 0x0421 (size: 0x1)
    char padding_6[0x2];                                                              // 0x0422 (size: 0x2)
    int32 MaxNumberOfInstances;                                                       // 0x0424 (size: 0x4)
    float EnemyTolerance_Radius;                                                      // 0x0428 (size: 0x4)
    int32 EnemyTolerance_MaxNumberOfChars;                                            // 0x042C (size: 0x4)

    bool GetSpawnPointCollisionHandlingOverrideBP(const FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod& OutSpawnCollisionMethod);
    bool CanRestartPlayerFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, class AController* Player, TSubclassOf<class APawn> PlayerPawnClass);
    bool CanSpawnActorFromSpawnPointBP(const FSpawnPointDef& SpawnPoint, TSubclassOf<class AActor> SpawnActorClass);
    bool FindSpawnPointBP(int32 SpawnPointID, FSpawnPointDef& FoundSpawnPoint);
    int32 GetAllSpawnPointsBP(TArray<FSpawnPointDef>& SpawnPoints);
    void CanPlayerSpawnHere(class AController* InPlayer, bool& bPlayerCanSpawn);
    void InitDeployable();
    void CheckEnemyOverrun();
    void HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage);
    void GenerateSpawnPointList();
    void GetTransformOffsetBySpawnIndex(int32& SpawnIdx, FTransform Transform, FTransform& NewTransform);
    void GetActorTransformOffsetByMeshZBounds(FTransform& OffsetActorWorldXForm);
    void CheckForEnemyChars();
    void SetIsSpawnable(bool bNewEnabled);
    void IsSpawnable(bool& bSpawnPointEnabled);
    void AreSpawnPointsEqual(FSpawnPointDef& SpawnPointOne, FSpawnPointDef& SpawnPointTwo, bool& bEqual);
    void GetSpawnPoint(bool bMeshZOffset, int32 SpawnPointIdx, FSpawnPointDef& SpawnPoint);
    void IsEnemyChar(class ADFBaseCharacter* Char, bool& bEnemyChar);
    void HasServerAuthority(bool& bAuthority);
    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverlappingPawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
    void ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32 EntryPoint);
    void OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled);
}; // Size: 0x430

#endif
