//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_MODEL_H
#define VIRUS_MODEL_H

#include <vector>

#include "Computer.h"
#include "Scenario.h"

class Model {
public:
    Model(unsigned int numComputers);

    const std::vector<Computer> & getComputers() const;

    const std::vector<Computer> &getInfectedComputers() const;

    Computer & getComputer(unsigned int index);

    void infectComputer(Computer &computer);

    void protectComputer(Computer &computer);

    unsigned int getNumInfected() const;

    unsigned int getNumComputers() const;

    unsigned int getNumProtected() const;

    bool isInfected(Computer &computer) const;

private:
    unsigned int numProtected;
    unsigned int numInfected;
    unsigned int numComputers;

    std::vector<Computer> computers;
    std::vector<Computer> infectedComputers;

};

#endif //VIRUS_MODEL_H
