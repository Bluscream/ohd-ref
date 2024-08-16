#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ImportFactorySettingValues.h"
#include "EditorImportWorkflowDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorImportWorkflowDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath ImportFilePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportFactorySettingValues> FactorySettings;
    
    ENGINE_API FEditorImportWorkflowDefinition();
};

