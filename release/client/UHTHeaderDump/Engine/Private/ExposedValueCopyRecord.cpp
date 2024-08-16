#include "ExposedValueCopyRecord.h"

FExposedValueCopyRecord::FExposedValueCopyRecord() {
    this->SourceArrayIndex = 0;
    this->bInstanceIsTarget = false;
    this->PostCopyOperation = EPostCopyOperation::None;
    this->CopyType = ECopyType::PlainProperty;
    this->DestArrayIndex = 0;
    this->Size = 0;
}

