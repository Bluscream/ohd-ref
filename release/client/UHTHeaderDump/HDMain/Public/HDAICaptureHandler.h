#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EHDAICaptureMode.h"
#include "HDAIHandlerBase.h"
#include "HDAICaptureHandler.generated.h"

class AActor;
class AHDBaseCapturePoint;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAICaptureHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseCapturePoint* CurrentCP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHDAICaptureMode CurrentCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AICaptureModePreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalNumberOfCapturePoints;
    
public:
    UHDAICaptureHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEstablishNewControlPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCP(AHDBaseCapturePoint* InCurrentCP);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNumberOfCapturePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetStartSpotClosestToControlPoint(AActor* InCapturePoint) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentCPLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindControlPointToCapture(AHDBaseCapturePoint*& OutFoundCP) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDBaseCapturePoint* FindControlPointRandom(const TArray<AHDBaseCapturePoint*>& CPs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDBaseCapturePoint* FindControlPointClosestToPawn(const TArray<AHDBaseCapturePoint*>& CPs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV3(EHDAICaptureMode InCaptureMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV2(EHDAICaptureMode InCaptureMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHDBaseCapturePoint*> FindAvailableControlPointsOfTypeV1(EHDAICaptureMode InCaptureMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHDBaseCapturePoint*> FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool EstablishNewControlPoint();
    
};

