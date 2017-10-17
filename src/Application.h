//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_APPLICATION_H
#define VIRUS_APPLICATION_H


#include "RandomNumberGenerator.h"
#include "Computer.h"
#include "Model.h"

class Application {
public:
    explicit Application(const RandomNumberGenerator &generator);

    unsigned int run(Model model);

private:
    RandomNumberGenerator generator;

    void printInfectionRatio(Model &model) const;

    unsigned int countInfected(Model &model) const;

    void tryInfectRandomComputer(Model &model);

    void doStep(Model &model);
};


#endif //VIRUS_APPLICATION_H
