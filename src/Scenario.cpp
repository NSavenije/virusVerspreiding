//
// Created by vanlonden on 10/18/17.
//

#include "Scenario.h"

Scenario::Scenario(unsigned int numProtected, unsigned int numComputers)
        : numProtected(numProtected), numComputers(numComputers) {}

unsigned int Scenario::getNumProtected() const {
    return numProtected;
}

unsigned int Scenario::getNumComputers() const {
    return numComputers;
}
