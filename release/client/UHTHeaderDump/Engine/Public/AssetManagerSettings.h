#pragma once
#include "CoreMinimal.h"
#include "AssetManagerRedirect.h"
#include "DeveloperSettings.h"
#include "DirectoryPath.h"
#include "PrimaryAssetRulesCustomOverride.h"
#include "PrimaryAssetRulesOverride.h"
#include "PrimaryAssetTypeInfo.h"
#include "AssetManagerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class ENGINE_API UAssetManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> DirectoriesToExclude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCookProductionAssets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldManagerDetermineTypeAndName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGuessTypeAndNameInEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAcquireMissingChunksOnLoad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> AssetPathRedirects;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> MetaDataTagsForAssetRegistry;
    
    UAssetManagerSettings();

};

