#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHDTeam.h"
#include "SquadListEntry.generated.h"

class AHDPlatoonState;
class AHDSquadState;
class AHDTeamState;
class UPlatoonListEntry;

UCLASS(Blueprintable)
class HDMAIN_API USquadListEntry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHDTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* TeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlatoonListEntry* ParentPlatoonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDSquadState* SquadState;
    
public:
    USquadListEntry();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetParentPlatoonState() const;
    
};

