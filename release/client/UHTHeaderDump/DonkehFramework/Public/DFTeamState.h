#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "DFTeamAgentInterface.h"
#include "TSInitSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFTeamState.generated.h"

class UDFFactionInfo;
class UDFTeamDefinition;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class DONKEHFRAMEWORK_API ADFTeamState : public AInfo, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFFactionInfo> FactionInfoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTSInitSignature OnPostInitTeam;
    
    ADFTeamState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostInitTeam();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitTeam(const UDFTeamDefinition* InTeamDef);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToInitialize() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPendingSetupBP() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFFactionInfo* GetFactionInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

