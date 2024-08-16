#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFTeamDefinition.generated.h"

class UDFFactionInfo;

UCLASS(Blueprintable, EditInlineNew)
class DONKEHFRAMEWORK_API UDFTeamDefinition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDFFactionInfo> FactionInfoClass;
    
public:
    UDFTeamDefinition();

};

