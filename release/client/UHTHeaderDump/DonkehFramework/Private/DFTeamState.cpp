#include "DFTeamState.h"
#include "Net/UnrealNetwork.h"

ADFTeamState::ADFTeamState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bInitialized = false;
    this->FactionInfoClass = NULL;
    this->TeamNum = 255;
}



bool ADFTeamState::IsReadyToInitialize() const {
    return false;
}


UDFFactionInfo* ADFTeamState::GetFactionInfo() const {
    return NULL;
}

void ADFTeamState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFTeamState, FactionInfoClass);
    DOREPLIFETIME(ADFTeamState, TeamNum);
}


