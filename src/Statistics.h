//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_STATISTICS_H
#define VIRUS_STATISTICS_H

class Statistics {
private:
    unsigned int infections;
    unsigned int infected;
    unsigned int updated;

public:
    Statistics();
    Statistics(unsigned int infections, unsigned int infected, unsigned int updated);
    unsigned int getInfections();
    unsigned int getInfected();
    unsigned int getUpdated();
};

#endif //VIRUS_STATISTICS_H
