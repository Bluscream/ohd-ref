#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InventoryOnItemAddedSignatureDelegate.h"
#include "InventoryOnItemRemovedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFInventoryComponent.generated.h"

class ADFBaseItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DONKEHFRAMEWORK_API UDFInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryOnItemAddedSignature OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryOnItemRemovedSignature OnItemRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADFBaseItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ADFBaseItem>> DefaultItemClasses;
    
public:
    UDFInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Size() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveItemAt(const int32 Index, ADFBaseItem*& OutRemovedItem, bool bDestroyItem);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Remove(const ADFBaseItem* Item, bool bDestroyItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItem(const int32 Index, ADFBaseItem*& OutItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindItemByClass(const TSubclassOf<ADFBaseItem>& ItemClass, ADFBaseItem*& OutItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Find(const ADFBaseItem* ItemToCompare, int32& OutIndex) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Clear(bool bDestroyItems);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddDefaultInventoryItems();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Add(const ADFBaseItem* Item);
    
};

