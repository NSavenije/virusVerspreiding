//
// Created by vanlonden on 10/18/17.
//

#ifndef VIRUS_SIMULATION_H
#define VIRUS_SIMULATION_H


#include "Model.h"
#include "RandomNumberGenerator.h"

class Simulator {
public:
    Simulator(RandomNumberGenerator & randomNumberGenerator);

    std::vector<unsigned int> run(const Scenario & scenario);

private:

    RandomNumberGenerator & randomNumberGenerator;

    void infectRandomComputer(Model &model);

    void protectRandomComputer(Model &model);

    Computer &getRandomComputer(Model &model) const;
};


#endif //VIRUS_SIMULATION_H
