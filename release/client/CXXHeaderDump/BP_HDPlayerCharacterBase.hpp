#ifndef UE4SS_SDK_BP_HDPlayerCharacterBase_HPP
#define UE4SS_SDK_BP_HDPlayerCharacterBase_HPP

class ABP_HDPlayerCharacterBase_C : public AHDPlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A40 (size: 0x8)
    class USceneComponent* LeanComponent;                                             // 0x0A48 (size: 0x8)
    class UHDAIPerceptionComponent* HDAIPerception;                                   // 0x0A50 (size: 0x8)
    class USceneComponent* TargetCameraPoint;                                         // 0x0A58 (size: 0x8)
    class USceneComponent* RefPoint;                                                  // 0x0A60 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x0A68 (size: 0x8)
    class UBoxComponent* Suppression_B;                                               // 0x0A70 (size: 0x8)
    class UBoxComponent* Suppression_A;                                               // 0x0A78 (size: 0x8)
    class UBoxComponent* Suppression_L;                                               // 0x0A80 (size: 0x8)
    class UBoxComponent* Suppression_R;                                               // 0x0A88 (size: 0x8)
    class UBP_HDVOIPTalker_C* VOIPTalker;                                             // 0x0A90 (size: 0x8)
    class UTextRenderComponent* PlayerNameTextRender;                                 // 0x0A98 (size: 0x8)
    class UDFPOIComponent* POI;                                                       // 0x0AA0 (size: 0x8)
    FVector CameraAnimationSlot2_CameraCurve_24954BCF4915EDB59EB9158824582DBB;        // 0x0AA8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraAnimationSlot2__Direction_24954BCF4915EDB59EB9158824582DBB; // 0x0AB4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0AB5 (size: 0x3)
    class UTimelineComponent* CameraAnimationSlot2;                                   // 0x0AB8 (size: 0x8)
    FVector CameraAnimationSlot1_CameraCurve_78B6BF4045FC86DC6E1F7DACE85CA8B3;        // 0x0AC0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraAnimationSlot1__Direction_78B6BF4045FC86DC6E1F7DACE85CA8B3; // 0x0ACC (size: 0x1)
    char padding_1[0x3];                                                              // 0x0ACD (size: 0x3)
    class UTimelineComponent* CameraAnimationSlot1;                                   // 0x0AD0 (size: 0x8)
    FVector CameraAnimationSlot0_CameraCurve_FCA6C1774AD24955E6AD27B43792174B;        // 0x0AD8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraAnimationSlot0__Direction_FCA6C1774AD24955E6AD27B43792174B; // 0x0AE4 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0AE5 (size: 0x3)
    class UTimelineComponent* CameraAnimationSlot0;                                   // 0x0AE8 (size: 0x8)
    FVector CrouchExitSpringArmTranslation_CameraVector_E70B91E543398207A70C939B80788F86; // 0x0AF0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CrouchExitSpringArmTranslation__Direction_E70B91E543398207A70C939B80788F86; // 0x0AFC (size: 0x1)
    char padding_3[0x3];                                                              // 0x0AFD (size: 0x3)
    class UTimelineComponent* CrouchExitSpringArmTranslation;                         // 0x0B00 (size: 0x8)
    FVector CrouchSpringArmTranslation_CameraCurve_C4C40FDD4BBC021213AF31AA7F3DBF4B;  // 0x0B08 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CrouchSpringArmTranslation__Direction_C4C40FDD4BBC021213AF31AA7F3DBF4B; // 0x0B14 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0B15 (size: 0x3)
    class UTimelineComponent* CrouchSpringArmTranslation;                             // 0x0B18 (size: 0x8)
    FVector ProneExitSpringArmTranslation_CurveVector_CEF9B5C9468424E977B84F9F84E59E08; // 0x0B20 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> ProneExitSpringArmTranslation__Direction_CEF9B5C9468424E977B84F9F84E59E08; // 0x0B2C (size: 0x1)
    char padding_5[0x3];                                                              // 0x0B2D (size: 0x3)
    class UTimelineComponent* ProneExitSpringArmTranslation;                          // 0x0B30 (size: 0x8)
    FVector ProneSpringArmTranslation_CurveVector_B542793B44FD44A9C91CC7B34C17770E;   // 0x0B38 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> ProneSpringArmTranslation__Direction_B542793B44FD44A9C91CC7B34C17770E; // 0x0B44 (size: 0x1)
    char padding_6[0x3];                                                              // 0x0B45 (size: 0x3)
    class UTimelineComponent* ProneSpringArmTranslation;                              // 0x0B48 (size: 0x8)
    FVector VaultCameraTimeline_Rotation_22F2E311466556389CC02182AEE99CCA;            // 0x0B50 (size: 0xC)
    FVector VaultCameraTimeline_VaultCamera_22F2E311466556389CC02182AEE99CCA;         // 0x0B5C (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> VaultCameraTimeline__Direction_22F2E311466556389CC02182AEE99CCA; // 0x0B68 (size: 0x1)
    char padding_7[0x7];                                                              // 0x0B69 (size: 0x7)
    class UTimelineComponent* VaultCameraTimeline;                                    // 0x0B70 (size: 0x8)
    float LerpTimeline_Lerp_5E919E724A951192A68B8180576AB695;                         // 0x0B78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpTimeline__Direction_5E919E724A951192A68B8180576AB695; // 0x0B7C (size: 0x1)
    char padding_8[0x3];                                                              // 0x0B7D (size: 0x3)
    class UTimelineComponent* LerpTimeline;                                           // 0x0B80 (size: 0x8)
    FVector DamageEffectTimeline_DamageEffect_BEBC6E9841C4A26EF0A22DA008BD6CA4;       // 0x0B88 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> DamageEffectTimeline__Direction_BEBC6E9841C4A26EF0A22DA008BD6CA4; // 0x0B94 (size: 0x1)
    char padding_9[0x3];                                                              // 0x0B95 (size: 0x3)
    class UTimelineComponent* DamageEffectTimeline;                                   // 0x0B98 (size: 0x8)
    FVector SuppressionTimeline_SuppressionCurve_83869DB54889A3FECCAF0E83EA19C04B;    // 0x0BA0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> SuppressionTimeline__Direction_83869DB54889A3FECCAF0E83EA19C04B; // 0x0BAC (size: 0x1)
    char padding_10[0x3];                                                             // 0x0BAD (size: 0x3)
    class UTimelineComponent* SuppressionTimeline;                                    // 0x0BB0 (size: 0x8)
    float FallDamageDivisor;                                                          // 0x0BB8 (size: 0x4)
    float FallDamageThreshold;                                                        // 0x0BBC (size: 0x4)
    float EquipmentTimerDelay;                                                        // 0x0BC0 (size: 0x4)
    bool bEquipmentKeyPressed;                                                        // 0x0BC4 (size: 0x1)
    bool bSelectingEquipmentBySlot;                                                   // 0x0BC5 (size: 0x1)
    bool bNextItem;                                                                   // 0x0BC6 (size: 0x1)
    char padding_11[0x1];                                                             // 0x0BC7 (size: 0x1)
    class APlayerState* LastValidPlayerState;                                         // 0x0BC8 (size: 0x8)
    bool bTintTeamColorForPlayerPOIs;                                                 // 0x0BD0 (size: 0x1)
    bool bUseSpecialSymbolForLocalPlayerPOIs;                                         // 0x0BD1 (size: 0x1)
    char padding_12[0x6];                                                             // 0x0BD2 (size: 0x6)
    class UTexture2D* LocalPlayerPOISymbol;                                           // 0x0BD8 (size: 0x8)
    class USoundAttenuation* VOIPSpatializedAttenuation;                              // 0x0BE0 (size: 0x8)
    class USoundEffectSourcePresetChain* VOIPSpatializedSrcEffectChain;               // 0x0BE8 (size: 0x8)
    FTimerHandle HealthRegenTimer;                                                    // 0x0BF0 (size: 0x8)
    bool bHealthRegenEnabled;                                                         // 0x0BF8 (size: 0x1)
    char padding_13[0x3];                                                             // 0x0BF9 (size: 0x3)
    float HealthRegenAmount;                                                          // 0x0BFC (size: 0x4)
    float HealthRegenTimerInterval;                                                   // 0x0C00 (size: 0x4)
    FLinearColor LocalPlayerPOITint;                                                  // 0x0C04 (size: 0x10)
    FColor RedTeamColor;                                                              // 0x0C14 (size: 0x4)
    FColor BlueTeamColor;                                                             // 0x0C18 (size: 0x4)
    FColor NoTeamColor;                                                               // 0x0C1C (size: 0x4)
    bool bRadialMenuEnabled;                                                          // 0x0C20 (size: 0x1)
    char padding_14[0x7];                                                             // 0x0C21 (size: 0x7)
    class UWBP_HDRadialMenu_C* RadialMenu;                                            // 0x0C28 (size: 0x8)
    class USoundBase* RadialMenuExitSnd;                                              // 0x0C30 (size: 0x8)
    class UDataTable* RadialMenuOptions;                                              // 0x0C38 (size: 0x8)
    bool bRallypointsEnabled;                                                         // 0x0C40 (size: 0x1)
    char padding_15[0x3];                                                             // 0x0C41 (size: 0x3)
    float RadialMenuRallypointTimeDeployed;                                           // 0x0C44 (size: 0x4)
    bool bSpatializedVOIPTalker;                                                      // 0x0C48 (size: 0x1)
    bool bOutpostsEnabled;                                                            // 0x0C49 (size: 0x1)
    char padding_16[0x2];                                                             // 0x0C4A (size: 0x2)
    float RadialMenuOutpostTimeDeployed;                                              // 0x0C4C (size: 0x4)
    class USoundBase* SuppressionSound;                                               // 0x0C50 (size: 0x8)
    float SuppressionSoundVolume;                                                     // 0x0C58 (size: 0x4)
    bool bBracedAim;                                                                  // 0x0C5C (size: 0x1)
    bool bWantsMount;                                                                 // 0x0C5D (size: 0x1)
    bool bMounted;                                                                    // 0x0C5E (size: 0x1)
    char padding_17[0x1];                                                             // 0x0C5F (size: 0x1)
    FVector MountDirection;                                                           // 0x0C60 (size: 0xC)
    FVector MountPosition;                                                            // 0x0C6C (size: 0xC)
    char padding_18[0x8];                                                             // 0x0C78 (size: 0x8)
    FTransform MountTransform;                                                        // 0x0C80 (size: 0x30)
    FVector SmoothSightDirection;                                                     // 0x0CB0 (size: 0xC)
    FVector SmoothSightOffset;                                                        // 0x0CBC (size: 0xC)
    float AimSpeed;                                                                   // 0x0CC8 (size: 0x4)
    float SightDirectionSmoothingSpeed;                                               // 0x0CCC (size: 0x4)
    float SightPositionSmoothingSpeed;                                                // 0x0CD0 (size: 0x4)
    float MountDistance;                                                              // 0x0CD4 (size: 0x4)
    float AimAlpha;                                                                   // 0x0CD8 (size: 0x4)
    float MountHeight;                                                                // 0x0CDC (size: 0x4)
    class ABP_HDWeaponBase_C* EquippedWeapon;                                         // 0x0CE0 (size: 0x8)
    class ABP_HDProj_SPDeployableBase_C* SpawnedFOB;                                  // 0x0CE8 (size: 0x8)
    class ABP_HDProj_SPDeployableBase_C* SpawnedRallypoint;                           // 0x0CF0 (size: 0x8)
    FBP_HDPlayerCharacterBase_COnSuppression OnSuppression;                           // 0x0CF8 (size: 0x10)
    void OnSuppression(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    FBP_HDPlayerCharacterBase_COnHitDamage OnHitDamage;                               // 0x0D08 (size: 0x10)
    void OnHitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    bool bSpottingEnabled;                                                            // 0x0D18 (size: 0x1)
    char padding_19[0x7];                                                             // 0x0D19 (size: 0x7)
    class UCurveVector* SuppressionCurve;                                             // 0x0D20 (size: 0x8)
    class UCurveVector* HitDamageCurve;                                               // 0x0D28 (size: 0x8)
    TSubclassOf<class UCameraShake> SuppressionCameraShake;                           // 0x0D30 (size: 0x8)
    TSubclassOf<class UCameraShake> ReceiveDamageCameraShake;                         // 0x0D38 (size: 0x8)
    FLinearColor HitEffectValues;                                                     // 0x0D40 (size: 0x10)
    FLinearColor BleedingEffectValues;                                                // 0x0D50 (size: 0x10)
    float DamageEffectStartPercent;                                                   // 0x0D60 (size: 0x4)
    bool bVariationDataSet;                                                           // 0x0D64 (size: 0x1)
    char padding_20[0x3];                                                             // 0x0D65 (size: 0x3)
    float MinVaultViewYaw;                                                            // 0x0D68 (size: 0x4)
    float MaxVaultViewYaw;                                                            // 0x0D6C (size: 0x4)
    class UCurveVector* VaultOverCameraCurve;                                         // 0x0D70 (size: 0x8)
    class UCurveVector* SprintVaultOverCameraCurve;                                   // 0x0D78 (size: 0x8)
    class UCurveVector* ClimbOntoCameraCurve;                                         // 0x0D80 (size: 0x8)
    class UCurveVector* SprintClimbOntoCameraCurve;                                   // 0x0D88 (size: 0x8)
    FVector Camera1POffsetBeforeVault;                                                // 0x0D90 (size: 0xC)
    FVector Mesh1POffsetBeforeVault;                                                  // 0x0D9C (size: 0xC)
    FWeightedBlendable SuppresionEffect;                                              // 0x0DA8 (size: 0x10)
    FWeightedBlendable DamageEffect;                                                  // 0x0DB8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> ThirdPersonCharMatArray;                  // 0x0DC8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> FirstPersonCharMatArray;                  // 0x0DD8 (size: 0x10)
    bool bUseSpecialSymbolForSquadMatePOIs;                                           // 0x0DE8 (size: 0x1)
    char padding_21[0x7];                                                             // 0x0DE9 (size: 0x7)
    class UTexture2D* SquadMatePOISymbol;                                             // 0x0DF0 (size: 0x8)
    FLinearColor SquadMatePOITint;                                                    // 0x0DF8 (size: 0x10)
    class UTexture2D* NonSquadMatePOISymbol;                                          // 0x0E08 (size: 0x8)
    FLinearColor NonSquadMatePOITint;                                                 // 0x0E10 (size: 0x10)
    bool bUseSpecialSymbolForSquadLeaderPOIs;                                         // 0x0E20 (size: 0x1)
    char padding_22[0x7];                                                             // 0x0E21 (size: 0x7)
    class UTexture2D* SquadLeaderPOISymbol;                                           // 0x0E28 (size: 0x8)
    FLinearColor SquadLeaderPOITint;                                                  // 0x0E30 (size: 0x10)
    FLinearColor SquadLeaderPOITextColor;                                             // 0x0E40 (size: 0x10)
    class UTexture2D* NonSquadLeaderPOISymbol;                                        // 0x0E50 (size: 0x8)
    FLinearColor NonSquadLeaderPOITint;                                               // 0x0E58 (size: 0x10)
    FLinearColor NonSquadLeaderPOITextColor;                                          // 0x0E68 (size: 0x10)
    float BracedAimAlpha;                                                             // 0x0E78 (size: 0x4)
    char padding_23[0x4];                                                             // 0x0E7C (size: 0x4)
    class UTimelineComponent* CameraCurveVectorTimeline;                              // 0x0E80 (size: 0x8)
    bool bReloadPressed;                                                              // 0x0E88 (size: 0x1)
    char padding_24[0x3];                                                             // 0x0E89 (size: 0x3)
    float ReloadAlpha;                                                                // 0x0E8C (size: 0x4)
    float UnequipAlpha;                                                               // 0x0E90 (size: 0x4)
    FRotator LeanCompRotation;                                                        // 0x0E94 (size: 0xC)
    float LeanMovementAlpha;                                                          // 0x0EA0 (size: 0x4)
    bool IsInAir;                                                                     // 0x0EA4 (size: 0x1)
    char padding_25[0x3];                                                             // 0x0EA5 (size: 0x3)
    float LeanAlpha;                                                                  // 0x0EA8 (size: 0x4)
    float CrouchAlpha;                                                                // 0x0EAC (size: 0x4)
    FVector SpringArmLocationCache;                                                   // 0x0EB0 (size: 0xC)
    float CameraAnimationScale;                                                       // 0x0EBC (size: 0x4)
    float FiringAlpha;                                                                // 0x0EC0 (size: 0x4)
    float CrawlingAlpha;                                                              // 0x0EC4 (size: 0x4)
    bool bCrouchState;                                                                // 0x0EC8 (size: 0x1)
    bool bProneState;                                                                 // 0x0EC9 (size: 0x1)
    bool bProneInProgress;                                                            // 0x0ECA (size: 0x1)
    bool bTransitionInProgress;                                                       // 0x0ECB (size: 0x1)
    float EyeHeightAdjust;                                                            // 0x0ECC (size: 0x4)
    float MoveInputAxis;                                                              // 0x0ED0 (size: 0x4)
    bool bPlayCameraAnimation_0;                                                      // 0x0ED4 (size: 0x1)
    char padding_26[0x3];                                                             // 0x0ED5 (size: 0x3)
    float CameraAnimationAlpha_0;                                                     // 0x0ED8 (size: 0x4)
    char padding_27[0x4];                                                             // 0x0EDC (size: 0x4)
    class UCurveVector* CameraAnimationCurve_0;                                       // 0x0EE0 (size: 0x8)
    char padding_28[0x8];                                                             // 0x0EE8 (size: 0x8)
    FTransform CameraAnimationTransform_0;                                            // 0x0EF0 (size: 0x30)
    float CameraAnimationSmoothingSpeed_0;                                            // 0x0F20 (size: 0x4)
    float CameraAnimationTransitionSpeed_0;                                           // 0x0F24 (size: 0x4)
    bool bPlayCameraAnimation_1;                                                      // 0x0F28 (size: 0x1)
    char padding_29[0x3];                                                             // 0x0F29 (size: 0x3)
    float CameraAnimationAlpha_1;                                                     // 0x0F2C (size: 0x4)
    class UCurveVector* CameraAnimationCurve_1;                                       // 0x0F30 (size: 0x8)
    char padding_30[0x8];                                                             // 0x0F38 (size: 0x8)
    FTransform CameraAnimationTransform_1;                                            // 0x0F40 (size: 0x30)
    float CameraAnimationSmoothingSpeed_1;                                            // 0x0F70 (size: 0x4)
    float CameraAnimationTransitionSpeed_1;                                           // 0x0F74 (size: 0x4)
    bool bPlayCameraAnimation_2;                                                      // 0x0F78 (size: 0x1)
    char padding_31[0x3];                                                             // 0x0F79 (size: 0x3)
    float CameraAnimationAlpha_2;                                                     // 0x0F7C (size: 0x4)
    class UCurveVector* CameraAnimationCurve_2;                                       // 0x0F80 (size: 0x8)
    char padding_32[0x8];                                                             // 0x0F88 (size: 0x8)
    FTransform CameraAnimationTransform_2;                                            // 0x0F90 (size: 0x30)
    float CameraAnimationSmoothingSpeed_2;                                            // 0x0FC0 (size: 0x4)
    float CameraAnimationTransitionSpeed_2;                                           // 0x0FC4 (size: 0x4)
    bool bHoldForwardTrack0;                                                          // 0x0FC8 (size: 0x1)
    bool bHoldForwardTrack1;                                                          // 0x0FC9 (size: 0x1)
    bool bHoldForwardTrack2;                                                          // 0x0FCA (size: 0x1)
    bool bTrackReset0;                                                                // 0x0FCB (size: 0x1)
    bool bTrackReset1;                                                                // 0x0FCC (size: 0x1)
    bool bTrackReset2;                                                                // 0x0FCD (size: 0x1)
    bool bFireModeChanged;                                                            // 0x0FCE (size: 0x1)

    FVector EventGetFocalPoint();
    void WeaponCollision();
    void LeanRotation();
    void GetEyeHeightAdjustment(float& EyeHeightAdjust);
    void SetSpringArmOffset(float CurveZ);
    void IsSameSquad(class ABP_HDPlayerControllerBase_C* LocalController, bool& bSameSquad);
    void GetVaultCameraCurveForBehavior(EVaultBehavior VaultBehavior, class UCurveVector*& CameraCurve);
    void RestorePCViewRotationYawLimits();
    void SetPCViewRotationYawLimits(float ViewYawMin, float ViewYawMax, bool bRelativeToActorRotation);
    void UpdateCharMesh(class USkeletalMesh* NewMesh, bool bUpdateFPPMesh);
    void SetSuppressionCompIsActive(class UPrimitiveComponent* PrimComp, bool bNewActive);
    void SetSuppressionActive(bool bActive);
    void CalcOutpostEnemiesNearbyRestriction(bool& bAreEnemiesNearby);
    void CalcRallypointEnemiesNearbyRestriction(bool& bAreEnemiesNearby);
    void IsOutpostNumberLimitReached(bool& bNumberLimitReached);
    void IsRallypointNumberLimitReached(bool& bNumberLimitReached);
    void CalcOutpostDistanceRestriction(bool& bIsOutpostDistanceRestricted);
    void CalcRallypointDistanceRestriction(bool& bIsRallypointDistanceRestricted);
    void GetIsSpawnedRallypointValid(bool& bIsSpawnedRallypointValid);
    void GetIsSpawnedOutpostValid(bool& bIsSpawnedOutpostValid);
    void GetProneMountPosition(FVector BoxSize, float Distance, float MaxHeight, float MinHeight, float MinSpace, bool& bCouldMount, FVector& MountPosition);
    void AlignSights(float MinSightDistance);
    void GetMountPosition(FVector Direction, float WallDistance, float TraceRadius, float CornerDistance, float CapsuleHeight, bool& bCouldMount, FVector& Position, FTransform& Transform);
    void OnRep_bSpatializedVOIPTalker();
    void HasSquadLeaderKit(bool bRequireRallyPointAbility, bool& bUsingSquadLeaderKit);
    void IsSquadLeader(bool& bSquadLeader);
    void GetSquadState(class AHDSquadState*& SquadState);
    void CanSelectAnyRadialMenuOption(bool& bSelectable);
    void RadialMenuCanSelectOutpost(bool& bSelectable);
    void RadialMenuCanSelectRallypoint(bool& bSelectable);
    void RadialMenuCanSelectSpot(bool& bSelectable);
    void RadialMenuSelectOutpost();
    void RadialMenuSelectRallypoint();
    void RadialMenuSelectSpot();
    void SelectRadialMenuItem(FName Category, FName SubItem);
    void SpawnAndInitDeployableSPAtPawn(TSubclassOf<class ABP_HDProj_SPDeployableBase_C> SPDeployableClass, FVector SpawnOffset, class ABP_HDProj_SPDeployableBase_C*& SpawnedDeployableSP);
    void LeanDebug();
    void IsMatchingTeam(class AController* LocalController, bool& bMatchingTeam);
    void GetPlayerFactionInfoClass(EHDTeam PlayerTeam, TSubclassOf<class UBP_HDFactionInfoBase_C>& FactionInfoClass);
    void ClearHealthRegenTimer();
    void SetHealthRegenTimerIfInvalid(float NewHealth);
    void HealthRegenTimerElapsed();
    void CleanupVOIPTalker(bool& bDestroyedComp);
    void SetupVOIPTalker();
    void EquipSelectedItemFromInventory(bool bSwitchFireModeForSelected);
    void GetMostValidLoadout(class UHDKit*& PlayerLoadout);
    void GetMostValidTeamFactionInfo(TSubclassOf<class UDFFactionInfo>& FactionInfoClass);
    void GetMostValidTeamState(class ADFTeamState*& TeamState);
    void GetMostValidPlayerState(class APlayerState*& PlayerState);
    class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
    void UpdateEquipmentItems();
    void UpdatePOIState();
    void GetMinimapWidget(class AController* Controller, class UDFMinimap*& MinimapWidget);
    void ApplyCharacterVariation(FDFCharacterVariationDataHandle VariationHandle, bool bApplyToFPP);
    void UpdateCharMeshes(class USkeletalMesh* MeshFPP, class USkeletalMesh* MeshTPP);
    void UpdateCharMeshesFromFaction();
    void SelectEquipmentBySlotNum(int32 EquipSlotNum, bool bEquipImmediately, bool bFromInput);
    void SetEquipmentTimer();
    void StartEquipmentTimer();
    void FreeAiming();
    void UserConstructionScript();
    void LerpTimeline__FinishedFunc();
    void LerpTimeline__UpdateFunc();
    void DamageEffectTimeline__FinishedFunc();
    void DamageEffectTimeline__UpdateFunc();
    void SuppressionTimeline__FinishedFunc();
    void SuppressionTimeline__UpdateFunc();
    void VaultCameraTimeline__FinishedFunc();
    void VaultCameraTimeline__UpdateFunc();
    void ProneSpringArmTranslation__FinishedFunc();
    void ProneSpringArmTranslation__UpdateFunc();
    void ProneExitSpringArmTranslation__FinishedFunc();
    void ProneExitSpringArmTranslation__UpdateFunc();
    void CrouchSpringArmTranslation__FinishedFunc();
    void CrouchSpringArmTranslation__UpdateFunc();
    void CrouchExitSpringArmTranslation__FinishedFunc();
    void CrouchExitSpringArmTranslation__UpdateFunc();
    void CameraAnimationSlot2__FinishedFunc();
    void CameraAnimationSlot2__UpdateFunc();
    void CameraAnimationSlot1__FinishedFunc();
    void CameraAnimationSlot1__UpdateFunc();
    void CameraAnimationSlot0__FinishedFunc();
    void CameraAnimationSlot0__UpdateFunc();
    void InpActEvt_NextItem_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_PreviousItem_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_CameraToggle_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_EqpSlot0_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_EqpSlot1_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_EqpSlot2_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_EqpSlot3_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_EqpSlot4_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_EqpSlot5_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_EqpSlot6_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_EqpSlot7_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_EqpSlot8_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_EqpSlot9_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PointAimToggle_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RadialMenu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RadialMenu_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void OnDeath(float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void OnEquipmentTimerElapsed();
    void ReceiveCurrentLoadout();
    void RetryLoadout();
    void ReceivePossessed(class AController* NewController);
    void OnPCFirePressed();
    void OnLanded(const FHitResult& Hit);
    void GenericDamageFeedback();
    void ReceiveRestart();
    void ReceiveDestroyed();
    void ReceivePawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void ReceiveFreeAim(float DeltaSeconds);
    void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
    void ReceiveBeginPlay();
    void FirstPersonToggled(bool bFirstPerson);
    void OnPCFireReleased();
    void PlayerNameChanged(class APlayerState* PS, FString NewPlayerName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveUnpossessed(class AController* OldController);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void EventResetHealthEffect();
    void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    void ReceiveOnStartAim();
    void ReceiveOnEndAim();
    void BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SuppressionEffect(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup, class UPrimitiveComponent* SuppressionVolume);
    void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void Hit Damage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void ServerRadialMenuSelectOutpost();
    void ServerRadialMenuSelectRallypoint();
    void ServerRadialMenuSelectSpot();
    void ReceivePlayHit(float DamageTaken, const FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bKilled);
    void ReceiveVariationDataChanged(const FDFCharacterVariationData& NewVariation, const FDFCharacterVariationData& PreviousVariation);
    void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
    void ReceiveOnStartVault();
    void ReceiveOnEndVault();
    void ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void EnterRadialMenu();
    void ExitRadialMenu();
    void SubmenuCommited(FName Category, FName SubItem);
    void ExecuteUbergraph_BP_HDPlayerCharacterBase(int32 EntryPoint);
    void OnHitDamage__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void OnSuppression__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
}; // Size: 0xFCF

#endif
