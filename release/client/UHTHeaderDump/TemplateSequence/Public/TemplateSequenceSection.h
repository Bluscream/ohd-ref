#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
#include "TemplateSequenceSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTemplateSequenceSection : public UMovieSceneSubSection {
    GENERATED_BODY()
public:
    UTemplateSequenceSection();

};

