#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_PreviewMeshProvider.h"
#include "SolverIterations.h"
#include "PhysicsAsset.generated.h"

class UBodySetup;
class UPhysicsConstraintTemplate;
class USkeletalBodySetup;
class UThumbnailInfo;

UCLASS(Blueprintable, MinimalAPI)
class UPhysicsAsset : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoundsBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalBodySetup*> SkeletalBodySetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintTemplate*> ConstraintSetup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverIterations SolverIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotForDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThumbnailInfo* ThumbnailInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBodySetup*> BodySetup;
    
public:
    UPhysicsAsset();


    // Fix for true pure virtual functions not being implemented
};

