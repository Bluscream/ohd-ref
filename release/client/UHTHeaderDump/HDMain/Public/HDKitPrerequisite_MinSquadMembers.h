#pragma once
#include "CoreMinimal.h"
#include "HDKitPrerequisiteBase.h"
#include "HDKitPrerequisite_MinSquadMembers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HDMAIN_API UHDKitPrerequisite_MinSquadMembers : public UHDKitPrerequisiteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSquadMembers;
    
public:
    UHDKitPrerequisite_MinSquadMembers();

};

