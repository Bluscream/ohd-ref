#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_PlatoonSquadListBase.generated.h"

class AHDPlatoonState;
class AHDSquadState;
class UPlatoonListEntry;
class USquadListEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_PlatoonSquadListBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlatoonListEntry* PlatoonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USquadListEntry*> CurrentSquads;
    
public:
    UDeployMenu_PlatoonSquadListBase();

private:
    UFUNCTION(BlueprintCallable)
    void SquadPreRemoveFromPlatoon(AHDPlatoonState* SourcePlatoon, AHDSquadState* SquadToBeRemoved);
    
    UFUNCTION(BlueprintCallable)
    void SquadAddedToPlatoon(AHDPlatoonState* SourcePlatoon, AHDSquadState* NewSquad);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupPlatoon(UPlatoonListEntry* InPlatoonData);
    
    UFUNCTION(BlueprintCallable)
    void RepopulatePlatoon();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatoonSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetPlatoonStateFromData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateSquad(USquadListEntry* SquadData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeconstructSquad(USquadListEntry* RemovedSquadData, int32 RemovedSquadIdx);
    
};

