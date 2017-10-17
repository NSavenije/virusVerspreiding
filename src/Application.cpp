//
// Created by vanlonden on 10/17/17.
//

#include <iostream>
#include "Application.h"
#include "Model.h"


Application::Application(const RandomNumberGenerator &generator) : generator(generator) {}

unsigned int Application::run(Model model) {

    // infect patient zero
    unsigned int numComputers = model.getNumComputers();
    model.getComputer(generator.genUnsignedInt(numComputers)).infect();

    for (int currentStep = 0; currentStep < model.getNumSteps(); currentStep++) {
        doStep(model);
    }

    return countInfected(model);
}

void Application::doStep(Model &model) {
    std::vector<Computer> &computers = model.getComputers();
    for (auto &computer : computers) {
        if (!computer.isShielded() && generator.genBool(model.getUpdateChancePerStep())) {
            computer.shield();
        }
    }

    for (auto &computer : computers) {
        if (computer.isInfected()) {
            tryInfectRandomComputer(model);
        }
    }
}

void Application::tryInfectRandomComputer(Model &model) {
    std::vector<Computer> &computers = model.getComputers();
    Computer &computer = computers[generator.genUnsignedLong(computers.size())];
    if (!computer.isShielded()) {
        computer.infect();
    }
}

unsigned int Application::countInfected(Model &model) const {
    unsigned int numInfectedComputers = 0;
    for (auto &computer : model.getComputers()) {
        if (computer.isInfected()) {
            numInfectedComputers++;
        }
    }
    return numInfectedComputers;
}