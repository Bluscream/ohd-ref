#pragma once
#include "CoreMinimal.h"
#include "DirectoryPath.h"
#include "BuildPromotionNewProjectSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionNewProjectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath NewProjectFolderOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewProjectNameOverride;
    
    ENGINE_API FBuildPromotionNewProjectSettings();
};

