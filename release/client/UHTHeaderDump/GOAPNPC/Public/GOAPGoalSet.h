#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Templates/SubclassOf.h"
#include "GOAPGoalSet.generated.h"

class UGOAPGoal;

UCLASS(Blueprintable, Const)
class GOAPNPC_API UGOAPGoalSet : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UGOAPGoal>> Goals;
    
public:
    UGOAPGoalSet();

};

