#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "EHDServerListSortBy.h"
#include "HDJoinGameMenu.generated.h"

class UHDServerListItemData;
class UHDServerListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDJoinGameMenu : public UDFBaseMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHDServerListView* ServerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> MapIds;
    
public:
    UHDJoinGameMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRefreshStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRefresh(bool bSortAscending, EHDServerListSortBy SortBy);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinGame(UHDServerListItemData* ServerItem, const FString& JoinPassword);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDebugServerListings() const;
    
};

