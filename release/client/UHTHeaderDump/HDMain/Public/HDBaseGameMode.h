#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBaseGameMode -FallbackName=DFBaseGameMode
#include "HDGameRoundEndEventDetails.h"
#include "Templates/SubclassOf.h"
#include "HDBaseGameMode.generated.h"

class AActor;
class AController;
class AHDPlatoonState;
class UDFLoadout;
class UHDPlatoonInfo;
class UHDScoreboardBase;
class UHDTeamDefinition;

UCLASS(Abstract, Blueprintable, NonTransient, Config=Engine)
class HDMAIN_API AHDBaseGameMode : public ADFBaseGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDScoreboardBase> ScoreboardMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHDGameRoundEndEventDetails RoundEndEventDetails;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisablePlayerSpawnKitRestrictions: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTickets: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* DefaultBluforTeamDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* DefaultOpforTeamDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* BluforTeamDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* OpforTeamDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomPlayerTeamBalance: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHDPlatoonInfo*> PlatoonInfos;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDPlatoonState> PlatoonStateClass;
    
public:
    AHDBaseGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void RemoveOpforBots(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveBluforBots(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerCanRestartAtPlayerStart(AController* Player, AActor* StartSpot, UDFLoadout* StartLoadout);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddOpforBots(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBluforBots(int32 Num);
    
};

