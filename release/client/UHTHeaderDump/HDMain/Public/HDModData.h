#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HDCoreUGC -ObjectName=HDCoreUGCData -FallbackName=HDCoreUGCData
#include "HDPrimaryAssetSearchPath.h"
#include "HDModData.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDModData : public UHDCoreUGCData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDPrimaryAssetSearchPath> PrimaryAssetPathsToScan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServersideOnlyMod;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ModDataVersion;
    
public:
    UHDModData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesModPluginUseLegacyMapScanning(const FString& PluginName);
    
};

