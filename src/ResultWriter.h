//
// Created by vanlonden on 10/18/17.
//

#ifndef VIRUS_STATISTICSEXPORTER_H
#define VIRUS_STATISTICSEXPORTER_H


#include <vector>
#include "Scenario.h"

class ResultWriter  {
public:
    void write(Scenario scenario, int iteration, std::vector<unsigned int> infectedVector);
};

#endif //VIRUS_STATISTICSEXPORTER_H
