#pragma once
#include "CoreMinimal.h"
#include "PerspectiveSound.h"
#include "CharacterSoundCollection.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSoundCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveSound DeathSound;
    
    DONKEHFRAMEWORK_API FCharacterSoundCollection();
};

