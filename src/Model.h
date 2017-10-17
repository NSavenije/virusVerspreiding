//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_MODEL_H
#define VIRUS_MODEL_H

#include <vector>
#include "Computer.h"
#include "Statistics.h"

class Model {
public:
    Model(unsigned int numComputers, unsigned int numDays, double updateChance);

    void updateComputer(Computer &computer);
    void infectComputer(Computer &computer);

    bool isInfected(Computer &computer) const;
    bool isUpdated(Computer &computer) const;

    double getUpdateChance() const;
    unsigned int getNumDays() const;
    unsigned int getNumComputers() const;

    std::vector<Computer> & getComputers();
    Computer & getComputer(unsigned int index);
    Statistics getStatistics();


private:
    unsigned int numDays;
    unsigned int numComputers;

    double updateChance;
    unsigned int infections;
    unsigned int infected;

    unsigned int updated;

    std::vector<Computer> computers;
};

#endif //VIRUS_MODEL_H
