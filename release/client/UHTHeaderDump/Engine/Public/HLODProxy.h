#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HLODProxyMesh.h"
#include "HLODProxy.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UHLODProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHLODProxyMesh> ProxyMeshes;
    
public:
    UHLODProxy();

};

