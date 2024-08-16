#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ECameraAnimPlaySpace.h"
#include "CameraAnimInst.generated.h"

class UCameraAnim;
class UInterpGroupInst;
class UInterpTrackInstMove;
class UInterpTrackMove;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ENGINE_API UCameraAnimInst : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* CamAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterpGroupInst* InterpGroupInst;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpTrackMove* MoveTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpTrackInstMove* MoveInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    
    UCameraAnimInst();

    UFUNCTION(BlueprintCallable)
    void Stop(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(float NewDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetDuration(float NewDuration);
    
};

