#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Atom.h"
#include "Templates/SubclassOf.h"
#include "GOAPAction.generated.h"

class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class GOAPNPC_API UGOAPAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtom> Preconditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtom> Effects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
public:
    UGOAPAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate(APawn* Pawn) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveIsActionInvalid(APawn* Pawn) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasCompleted(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetTargetsList(const APawn* Pawn) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAction(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoAction(APawn* Pawn, FString& FailureReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckProceduralPrecondition(APawn* Pawn, bool bPlanning) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginAction(APawn* Pawn);
    
};

