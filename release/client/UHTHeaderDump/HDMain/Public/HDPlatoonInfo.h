#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetType -FallbackName=PrimaryAssetType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "HDPlatoonInfo.generated.h"

class UHDPlatoonCreationRuleBase;
class UHDTeamDefinition;

UCLASS(Abstract, Blueprintable, Const)
class HDMAIN_API UHDPlatoonInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType PlatoonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHDPlatoonCreationRuleBase*> CreationRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSquadLimit;
    
public:
    UHDPlatoonInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCreateForTeam(const UHDTeamDefinition* TeamDef) const;
    
};

