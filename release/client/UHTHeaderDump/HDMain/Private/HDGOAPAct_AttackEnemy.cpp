#include "HDGOAPAct_AttackEnemy.h"

UHDGOAPAct_AttackEnemy::UHDGOAPAct_AttackEnemy() {
    this->Name = TEXT("Attack Enemy");
    this->Preconditions.AddDefaulted(2);
    this->Effects.AddDefaulted(1);
}


