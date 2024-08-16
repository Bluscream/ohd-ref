#include "NiagaraScript.h"

UNiagaraScript::UNiagaraScript() {
    this->Usage = ENiagaraScriptUsage::Function;
    this->UsageIndex = 0;
}

void UNiagaraScript::RaiseOnGPUCompilationComplete() {
}


