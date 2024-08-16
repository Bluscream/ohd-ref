#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ConstructionSystemSaveConstructedItem.h"
#include "ConstructionSystemSavePlayerInfo.h"
#include "ConstructionSystemSaveGame.generated.h"

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionSystemSavePlayerInfo PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionSystemSaveConstructedItem> ConstructedItems;
    
    UConstructionSystemSaveGame();

};

