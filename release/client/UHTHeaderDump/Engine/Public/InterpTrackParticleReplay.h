#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "ParticleReplayTrackKey.h"
#include "InterpTrackParticleReplay.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackParticleReplay : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleReplayTrackKey> TrackKeys;
    
    UInterpTrackParticleReplay();

};

