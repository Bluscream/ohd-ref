#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHDTeam.h"
#include "SquadMemberInfo.generated.h"

class AHDPlatoonState;
class AHDPlayerState;
class AHDSquadState;
class AHDTeamState;
class UPlatoonListEntry;
class USquadListEntry;

UCLASS(Blueprintable)
class HDMAIN_API USquadMemberInfo : public UObject {
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
    USquadListEntry* ParentSquadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerState* PlayerState;
    
public:
    USquadMemberInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDSquadState* GetParentSquadState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDPlatoonState* GetParentPlatoonState() const;
    
};

