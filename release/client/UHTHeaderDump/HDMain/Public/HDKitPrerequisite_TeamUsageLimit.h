#pragma once
#include "CoreMinimal.h"
#include "HDKitPrerequisiteBase.h"
#include "HDKitPrerequisite_TeamUsageLimit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDKitPrerequisite_TeamUsageLimit : public UHDKitPrerequisiteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamMembers;
    
public:
    UHDKitPrerequisite_TeamUsageLimit();

};

