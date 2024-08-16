#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBaseAIController -FallbackName=DFBaseAIController
#include "Templates/SubclassOf.h"
#include "HDAIController.generated.h"

class APawn;
class UHDGOAPComponent;
class UHDKit;
class UHDPlayerComponent;

UCLASS(Blueprintable)
class HDMAIN_API AHDAIController : public ADFBaseAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDPlayerComponent* PlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDGOAPComponent* GOAPComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanJoinSquads: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanJoinPlayerSquads: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanCreateSquads: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfAILedSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfAISquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFactionSpecifiedSquadLeaderKit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFactionSpecifiedSquadMemberKit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusActorPerceivedLocation;
    
    AHDAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool JoinOrCreateSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APawn> GetStartPawnClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UHDKit* GetFactionSpecifiedSquadMemberKit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UHDKit* GetFactionSpecifiedSquadLeaderKit() const;
    
};

