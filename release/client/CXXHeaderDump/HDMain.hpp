#ifndef UE4SS_SDK_HDMain_HPP
#define UE4SS_SDK_HDMain_HPP

#include "HDMain_enums.hpp"

struct FAICharacterVocalProfile : public FTableRowBase
{
    TArray<class USoundBase*> ContactSounds;                                          // 0x0008 (size: 0x10)
    TArray<class USoundBase*> LostContactSounds;                                      // 0x0018 (size: 0x10)
    TArray<class USoundBase*> ReloadingSounds;                                        // 0x0028 (size: 0x10)
    TArray<class USoundBase*> BeenHitSounds;                                          // 0x0038 (size: 0x10)
    TArray<class USoundBase*> UnderSuppressionSounds;                                 // 0x0048 (size: 0x10)
    TArray<class USoundBase*> DeathSounds;                                            // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FControlPointRulesetSettings
{
    int32 TicketsGainedForCapture;                                                    // 0x0000 (size: 0x4)
    int32 TicketsGainedForCaptureFromNeutral;                                         // 0x0004 (size: 0x4)
    int32 TicketsLostOnCapture;                                                       // 0x0008 (size: 0x4)
    float PointsForNeutralize;                                                        // 0x000C (size: 0x4)
    float PointsForCapture;                                                           // 0x0010 (size: 0x4)
    float PointsForDefense;                                                           // 0x0014 (size: 0x4)
    float PointsOnCaptureProgress;                                                    // 0x0018 (size: 0x4)
    float PointsOnDefenseProgress;                                                    // 0x001C (size: 0x4)

}; // Size: 0x20

struct FHDAIGroupData
{
    class AHDBaseCapturePoint* CapturePoint;                                          // 0x0000 (size: 0x8)
    EHDAICaptureMode CaptureMode;                                                     // 0x0008 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0009 (size: 0x3)
    FVector NavigationAnchor;                                                         // 0x000C (size: 0xC)
    FVector TargetLocation;                                                           // 0x0018 (size: 0xC)
    int32 FormationIndex;                                                             // 0x0024 (size: 0x4)
    FVector FormationOffset;                                                          // 0x0028 (size: 0xC)

}; // Size: 0x38

struct FHDAIItemData
{
    ESpecificItemType SpecificType;                                                   // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    int32 InventoryIndex;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHDAIMasterNavPoint
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    float DistanceToNext;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHDAISpecificItemTypeAttackData
{
    float AttackRateMin;                                                              // 0x0000 (size: 0x4)
    float AttackRateMax;                                                              // 0x0004 (size: 0x4)
    float BurstAttackProbability;                                                     // 0x0008 (size: 0x4)
    int32 BurstAttackNumberMin;                                                       // 0x000C (size: 0x4)
    int32 BurstAttackNumberMax;                                                       // 0x0010 (size: 0x4)
    float WeaponStopFireTimeMin;                                                      // 0x0014 (size: 0x4)
    float WeaponStopFireTimeMax;                                                      // 0x0018 (size: 0x4)
    float AfterEquipCooldownTime;                                                     // 0x001C (size: 0x4)
    float SpecialtyItemUseTimeLimit;                                                  // 0x0020 (size: 0x4)
    float AfterSpecialtyItemUsedTimeLimit;                                            // 0x0024 (size: 0x4)
    uint8 bWeaponMovementFire;                                                        // 0x0028 (size: 0x1)

}; // Size: 0x2C

struct FHDAISuppressionSource
{
    class ADFBaseCharacter* OwnerChar;                                                // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)

}; // Size: 0x18

struct FHDCharacterVariationData : public FDFCharacterVariationData
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

struct FHDFilterRuleParams
{
    EHDFilterRuleBehavior Behavior;                                                   // 0x0000 (size: 0x1)
    EHDFilterRuleComparisonOp ComparisonOp;                                           // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FHDGameRoundEndEventDetails
{
    int32 ElapsedTime;                                                                // 0x0000 (size: 0x4)
    EHDTeam WinningTeam;                                                              // 0x0004 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0005 (size: 0x3)
    int32 BluforTickets;                                                              // 0x0008 (size: 0x4)
    int32 OpforTickets;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHDItemEntry
{
    TSubclassOf<class AHDBaseWeapon> ItemClass;                                       // 0x0000 (size: 0x8)
    int32 SlotNum;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FHDPlatoonAttributes
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    uint8 TeamId;                                                                     // 0x0004 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0005 (size: 0x3)
    FText DisplayName;                                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FHDPlatoonCreationParams
{
    class UHDPlatoonInfo* Info;                                                       // 0x0000 (size: 0x8)
    class AHDTeamState* OwnerTeam;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHDPrimaryAssetSearchPath
{
    EHDPrimaryAssetType AssetType;                                                    // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    FString Directory;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHDServerInfo
{
    FString GameVersion;                                                              // 0x0008 (size: 0x10)
    FString ServerName;                                                               // 0x0018 (size: 0x10)
    char padding_0[0x10];                                                             // 0x0028 (size: 0x10)
    FHDServerInfoFlags ServerFlags;                                                   // 0x0038 (size: 0x4)
    char padding_1[0x4];                                                              // 0x003C (size: 0x4)
    FString ModName;                                                                  // 0x0040 (size: 0x10)
    FString GameMode;                                                                 // 0x0050 (size: 0x10)
    FString MapName;                                                                  // 0x0060 (size: 0x10)
    FPrimaryAssetId MapId;                                                            // 0x0070 (size: 0x10)
    class UTexture2D* MapBannerImg;                                                   // 0x0080 (size: 0x8)
    class UTexture2D* MapThumbnailImg;                                                // 0x0088 (size: 0x8)
    int32 CurrentPlayers;                                                             // 0x0090 (size: 0x4)
    int32 MaxPlayers;                                                                 // 0x0094 (size: 0x4)
    int32 Ping;                                                                       // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FHDServerInfoFlags
{
    bool bPasswordProtected;                                                          // 0x0000 (size: 0x1)
    EDFPlayerWhitelistType WhitelistType;                                             // 0x0001 (size: 0x1)
    bool bSupportersOnlyWhitelist;                                                    // 0x0002 (size: 0x1)
    bool bUtilizesUGC;                                                                // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FHDSquadAssignmentInfo
{
    class AHDSquadState* SquadState;                                                  // 0x0000 (size: 0x8)
    float SquadAssignmentTime;                                                        // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FHDSquadCreationParams
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    class AHDPlatoonState* OwnerPlatoon;                                              // 0x0018 (size: 0x8)
    class AHDPlayerState* SquadLeader;                                                // 0x0020 (size: 0x8)
    uint8 bLocked;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FHDUIWeaponAmmoState
{
    int32 TotalFreeAmmo;                                                              // 0x0000 (size: 0x4)
    int32 NumFreeAmmoClips;                                                           // 0x0004 (size: 0x4)
    int32 CurrentClipAmmo;                                                            // 0x0008 (size: 0x4)
    int32 CurrentClipMaxAmmo;                                                         // 0x000C (size: 0x4)
    TSubclassOf<class ADFBaseAmmoClip> CurrentClipAmmoClass;                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FKillDeathRulesetSettings
{
    int32 TicketsGainedForKill;                                                       // 0x0000 (size: 0x4)
    int32 TicketsLostOnKill;                                                          // 0x0004 (size: 0x4)
    int32 TicketsLostOnTeamKill;                                                      // 0x0008 (size: 0x4)
    int32 TicketsLostOnDeath;                                                         // 0x000C (size: 0x4)
    int32 TicketsLostOnSuicide;                                                       // 0x0010 (size: 0x4)
    float PointsForKill;                                                              // 0x0014 (size: 0x4)
    float PointsForAssist;                                                            // 0x0018 (size: 0x4)
    float PointsForTeamKill;                                                          // 0x001C (size: 0x4)
    float PointsForDeath;                                                             // 0x0020 (size: 0x4)
    float PointsForSuicide;                                                           // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FPTTKeyState
{
    char padding_0[0xC];                                                              // 0x0000 (size: 0x0)
}; // Size: 0xC

struct FTicketBleedRulesetSettings
{
    int32 TicketBleed;                                                                // 0x0000 (size: 0x4)
    int32 MercyTicketBleed;                                                           // 0x0004 (size: 0x4)
    uint8 bAllowMercyTicketBleed;                                                     // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FUniqueNetIdVoipWrapper
{
    char padding_0[0x18];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x18

class AHDAIController : public ADFBaseAIController
{
    class UHDPlayerComponent* PlayerComponent;                                        // 0x0330 (size: 0x8)
    class UHDGOAPComponent* GOAPComponent;                                            // 0x0338 (size: 0x8)
    uint8 bCanJoinSquads;                                                             // 0x0340 (size: 0x1)
    uint8 bCanJoinPlayerSquads;                                                       // 0x0340 (size: 0x1)
    uint8 bCanCreateSquads;                                                           // 0x0340 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0341 (size: 0x3)
    int32 MaxNumberOfAILedSquads;                                                     // 0x0344 (size: 0x4)
    int32 MaxNumberOfSquadMembers;                                                    // 0x0348 (size: 0x4)
    int32 MaxNumberOfAISquadMembers;                                                  // 0x034C (size: 0x4)
    uint8 bUseFactionSpecifiedSquadLeaderKit;                                         // 0x0350 (size: 0x1)
    uint8 bUseFactionSpecifiedSquadMemberKit;                                         // 0x0350 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0351 (size: 0x3)
    FVector FocusActorPerceivedLocation;                                              // 0x0354 (size: 0xC)

    bool JoinOrCreateSquad();
    TSubclassOf<class APawn> GetStartPawnClass();
    class UHDKit* GetFactionSpecifiedSquadMemberKit();
    class UHDKit* GetFactionSpecifiedSquadLeaderKit();
}; // Size: 0x360

class AHDBaseCapturePoint : public AActor
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0228 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x0230 (size: 0x8)
    class UDFPOIComponent* POI;                                                       // 0x0238 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x0240 (size: 0x8)
    uint8 bActive;                                                                    // 0x0248 (size: 0x1)
    uint8 bLocked;                                                                    // 0x0248 (size: 0x1)
    uint8 bContested;                                                                 // 0x0248 (size: 0x1)
    uint8 bCaptured;                                                                  // 0x0248 (size: 0x1)
    uint8 bCapturedOnce;                                                              // 0x0248 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0249 (size: 0x3)
    int32 CaptureProgress;                                                            // 0x024C (size: 0x4)
    int32 ActiveRoute;                                                                // 0x0250 (size: 0x4)
    char padding_1[0xC];                                                              // 0x0254 (size: 0xC)
    TArray<class UChildActorComponent*> SpawnPoints;                                  // 0x0260 (size: 0x10)
    FHDBaseCapturePointOnCaptureProgressUpdated OnCaptureProgressUpdated;             // 0x0270 (size: 0x10)
    void CaptureProgressSignature(class AHDBaseCapturePoint* ControlPoint, bool bContested, int32 Progress);
    EHDTeam StartingTeam;                                                             // 0x0280 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0281 (size: 0x7)
    FText CaptureDisplayName;                                                         // 0x0288 (size: 0x18)
    float CaptureTimerRate;                                                           // 0x02A0 (size: 0x4)
    int32 CaptureSpeed;                                                               // 0x02A4 (size: 0x4)
    float CaptureRadius;                                                              // 0x02A8 (size: 0x4)
    int32 MinPlayersToCapture;                                                        // 0x02AC (size: 0x4)
    uint8 bEnforceMinPlayersToCaptureWithSmallerPlayerCount;                          // 0x02B0 (size: 0x1)
    uint8 bScaleCaptureSpeed;                                                         // 0x02B0 (size: 0x1)
    uint8 bRecapturable;                                                              // 0x02B0 (size: 0x1)
    uint8 bWinOnCapture;                                                              // 0x02B0 (size: 0x1)
    uint8 bProvideSpawnPoint;                                                         // 0x02B0 (size: 0x1)
    uint8 bProvideSpawnPointWhenUnderAttack;                                          // 0x02B0 (size: 0x1)
    char padding_3[0x7];                                                              // 0x02B1 (size: 0x7)
    TSet<int32> PossibleRoutes;                                                       // 0x02B8 (size: 0x50)
    int32 Tier;                                                                       // 0x0308 (size: 0x4)
    char padding_4[0x4];                                                              // 0x030C (size: 0x4)
    TArray<FTransform> SpawnPointTransforms;                                          // 0x0310 (size: 0x10)
    EHDTeam OwningTeam;                                                               // 0x0320 (size: 0x1)
    EHDTeam PrevNonNeutralOwningTeam;                                                 // 0x0321 (size: 0x1)
    char padding_5[0x6];                                                              // 0x0322 (size: 0x6)
    FHDBaseCapturePointOnOwningTeamUpdate OnOwningTeamUpdate;                         // 0x0328 (size: 0x10)
    void OwningTeamUpdateSignature(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    uint8 bCapturableByTeamRed;                                                       // 0x0338 (size: 0x1)
    uint8 bCapturableByTeamBlue;                                                      // 0x0338 (size: 0x1)
    char padding_6[0x7];                                                              // 0x0339 (size: 0x7)
    FHDBaseCapturePointOnTeamCaptureStatusUpdate OnTeamCaptureStatusUpdate;           // 0x0340 (size: 0x10)
    void TeamCaptureStatusUpdateSignature(class AHDBaseCapturePoint* ControlPoint);

    void Unlock();
    void SetActiveRoute(const int32 NewActiveRoute);
    void SetActive(const bool bNewActive);
    void ReceiveOnTeamCaptureStatusUpdated();
    void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
    void ReceiveOnLocked(bool bNewLocked);
    void ReceiveOnCaptureProgress(bool bNewContested);
    void ReceiveOnActive(bool bNewActive);
    void OnRep_OwningTeam(EHDTeam LastOwningTeam);
    void OnRep_Locked();
    void OnRep_Contested();
    void OnRep_CaptureProgress();
    void OnRep_CapturableByTeam();
    void OnRep_Active();
    void OnOwningTeamUpdated(EHDTeam LastOwningTeam);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Lock();
    bool IsCapturableByTeam(EHDTeam CaptureTeam);
    void GetOverlappingCharactersByTeam(TArray<class ADFBaseCharacter*>& OverlappingCharsRed, TArray<class ADFBaseCharacter*>& OverlappingCharsBlue);
    EHDControlPointObjectiveType GetObjectiveTypeForTeam(EHDTeam ObjTeam);
    int32 GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam);
    class AActor* ChoosePlayerStart(class AHDPlayerController* Player);
    bool CanRestartPlayer(class AController* Player);
    bool CanCapture();
}; // Size: 0x350

class AHDBaseGameMode : public ADFBaseGameMode
{
    TSubclassOf<class UHDScoreboardBase> ScoreboardMenuClass;                         // 0x0418 (size: 0x8)
    FHDGameRoundEndEventDetails RoundEndEventDetails;                                 // 0x0420 (size: 0x10)
    uint8 bDisablePlayerSpawnKitRestrictions;                                         // 0x0430 (size: 0x1)
    uint8 bUseTickets;                                                                // 0x0430 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0431 (size: 0x7)
    class UHDTeamDefinition* DefaultBluforTeamDefinition;                             // 0x0438 (size: 0x8)
    class UHDTeamDefinition* DefaultOpforTeamDefinition;                              // 0x0440 (size: 0x8)
    class UHDTeamDefinition* BluforTeamDefinition;                                    // 0x0448 (size: 0x8)
    class UHDTeamDefinition* OpforTeamDefinition;                                     // 0x0450 (size: 0x8)
    uint8 bRandomPlayerTeamBalance;                                                   // 0x0458 (size: 0x1)
    char padding_1[0x37];                                                             // 0x0459 (size: 0x37)
    TArray<class UHDPlatoonInfo*> PlatoonInfos;                                       // 0x0490 (size: 0x10)
    TSubclassOf<class AHDPlatoonState> PlatoonStateClass;                             // 0x04A0 (size: 0x8)

    void RemoveOpforBots(int32 Num);
    void RemoveBluforBots(int32 Num);
    bool PlayerCanRestartAtPlayerStart(class AController* Player, class AActor* StartSpot, class UDFLoadout* StartLoadout);
    void AddOpforBots(int32 Num);
    void AddBluforBots(int32 Num);
}; // Size: 0x4A8

class AHDBasePickup_Kit : public ADFBasePickup
{
    class UDFInventoryComponent* Inventory;                                           // 0x0258 (size: 0x8)
    TArray<class UPrimitiveComponent*> KitVisuals;                                    // 0x0260 (size: 0x10)
    class UHDKit* KitLoadout;                                                         // 0x0270 (size: 0x8)

}; // Size: 0x278

class AHDBaseProjectile : public ADFBaseProjectile
{
    char padding_0[0x380];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x380

class AHDBaseWeapon : public ADFBaseGun_Projectile
{
    class UTexture2D* DisplayIcon;                                                    // 0x0858 (size: 0x8)
    class UTexture2D* DisplayEquipmentSymbol;                                         // 0x0860 (size: 0x8)
    uint8 bUseFreeAim;                                                                // 0x0868 (size: 0x1)
    uint8 bSelectable;                                                                // 0x0868 (size: 0x1)
    uint8 bHideFireModeIndicator;                                                     // 0x0868 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0869 (size: 0x3)
    float AmmoReplenishmentDelay;                                                     // 0x086C (size: 0x4)

    bool IsSelectableEquipment();
}; // Size: 0x870

class AHDGameSession : public ADFGameSession
{
    bool bSupportersOnlyWhitelist;                                                    // 0x0270 (size: 0x1)

}; // Size: 0x278

class AHDGameState : public ADFBaseGameState
{
    float ReplicatedMinRespawnDelay;                                                  // 0x0310 (size: 0x4)
    uint8 bReplicatedDisableSpawnKitRestrictions;                                     // 0x0314 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0315 (size: 0x3)
    int32 BluforTickets;                                                              // 0x0318 (size: 0x4)
    int32 OpforTickets;                                                               // 0x031C (size: 0x4)
    class AHDTeamState* BluforTeamState;                                              // 0x0320 (size: 0x8)
    class AHDTeamState* OpforTeamState;                                               // 0x0328 (size: 0x8)

    void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove);
    bool IsGameUsingTickets();
    bool IsGameUsingPlayerSpawnKitRestrictions(const class AController* Controller);
    void GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd);
    int32 GetNumPlayersOnTeam(EHDTeam TeamToCheck);
    void ClearTickets();
}; // Size: 0x330

class AHDGame_AdvanceAndSecure : public AHDBaseGameMode
{
    int32 StartingBlueTier;                                                           // 0x04A8 (size: 0x4)
    int32 StartingRedTier;                                                            // 0x04AC (size: 0x4)
    int32 ActiveRoute;                                                                // 0x04B0 (size: 0x4)
    int32 CurrentBlueCaptureTier;                                                     // 0x04B4 (size: 0x4)
    int32 CurrentRedCaptureTier;                                                      // 0x04B8 (size: 0x4)
    uint8 bBlueIncreasesTier;                                                         // 0x04BC (size: 0x1)

    int32 GetCurrentRedCaptureTier();
    int32 GetCurrentBlueCaptureTier();
}; // Size: 0x4E0

class AHDGame_TeamDeathMatch : public AHDBaseGameMode
{
    char padding_0[0x4A8];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x4A8

class AHDHUD : public AHUD
{
    char padding_0[0x310];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x310

class AHDPlatoonState : public ADFReplInfo
{
    FHDPlatoonStateOnSquadAdded OnSquadAdded;                                         // 0x0228 (size: 0x10)
    void OnPlatoonSquadChanged(class AHDPlatoonState* Platoon, class AHDSquadState* Squad);
    FHDPlatoonStateOnSquadPreRemove OnSquadPreRemove;                                 // 0x0238 (size: 0x10)
    void OnPlatoonSquadChanged(class AHDPlatoonState* Platoon, class AHDSquadState* Squad);
    TSubclassOf<class AHDSquadState> SquadStateClass;                                 // 0x0248 (size: 0x8)
    FDFGenericObjectContainer Squads;                                                 // 0x0250 (size: 0x180)
    uint8 bInitialized;                                                               // 0x03D0 (size: 0x1)
    char padding_0[0x3];                                                              // 0x03D1 (size: 0x3)
    int32 ID;                                                                         // 0x03D4 (size: 0x4)
    class UHDPlatoonInfo* Info;                                                       // 0x03D8 (size: 0x8)
    uint8 TeamId;                                                                     // 0x03E0 (size: 0x1)
    char padding_1[0x7];                                                              // 0x03E1 (size: 0x7)
    class AHDTeamState* OwnerTeam;                                                    // 0x03E8 (size: 0x8)

    bool SquadExists(const class AHDSquadState* Squad, bool bIgnorePendingRemoval);
    void RemoveSquadAt(int32 RemoveIdx);
    void RemoveSquad(class AHDSquadState* SquadToRemove);
    void RemoveFromOwner();
    void ReceiveSquadPreRemove(class AHDSquadState* Squad);
    void ReceiveSquadAdded(class AHDSquadState* Squad);
    bool IsSquadPendingRemovalFromPlatoon(const class AHDSquadState* Squad);
    bool HasReachedMaxSquadLimit();
    class AHDSquadState* GetSquadAt(int32 Index, bool bIgnorePendingRemoval);
    int32 GetNumSquads(bool bValidSquadsOnly);
    int32 GetMaxSquadLimit();
    bool FindSquadByName(const FText& SquadDisplayName, class AHDSquadState*& OutFoundSquad);
    void DumpSquadState();
    class AHDSquadState* AddSquad(const FText& SquadDisplayName, class AHDPlayerState* SquadLeader, bool bStartLocked);
}; // Size: 0x3F0

class AHDPlayerCameraManager : public ADFPlayerCameraManager
{
    char padding_0[0x2740];                                                           // 0x0000 (size: 0x0)
}; // Size: 0x2740

class AHDPlayerCharacter : public ADFBasePlayerCharacter
{
    bool bUseAttachedVehicleRelevancy;                                                // 0x0970 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0971 (size: 0x3)
    float WalkingBobSpeed;                                                            // 0x0974 (size: 0x4)
    uint8 bDoHeadBob;                                                                 // 0x0978 (size: 0x1)
    uint8 bAllowFreeAim;                                                              // 0x0978 (size: 0x1)
    uint8 bAllowFreeAimWhileAiming;                                                   // 0x0978 (size: 0x1)
    uint8 bDoFreeAim;                                                                 // 0x0978 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0979 (size: 0x7)
    FDFCharacterVariationDataHandle VariationHandle;                                  // 0x0980 (size: 0x18)
    class USpringArmComponent* SpringArm;                                             // 0x0998 (size: 0x8)
    class USpringArmComponent* FreeAimSpringArm;                                      // 0x09A0 (size: 0x8)
    class UHDKit* CurrentLoadout;                                                     // 0x09A8 (size: 0x8)
    TSubclassOf<class AHDBasePickup_Kit> KitClassFallback;                            // 0x09B0 (size: 0x8)
    float KitDropTraceDistance;                                                       // 0x09B8 (size: 0x4)
    uint8 bInventoryMenuShown;                                                        // 0x09BC (size: 0x1)
    char padding_2[0x3];                                                              // 0x09BD (size: 0x3)
    FHDPlayerCharacterOnAimStyleChanged OnAimStyleChanged;                            // 0x09C0 (size: 0x10)
    void CharacterAimStyleChangedSignature(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    EHDWeaponAimStyle AimStyle;                                                       // 0x09D0 (size: 0x1)
    char padding_3[0x7];                                                              // 0x09D1 (size: 0x7)
    class AHDTeamState* HDTeamState;                                                  // 0x09D8 (size: 0x8)
    class UAudioComponent* AIVocalAC;                                                 // 0x09E0 (size: 0x8)
    TSubclassOf<class UCameraShake> WalkingHeadBob;                                   // 0x09E8 (size: 0x8)
    TSubclassOf<class UCameraShake> SprintingHeadBob;                                 // 0x09F0 (size: 0x8)
    uint8 bCanAddYawInput;                                                            // 0x09F8 (size: 0x1)
    uint8 bCanAddPitchInput;                                                          // 0x09F8 (size: 0x1)
    uint8 bCanAddRollInput;                                                           // 0x09F8 (size: 0x1)
    char padding_4[0x3];                                                              // 0x09F9 (size: 0x3)
    float FreeAimDeadzoneCameraSpeedFactor;                                           // 0x09FC (size: 0x4)
    float FreeAimReturnToCenterInterpSpeed;                                           // 0x0A00 (size: 0x4)
    float MaxFreeAimYaw;                                                              // 0x0A04 (size: 0x4)
    float MaxFreeAimPitch;                                                            // 0x0A08 (size: 0x4)
    float MaxFreeAimYawADS;                                                           // 0x0A0C (size: 0x4)
    float MaxFreeAimPitchADS;                                                         // 0x0A10 (size: 0x4)
    float CurrentFreeAimYaw;                                                          // 0x0A14 (size: 0x4)
    float CurrentFreeAimPitch;                                                        // 0x0A18 (size: 0x4)
    float FreeAimMouseDeltaX;                                                         // 0x0A1C (size: 0x4)
    float FreeAimMouseDeltaY;                                                         // 0x0A20 (size: 0x4)
    float FreeAimExternalDeltaX;                                                      // 0x0A24 (size: 0x4)
    float FreeAimExternalDeltaY;                                                      // 0x0A28 (size: 0x4)
    EHDAIVocalizationType LastAIVocalization;                                         // 0x0A2C (size: 0x1)
    char padding_5[0x3];                                                              // 0x0A2D (size: 0x3)
    class UHDAIPerceptionComponent* HDAIPerceptionComponent;                          // 0x0A30 (size: 0x8)

    void VariationDataChangedInternal(const FDFCharacterVariationDataHandle PreviousHandle);
    void SetVariationHandle(FDFCharacterVariationDataHandle InVariationHandle);
    void SetMaxFreeAimYawADS(float NewYaw);
    void SetMaxFreeAimYaw(float NewYaw);
    void SetMaxFreeAimPitchADS(float NewPitch);
    void SetMaxFreeAimPitch(float NewPitch);
    void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
    void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
    void SetAllowFreeAimADS(bool bEnabled);
    void SetAllowFreeAim(bool bEnabled);
    void SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput);
    void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    void ReceiveVariationDataChanged(const FDFCharacterVariationData& NewVariation, const FDFCharacterVariationData& PreviousVariation);
    void ReceiveFreeAim(float DeltaSeconds);
    void ReceiveCurrentLoadout();
    void ReceiveAimStyleChanged(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    void PlayVocalSoundAI(class USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier);
    void OnRep_CurrentLoadout();
    void OnPickupKit(class AHDBasePickup_Kit* Kit);
    void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
    bool IsInVehicle();
    void HeadBob();
    class UHDPlayerComponent* GetPlayerComponent();
    float GetMaxFreeAimYawToUse();
    float GetMaxFreeAimPitchToUse();
    TSubclassOf<class AHDBasePickup_Kit> GetKitClassToUse();
    void FreeAim(float DeltaSeconds);
    bool EquipPrimaryItem();
    void DropKit();
}; // Size: 0xA40

class AHDPlayerController : public ADFBasePlayerController
{
    class AHDPlayerCharacter* HDCharacter;                                            // 0x05F8 (size: 0x8)
    class UHDPlayerComponent* PlayerComponent;                                        // 0x0600 (size: 0x8)
    TMap<class FName, class FPTTKeyState> PushToTalkKeyStates;                        // 0x0608 (size: 0x50)
    char padding_0[0x4];                                                              // 0x0658 (size: 0x4)
    FName TextCommsFormatName;                                                        // 0x065C (size: 0x8)
    FName TeamLocalVoipCommChannelGroupName;                                          // 0x0664 (size: 0x8)
    FName SquadVoipCommChannelGroupName;                                              // 0x066C (size: 0x8)
    FName CommandVoipCommChannelGroupName;                                            // 0x0674 (size: 0x8)
    char padding_1[0x4];                                                              // 0x067C (size: 0x4)
    class UDFPlayerCommsComponent* CachedPlayerCommsComp;                             // 0x0680 (size: 0x8)
    TSubclassOf<class UVictoryMenu> VictoryMenuClass;                                 // 0x0688 (size: 0x8)
    class UVictoryMenu* VictoryMenu;                                                  // 0x0690 (size: 0x8)

    void UnloadVictoryMenu();
    void TeamTalk();
    void Talk();
    void StopTalkingOverChannelIfActive(const FName TalkStopChannelName);
    void StopTalkingOverChannelGroupIfActive(const FName TalkStopGroupName);
    void StopTalkingOnActiveChannels();
    void StartTalkingOverChannelGroup(const FName TalkStartGroupName);
    void StartTalkingOverChannel(const FName TalkStartChannelName);
    void ServerSwitchTeam();
    void ServerSpawnVehicle();
    void ServerRestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
    void ServerPickTeam(const EHDTeam DesiredTeam);
    void ServerCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
    void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    void OnShowScoreboardReleased();
    void OnShowScoreboardPressed();
    void OnPlayerSpawnTimerElapsed();
    void OnPauseMenu();
    void LoadVictoryMenu(const FHDGameRoundEndEventDetails& RoundDetails, bool bWinner);
    bool IsTalkingOverChannelName(const FName TalkChannelName);
    bool IsTalkingOverChannelGroup(const FName TalkGroupName);
    bool IsTalkingOverChannel(const class UDFCommChannel* TalkChannel);
    bool IsTalking(bool bIncludeWantsToTalk);
    bool IsInVehicle();
    bool IsIdleSwayAllowed();
    class UDFCommChannel* GetTalkChannel();
    class UDFPlayerCommsComponent* GetPlayerCommsComponent();
    void ClientRoundEnd(const FHDGameRoundEndEventDetails& RoundDetails, bool bIsWinner);
    void ClientLoadTeamData(const TArray<FString>& FactionAssetPaths);
    void ClientCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
    bool CanTalkOverChannel(const FName TalkChannelName);
    void Auth_SpawnVehicle();
}; // Size: 0x6A0

class AHDPlayerStart : public APlayerStart
{
    char padding_0[0x250];                                                            // 0x0000 (size: 0x0)

    class UCapsuleComponent* K2_GetCapsuleComponent();
}; // Size: 0x250

class AHDPlayerState : public ADFBasePlayerState
{
    class UHDKit* SpawnLoadout;                                                       // 0x0378 (size: 0x8)
    class UHDKit* CurrentLoadout;                                                     // 0x0380 (size: 0x8)
    FHDSquadAssignmentInfo SquadInfo;                                                 // 0x0388 (size: 0x10)
    FHDPlayerStateOnPlayerSquadInfoUpdated OnPlayerSquadInfoUpdated;                  // 0x0398 (size: 0x10)
    void PlayerSquadInfoUpdateSignature(class AHDPlayerState* PlayerState, const FHDSquadAssignmentInfo& PlayerSQInfo);

    void UnregisterFromSquad();
    void OnRep_SquadInfo();
    void OnRep_SpawnLoadout(class UHDKit* PrevSpawnLoadout);
    void OnRep_CurrentLoadout(class UHDKit* PrevLoadout);
    void AssignSpawnLoadout(class UHDKit* NewSpawnLoadout);
    void AssignCurrentLoadout(class UHDKit* NewCurrentLoadout);
}; // Size: 0x3A8

class AHDProj_Bullet : public AHDBaseProjectile
{
    class USphereComponent* ProjectileCollision;                                      // 0x0378 (size: 0x8)

}; // Size: 0x380

class AHDProj_Deployable : public AHDBaseProjectile
{
    char padding_0[0x380];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x380

class AHDProj_Grenade : public AHDBaseProjectile
{
    float FuzeDelay;                                                                  // 0x037C (size: 0x4)
    float PayloadPostTriggerLifeSpan;                                                 // 0x0380 (size: 0x4)
    float PayloadServerActivationTime;                                                // 0x0384 (size: 0x4)

    void OnRep_PayloadServerActivationTime();
}; // Size: 0x390

class AHDProj_SpawnPointDeployable : public AHDProj_Deployable
{
    EHDTeam Team;                                                                     // 0x0380 (size: 0x1)

}; // Size: 0x390

class AHDRecastNavMesh : public ADFRecastNavMesh
{
    char padding_0[0x4B8];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x4B8

class AHDSquadHiddenState : public AInfo
{
    class AHDSquadState* SquadStateOwner;                                             // 0x0228 (size: 0x8)

}; // Size: 0x230

class AHDSquadState : public ADFReplInfo
{
    uint8 bInitialized;                                                               // 0x0228 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0229 (size: 0x7)
    TSubclassOf<class AHDSquadHiddenState> SquadHiddenStateClass;                     // 0x0230 (size: 0x8)
    int32 ID;                                                                         // 0x0238 (size: 0x4)
    uint8 TeamId;                                                                     // 0x023C (size: 0x1)
    char padding_1[0x3];                                                              // 0x023D (size: 0x3)
    class AHDPlatoonState* OwnerPlatoon;                                              // 0x0240 (size: 0x8)
    FText DisplayName;                                                                // 0x0248 (size: 0x18)
    class AHDSquadHiddenState* SquadHiddenState;                                      // 0x0260 (size: 0x8)
    class AHDPlayerState* SquadLeader;                                                // 0x0268 (size: 0x8)
    uint8 bLocked;                                                                    // 0x0270 (size: 0x1)
    uint8 bRequiresSquadLeader;                                                       // 0x0270 (size: 0x1)
    uint8 bDisbandSquadOnEmpty;                                                       // 0x0270 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0271 (size: 0x7)
    FHDSquadStateOnSquadLeaderAssigned OnSquadLeaderAssigned;                         // 0x0278 (size: 0x10)
    void OnSquadLeaderAssigned(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    FHDSquadStateOnSquadMemberRegistered OnSquadMemberRegistered;                     // 0x0288 (size: 0x10)
    void OnSquadMemberChanged(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
    FHDSquadStateOnSquadMemberPreUnregister OnSquadMemberPreUnregister;               // 0x0298 (size: 0x10)
    void OnSquadMemberChanged(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
    FHDSquadStateOnSquadMemberInfoUpdated OnSquadMemberInfoUpdated;                   // 0x02A8 (size: 0x10)
    void OnSquadMemberInfoUpdated(class AHDSquadState* Squad, class AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo);
    FHDSquadStateOnSquadRenamed OnSquadRenamed;                                       // 0x02B8 (size: 0x10)
    void OnSquadRenamed(class AHDSquadState* Squad, const FText& NewName, const FText& PrevName);
    FHDSquadStateOnSquadLockToggled OnSquadLockToggled;                               // 0x02C8 (size: 0x10)
    void OnSquadLockToggled(class AHDSquadState* Squad, bool bNewLocked);
    FDFGenericObjectContainer SquadMembers;                                           // 0x02D8 (size: 0x180)
    int32 MaxSquadMemberLimit;                                                        // 0x0458 (size: 0x4)

    bool UnregisterSquadMemberAt(int32 RemoveIdx);
    bool UnregisterSquadMember(class AHDPlayerState* MemberPSToRemove);
    bool UnregisterPlayerSquadMember(const class AHDPlayerController* MemberPCToRemove);
    void UnlockSquad();
    void SquadMemberPSTeamUpdated(class APlayerState* MemberPS, uint8 LastTeamNum, uint8 NewTeamNum);
    void SquadMemberPSSquadUpdated(class AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo);
    void SquadMemberPSEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void RenameSquad(const FText& NewDisplayName);
    void RemoveFromOwner();
    bool RegisterSquadMember(class AHDPlayerState* NewMemberPS);
    bool RegisterPlayerSquadMember(const class AHDPlayerController* NewMemberPC);
    void ReceiveSquadUnlocked();
    void ReceiveSquadRenamed(const FText& NewName, const FText& PrevName);
    void ReceiveSquadMemberRegistered(class AHDPlayerState* MemberPS);
    void ReceiveSquadMemberPreUnregister(class AHDPlayerState* MemberPS);
    void ReceiveSquadLocked();
    void ReceiveSquadLeaderAssigned(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    void ReceiveInit(const FHDSquadCreationParams& CreationParams);
    void OnRep_SquadLeader(class AHDPlayerState* PrevSquadLeader);
    void OnRep_SquadHiddenState();
    void OnRep_DisplayName(const FText& PrevDisplayName);
    void OnRep_bLocked();
    void LockSquad();
    bool IsRegisteredSquadMember(const class AHDPlayerState* PS, bool bIgnorePendingRemoval);
    bool IsPlayerRegisteredSquadMember(const class AHDPlayerController* PC, bool bIgnorePendingRemoval);
    bool IsPlayerPendingRemovalFromSquad(const class AHDPlayerController* PC);
    bool IsPendingRemovalFromSquad(const class AHDPlayerState* PS);
    bool HasReachedMaxSquadMemberLimit();
    class AHDPlayerState* GetSquadMemberAt(int32 Index, bool bIgnorePendingRemoval);
    int32 GetNumSquadMembersBots(bool bValidMembersOnly);
    int32 GetNumSquadMembers(bool bValidMembersOnly);
    void DumpSquadMemberState();
    bool CanRegisterSquadMember(const class AHDPlayerState* NewMemberPS);
    bool CanRegisterPlayerSquadMember(const class AHDPlayerController* NewMemberPC);
    bool AssignSquadLeader(class AHDPlayerState* NewLeaderPS);
}; // Size: 0x460

class AHDTeamState : public ADFTeamState
{
    FHDTeamStateOnPlatoonAdded OnPlatoonAdded;                                        // 0x0250 (size: 0x10)
    void OnTeamPlatoonChanged(class AHDTeamState* Team, class AHDPlatoonState* Platoon);
    FHDTeamStateOnPlatoonPreRemove OnPlatoonPreRemove;                                // 0x0260 (size: 0x10)
    void OnTeamPlatoonChanged(class AHDTeamState* Team, class AHDPlatoonState* Platoon);
    FDFGenericObjectContainer Platoons;                                               // 0x0270 (size: 0x180)
    int32 MaxPlatoonLimit;                                                            // 0x03F0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x03F4 (size: 0x4)
    TSet<UHDKit*> Kits;                                                               // 0x03F8 (size: 0x50)

    void RemovePlatoonAt(int32 RemoveIdx);
    void RemovePlatoon(class AHDPlatoonState* PlatoonToRemove);
    void ReceivePlatoonPreRemove(class AHDPlatoonState* Platoon);
    void ReceivePlatoonAdded(class AHDPlatoonState* Platoon);
    bool PlatoonExists(const class AHDPlatoonState* Platoon, bool bIgnorePendingRemoval);
    bool IsPlatoonPendingRemovalFromTeam(const class AHDPlatoonState* Platoon);
    bool HasReachedMaxPlatoonLimit();
    EHDTeam GetTeam();
    class AHDPlatoonState* GetPlatoonAt(int32 Index, bool bIgnorePendingRemoval);
    int32 GetNumPlatoons(bool bValidPlatoonsOnly);
    bool FindPlatoonByName(const FText& PlatoonDisplayName, class AHDPlatoonState*& OutFoundPlatoon);
    bool FindPlatoonByDefinition(const class UHDPlatoonInfo* PlatoonDef, class AHDPlatoonState*& OutFoundPlatoon);
    void DumpPlatoonState();
    class AHDPlatoonState* AddPlatoon(const class UHDPlatoonInfo* PlatoonInfo);
}; // Size: 0x448

class AHDWorldSettings : public ATBWorldSettings
{
    class UHDTeamDefinition* BluforTeamDefinition;                                    // 0x0518 (size: 0x8)
    class UHDTeamDefinition* OpforTeamDefinition;                                     // 0x0520 (size: 0x8)

}; // Size: 0x528

class UDeployMenu : public UDFBaseMenu
{
    char padding_0[0x238];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x238

class UDeployMenu_ClassSelectionListing : public UUserWidget
{
    char padding_0[0x230];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x230

class UDeployMenu_ClassSelectionPanel : public UUserWidget
{
    char padding_0[0x230];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x230

class UDeployMenu_PlatoonSquadListBase : public UUserWidget
{
    class UPlatoonListEntry* PlatoonData;                                             // 0x0230 (size: 0x8)
    bool bSortSquads;                                                                 // 0x0238 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0239 (size: 0x7)
    TArray<class USquadListEntry*> CurrentSquads;                                     // 0x0240 (size: 0x10)

    void SquadPreRemoveFromPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* SquadToBeRemoved);
    void SquadAddedToPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* NewSquad);
    void SetupPlatoon(class UPlatoonListEntry* InPlatoonData);
    void RepopulatePlatoon();
    void OnPlatoonSet();
    class AHDPlatoonState* GetPlatoonStateFromData();
    void GenerateSquad(class USquadListEntry* SquadData);
    void DeconstructSquad(class USquadListEntry* RemovedSquadData, int32 RemovedSquadIdx);
}; // Size: 0x250

class UDeployMenu_SpawnMapView : public UUserWidget
{
    char padding_0[0x230];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x230

class UDeployMenu_SpawnMinimap : public UDFMinimap
{
    char padding_0[0x298];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x298

class UDeployMenu_SquadListBase : public UUserWidget
{
    class USquadListEntry* SquadData;                                                 // 0x0230 (size: 0x8)
    bool bSortSquadMembers;                                                           // 0x0238 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0239 (size: 0x7)
    TArray<class USquadMemberInfo*> CurrentSquadMembers;                              // 0x0240 (size: 0x10)
    TArray<class USquadMemberInfo*> MemberEntryWidgetsPendingRemoval;                 // 0x0250 (size: 0x10)

    void SquadNameChanged(class AHDSquadState* SourceSquad, const FText& NewName, const FText& PrevName);
    void SquadLockStateUpdated(class AHDSquadState* SourceSquad, bool bNewLocked);
    void SquadLeaderChanged(class AHDSquadState* SourceSquad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    void SetupSquad(class USquadListEntry* InSquadData);
    void RepopulateSquad();
    void OnSquadSet();
    void OnSquadNameUpdated(const FText& NewSquadName, const FText& PreviousSquadName);
    void OnSquadLockStateUpdated(bool bNewLockedState);
    void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
    void OnListRefresh();
    void MemberSquadInfoUpdated(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPS, const FHDSquadAssignmentInfo& MemberSQInfo);
    void MemberPreRemoveFromSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPSToBeRemoved);
    void MemberAddedToSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* NewMemberPS);
    class AHDSquadState* GetSquadStateFromData();
    class AHDPlatoonState* GetParentPlatoonStateFromData();
    void GenerateSquadMember(class USquadMemberInfo* MemberData);
    void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
}; // Size: 0x260

class UDeployMenu_SquadMemberListingBase : public UUserWidget
{
    class USquadMemberInfo* MemberData;                                               // 0x0230 (size: 0x8)

    void SetupMember(class USquadMemberInfo* InMemberData);
    void OnMemberSet();
    void OnMemberPlayerNameUpdated(FString NewPlayerName);
    void MemberPlayerNameChanged(class APlayerState* PlayerState, FString NewPlayerName);
    class AHDPlayerState* GetPlayerStateFromData();
    class AHDSquadState* GetParentSquadStateFromData();
    class AHDPlatoonState* GetParentPlatoonStateFromData();
}; // Size: 0x238

class UDeployMenu_SquadSelectionWidgetBase : public UUserWidget
{
    class AHDTeamState* PlatoonTeamState;                                             // 0x0230 (size: 0x8)
    bool bSortPlatoons;                                                               // 0x0238 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0239 (size: 0x7)
    TArray<class UPlatoonListEntry*> CurrentPlatoons;                                 // 0x0240 (size: 0x10)

    void SetupSquadSelection(class AHDTeamState* InPlatoonTeamState);
    void RepopulateSquadSelection();
    void PlatoonPreRemoveFromTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* PlatoonToBeRemoved);
    void PlatoonAddedToTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* NewPlatoon);
    void OnSquadSelectionSet();
    void GeneratePlatoon(class UPlatoonListEntry* PlatoonData);
    void DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32 RemovedPlatoonIdx);
}; // Size: 0x250

class UHDAIAimingHandler : public UHDAIHandlerBase
{
    class UHDAICombatHandler* CombatHandler;                                          // 0x0050 (size: 0x8)
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0058 (size: 0x8)
    class UHDAIBehaviorHandler* BehaviorHandler;                                      // 0x0060 (size: 0x8)
    class UHDAIVocalHandler* VocalHandler;                                            // 0x0068 (size: 0x8)
    class UAIPerceptionComponent* PerceptionComponent;                                // 0x0070 (size: 0x8)
    FVector AimingTargetPoint;                                                        // 0x0078 (size: 0xC)
    FVector CurrentTargetLocation;                                                    // 0x0084 (size: 0xC)
    float CurrentTargetStimulusStrength;                                              // 0x0090 (size: 0x4)
    float CurrentTargetStimulusAge;                                                   // 0x0094 (size: 0x4)
    float RefreshTargetTime;                                                          // 0x0098 (size: 0x4)
    float RefreshTargetRate;                                                          // 0x009C (size: 0x4)
    float NewTargetStimulusStrengthThreshold;                                         // 0x00A0 (size: 0x4)
    float AimingAtTargetAngleThreshold;                                               // 0x00A4 (size: 0x4)
    uint8 bAimingAtTarget;                                                            // 0x00A8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00A9 (size: 0x3)
    float AimingSpeed;                                                                // 0x00AC (size: 0x4)
    float AimingSpeedNear;                                                            // 0x00B0 (size: 0x4)
    float AimingSpeedFar;                                                             // 0x00B4 (size: 0x4)
    float AimingSpeedAngleNear;                                                       // 0x00B8 (size: 0x4)
    float AimingSpeedAngleFar;                                                        // 0x00BC (size: 0x4)
    float AimingSpeedMultiplier;                                                      // 0x00C0 (size: 0x4)
    FRotator RotationRate;                                                            // 0x00C4 (size: 0xC)
    FRotator DefaultRotationRate;                                                     // 0x00D0 (size: 0xC)
    char padding_1[0x4];                                                              // 0x00DC (size: 0x4)
    FHDAIAimingHandlerOnContactStateChanged OnContactStateChanged;                    // 0x00E0 (size: 0x10)
    void AimingHandlerContactSignature(bool bHasContact);
    char padding_2[0xC];                                                              // 0x00F0 (size: 0xC)
    float WeaponAimingDistance;                                                       // 0x00FC (size: 0x4)
    float WeaponMinConeOfFireAngleDegrees;                                            // 0x0100 (size: 0x4)
    float WeaponMaxConeOfFireAngleDegrees;                                            // 0x0104 (size: 0x4)
    uint8 bEnableNoEnemyLookAround;                                                   // 0x0108 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0109 (size: 0x3)
    FVector NoEnemyFocalPoint;                                                        // 0x010C (size: 0xC)
    float NextFocalPointTime;                                                         // 0x0118 (size: 0x4)
    float NextFocalPointIntervalMin;                                                  // 0x011C (size: 0x4)
    float NextFocalPointIntervalMax;                                                  // 0x0120 (size: 0x4)
    float NextFocalPointAngleMin;                                                     // 0x0124 (size: 0x4)
    float NextFocalPointAngleMax;                                                     // 0x0128 (size: 0x4)
    float NextFocalPointDistanceMin;                                                  // 0x012C (size: 0x4)
    float NextFocalPointDistanceMax;                                                  // 0x0130 (size: 0x4)
    FVector ProjectileAimingTossVelocity;                                             // 0x0134 (size: 0xC)
    float ProjectileAimingTime;                                                       // 0x0140 (size: 0x4)
    float ProjectileAimingRate;                                                       // 0x0144 (size: 0x4)
    float ProjectileAimingRateVariation;                                              // 0x0148 (size: 0x4)

    bool SuggestProjectileVelocity(FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float TossSpeed);
    bool ShouldChangeNoEnemyFocalPoint();
    void SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround);
    void MakeNoEnemyFocalPoint();
    bool IsCandidateTarget(const class AActor* ActorToCheck);
    bool IsAimingAtTarget();
    bool HasValidCustomAimingTarget();
    FVector GetNoEnemyFocalPoint();
    bool GetIsNewTargetMoreRelevant(float OldTargetStrength, float NewTargetStrength);
    bool GetEnableNoEnemyLookAround();
    void GetActorStimulusData(const class AActor* InActor, FVector& OutLocation, float& OutStrength, float& OutAge);
    void EstablishNewTargetFromPerception(const TSubclassOf<class UAISense>& SenseToUse);
    bool CheckForTarget(class AActor* TargetActor, FAIStimulus Stimulus);
    void CalcAimingDirection();
    void AimAtCurrentTarget();
}; // Size: 0x150

class UHDAIBehDecision_MoveCloser : public UHDAIBehaviorDecisionBase
{
    char padding_0[0x58];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x58

class UHDAIBehState_Attacking : public UHDAIBehaviorStateBase
{
    uint8 bAttackingTimerStarted;                                                     // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    float AttackingEndTime;                                                           // 0x005C (size: 0x4)
    float AttackingTimeMin;                                                           // 0x0060 (size: 0x4)
    float AttackingTimeMax;                                                           // 0x0064 (size: 0x4)
    class UHDAIBehState_BasicAASCombat* CombatState;                                  // 0x0068 (size: 0x8)

    void HandleAttacking();
}; // Size: 0x70

class UHDAIBehState_BasicAAS : public UHDAIBehaviorStateBase
{
    class UHDAICombatHandler* CombatHandler;                                          // 0x0058 (size: 0x8)
    class UHDAIBehaviorHandler* BehaviorHandler;                                      // 0x0060 (size: 0x8)
    class UHDAIGroupBehaviorHandler* GroupHandler;                                    // 0x0068 (size: 0x8)
    class UHDAICaptureHandler* CaptureHandler;                                        // 0x0070 (size: 0x8)
    class UHDAIBehaviorStateBase* CombatState;                                        // 0x0078 (size: 0x8)
    class UHDAIBehaviorStateBase* CaptureState;                                       // 0x0080 (size: 0x8)
    class UHDAIBehaviorStateBase* IdleState;                                          // 0x0088 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> CombatStateClass;                       // 0x0090 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> CaptureStateClass;                      // 0x0098 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> IdleStateClass;                         // 0x00A0 (size: 0x8)
    float MinDistanceToStartCombatState;                                              // 0x00A8 (size: 0x4)

    void StartCombatState(FVector InCombatTarget, FVector InNavigationAnchor);
    void StartCombatRepositioning(FVector InMoveTarget);
    void StartCaptureState();
    void SelectBehaviorState();
}; // Size: 0xB0

class UHDAIBehState_BasicAASCapture : public UHDAIBehaviorStateBase
{
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0058 (size: 0x8)
    class UHDAICaptureHandler* CaptureHandler;                                        // 0x0060 (size: 0x8)
    class UHDAIGroupBehaviorHandler* GroupHandler;                                    // 0x0068 (size: 0x8)
    uint8 bIsSprinting;                                                               // 0x0070 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0071 (size: 0x3)
    float SprintTimeMin;                                                              // 0x0074 (size: 0x4)
    float SprintTimeMax;                                                              // 0x0078 (size: 0x4)
    float SprintTimeEnd;                                                              // 0x007C (size: 0x4)
    float SprintStaminaThresholdMin;                                                  // 0x0080 (size: 0x4)
    float SprintStaminaThresholdMax;                                                  // 0x0084 (size: 0x4)
    float SprintStaminaThreshold;                                                     // 0x0088 (size: 0x4)
    float SprintStaminaMin;                                                           // 0x008C (size: 0x4)
    float SprintLookAroundTimeMin;                                                    // 0x0090 (size: 0x4)
    float SprintLookAroundTimeMax;                                                    // 0x0094 (size: 0x4)
    float SprintLookAroundTimeEnd;                                                    // 0x0098 (size: 0x4)

    void StopSprinting();
    void StartSprinting();
    void StartCapturingTheObjective();
    void PatrolAtObjective();
    void LoneWolfDecisionMaking();
    void HandleSprinting();
    void GroupMemberDecisionMaking();
    void GroupLeaderDecisionMaking();
    void AdvanceToObjective();
}; // Size: 0xA0

class UHDAIBehState_BasicAASCombat : public UHDAIBehaviorStateBase
{
    class UHDAICombatHandler* CombatHandler;                                          // 0x0058 (size: 0x8)
    class UHDAIBehaviorHandler* BehaviorHandler;                                      // 0x0060 (size: 0x8)
    class UHDAIGroupBehaviorHandler* GroupHandler;                                    // 0x0068 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0070 (size: 0xC)
    FVector AttackSpot;                                                               // 0x007C (size: 0xC)
    FVector SafeSpot;                                                                 // 0x0088 (size: 0xC)
    uint8 bSafeSpotIsOpen;                                                            // 0x0094 (size: 0x1)
    uint8 bCurrentLocationIsSafe;                                                     // 0x0094 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0095 (size: 0x3)
    float MinDistanceBetweenAttackAndSafeSpot;                                        // 0x0098 (size: 0x4)
    float ExitCombatStateTimerMin;                                                    // 0x009C (size: 0x4)
    float ExitCombatStateTimerMax;                                                    // 0x00A0 (size: 0x4)
    float TimeToExitCombatState;                                                      // 0x00A4 (size: 0x4)
    char padding_1[0x8];                                                              // 0x00A8 (size: 0x8)
    class UHDAIBehaviorStateBase* FindAttackSpotState;                                // 0x00B0 (size: 0x8)
    class UHDAIBehaviorStateBase* FindSafeSpotState;                                  // 0x00B8 (size: 0x8)
    class UHDAIBehaviorStateBase* AttackingState;                                     // 0x00C0 (size: 0x8)
    class UHDAIBehaviorStateBase* SafespottingState;                                  // 0x00C8 (size: 0x8)
    class UHDAIBehaviorStateBase* RepositionState;                                    // 0x00D0 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> FindSafeSpotClass;                      // 0x00D8 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> FindAttackSpotClass;                    // 0x00E0 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> AttackingClass;                         // 0x00E8 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> SafespottingClass;                      // 0x00F0 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> RepositionClass;                        // 0x00F8 (size: 0x8)
    TArray<class UHDAIBehaviorDecisionBase*> CombatRepositioningDecisions;            // 0x0100 (size: 0x10)

    void StartSafespotting();
    void StartCombatRepositioning(FVector InMoveTarget);
    void StartAttacking();
    void ProcessCombatLocations();
    bool IsValidSafeSpot(const FVector& InSafeSpot);
    bool IsValidAttackSpot(const FVector& InAttackSpot);
    bool HandleExitCombatStateTimer();
    void HandleCombatRepositioning();
    void FindSafeSpot();
    void FindAttackSpot();
}; // Size: 0x110

class UHDAIBehState_BasicAASIdle : public UHDAIBehaviorStateBase
{
    char padding_0[0x58];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x58

class UHDAIBehState_FindAttackSpot : public UHDAIBehaviorStateBase
{
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0058 (size: 0x8)
    FVector FindAttackSpotStartLocation;                                              // 0x0060 (size: 0xC)
    FVector FindAttackSpotEndLocation;                                                // 0x006C (size: 0xC)
    FVector InitialDirection;                                                         // 0x0078 (size: 0xC)
    float InitialDirectionRandomizationAngle;                                         // 0x0084 (size: 0x4)
    float FindAttackSpotMaxDistanceMin;                                               // 0x0088 (size: 0x4)
    float FindAttackSpotMaxDistanceMax;                                               // 0x008C (size: 0x4)
    int32 NumOfRandomAttemptsRemaining;                                               // 0x0090 (size: 0x4)
    int32 MaxNumOfRandomAttempts;                                                     // 0x0094 (size: 0x4)
    float RandomAttemptNavRadius;                                                     // 0x0098 (size: 0x4)
    uint8 bIsAtLocation;                                                              // 0x009C (size: 0x1)
    char padding_0[0x3];                                                              // 0x009D (size: 0x3)
    float WaitEndTime;                                                                // 0x00A0 (size: 0x4)
    float WaitTimeMin;                                                                // 0x00A4 (size: 0x4)
    float WaitTimeMax;                                                                // 0x00A8 (size: 0x4)
    uint8 bAutoUpdateSafeSpot;                                                        // 0x00AC (size: 0x1)
    char padding_1[0x3];                                                              // 0x00AD (size: 0x3)
    class UHDAIBehState_BasicAASCombat* CombatState;                                  // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UHDAIBehState_FindSafeSpot : public UHDAIBehaviorStateBase
{
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0058 (size: 0x8)
    class UHDAICombatHandler* CombatHandler;                                          // 0x0060 (size: 0x8)
    class UHDAIAimingHandler* AimingHandler;                                          // 0x0068 (size: 0x8)
    class AHDPlayerCharacter* OwnerChar;                                              // 0x0070 (size: 0x8)
    FVector FindSafeSpotStartLocation;                                                // 0x0078 (size: 0xC)
    FVector FindSafeSpotEndLocation;                                                  // 0x0084 (size: 0xC)
    FVector InitialDirection;                                                         // 0x0090 (size: 0xC)
    float InitialDirectionRandomizationAngle;                                         // 0x009C (size: 0x4)
    float FindSafeSpotMaxDistanceMin;                                                 // 0x00A0 (size: 0x4)
    float FindSafeSpotMaxDistanceMax;                                                 // 0x00A4 (size: 0x4)
    int32 NumOfRandomAttemptsRemaining;                                               // 0x00A8 (size: 0x4)
    int32 MaxNumOfRandomAttempts;                                                     // 0x00AC (size: 0x4)
    float RandomAttemptNavRadius;                                                     // 0x00B0 (size: 0x4)
    uint8 bIsAtLocation;                                                              // 0x00B4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00B5 (size: 0x3)
    float WaitEndTime;                                                                // 0x00B8 (size: 0x4)
    float WaitTimeMin;                                                                // 0x00BC (size: 0x4)
    float WaitTimeMax;                                                                // 0x00C0 (size: 0x4)
    uint8 bAutoUpdateAttackSpot;                                                      // 0x00C4 (size: 0x1)
    uint8 bSprintWhileFindingSafeSpot;                                                // 0x00C4 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00C5 (size: 0x3)
    class UHDAIBehState_BasicAASCombat* CombatState;                                  // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UHDAIBehState_Reposition : public UHDAIBehaviorStateBase
{
    FVector MoveDestination;                                                          // 0x0058 (size: 0xC)
    char padding_0[0x4];                                                              // 0x0064 (size: 0x4)
    class UHDAIBehState_BasicAASCombat* CombatState;                                  // 0x0068 (size: 0x8)
    uint8 bIsSprinting;                                                               // 0x0070 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0071 (size: 0x3)
    float SprintTimeMin;                                                              // 0x0074 (size: 0x4)
    float SprintTimeMax;                                                              // 0x0078 (size: 0x4)
    float SprintTimeEnd;                                                              // 0x007C (size: 0x4)
    float SprintStaminaThresholdMin;                                                  // 0x0080 (size: 0x4)
    float SprintStaminaThresholdMax;                                                  // 0x0084 (size: 0x4)
    float SprintStaminaThreshold;                                                     // 0x0088 (size: 0x4)
    float SprintStaminaMin;                                                           // 0x008C (size: 0x4)
    float SprintLookAroundTimeMin;                                                    // 0x0090 (size: 0x4)
    float SprintLookAroundTimeMax;                                                    // 0x0094 (size: 0x4)
    float SprintLookAroundTimeEnd;                                                    // 0x0098 (size: 0x4)

    void StopSprinting();
    void StartSprinting();
    void HandleSprinting();
}; // Size: 0xA0

class UHDAIBehState_SafeSpotting : public UHDAIBehaviorStateBase
{
    uint8 bSafespottingTimerStarted;                                                  // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    float SafespottingEndTime;                                                        // 0x005C (size: 0x4)
    float SafespottingTimeMin;                                                        // 0x0060 (size: 0x4)
    float SafespottingTimeMax;                                                        // 0x0064 (size: 0x4)
    class UHDAIBehState_BasicAASCombat* CombatState;                                  // 0x0068 (size: 0x8)

    void HandleSafeSpotting();
}; // Size: 0x70

class UHDAIBehaviorDecisionBase : public UObject
{
    class AHDAIController* Controller;                                                // 0x0028 (size: 0x8)
    class UHDGOAPComponent* GOAPComponent;                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

class UHDAIBehaviorHandler : public UHDAIHandlerBase
{
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0050 (size: 0x8)
    class UHDAICombatHandler* CombatHandler;                                          // 0x0058 (size: 0x8)
    class UHDAIAimingHandler* AimingHandler;                                          // 0x0060 (size: 0x8)
    class UHDAIVocalHandler* VocalHandler;                                            // 0x0068 (size: 0x8)
    class UHDAICaptureHandler* CaptureHandler;                                        // 0x0070 (size: 0x8)
    class UHDAIGroupBehaviorHandler* GroupHandler;                                    // 0x0078 (size: 0x8)
    float SuppressionThreatLevel;                                                     // 0x0080 (size: 0x4)
    float SuppressionLevelPerShot;                                                    // 0x0084 (size: 0x4)
    float SuppressionThreatThreshold;                                                 // 0x0088 (size: 0x4)
    float SuppressionFalloff;                                                         // 0x008C (size: 0x4)
    float SuppressionTime;                                                            // 0x0090 (size: 0x4)
    float SuppressionFallingOffDelay;                                                 // 0x0094 (size: 0x4)
    float BeingHitThreatLevel;                                                        // 0x0098 (size: 0x4)
    float BeingHitThreatThreshold;                                                    // 0x009C (size: 0x4)
    float BeingHitFalloff;                                                            // 0x00A0 (size: 0x4)
    float BeingHitThreatLevelSpikeProbability;                                        // 0x00A4 (size: 0x4)
    float BeingHitThreatLevelSpikeAmount;                                             // 0x00A8 (size: 0x4)
    float BeingHitFallingOffDelay;                                                    // 0x00AC (size: 0x4)
    float BeingHitTime;                                                               // 0x00B0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x00B4 (size: 0x4)
    class UHDAIBehaviorStateBase* CurrentBehaviorState;                               // 0x00B8 (size: 0x8)
    TSubclassOf<class UHDAIBehaviorStateBase> DefaultBehaviorStateClass;              // 0x00C0 (size: 0x8)
    char padding_1[0x4];                                                              // 0x00C8 (size: 0x4)
    float MinDistanceToStartCombatState;                                              // 0x00CC (size: 0x4)
    uint8 bIsInCombat;                                                                // 0x00D0 (size: 0x1)

    void UpdateCurrentBehaviorState(float DeltaTime);
    void StartMoveToObjectiveBehaviorState();
    void StartCombatRepositioning(FVector InMoveTarget);
    void StartCombatBehaviorState(FVector InCombatTarget, FVector InNavigationAnchor);
    void ReceiveSuppression();
    void ReceiveHitDamage();
    void OnOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void HandleBehaviorStates(float DeltaTime);
    bool GetIsUnderSuppression();
    bool GetIsBeingHit();
    void ExitCurrentBehaviorState();
    void EnterCurrentBehaviorState();
    void CalcThreatLevels();
}; // Size: 0xD8

class UHDAIBehaviorStateBase : public UObject
{
    class AHDAIController* Controller;                                                // 0x0028 (size: 0x8)
    class UHDGOAPComponent* GOAPComponent;                                            // 0x0030 (size: 0x8)
    uint8 bCanEverTick;                                                               // 0x0038 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0039 (size: 0x3)
    float StateUpdateTime;                                                            // 0x003C (size: 0x4)
    float StateUpdateRate;                                                            // 0x0040 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0044 (size: 0x4)
    class UHDAIBehaviorStateBase* CurrentSubState;                                    // 0x0048 (size: 0x8)
    class UHDAIBehaviorStateBase* CurrentParentState;                                 // 0x0050 (size: 0x8)

    void UpdateState(float DeltaTime);
    bool UpdateCurrentSubState(float DeltaTime);
    bool SwitchToSubState(class UHDAIBehaviorStateBase* InNewState);
    void ResetUpdateTimer(float InTimerInterval);
    void Init(class AHDAIController* InController, class UHDGOAPComponent* InGOAPComponent, class UHDAIBehaviorStateBase* InParentState);
    void ExitState();
    bool ExitCurrentSubState();
    void EnterState();
    bool CanUpdateState(float DeltaTime);
    bool CanExitState();
    bool CanEnterState();
}; // Size: 0x58

class UHDAICaptureHandler : public UHDAIHandlerBase
{
    class AHDBaseCapturePoint* CurrentCP;                                             // 0x0050 (size: 0x8)
    EHDAICaptureMode CurrentCaptureMode;                                              // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    float AICaptureModePreference;                                                    // 0x005C (size: 0x4)
    int32 TotalNumberOfCapturePoints;                                                 // 0x0060 (size: 0x4)

    bool ShouldEstablishNewControlPoint();
    void SetCurrentCP(class AHDBaseCapturePoint* InCurrentCP);
    void SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode);
    int32 GetTotalNumberOfCapturePoints();
    class AActor* GetStartSpotClosestToControlPoint(class AActor* InCapturePoint);
    FVector GetCurrentCPLocation();
    bool FindControlPointToCapture(class AHDBaseCapturePoint*& OutFoundCP);
    class AHDBaseCapturePoint* FindControlPointRandom(const TArray<class AHDBaseCapturePoint*>& CPs);
    class AHDBaseCapturePoint* FindControlPointClosestToPawn(const TArray<class AHDBaseCapturePoint*>& CPs);
    TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV3(EHDAICaptureMode InCaptureMode);
    TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV2(EHDAICaptureMode InCaptureMode);
    TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV1(EHDAICaptureMode InCaptureMode);
    TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode);
    bool EstablishNewControlPoint();
}; // Size: 0x68

class UHDAICombatHandler : public UHDAIHandlerBase
{
    class UHDAIBehaviorHandler* BehaviorHandler;                                      // 0x0050 (size: 0x8)
    class UHDAIVocalHandler* VocalHandler;                                            // 0x0058 (size: 0x8)
    class AActor* Enemy;                                                              // 0x0060 (size: 0x8)
    char padding_0[0x4];                                                              // 0x0068 (size: 0x4)
    FVector CombatTargetLocation;                                                     // 0x006C (size: 0xC)
    FVector CustomCombatTargetLocation;                                               // 0x0078 (size: 0xC)
    EHDAICombatTargetType CombatTargetLocationType;                                   // 0x0084 (size: 0x1)
    uint8 bDoNotAttack;                                                               // 0x0085 (size: 0x1)
    uint8 bWeaponAutoReload;                                                          // 0x0085 (size: 0x1)
    uint8 bWeaponMovementFire;                                                        // 0x0085 (size: 0x1)
    uint8 bWeaponHasAmmo;                                                             // 0x0085 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0086 (size: 0x2)
    float WeaponNextFireTime;                                                         // 0x0088 (size: 0x4)
    float AttackRateMin;                                                              // 0x008C (size: 0x4)
    float AttackRateMax;                                                              // 0x0090 (size: 0x4)
    float BurstAttackProbability;                                                     // 0x0094 (size: 0x4)
    int32 BurstAttackNumberMin;                                                       // 0x0098 (size: 0x4)
    int32 BurstAttackNumberMax;                                                       // 0x009C (size: 0x4)
    int32 CurrentBurstAttackNumber;                                                   // 0x00A0 (size: 0x4)
    float WeaponStopFireTime;                                                         // 0x00A4 (size: 0x4)
    float WeaponStopFireTimeMin;                                                      // 0x00A8 (size: 0x4)
    float WeaponStopFireTimeMax;                                                      // 0x00AC (size: 0x4)
    uint8 bWeaponInfiniteAmmo;                                                        // 0x00B0 (size: 0x1)
    uint8 bWeaponInfiniteClipAmmo;                                                    // 0x00B0 (size: 0x1)
    uint8 bIgnoreFriendlySuppression;                                                 // 0x00B0 (size: 0x1)
    uint8 bIgnoreFriendlyHits;                                                        // 0x00B0 (size: 0x1)
    char padding_2[0x7];                                                              // 0x00B1 (size: 0x7)
    FHDAICombatHandlerOnReload OnReload;                                              // 0x00B8 (size: 0x10)
    void CombatHandlerReloadSignature();
    FHDAICombatHandlerOnReceiveSuppression OnReceiveSuppression;                      // 0x00C8 (size: 0x10)
    void CombatHandlerReceiveSuppressionSignature();
    FHDAICombatHandlerOnReceiveHitDamage OnReceiveHitDamage;                          // 0x00D8 (size: 0x10)
    void CombatHandlerReceiveHitDamageSignature();
    TArray<FHDAISuppressionSource> SuppressionSources;                                // 0x00E8 (size: 0x10)
    int32 MaxNumSuppressionSources;                                                   // 0x00F8 (size: 0x4)
    float SuppressionSourceTimeThreshold;                                             // 0x00FC (size: 0x4)
    float SuppressionSourceUpdateRate;                                                // 0x0100 (size: 0x4)
    float SuppressionSourceUpdateTime;                                                // 0x0104 (size: 0x4)
    class UHDKit* CurrentKit;                                                         // 0x0108 (size: 0x8)
    ESpecificItemType CurrentSpecificItemType;                                        // 0x0110 (size: 0x1)
    char padding_3[0x7];                                                              // 0x0111 (size: 0x7)
    TArray<FHDAIItemData> EquipmentReferences;                                        // 0x0118 (size: 0x10)
    float EquipmentHandlingTime;                                                      // 0x0128 (size: 0x4)
    float EquipmentHandlingRate;                                                      // 0x012C (size: 0x4)
    float EquipmentHandlingRateVariation;                                             // 0x0130 (size: 0x4)
    uint8 bSpecialtyItemInUse;                                                        // 0x0134 (size: 0x1)
    uint8 bProjectileWeaponInUse;                                                     // 0x0134 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0135 (size: 0x3)
    float AfterEquipCooldownTime;                                                     // 0x0138 (size: 0x4)
    float SpecialtyItemUseTimeLimit;                                                  // 0x013C (size: 0x4)
    float AfterSpecialtyItemUsedTimeLimit;                                            // 0x0140 (size: 0x4)
    char padding_5[0x4];                                                              // 0x0144 (size: 0x4)
    TMap<class ESpecificItemType, class FHDAISpecificItemTypeAttackData> ItemAttackData; // 0x0148 (size: 0x50)
    FHDAISpecificItemTypeAttackData DefaultItemAttackData;                            // 0x0198 (size: 0x2C)
    float GrenadeLauncherRangeMin;                                                    // 0x01C4 (size: 0x4)
    float GrenadeLauncherRangeMax;                                                    // 0x01C8 (size: 0x4)
    float GrenadeLauncherChance;                                                      // 0x01CC (size: 0x4)
    float RocketLauncherRangeMin;                                                     // 0x01D0 (size: 0x4)
    float RocketLauncherRangeMax;                                                     // 0x01D4 (size: 0x4)
    float RocketLauncherChance;                                                       // 0x01D8 (size: 0x4)
    float FragGrenadeRangeMin;                                                        // 0x01DC (size: 0x4)
    float FragGrenadeRangeMax;                                                        // 0x01E0 (size: 0x4)
    float FragGrenadeChance;                                                          // 0x01E4 (size: 0x4)
    float SmokeGrenadeRangeMin;                                                       // 0x01E8 (size: 0x4)
    float SmokeGrenadeChance;                                                         // 0x01EC (size: 0x4)

    void UpdateSuppressionSources();
    void UpdateEquipmentHandling();
    void UpdateAttackParameters();
    void StopUsingSpecialtyItem();
    void StopAttack();
    void StartAttack();
    void SetupEquipmentReferences();
    void SetNextAttackTime();
    void SetItemAttackParameters(const FHDAISpecificItemTypeAttackData& InAttackData);
    void SetEnemy(class AActor* NewEnemy);
    void Reload(class AHDBaseWeapon* InWeapon);
    void ReceiveSuppression(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void ReceiveHitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void PauseAttack();
    bool IsFiring();
    bool HasValidEnemy(bool bAliveCheck);
    bool HasValidCustomCombatTargetLocation();
    bool HasValidCombatTargetLocation();
    bool HasAmmoLoaded();
    FVector GetOldestSuppressionSource();
    FVector GetMostRelevantSuppressionSource();
    void ClearCustomCombatTargetLocation();
    void ClearCombatTargetLocation();
    bool CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck);
    void AddSuppressionSource(FHDAISuppressionSource InSuppressionSource);
}; // Size: 0x1F0

class UHDAIGroupBehaviorHandler : public UHDAIHandlerBase
{
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0050 (size: 0x8)
    class UHDAICaptureHandler* CaptureHandler;                                        // 0x0058 (size: 0x8)
    class AHDPlayerState* PlayerState;                                                // 0x0060 (size: 0x8)
    uint8 bIsGroupLeader;                                                             // 0x0068 (size: 0x1)
    uint8 bIsGroupMember;                                                             // 0x0068 (size: 0x1)
    uint8 bGroupDataIsSet;                                                            // 0x0068 (size: 0x1)
    uint8 bGroupDataIsSynchronized;                                                   // 0x0068 (size: 0x1)
    uint8 bLeaderIsHuman;                                                             // 0x0068 (size: 0x1)
    uint8 bIsRespawned;                                                               // 0x0068 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0069 (size: 0x3)
    int32 NumValidGroupMembers;                                                       // 0x006C (size: 0x4)
    int32 NumGroupMembersOnPoint;                                                     // 0x0070 (size: 0x4)
    uint8 bWaitingForGroupMembers;                                                    // 0x0074 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0075 (size: 0x3)
    float WaitingForMembersStartTime;                                                 // 0x0078 (size: 0x4)
    uint8 bIsGroupWaiting;                                                            // 0x007C (size: 0x1)
    char padding_2[0x3];                                                              // 0x007D (size: 0x3)
    float GroupWaitTimeDuration;                                                      // 0x0080 (size: 0x4)
    float GroupWaitTimeEnd;                                                           // 0x0084 (size: 0x4)
    float WaitingTimePerGroupMember;                                                  // 0x0088 (size: 0x4)
    float WaitingRadiusMultiplier;                                                    // 0x008C (size: 0x4)
    int32 MinNumGroupMembersOnPoint;                                                  // 0x0090 (size: 0x4)
    float AdvanceWaitTimeDurationMin;                                                 // 0x0094 (size: 0x4)
    float AdvanceWaitTimeDurationMax;                                                 // 0x0098 (size: 0x4)
    float PatrolWaitTimeDurationMin;                                                  // 0x009C (size: 0x4)
    float PatrolWaitTimeDurationMax;                                                  // 0x00A0 (size: 0x4)
    int32 FormationIndex;                                                             // 0x00A4 (size: 0x4)
    FVector FormationOffset;                                                          // 0x00A8 (size: 0xC)
    float GroupFormationRadius;                                                       // 0x00B4 (size: 0x4)
    float GroupFormationSlotRadius;                                                   // 0x00B8 (size: 0x4)
    float GroupFormationSlotDistance;                                                 // 0x00BC (size: 0x4)
    TArray<FVector> FormationSlots;                                                   // 0x00C0 (size: 0x10)
    float FollowHumanLeaderTime;                                                      // 0x00D0 (size: 0x4)
    float FollowHumanLeaderPatrolTime;                                                // 0x00D4 (size: 0x4)
    FVector FollowHumanLeaderLastKnownLocation;                                       // 0x00D8 (size: 0xC)
    uint8 bEnableFollowHumanLeader;                                                   // 0x00E4 (size: 0x1)
    char padding_3[0x3];                                                              // 0x00E5 (size: 0x3)
    float FollowHumanLeaderInterval;                                                  // 0x00E8 (size: 0x4)
    float FollowHumanLeaderVelocityMultiplier;                                        // 0x00EC (size: 0x4)
    float FollowHumanLeaderAcceptanceRadius;                                          // 0x00F0 (size: 0x4)
    float FollowHumanLeaderRange;                                                     // 0x00F4 (size: 0x4)
    float FollowHumanLeaderPatrolTimeThreshold;                                       // 0x00F8 (size: 0x4)
    int32 NumGroupMembersInCombat;                                                    // 0x00FC (size: 0x4)

    void SyncGroupData(const FHDAIGroupData& InGroupData);
    void StartGroupWaitTime();
    void SetupGroupData();
    void SetGroupParams();
    bool RequestGroupDataSync();
    void OnOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    bool IsGroupWaitTimeOver();
    void InformLeaderOnContact(FVector InCombatTarget, FVector InNavigationAnchor);
    void InformGroupOnLostContact();
    void InformGroupOnContact(FVector InCombatTarget, FVector InNavigationAnchor);
    int32 GetNumValidGroupMembers();
    int32 GetNumGroupMembersInCombat();
    TArray<class AHDAIController*> GetGroupMembers();
    class AHDPlayerState* GetGroupLeader();
    FHDAIGroupData GetGroupData();
    void FollowHumanLeader();
    void CountGroupMembers();
    void BroadcastGroupData();
    bool AllGroupMembersAreOnPoint();
}; // Size: 0x100

class UHDAIHandlerBase : public UObject
{
    class AHDAIController* Controller;                                                // 0x0030 (size: 0x8)
    class UHDGOAPComponent* GOAPComponent;                                            // 0x0038 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0040 (size: 0x8)
    class UHDAIHandlerBase* HandlerDuplicate;                                         // 0x0048 (size: 0x8)

}; // Size: 0x50

class UHDAINavigationHandler : public UHDAIHandlerBase
{
    class UNavigationSystemV1* NavSystem;                                             // 0x0050 (size: 0x8)
    bool bMoving;                                                                     // 0x0058 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0059 (size: 0x3)
    FVector DesiredLocation;                                                          // 0x005C (size: 0xC)
    float AcceptanceRadius;                                                           // 0x0068 (size: 0x4)
    uint8 bIgnoreZeroVectorGoto;                                                      // 0x006C (size: 0x1)
    char padding_1[0x3];                                                              // 0x006D (size: 0x3)
    TArray<FHDAIMasterNavPoint> MasterNavPath;                                        // 0x0070 (size: 0x10)
    float MasterNavPathLength;                                                        // 0x0080 (size: 0x4)
    FVector TargetNavPoint;                                                           // 0x0084 (size: 0xC)
    int32 TargetNavPointIndex;                                                        // 0x0090 (size: 0x4)
    FVector NavigationAnchorPoint;                                                    // 0x0094 (size: 0xC)
    float RemainingNavPathLength;                                                     // 0x00A0 (size: 0x4)
    uint8 bPawnIsAtTheEndOfPath;                                                      // 0x00A4 (size: 0x1)
    char padding_2[0x3];                                                              // 0x00A5 (size: 0x3)
    float NavPathSegmentLengthMin;                                                    // 0x00A8 (size: 0x4)
    float NavPathSegmentLengthMax;                                                    // 0x00AC (size: 0x4)
    uint8 bCompensatePartialPathForGroupFormationRadius;                              // 0x00B0 (size: 0x1)
    char padding_3[0x3];                                                              // 0x00B1 (size: 0x3)
    float PartialPathGroupRadiusMultiplier;                                           // 0x00B4 (size: 0x4)
    float NavigationAnchorRandomRange;                                                // 0x00B8 (size: 0x4)
    char padding_4[0x4];                                                              // 0x00BC (size: 0x4)
    FHDAINavigationHandlerOnMoveToLocationFailed OnMoveToLocationFailed;              // 0x00C0 (size: 0x10)
    void NavigationHandlerMoveToFailedSignature();
    float MoveToFailedTime;                                                           // 0x00D0 (size: 0x4)
    float MoveToFailedTimeDelay;                                                      // 0x00D4 (size: 0x4)
    float MoveToFailedRandomizationRadiusBase;                                        // 0x00D8 (size: 0x4)
    float MoveToFailedRandomizationRadiusIncrement;                                   // 0x00DC (size: 0x4)
    float MaxMoveToFailedRandomizationRadius;                                         // 0x00E0 (size: 0x4)
    int32 MoveToFailedAttemptNumber;                                                  // 0x00E4 (size: 0x4)
    float MoveToFailedAttemptResetTimer;                                              // 0x00E8 (size: 0x4)
    uint8 bMoveToFailedIsBeingHandled;                                                // 0x00EC (size: 0x1)
    char padding_5[0x3];                                                              // 0x00ED (size: 0x3)
    class AHDBaseCapturePoint* SavedCapturePoint;                                     // 0x00F0 (size: 0x8)
    float StuckCheckTime;                                                             // 0x00F8 (size: 0x4)
    float StuckCheckInterval;                                                         // 0x00FC (size: 0x4)
    float StuckCheckDistance;                                                         // 0x0100 (size: 0x4)
    FVector StuckCheckLastLocation;                                                   // 0x0104 (size: 0xC)
    uint8 bEnableRVOAvoidance;                                                        // 0x0110 (size: 0x1)
    char padding_6[0x3];                                                              // 0x0111 (size: 0x3)
    float RVOAvoidanceConsiderationRadius;                                            // 0x0114 (size: 0x4)
    float RVOAvoidanceWeight;                                                         // 0x0118 (size: 0x4)

    void SetupRVOAvoidance();
    void SetDesiredLocation(const FVector& InDesiredLocation);
    bool PointsAreEqualXY(const FVector& Vector1, const FVector& Vector2, float Tolerance);
    void OnMoveToFailed();
    void MoveToLocationFailed();
    bool MakePathToDesiredLocation();
    bool MakeNewMasterNavPath(FVector InStart, FVector InDestination);
    void MakeNavPathSegment();
    bool IsPawnAtDestination();
    bool IsNavigationPossible();
    bool IsNavDataValidForAllControlPoints();
    bool IsMoving();
    void HandleMoveToFailed();
    void GotoLocationRandomized(const FVector& InLocation, float InRandomizationRadius);
    void GotoLocation(const FVector& InLocation);
    void FixVectorValuesNaN(FVector& InVector, bool bRandomize);
    bool FindNavLocationInsideControlPoint(class AHDBaseCapturePoint* CP, FVector& OutNavLoc);
    bool CheckPawnStuckStatus();
}; // Size: 0x120

class UHDAIPerceptionComponent : public UActorComponent
{
    class AHDPlayerCharacter* OwnerPlayer;                                            // 0x00B0 (size: 0x8)
    uint8 bEnableAdvancedLineTracing;                                                 // 0x00B8 (size: 0x1)
    char padding_0[0x3];                                                              // 0x00B9 (size: 0x3)
    float ObserverSightRadius;                                                        // 0x00BC (size: 0x4)
    float ObserverLoseSightRadius;                                                    // 0x00C0 (size: 0x4)
    float DistanceToObserverRangeFar;                                                 // 0x00C4 (size: 0x4)
    float DistanceToObserverRangeNear;                                                // 0x00C8 (size: 0x4)
    uint8 bComplexSightLineTrace;                                                     // 0x00CC (size: 0x1)
    char padding_1[0x3];                                                              // 0x00CD (size: 0x3)
    float ShoulderLocationFactor;                                                     // 0x00D0 (size: 0x4)
    float RangeFactorWeight;                                                          // 0x00D4 (size: 0x4)
    float StanceFactorWeight;                                                         // 0x00D8 (size: 0x4)
    float MovementFactorWeight;                                                       // 0x00DC (size: 0x4)
    float StanceFactorMaxValue;                                                       // 0x00E0 (size: 0x4)
    float StanceFactorMinValue;                                                       // 0x00E4 (size: 0x4)
    float OwnerMaxMovementSpeed;                                                      // 0x00E8 (size: 0x4)
    float OwnerDefaultHalfHeight;                                                     // 0x00EC (size: 0x4)

    bool CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const class AActor* IgnoreActor);
    float CalcSightStrength(const float Distance);
}; // Size: 0xF0

class UHDAIVocalHandler : public UHDAIHandlerBase
{
    class UHDAICombatHandler* CombatHandler;                                          // 0x0050 (size: 0x8)
    uint8 bEnableVocalization;                                                        // 0x0058 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0059 (size: 0x7)
    FAICharacterVocalProfile CurrentProfile;                                          // 0x0060 (size: 0x68)
    uint8 bEnableTimeLimitNotify;                                                     // 0x00C8 (size: 0x1)
    uint8 bFactionOnlyTimeLimit;                                                      // 0x00C8 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00C9 (size: 0x3)
    float TimeLimitNotifyRange;                                                       // 0x00CC (size: 0x4)
    float PitchMultiplier;                                                            // 0x00D0 (size: 0x4)
    float MinPitchMultiplier;                                                         // 0x00D4 (size: 0x4)
    float MaxPitchMultiplier;                                                         // 0x00D8 (size: 0x4)
    float AnySoundTimeLimit;                                                          // 0x00DC (size: 0x4)
    float ContactTimeLimit;                                                           // 0x00E0 (size: 0x4)
    float LostContactTimeLimit;                                                       // 0x00E4 (size: 0x4)
    float ReloadingTimeLimit;                                                         // 0x00E8 (size: 0x4)
    float BeenHitTimeLimit;                                                           // 0x00EC (size: 0x4)
    float UnderSuppressionTimeLimit;                                                  // 0x00F0 (size: 0x4)
    float DeathTimeLimit;                                                             // 0x00F4 (size: 0x4)
    float NextAnySoundTime;                                                           // 0x00F8 (size: 0x4)
    float NextContactTime;                                                            // 0x00FC (size: 0x4)
    float NextLostContactTime;                                                        // 0x0100 (size: 0x4)
    float NextReloadingTime;                                                          // 0x0104 (size: 0x4)
    float NextBeenHitTime;                                                            // 0x0108 (size: 0x4)
    float NextUnderSuppressionTime;                                                   // 0x010C (size: 0x4)
    float NextDeathTime;                                                              // 0x0110 (size: 0x4)

    void VocalizeSuppression();
    void VocalizeReload();
    void VocalizeContact(bool bHasContact);
    void VocalizeBeenHit();
    void Vocalize(EHDAIVocalizationType InVocalType);
    void SetTimeLimit(EHDAIVocalizationType InVocalType);
    void SetPitchMultiplier(float InPitchMultiplier);
    void RandomizePitchMultiplier();
    void PlayVocalSound(EHDAIVocalizationType InVocalType);
    void NotifySurroundingCharacters(EHDAIVocalizationType InVocalType);
}; // Size: 0x118

class UHDAssetManager : public UDFAssetManager
{
    char padding_0[0x440];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x440

class UHDButtonBase : public UUserWidget
{
    FText ButtonText;                                                                 // 0x0230 (size: 0x18)
    class UButton* Button;                                                            // 0x0248 (size: 0x8)

    void UpdateButtonText(const FText& InText);
    void SetButtonText(const FText& InText);
    void HandleButtonClicked();
}; // Size: 0x268

class UHDCheatManager : public UDFCheatManager
{
    char padding_0[0x80];                                                             // 0x0000 (size: 0x0)

    void ToggleIdleSway();
    void ToggleFreeAimADS();
    void ToggleFreeAim();
    void SpawnVehicle();
    void SetMaxFreeAimYawADS(float NewYaw);
    void SetMaxFreeAimYaw(float NewYaw);
    void SetMaxFreeAimPitchADS(float NewPitch);
    void SetMaxFreeAimPitch(float NewPitch);
    void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
    void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
}; // Size: 0x80

class UHDConfirmationDialog : public UDFGameDialog
{
    class UDynamicEntryBox* ButtonsEntryBox;                                          // 0x0248 (size: 0x8)

    void UpdateDialogText(const FText& TitleText, const FText& DescriptionText);
}; // Size: 0x250

class UHDContainsAddressServerFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDEmptyServerFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDFactionInfo : public UDFFactionInfo
{
    TSet<TSoftObjectPtr<UHDKit>> Kits;                                                // 0x0090 (size: 0x50)

}; // Size: 0xE0

class UHDGOAPAct_AttackEnemy : public UHDGOAPActionBase
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPAct_CaptureControlPoint : public UHDGOAPActionBase
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPAct_DefendControlPoint : public UHDGOAPActionBase
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPAct_LoadWeapon : public UHDGOAPActionBase
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPAct_MoveToDesiredLocation : public UHDGOAPActionBase
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPActionBase : public UGOAPAction
{
    char padding_0[0x98];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x98

class UHDGOAPComponent : public UGOAPComponent
{
    class AHDAIController* HDAIOwner;                                                 // 0x0168 (size: 0x8)
    class AHDPlayerCharacter* HDAICharOwner;                                          // 0x0170 (size: 0x8)
    TArray<class UHDAIHandlerBase*> AIHandlers;                                       // 0x0178 (size: 0x10)
    class UHDAINavigationHandler* NavigationHandler;                                  // 0x0188 (size: 0x8)
    class UHDAICaptureHandler* CaptureHandler;                                        // 0x0190 (size: 0x8)
    class UHDAICombatHandler* CombatHandler;                                          // 0x0198 (size: 0x8)
    class UHDAIBehaviorHandler* BehaviorHandler;                                      // 0x01A0 (size: 0x8)
    class UHDAIGroupBehaviorHandler* GroupBehaviorHandler;                            // 0x01A8 (size: 0x8)
    class UHDAIAimingHandler* AimingHandler;                                          // 0x01B0 (size: 0x8)
    class UHDAIVocalHandler* VocalHandler;                                            // 0x01B8 (size: 0x8)
    char padding_0[0x10];                                                             // 0x01C0 (size: 0x10)
    float DecisionFrequency;                                                          // 0x01D0 (size: 0x4)

    void TargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);
    void ResetPlanningTimer();
    bool IsAIActiveInWorld();
    bool IsAIActive();
    class UHDAIHandlerBase* GetAIHandler(TSubclassOf<class UHDAIHandlerBase> HandlerClass);
}; // Size: 0x1D8

class UHDGOAPGoalBase : public UGOAPGoal
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UHDGOAPGoal_CaptureControlPoint : public UHDGOAPGoalBase
{
    class AHDBaseCapturePoint* CPToCaptureCurrent;                                    // 0x0068 (size: 0x8)
    class AHDBaseCapturePoint* CPToCapturePending;                                    // 0x0070 (size: 0x8)

}; // Size: 0x78

class UHDGOAPGoal_EliminateEnemy : public UHDGOAPGoalBase
{
    char padding_0[0x68];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x68

class UHDGameEngine : public UDFGameEngine
{
    char padding_0[0xE30];                                                            // 0x0000 (size: 0x0)
}; // Size: 0xE30

class UHDGameInstance : public UTBGameInstance
{
    class UHDUGCLoadProgressScreen* UGCLoadProgressScreen;                            // 0x02D8 (size: 0x8)
    class UHDScoreboardBase* ScoreboardMenu;                                          // 0x02E0 (size: 0x8)
    TSubclassOf<class UHDUGCLoadProgressScreen> UGCLoadProgressScreenClassPtr;        // 0x02E8 (size: 0x8)
    TSoftClassPtr<UHDUGCLoadProgressScreen> UGCLoadProgressScreenClass;               // 0x02F0 (size: 0x28)

    void UnloadScoreboardMenu();
    void ShowErrorDialog(const FText& Title, const FText& Message);
    void ShowConfirmationDialog(const FText& Title, const FText& Message);
    bool OwnsAppBP(int64 AppID);
    void LoadScoreboardMenu();
    bool HasModsLoaded();
    bool HasDLCBP(int64 DLCAppID);
}; // Size: 0x458

class UHDGameModeDefinition : public UDFGameModeDefinition
{
    TSoftClassPtr<AHDBaseGameMode> GameModeClass;                                     // 0x00E8 (size: 0x28)

}; // Size: 0x110

class UHDGameModsProjectPolicies : public UHDCoreDefaultUGCProjectPolicies
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x30

class UHDGameProjectBuildSettings : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool IsDemoBuild();
}; // Size: 0x28

class UHDGameRulesetBase : public UDFGameRulesetBase
{
    uint8 bUseTickets;                                                                // 0x0058 (size: 0x1)

    void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove);
    void GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd);
    class AHDGameState* GetHDGameState();
    class AHDBaseGameMode* GetHDGameMode();
}; // Size: 0x60

class UHDHasUGCServerFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDJoinGameMenu : public UDFBaseMenu
{
    class UHDServerListView* ServerList;                                              // 0x0238 (size: 0x8)
    TArray<FPrimaryAssetId> MapIds;                                                   // 0x0240 (size: 0x10)

    void ReceiveOnRefreshStart();
    void ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy);
    void OnRefresh(bool bSortAscending, EHDServerListSortBy SortBy);
    void JoinGame(class UHDServerListItemData* ServerItem, FString JoinPassword);
    bool IsUsingDebugServerListings();
}; // Size: 0x280

class UHDKit : public UDFLoadout
{
    TArray<FHDItemEntry> ItemEntries;                                                 // 0x0040 (size: 0x10)
    int32 PrimaryItemSlotNum;                                                         // 0x0050 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0054 (size: 0x4)
    TSubclassOf<class AHDBasePickup_Kit> KitDropPrefabClass;                          // 0x0058 (size: 0x8)
    TArray<class UHDKitPrerequisiteBase*> KitRequirements;                            // 0x0060 (size: 0x10)
    TArray<FDataTableRowHandle> CharacterVariations;                                  // 0x0070 (size: 0x10)
    uint8 bSquadLeaderKit;                                                            // 0x0080 (size: 0x1)
    uint8 bAllowsRallyPointDeployment;                                                // 0x0080 (size: 0x1)
    char padding_1[0x17];                                                             // 0x0081 (size: 0x17)
    FText KitDisplayName;                                                             // 0x0098 (size: 0x18)
    class UTexture2D* KitDisplaySymbol;                                               // 0x00B0 (size: 0x8)

    FDFCharacterVariationDataHandle RandomCharacterVariationDataFromKit();
    bool PlayerCanStartWithKit(const class AController* Player, FText& OutKitDenialReason);
    bool HasKitRequirements();
    bool GetPrimaryItemEntryDisplayIcon(class UTexture2D*& OutDisplayIcon);
    bool GetPrimaryItemEntry(FHDItemEntry& OutPrimaryEntry);
    int32 GetPlayersUsingKit(class UObject* WorldContextObject, TArray<class AHDPlayerState*>& OutPSArray);
    int32 GetNumPlayersUsingKit(class UObject* WorldContextObject);
    bool GetItemEntryDisplayIcon(const FHDItemEntry& ItemEntry, class UTexture2D*& OutDisplayIcon);
    bool GetItemEntryDisplayEquipmentSymbol(const FHDItemEntry& ItemEntry, class UTexture2D*& OutDisplayEquipmentSymbol);
    bool GetItemEntryBySlotNum(const int32 SlotNum, FHDItemEntry& OutEntry);
}; // Size: 0xB8

class UHDKitPrerequisiteBase : public UObject
{
    FText KitDenialReason;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

class UHDKitPrerequisite_AdminOnly : public UHDKitPrerequisiteBase
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UHDKitPrerequisite_AlwaysDisable : public UHDKitPrerequisiteBase
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UHDKitPrerequisite_MinSquadMembers : public UHDKitPrerequisiteBase
{
    int32 MinSquadMembers;                                                            // 0x0040 (size: 0x4)

}; // Size: 0x48

class UHDKitPrerequisite_SquadLeaderOnly : public UHDKitPrerequisiteBase
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UHDKitPrerequisite_SquadSizeLimit : public UHDKitPrerequisiteBase
{
    int32 MaxSquadCount;                                                              // 0x0040 (size: 0x4)

}; // Size: 0x48

class UHDKitPrerequisite_SquadUsageLimit : public UHDKitPrerequisiteBase
{
    int32 MaxSquadMembers;                                                            // 0x0040 (size: 0x4)

}; // Size: 0x48

class UHDKitPrerequisite_TeamSpecific : public UHDKitPrerequisiteBase
{
    EHDTeam RequiredTeam;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

class UHDKitPrerequisite_TeamUsageLimit : public UHDKitPrerequisiteBase
{
    int32 MaxTeamMembers;                                                             // 0x0040 (size: 0x4)

}; // Size: 0x48

class UHDLocalPlayer : public UDFLocalPlayer
{
    char padding_0[0x258];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x258

class UHDModData : public UHDCoreUGCData
{
    TArray<FHDPrimaryAssetSearchPath> PrimaryAssetPathsToScan;                        // 0x0030 (size: 0x10)
    bool bServersideOnlyMod;                                                          // 0x0040 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0041 (size: 0x3)
    uint32 ModDataVersion;                                                            // 0x0044 (size: 0x4)

    bool DoesModPluginUseLegacyMapScanning(FString PluginName);
}; // Size: 0x48

class UHDNavigationSystem : public UDFNavigationSystem
{
    char padding_0[0x538];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x538

class UHDNavigationSystemConfig : public UDFNavigationSystemConfig
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

class UHDOnlineSessionClient : public UDFOnlineSessionClient
{
    char padding_0[0x1A8];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x1A8

class UHDOptionsMenu : public UDFBaseMenu
{
    char padding_0[0x238];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x238

class UHDPasswordProtectedServerFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDPhysicsCollisionHandler : public UDFPhysicsCollisionHandler
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

class UHDPlatoonCreationRuleBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool SatisfiesRule(const class UHDTeamDefinition* TeamDef);
}; // Size: 0x28

class UHDPlatoonInfo : public UPrimaryDataAsset
{
    FPrimaryAssetType PlatoonType;                                                    // 0x0030 (size: 0x8)
    TArray<class UHDPlatoonCreationRuleBase*> CreationRules;                          // 0x0038 (size: 0x10)
    FText DisplayName;                                                                // 0x0048 (size: 0x18)
    int32 MaxSquadLimit;                                                              // 0x0060 (size: 0x4)

    bool ShouldCreateForTeam(const class UHDTeamDefinition* TeamDef);
}; // Size: 0x68

class UHDPlatoonStateCreationPayload : public UObject
{
    FHDPlatoonCreationParams CreationParams;                                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHDPlayerCharacterAnimInst_FPP : public UHDPlayerCharacterAnimInstanceBase
{
    char padding_0[0x2E0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x2E0

class UHDPlayerCharacterAnimInst_TPP : public UHDPlayerCharacterAnimInstanceBase
{
    char padding_0[0x2E0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x2E0

class UHDPlayerCharacterAnimInstanceBase : public UDFCharacterAnimInstance
{
    class AHDPlayerCharacter* HDPlyCharOwner;                                         // 0x02B8 (size: 0x8)
    class AHDPlayerController* HDPCOwner;                                             // 0x02C0 (size: 0x8)
    class AHDBaseWeapon* HDEquippedWeapon;                                            // 0x02C8 (size: 0x8)
    uint8 bInVehicle;                                                                 // 0x02D0 (size: 0x1)

}; // Size: 0x2E0

class UHDPlayerComponent : public UDFPlayerComponent
{
    class UDFLoadout* StartLoadout;                                                   // 0x00C8 (size: 0x8)

    void SwitchTeam();
    void RestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
    void PickTeam(const EHDTeam DesiredTeam);
}; // Size: 0xD0

class UHDRuleset_AAS : public UHDGameRulesetBase
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

class UHDRuleset_ControlPoint : public UHDGameRulesetBase
{
    FControlPointRulesetSettings BluforTeamCPSettings;                                // 0x0060 (size: 0x20)
    FControlPointRulesetSettings OpforTeamCPSettings;                                 // 0x0080 (size: 0x20)

    FControlPointRulesetSettings GetControlPointSettingsForTeam(EHDTeam ControlPointTeam);
    void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    void ControlPointCaptureProgressUpdated(class AHDBaseCapturePoint* ControlPoint, bool bContested, int32 Progress);
}; // Size: 0xA0

class UHDRuleset_KillDeath : public UHDGameRulesetBase
{
    FKillDeathRulesetSettings BluforTeamKDSettings;                                   // 0x0060 (size: 0x28)
    FKillDeathRulesetSettings OpforTeamKDSettings;                                    // 0x0088 (size: 0x28)

    void PlayerTeamKilled(class AController* Killer, class AController* Victim);
    FKillDeathRulesetSettings GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam);
}; // Size: 0xB0

class UHDRuleset_NoPlayerSpawnKitRestrictions : public UHDGameRulesetBase
{
    char padding_0[0x60];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x60

class UHDRuleset_TicketBleed : public UHDGameRulesetBase
{
    TArray<class AHDBaseCapturePoint*> RegisteredCPs;                                 // 0x0068 (size: 0x10)
    FTicketBleedRulesetSettings BluforTeamTBSettings;                                 // 0x0078 (size: 0xC)
    FTicketBleedRulesetSettings OpforTeamTBSettings;                                  // 0x0084 (size: 0xC)

    void UpdateTicketBleedState();
    FTicketBleedRulesetSettings GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam);
    void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    void ApplyTicketBleed(EHDTeam BleedTeam, int32 TicketBleedMultiplier, bool bUseMercyTicketBleed);
}; // Size: 0x90

class UHDSQCommChannelState : public UObject
{
    class AHDSquadState* SquadState;                                                  // 0x0030 (size: 0x8)
    FDFCommStateSetupParams InitialSetupParams;                                       // 0x0038 (size: 0x18)

    void SetupSQChannelState(class AHDSquadState* ForSquadState);
    FName GetChannelNameForSquad(const class AHDSquadState* Squad);
}; // Size: 0x58

class UHDScoreboardBase : public UDFBaseMenu
{
    TSubclassOf<class UHDScoreboardListingRowBase> ScoreboardListRowClass;            // 0x0238 (size: 0x8)
    class UPanelWidget* OpforPlayerList;                                              // 0x0240 (size: 0x8)
    class UPanelWidget* BluforPlayerList;                                             // 0x0248 (size: 0x8)

    void ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry);
}; // Size: 0x250

class UHDScoreboardListingRowBase : public UUserWidget
{
    class UHDScoreboardBase* ParentMenu;                                              // 0x0230 (size: 0x8)
    class ADFBasePlayerState* PlayerState;                                            // 0x0238 (size: 0x8)
    char padding_0[0x3];                                                              // 0x0240 (size: 0x3)
    uint8 bRefreshListingOnTick;                                                      // 0x0243 (size: 0x1)
    char padding_1[0x4];                                                              // 0x0244 (size: 0x4)
    class UButton* MutePlayerBtn;                                                     // 0x0248 (size: 0x8)
    class UTextBlock* PlayerName;                                                     // 0x0250 (size: 0x8)
    class UTextBlock* Score;                                                          // 0x0258 (size: 0x8)
    class UTextBlock* Kills;                                                          // 0x0260 (size: 0x8)
    class UTextBlock* Deaths;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* Ping;                                                           // 0x0270 (size: 0x8)
    TSoftObjectPtr<UTexture2D> NotTalkingVoiceIcon;                                   // 0x0278 (size: 0x28)
    TSoftObjectPtr<UTexture2D> TalkingVoiceIcon;                                      // 0x02A0 (size: 0x28)
    TSoftObjectPtr<UTexture2D> MutedVoiceIcon;                                        // 0x02C8 (size: 0x28)
    char padding_2[0x20];                                                             // 0x02F0 (size: 0x20)
    class UTextBlock* PlayerNumber;                                                   // 0x0310 (size: 0x8)

    void SetVoiceStateIcon(class UTexture2D* NewIcon);
    void RefreshListing();
    void ReceiveRefreshListing();
    void ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState);
    void OnMutePlayer();
    void Init(class UHDScoreboardBase* InParentMenu, class ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick);
    bool HasInitialized();
    TSoftObjectPtr<UTexture2D> GetIconForVoiceState(EPlayerVoiceState VoiceState);
    int32 GetCurrentPing();
}; // Size: 0x318

class UHDServerAtCapacityFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDServerListFilterRule : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool MatchesServer(const class UHDServerListItemData* ListItem);
}; // Size: 0x28

class UHDServerListItemData : public UObject
{
    FHDServerInfo ServerInfo;                                                         // 0x0028 (size: 0xA0)

}; // Size: 0xC8

class UHDServerListView : public UListView
{
    bool bItemSortAscending;                                                          // 0x036C (size: 0x1)
    EHDServerListSortBy ItemSortBy;                                                   // 0x036D (size: 0x1)
    char padding_0[0x2];                                                              // 0x036E (size: 0x2)
    TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ItemFilterRules; // 0x0370 (size: 0x50)

    void SortListItems(bool bSortAscending, EHDServerListSortBy SortBy);
    void SetItemSortBy(EHDServerListSortBy SortBy);
    void SetItemSortAscending(bool bSortAscending);
    void SetItemFilterRules(const TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams>& FilterRules);
    float GetEntrySpacing();
    FMargin GetDesiredEntryPaddingForItem(class UObject* Item);
    bool DoesFilterExcludeListItem(const class UObject* Item);
}; // Size: 0x3C0

class UHDServerListing : public UUserWidget
{
    uint8 bTextToUpper;                                                               // 0x0230 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0231 (size: 0x7)
    class UHDServerListItemData* ServerData;                                          // 0x0238 (size: 0x8)
    class UTextBlock* ServerNameText;                                                 // 0x0240 (size: 0x8)
    class UTextBlock* ModNameText;                                                    // 0x0248 (size: 0x8)
    class UTextBlock* GameModeText;                                                   // 0x0250 (size: 0x8)
    class UTextBlock* MapNameText;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* PlayersText;                                                    // 0x0260 (size: 0x8)
    class UTextBlock* PingText;                                                       // 0x0268 (size: 0x8)

    void SetupListing(class UHDServerListItemData* InServerItemData);
    void OnServerItemDataSet(bool bIsDesignTime);
}; // Size: 0x270

class UHDSquadStateCreationPayload : public UObject
{
    FHDSquadCreationParams CreationParams;                                            // 0x0028 (size: 0x30)

}; // Size: 0x58

class UHDSupportersOnlyServerFilterRule : public UHDServerListFilterRule
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UHDTeamCommChannelState : public UObject
{
    class AHDTeamState* TeamState;                                                    // 0x0030 (size: 0x8)
    FDFCommStateSetupParams InitialSetupParams;                                       // 0x0038 (size: 0x18)

    void SetupTeamChannelState(class AHDTeamState* ForTeamState);
    FName GetChannelNameForTeam(const class AHDTeamState* Team);
    FName GetChannelNameForCommand(const class AHDTeamState* CmdTeam);
}; // Size: 0x58

class UHDTeamDefinition : public UDFTeamDefinition
{
    int32 StartingTickets;                                                            // 0x0058 (size: 0x4)
    char padding_0[0x4];                                                              // 0x005C (size: 0x4)
    class UDFCommChannelDefinition* CommChannelDefinition;                            // 0x0060 (size: 0x8)

}; // Size: 0x68

class UHDTextChatInputWidgetBase : public UUserWidget
{
    FName TextCommsFormatName;                                                        // 0x0230 (size: 0x8)
    class UDFCommChannel* CurrentTalkChannel;                                         // 0x0238 (size: 0x8)

    void SubmitChatMessage(FText ChatMsgText);
    void StopTalkingOnCurrentChannel();
    void StopTalking(class UDFCommChannel* CurrentChannel);
    void StartTalkingOnChannel(class UDFCommChannel* TalkChannel);
    void StartTalking(class UDFCommChannel* NewTalkChannel);
    void OnChatMessageSubmitted(class UHDTextChatMsgInfo* SubmittedChatMsg);
}; // Size: 0x240

class UHDTextChatMsgInfo : public UObject
{
    class UDFCommChannel* CommChannel;                                                // 0x0028 (size: 0x8)
    class APlayerState* SenderPS;                                                     // 0x0030 (size: 0x8)
    FString ChatMsgContent;                                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UHDTextChatWidgetBase : public UUserWidget
{
    FName SayAllInputActionName;                                                      // 0x0268 (size: 0x8)
    FName SayTeamInputActionName;                                                     // 0x0270 (size: 0x8)
    FName SaySquadInputActionName;                                                    // 0x0278 (size: 0x8)
    FName SayAllChannelName;                                                          // 0x0280 (size: 0x8)
    int32 MaxChatMsgsToCache;                                                         // 0x0288 (size: 0x4)
    FName LastTalkChannelName;                                                        // 0x028C (size: 0x8)
    char padding_0[0x4];                                                              // 0x0294 (size: 0x4)
    TArray<class UHDTextChatMsgInfo*> CurrentChatMsgs;                                // 0x0298 (size: 0x10)

    void StopTalking();
    void StartTalking(class UDFCommChannel* TalkChannel);
    void SetMaxChatMsgsToCache(int32 NumChatMsgsToCache);
    void SayTeamActionPressed();
    void SaySquadActionPressed();
    void SayAllActionPressed();
    int32 GetNumCachedChatMsgs();
    bool GetCachedChatMsgAt(int32 MsgIndex, class UHDTextChatMsgInfo*& OutFoundMsg);
    void DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg);
}; // Size: 0x2A8

class UHDUGCLoadProgressScreen : public UDFBaseMenu
{
    char padding_0[0x238];                                                            // 0x0000 (size: 0x0)

    void UpdateLoadProgress(int32 NumUGCRemainingToLoad);
    void SetupProgressScreen(int32 TotalUGCToLoad);
}; // Size: 0x238

class UHDUIStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    int32 GetServerPort(const FHDServerInfo& InServerInfo);
    FString GetServerIpPort(const FHDServerInfo& InServerInfo);
    FString GetServerIp(const FHDServerInfo& InServerInfo);
}; // Size: 0x28

class UHDUIUWCaptureStatus : public UHDUIUserWidget
{
    char padding_0[0x268];                                                            // 0x0000 (size: 0x0)

    void OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial);
    void OwnerNoControlPoint();
    void OwnerEndOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
    void OwnerBeginOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
    void CPOwnershipUpdate(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured);
    void CPCaptureProgressUpdate(class AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32 InCaptureProgress);
    void CPBeginEndOverlap(class AActor* OverlappedControlPointActor, class AActor* OtherActor);
    void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
    void ControlPointSetGarrisonedPlayerCount(int32 NumFriendlies, int32 NumEnemies, int32 MinNumRequiredForCapture, bool bInitial);
    void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
}; // Size: 0x268

class UHDUIUWHUD : public UHDUIUserWidget
{
    char padding_0[0x238];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x238

class UHDUIUWPlayerStatus : public UHDUIUserWidget
{
    char padding_0[0x258];                                                            // 0x0000 (size: 0x0)

    void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
    void OwnerStartSprint();
    void OwnerStartAim();
    void OwnerSprintTransitionUpdate(bool bIsSprinting);
    void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
    void OwnerSetStance(ECharacterStance NewStance, ECharacterStance OldStance, bool bInitial);
    void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerHealthUpdate(class ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal);
    void OwnerEndSprint();
    void OwnerEndAim();
    void OwnerAimTransitionUpdate(bool bIsAiming);
}; // Size: 0x258

class UHDUIUWWeaponStatus : public UHDUIUserWidget
{
    class AHDBaseWeapon* OwnerEquippedWeapon;                                         // 0x0238 (size: 0x8)
    char padding_0[0x8];                                                              // 0x0240 (size: 0x8)
    FHDUIWeaponAmmoState WeapAmmoState;                                               // 0x0248 (size: 0x18)

    void OwnerWeaponFireModeChanged(class ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    void OwnerAimStyleChanged(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
    void BPOwnerWeaponAmmoUpdated(const FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
}; // Size: 0x260

class UHDUIUserWidget : public UUserWidget
{
    uint8 bListenForPlayerCharacterEvents;                                            // 0x0230 (size: 0x1)

    void OwnerUnpossessPawn(class APawn* UnpossessedPawn);
    void OwnerPossessPawn(class APawn* NewPawn);
    void OwnerEquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void OwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    class AHUD* GetOwningPlayerHUD();
    class AHDHUD* GetOwningHDPlayerHUD();
    class UDFCharacterMovementComponent* GetOwningHDPlayerCharacterMovement();
    class AHDPlayerCharacter* GetOwningHDPlayerCharacter();
    class AHDPlayerController* GetOwningHDPlayer();
    class AHDBaseWeapon* GetOwnerEquippedWeapon();
    void BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap);
    void BPOwnerUnpossessPawn(class APawn* UnpossessedPawn);
    void BPOwnerPossessPawn(class APawn* NewPawn);
    void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void BPInitializeForOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
    void BPInitializeForOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
    void BPDeinitializeFromOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
    void BPDeinitializeFromOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
}; // Size: 0x238

class UHDURLStatics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FString GetNumTicketsOptionName(EHDTeam Team);
    FString GetNumBotsOptionName(EHDTeam Team);
    FString GetFactionOptionName(EHDTeam Team);
    FString GetDisableKitRestrictionsOptionName();
}; // Size: 0x28

class UHDVehiclePlayerSeatComponent : public UArcVehiclePlayerSeatComponent
{
    char padding_0[0x198];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x198

class UHDVoiceChatMsgInfo : public UObject
{
    class UDFCommChannel* CommChannel;                                                // 0x0028 (size: 0x8)
    class APlayerState* TalkerPS;                                                     // 0x0030 (size: 0x8)
    uint8 bTalking;                                                                   // 0x0038 (size: 0x1)

}; // Size: 0x40

class UHDVoipIndicatorListingWidgetBase : public UUserWidget
{
    class UHDVoiceChatMsgInfo* VoiceMsgInfo;                                          // 0x0230 (size: 0x8)

    void SetupVoiceListing(class UHDVoiceChatMsgInfo* InVoiceMsgInfo);
    void OnVoiceMsgInfoSet(bool bIsDesignTime);
}; // Size: 0x238

class UHDVoipIndicatorWidgetBase : public UUserWidget
{
    TMap<class FUniqueNetIdVoipWrapper, class UHDVoiceChatMsgInfo*> ActiveTalkerMap;  // 0x0230 (size: 0x50)

    void OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
    void OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
    void OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
}; // Size: 0x280

class UHDWeaponAnimInstance : public UDFWeaponAnimInstance
{
    class AHDBaseWeapon* HDWeaponOwner;                                               // 0x0278 (size: 0x8)

}; // Size: 0x280

class UHDWeaponScopeComponent : public USceneComponent
{
    char padding_0[0x1F0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x1F0

class UPlatoonListEntry : public UObject
{
    uint8 TeamId;                                                                     // 0x0028 (size: 0x1)
    EHDTeam Team;                                                                     // 0x0029 (size: 0x1)
    char padding_0[0x6];                                                              // 0x002A (size: 0x6)
    class AHDTeamState* TeamState;                                                    // 0x0030 (size: 0x8)
    int32 ID;                                                                         // 0x0038 (size: 0x4)
    char padding_1[0x4];                                                              // 0x003C (size: 0x4)
    class UHDPlatoonInfo* Info;                                                       // 0x0040 (size: 0x8)
    class AHDPlatoonState* PlatoonState;                                              // 0x0048 (size: 0x8)

}; // Size: 0x50

class USquadListEntry : public UObject
{
    uint8 TeamId;                                                                     // 0x0028 (size: 0x1)
    EHDTeam Team;                                                                     // 0x0029 (size: 0x1)
    char padding_0[0x6];                                                              // 0x002A (size: 0x6)
    class AHDTeamState* TeamState;                                                    // 0x0030 (size: 0x8)
    class UPlatoonListEntry* ParentPlatoonData;                                       // 0x0038 (size: 0x8)
    int32 ID;                                                                         // 0x0040 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0044 (size: 0x4)
    class AHDSquadState* SquadState;                                                  // 0x0048 (size: 0x8)

    class AHDPlatoonState* GetParentPlatoonState();
}; // Size: 0x50

class USquadMemberInfo : public UObject
{
    uint8 TeamId;                                                                     // 0x0028 (size: 0x1)
    EHDTeam Team;                                                                     // 0x0029 (size: 0x1)
    char padding_0[0x6];                                                              // 0x002A (size: 0x6)
    class AHDTeamState* TeamState;                                                    // 0x0030 (size: 0x8)
    class UPlatoonListEntry* ParentPlatoonData;                                       // 0x0038 (size: 0x8)
    class USquadListEntry* ParentSquadData;                                           // 0x0040 (size: 0x8)
    class AHDPlayerState* PlayerState;                                                // 0x0048 (size: 0x8)

    class AHDSquadState* GetParentSquadState();
    class AHDPlatoonState* GetParentPlatoonState();
}; // Size: 0x50

class UVictoryMenu : public UDFBaseMenu
{
    FHDGameRoundEndEventDetails RoundDetails;                                         // 0x0238 (size: 0x10)
    uint8 bWinner;                                                                    // 0x0248 (size: 0x1)

    void OnVictoryInit();
    void Init(const FHDGameRoundEndEventDetails& InRoundDetails, bool bInWinner);
}; // Size: 0x250

#endif
