#pragma once
#include "CoreMinimal.h"
#include "ArcOwnerAttachmentReference.generated.h"

USTRUCT(BlueprintType)
struct ARCVEHICLES_API FArcOwnerAttachmentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FArcOwnerAttachmentReference();
};

