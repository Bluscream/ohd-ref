#pragma once
#include "CoreMinimal.h"
#include "PreviewMeshCollectionEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPreviewMeshCollectionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    ENGINE_API FPreviewMeshCollectionEntry();
};

