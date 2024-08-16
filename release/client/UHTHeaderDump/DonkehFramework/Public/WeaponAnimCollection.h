#pragma once
#include "CoreMinimal.h"
#include "IntrinsicWeaponAnimSubset.h"
#include "PerspectiveAnim.h"
#include "SingleActionWeaponAnimSubset.h"
#include "SingleLoadWeaponAnimSubset.h"
#include "ThrowableWeaponAnimSubset.h"
#include "WeaponAnimCollection.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FWeaponAnimCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EmptyBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntrinsicWeaponAnimSubset Intrinsic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleActionWeaponAnimSubset SingleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleLoadWeaponAnimSubset SingleLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowableWeaponAnimSubset Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim EquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim UnEquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim FireAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim ActionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim ReloadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim ReloadFullAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim StartReloadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerspectiveAnim EndReloadAnim;
    
    DONKEHFRAMEWORK_API FWeaponAnimCollection();
};

