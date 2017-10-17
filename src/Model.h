//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_MODEL_H
#define VIRUS_MODEL_H


#include <vector>
#include "Computer.h"

class Model {
public:
    Model(unsigned int numComputers, unsigned int numSteps, double updateChancePerStep);

    unsigned int getNumSteps();
    unsigned int getNumComputers();
    double getUpdateChancePerStep();
    Computer& getComputer(unsigned int index);
    std::vector<Computer>& getComputers();

private:
    unsigned int numSteps;
    unsigned int numComputers;
    double updateChancePerStep;
    std::vector<Computer> computers;
};


#endif //VIRUS_MODEL_H
