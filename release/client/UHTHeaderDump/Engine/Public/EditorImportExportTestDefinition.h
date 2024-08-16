#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ImportFactorySettingValues.h"
#include "EditorImportExportTestDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorImportExportTestDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath ImportFilePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExportFileExtension;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipExport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportFactorySettingValues> FactorySettings;
    
    ENGINE_API FEditorImportExportTestDefinition();
};

