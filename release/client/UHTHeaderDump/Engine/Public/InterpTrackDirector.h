#pragma once
#include "CoreMinimal.h"
#include "DirectorTrackCut.h"
#include "InterpTrack.h"
#include "InterpTrackDirector.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackDirector : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectorTrackCut> CutTrack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSimulateCameraCutsOnClients: 1;
    
public:
    UInterpTrackDirector();

};

