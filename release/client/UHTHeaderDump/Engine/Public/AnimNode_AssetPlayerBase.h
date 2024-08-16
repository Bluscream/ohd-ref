#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "EAnimGroupRole.h"
#include "AnimNode_AssetPlayerBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_AssetPlayerBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreForRelevancyTest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InternalTimeAccumulator;
    
public:
    FAnimNode_AssetPlayerBase();
};

