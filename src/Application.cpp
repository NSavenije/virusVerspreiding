//
// Created by vanlonden on 10/17/17.
//

#include <iostream>
#include "Application.h"


Application::Application(const RandomNumberGenerator &generator) : generator(generator) {}

std::vector<Statistics> Application::run(Model &model) {

    infectRandomComputer(model);

    std::vector<Statistics> statistics(model.getNumDays());
    for (int day = 0; day < model.getNumDays(); day++) {
        doStep(model);
        statistics[day] = model.getStatistics();
    }

    return statistics;
}

void Application::doStep(Model &model) {
    for (auto &computer : model.getComputers()) {
        if (willUpdate(computer, model)) {
            model.updateComputer(computer);
        }
    }

    for (auto &computer : model.getComputers()) {
        if (model.isInfected(computer)) {
            infectRandomComputer(model);
        }
    }
}

bool Application::willUpdate(Computer & computer, Model & model) {
    if (model.isUpdated(computer)) {
        return false;
    }

    return generator.genBool(model.getUpdateChance());
}

void Application::infectRandomComputer(Model &model) {
    model.infectComputer(model.getComputer(generator.genUnsignedInt(model.getNumComputers())));

}