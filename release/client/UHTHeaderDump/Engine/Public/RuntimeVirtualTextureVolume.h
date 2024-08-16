#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "RuntimeVirtualTextureVolume.generated.h"

class URuntimeVirtualTextureComponent;

UCLASS(Blueprintable, MinimalAPI)
class ARuntimeVirtualTextureVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTextureComponent* VirtualTextureComponent;
    
public:
    ARuntimeVirtualTextureVolume(const FObjectInitializer& ObjectInitializer);

};

