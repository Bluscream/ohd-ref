#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "DFServerAdminSubsystem.generated.h"

class UDFCfgDataManager;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFServerAdminSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDFCfgDataManager*> DataMgrs;
    
public:
    UDFServerAdminSubsystem();

};

