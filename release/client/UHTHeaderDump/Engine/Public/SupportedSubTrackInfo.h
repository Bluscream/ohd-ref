#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SupportedSubTrackInfo.generated.h"

class UInterpTrack;

USTRUCT(BlueprintType)
struct FSupportedSubTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInterpTrack> SupportedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    ENGINE_API FSupportedSubTrackInfo();
};

