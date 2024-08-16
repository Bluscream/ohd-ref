#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HDAIHandlerBase.h"
#include "HDAIMasterNavPoint.h"
#include "NavigationHandlerMoveToFailedSignatureDelegate.h"
#include "HDAINavigationHandler.generated.h"

class AHDBaseCapturePoint;
class UNavigationSystemV1;

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDAINavigationHandler : public UHDAIHandlerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavigationSystemV1* NavSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreZeroVectorGoto: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDAIMasterNavPoint> MasterNavPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterNavPathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetNavPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNavPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationAnchorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingNavPathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPawnIsAtTheEndOfPath: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavPathSegmentLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavPathSegmentLengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCompensatePartialPathForGroupFormationRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartialPathGroupRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationAnchorRandomRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationHandlerMoveToFailedSignature OnMoveToLocationFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToFailedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToFailedTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToFailedRandomizationRadiusBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToFailedRandomizationRadiusIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveToFailedRandomizationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveToFailedAttemptNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToFailedAttemptResetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveToFailedIsBeingHandled: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseCapturePoint* SavedCapturePoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StuckCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StuckCheckLastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableRVOAvoidance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOAvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOAvoidanceWeight;
    
public:
    UHDAINavigationHandler();

    UFUNCTION(BlueprintCallable)
    void SetupRVOAvoidance();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredLocation(const FVector& InDesiredLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointsAreEqualXY(const FVector& Vector1, const FVector& Vector2, float Tolerance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveToFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToLocationFailed();
    
    UFUNCTION(BlueprintCallable)
    bool MakePathToDesiredLocation();
    
    UFUNCTION(BlueprintCallable)
    bool MakeNewMasterNavPath(FVector InStart, FVector InDestination);
    
    UFUNCTION(BlueprintCallable)
    void MakeNavPathSegment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnAtDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationPossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavDataValidForAllControlPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMoveToFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoLocationRandomized(const FVector& InLocation, float InRandomizationRadius);
    
    UFUNCTION(BlueprintCallable)
    void GotoLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FixVectorValuesNaN(FVector& InVector, bool bRandomize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindNavLocationInsideControlPoint(AHDBaseCapturePoint* CP, FVector& OutNavLoc) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPawnStuckStatus();
    
};

