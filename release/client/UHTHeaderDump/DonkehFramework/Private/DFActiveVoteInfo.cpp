#include "DFActiveVoteInfo.h"

FDFActiveVoteInfo::FDFActiveVoteInfo() {
    this->IssueClass = NULL;
    this->VoteEndTime = 0.00f;
    this->OwningPlayer = NULL;
    this->Status = EDFVoteStatus::Inactive;
}

