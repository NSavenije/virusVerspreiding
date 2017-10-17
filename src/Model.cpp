//
// Created by vanlonden on 10/17/17.
//

#include "Model.h"

Model::Model(unsigned int numComputers, unsigned int numSteps, double updateChancePerStep) {
    this->numSteps = numSteps;
    this->numComputers = numComputers;
    this->updateChancePerStep = updateChancePerStep;
    this->computers = std::vector<Computer>(numComputers);
}

unsigned int Model::getNumComputers() {
    return this->numComputers;
}

unsigned int Model::getNumSteps() {
    return this->numSteps;
}

double Model::getUpdateChancePerStep() {
    return this->updateChancePerStep;
}

Computer & Model::getComputer(unsigned int index) {
    return this->computers[index];
}

std::vector<Computer> & Model::getComputers() {
    return this->computers;
}
