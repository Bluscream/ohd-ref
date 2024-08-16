#pragma once
#include "CoreMinimal.h"
#include "BuildPromotionImportWorkflowSettings.h"
#include "BuildPromotionNewProjectSettings.h"
#include "BuildPromotionOpenAssetSettings.h"
#include "FilePath.h"
#include "BuildPromotionTestSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionTestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultStaticMeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildPromotionImportWorkflowSettings ImportWorkflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildPromotionOpenAssetSettings OpenAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildPromotionNewProjectSettings NewProjectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath SourceControlMaterial;
    
    ENGINE_API FBuildPromotionTestSettings();
};

