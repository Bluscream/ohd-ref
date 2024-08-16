#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "HDUIUserWidget.h"
#include "HDUIUWCaptureStatus.generated.h"

class AActor;
class AHDBaseCapturePoint;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDUIUWCaptureStatus : public UHDUIUserWidget {
    GENERATED_BODY()
public:
    UHDUIUWCaptureStatus();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerTouchingControlPoint(AHDBaseCapturePoint* OverlappingCP, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerNoControlPoint();
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerEndOverlap(AActor* OverlappedOwnerChar, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OwnerBeginOverlap(AActor* OverlappedOwnerChar, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void CPOwnershipUpdate(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured);
    
    UFUNCTION(BlueprintCallable)
    void CPCaptureProgressUpdate(AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32 InCaptureProgress);
    
    UFUNCTION(BlueprintCallable)
    void CPBeginEndOverlap(AActor* OverlappedControlPointActor, AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ControlPointSetGarrisonedPlayerCount(int32 NumFriendlies, int32 NumEnemies, int32 MinNumRequiredForCapture, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
    
};

