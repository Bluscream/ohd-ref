#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "EHDServerListSortBy.h"
#include "HDFilterRuleParams.h"
#include "Templates/SubclassOf.h"
#include "HDServerListView.generated.h"

class UHDServerListFilterRule;
class UObject;

UCLASS(Blueprintable)
class HDMAIN_API UHDServerListView : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bItemSortAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHDServerListSortBy ItemSortBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams> ItemFilterRules;
    
public:
    UHDServerListView();

    UFUNCTION(BlueprintCallable)
    void SortListItems(bool bSortAscending, EHDServerListSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void SetItemSortBy(EHDServerListSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void SetItemSortAscending(bool bSortAscending);
    
    UFUNCTION(BlueprintCallable)
    void SetItemFilterRules(const TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>& FilterRules);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntrySpacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetDesiredEntryPaddingForItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesFilterExcludeListItem(const UObject* Item) const;
    
};

