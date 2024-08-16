#include "HDTextChatInputWidgetBase.h"

UHDTextChatInputWidgetBase::UHDTextChatInputWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TextCommsFormatName = TEXT("Text");
    this->CurrentTalkChannel = NULL;
}

void UHDTextChatInputWidgetBase::SubmitChatMessage(FText ChatMsgText) {
}

void UHDTextChatInputWidgetBase::StopTalkingOnCurrentChannel() {
}


void UHDTextChatInputWidgetBase::StartTalkingOnChannel(UDFCommChannel* TalkChannel) {
}




