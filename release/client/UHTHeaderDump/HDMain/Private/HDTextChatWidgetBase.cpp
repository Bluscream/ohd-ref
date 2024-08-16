#include "HDTextChatWidgetBase.h"

UHDTextChatWidgetBase::UHDTextChatWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->SayAllInputActionName = TEXT("SayAll");
    this->SayTeamInputActionName = TEXT("SayTeam");
    this->SaySquadInputActionName = TEXT("SaySquad");
    this->SayAllChannelName = TEXT("Global");
    this->MaxChatMsgsToCache = 4;
}



void UHDTextChatWidgetBase::SetMaxChatMsgsToCache(int32 NumChatMsgsToCache) {
}

void UHDTextChatWidgetBase::SayTeamActionPressed() {
}

void UHDTextChatWidgetBase::SaySquadActionPressed() {
}

void UHDTextChatWidgetBase::SayAllActionPressed() {
}

int32 UHDTextChatWidgetBase::GetNumCachedChatMsgs() const {
    return 0;
}

bool UHDTextChatWidgetBase::GetCachedChatMsgAt(int32 MsgIndex, UHDTextChatMsgInfo*& OutFoundMsg) {
    return false;
}



