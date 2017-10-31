//
// Created by vanlonden on 10/18/17.
//

#include "Simulator.h"

Simulator::Simulator(RandomNumberGenerator & randomNumberGenerator)
        : randomNumberGenerator(randomNumberGenerator) {}

std::vector<unsigned int> Simulator::run(const Scenario & scenario) {

    Model model = Model(scenario.getNumComputers());

    this->infectRandomComputer(model);

    while (model.getNumProtected() < scenario.getNumProtected()) {
        this->protectRandomComputer(model);
    }

    std::vector<unsigned int> numInfectedVector = std::vector<unsigned int>();
    numInfectedVector.push_back(model.getNumInfected());

    while (model.getNumInfected() < scenario.getNumComputers() - scenario.getNumProtected()) {
        for (auto &infectedComputer : model.getInfectedComputers()) {
            this->infectRandomComputer(model);
        }

        numInfectedVector.push_back(model.getNumInfected());
    }

    return numInfectedVector;
}

void Simulator::infectRandomComputer(Model &model) {
    model.infectComputer(getRandomComputer(model));

}

void Simulator::protectRandomComputer(Model &model) {
    model.protectComputer(getRandomComputer(model));
}

Computer & Simulator::getRandomComputer(Model &model) const {
    return model.getComputer(randomNumberGenerator.genUnsignedInt(model.getNumComputers()));
}




