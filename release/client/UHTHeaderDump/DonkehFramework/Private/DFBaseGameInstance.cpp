#include "DFBaseGameInstance.h"

UDFBaseGameInstance::UDFBaseGameInstance() {
    this->PendingReturnToMainMenuMessage = NULL;
}

void UDFBaseGameInstance::ProjectVersion() const {
}

void UDFBaseGameInstance::OnTravelFailure(UWorld* World, TEnumAsByte<ETravelFailure::Type> FailureType, const FString& ErrorString) {
}

void UDFBaseGameInstance::OnNetworkLagStateChanged(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState::Type> LagType) {
}

void UDFBaseGameInstance::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorString) {
}

void UDFBaseGameInstance::JoinGameByIP(const FString& IPAddress, const FString& JoinPassword) {
}

void UDFBaseGameInstance::JoinGame(int32 SearchResultIndex, const FString& JoinPassword) {
}

bool UDFBaseGameInstance::IsHibernating() const {
    return false;
}

void UDFBaseGameInstance::HostGame(const FString& TravelURL, bool bLANGame, int32 MaxPlayers, const FString& HostName, const FString& Password) {
}

void UDFBaseGameInstance::ForceUpdateSession() {
}

void UDFBaseGameInstance::FindGames(const ESessionSearchPresenceType SearchPresenceType) {
}

void UDFBaseGameInstance::DumpOnlineSessionState() {
}


