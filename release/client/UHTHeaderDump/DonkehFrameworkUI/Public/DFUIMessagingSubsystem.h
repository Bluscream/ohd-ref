#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "Templates/SubclassOf.h"
#include "DFUIMessagingSubsystem.generated.h"

class UDFGameDialog;

UCLASS(Blueprintable, Config=Game)
class DONKEHFRAMEWORKUI_API UDFUIMessagingSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDFGameDialog* TopmostDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFGameDialog> ConfirmationDialogClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFGameDialog> ErrorDialogClassPtr;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDFGameDialog> ConfirmationDialogClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDFGameDialog> ErrorDialogClass;
    
public:
    UDFUIMessagingSubsystem();

};

