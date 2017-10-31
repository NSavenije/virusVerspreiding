#include <memory>
#include "Model.h"

Model::Model(unsigned int numComputers) {
    this->numComputers = numComputers;
    this->numProtected = 0;
    this->numInfected = 0;

    this->computers = std::vector<Computer>(numComputers);
    this->infectedComputers = std::vector<Computer>();
}

void Model::protectComputer(Computer &computer) {
    if (!computer.updated) {
        computer.updated = true;
        this->numProtected++;
    }
}

void Model::infectComputer(Computer &computer) {
    if (!computer.updated && !computer.infected) {
        computer.infected = true;
        this->infectedComputers.push_back(computer);
        this->numInfected++;
    }
}

const std::vector<Computer> & Model::getInfectedComputers() const {
    return infectedComputers;
}

const std::vector<Computer> & Model::getComputers() const {
    return this->computers;
}

Computer & Model::getComputer(unsigned int index) {
    return this->computers[index];
}

unsigned int Model::getNumComputers() const {
    return this->numComputers;
}

unsigned int Model::getNumProtected() const {
    return this->numProtected;
}

unsigned int Model::getNumInfected() const {
    return this->numInfected;
}

bool Model::isInfected(Computer &computer) const {
    return computer.infected;
}
