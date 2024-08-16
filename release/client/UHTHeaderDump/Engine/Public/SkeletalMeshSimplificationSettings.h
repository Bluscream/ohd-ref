#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "SkeletalMeshSimplificationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMeshReductionModuleName;
    
    USkeletalMeshSimplificationSettings();

};

