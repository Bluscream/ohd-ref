#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeployMenu_SquadSelectionWidgetBase.generated.h"

class AHDPlatoonState;
class AHDTeamState;
class UPlatoonListEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UDeployMenu_SquadSelectionWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* PlatoonTeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortPlatoons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlatoonListEntry*> CurrentPlatoons;
    
public:
    UDeployMenu_SquadSelectionWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetupSquadSelection(AHDTeamState* InPlatoonTeamState);
    
    UFUNCTION(BlueprintCallable)
    void RepopulateSquadSelection();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlatoonPreRemoveFromTeam(AHDTeamState* SourceTeam, AHDPlatoonState* PlatoonToBeRemoved);
    
    UFUNCTION(BlueprintCallable)
    void PlatoonAddedToTeam(AHDTeamState* SourceTeam, AHDPlatoonState* NewPlatoon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadSelectionSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GeneratePlatoon(UPlatoonListEntry* PlatoonData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeconstructPlatoon(UPlatoonListEntry* RemovedPlatoonData, int32 RemovedPlatoonIdx);
    
};

