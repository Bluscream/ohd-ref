#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFCharacterVariationDataHandle -FallbackName=DFCharacterVariationDataHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFLoadout -FallbackName=DFLoadout
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "HDItemEntry.h"
#include "Templates/SubclassOf.h"
#include "HDKit.generated.h"

class AController;
class AHDBasePickup_Kit;
class AHDPlayerState;
class UHDKitPrerequisiteBase;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class HDMAIN_API UHDKit : public UDFLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDItemEntry> ItemEntries;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryItemSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHDBasePickup_Kit> KitDropPrefabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHDKitPrerequisiteBase*> KitRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> CharacterVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSquadLeaderKit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowsRallyPointDeployment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KitDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* KitDisplaySymbol;
    
public:
    UHDKit();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDFCharacterVariationDataHandle RandomCharacterVariationDataFromKit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerCanStartWithKit(const AController* Player, FText& OutKitDenialReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKitRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryItemEntryDisplayIcon(UTexture2D*& OutDisplayIcon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryItemEntry(FHDItemEntry& OutPrimaryEntry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetPlayersUsingKit(UObject* WorldContextObject, TArray<AHDPlayerState*>& OutPSArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetNumPlayersUsingKit(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemEntryDisplayIcon(const FHDItemEntry& ItemEntry, UTexture2D*& OutDisplayIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemEntryDisplayEquipmentSymbol(const FHDItemEntry& ItemEntry, UTexture2D*& OutDisplayEquipmentSymbol);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemEntryBySlotNum(const int32 SlotNum, FHDItemEntry& OutEntry) const;
    
};

