#include "SimulationStageMetaData.h"

FSimulationStageMetaData::FSimulationStageMetaData() {
    this->bSpawnOnly = false;
    this->bWritesParticles = false;
    this->MinStage = 0;
    this->MaxStage = 0;
}

