//
// Created by vanlonden on 10/17/17.
//

#include "Model.h"
#include "Statistics.h"

Statistics::Statistics(unsigned int infections, unsigned int infected, unsigned int updated) {
    this->infections = infections;
    this->infected = infected;
    this->updated = updated;
}

unsigned int Statistics::getInfections() {
    return this->infections;
}

unsigned int Statistics::getInfected() {
    return this->infected;
}

unsigned int Statistics::getUpdated() {
    return this->updated;
}

Statistics::Statistics() {
    this->infections = 0;
    this->infected = 0;
    this->updated = 0;
}
