#pragma once
#include "CoreMinimal.h"
#include "InputAxisKeyDelegateBinding.h"
#include "InputVectorAxisDelegateBinding.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding {
    GENERATED_BODY()
public:
    UInputVectorAxisDelegateBinding();

};

