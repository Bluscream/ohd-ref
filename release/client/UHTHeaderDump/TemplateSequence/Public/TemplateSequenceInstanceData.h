#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceInstanceData -FallbackName=MovieSceneSequenceInstanceData
#include "TemplateSequenceInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationOperand Operand;
    
    TEMPLATESEQUENCE_API FTemplateSequenceInstanceData();
};

