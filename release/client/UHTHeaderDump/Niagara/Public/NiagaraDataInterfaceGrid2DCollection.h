#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2D.h"
#include "NiagaraDataInterfaceGrid2DCollection.generated.h"

class UNiagaraComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceGrid2DCollection();

    UFUNCTION(BlueprintCallable)
    void GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    
    UFUNCTION(BlueprintCallable)
    void GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    
    UFUNCTION(BlueprintCallable)
    bool FillTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FillRawTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
    
};

