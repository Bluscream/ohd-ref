#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlueprintFunctionLibrary.h"
#include "StereoLayerFunctionLibrary.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ENGINE_API UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStereoLayerFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowSplashScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    
    UFUNCTION(BlueprintCallable)
    static void HideSplashScreen();
    
    UFUNCTION(BlueprintCallable)
    static void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
    
};

