//
// Created by vanlonden on 10/17/17.
//


#include "Model.h"

Model::Model(unsigned int numComputers, unsigned int numDays, double updateChance) {
    this->numDays = numDays;
    this->numComputers = numComputers;
    this->updateChance = updateChance;

    this->computers = std::vector<Computer>(numComputers);

    this->infections = 0;
    this->infected = 0;
    this->updated = 0;
}

void Model::updateComputer(Computer &computer) {
    computer.updated = true;
    this->updated++;

    if (computer.infected) {
        computer.infected = false;
        this->infected--;
    }
}

void Model::infectComputer(Computer &computer) {
    if (! computer.updated) {
        computer.infected = true;
        this->infections++;
        this->infected++;
    }
}

bool Model::isInfected(Computer & computer) const {
    return computer.infected;
}

bool Model::isUpdated(Computer &computer) const {
    return computer.updated;
}

unsigned int Model::getNumComputers() const {
    return this->numComputers;
}

unsigned int Model::getNumDays() const {
    return this->numDays;
}

double Model::getUpdateChance() const {
    return this->updateChance;
}

std::vector<Computer> & Model::getComputers() {
    return this->computers;
}

Computer & Model::getComputer(unsigned int index) {
    return this->computers[index];
}

Statistics Model::getStatistics() {
    return Statistics(this->infections, this->infected, this->updated);
}

