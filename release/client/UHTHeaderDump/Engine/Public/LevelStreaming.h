#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LevelStreamingLoadedStatusDelegate.h"
#include "LevelStreamingVisibilityStatusDelegate.h"
#include "LevelStreaming.generated.h"

class ALevelScriptActor;
class ALevelStreamingVolume;
class ULevel;
class ULevelStreaming;
class UWorld;

UCLASS(Abstract, Blueprintable, EditInlineNew, Within=World)
class ENGINE_API ULevelStreaming : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WorldAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageNameToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LODPackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LevelTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelLODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeVisible: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeLoaded: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStatic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBlockOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBlockOnUnload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableDistanceStreaming: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOnLevelStatusMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LevelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelStreamingVolume*> EditorStreamingVolumes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenVolumeUnloadRequests;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadedStatus OnLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadedStatus OnLevelUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingVisibilityStatus OnLevelShown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingVisibilityStatus OnLevelHidden;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* LoadedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* PendingUnloadLevel;
    
public:
    ULevelStreaming();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeVisible(bool bInShouldBeVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelLODIndex(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingStatePending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorldAssetPackageFName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevel* GetLoadedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelScriptActor* GetLevelScriptActor();
    
    UFUNCTION(BlueprintCallable)
    ULevelStreaming* CreateInstance(const FString& UniqueInstanceName);
    
};

