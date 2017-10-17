//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_APPLICATION_H
#define VIRUS_APPLICATION_H


#include "RandomNumberGenerator.h"
#include "Model.h"

class Application {
public:
    explicit Application(const RandomNumberGenerator &generator);

    std::vector<Statistics> run(Model &model);

private:
    RandomNumberGenerator generator;

    void infectRandomComputer(Model &model);

    void doStep(Model &model);

    bool willUpdate(Computer &computer, Model &model);
};


#endif //VIRUS_APPLICATION_H
