#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "BoolParameterNameAndCurve.h"
#include "ColorParameterNameAndCurves.h"
#include "ScalarParameterNameAndCurve.h"
#include "TransformParameterNameAndCurves.h"
#include "Vector2DParameterNameAndCurves.h"
#include "VectorParameterNameAndCurves.h"
#include "MovieSceneParameterSection.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneParameterSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;
    
public:
    UMovieSceneParameterSection();

};

