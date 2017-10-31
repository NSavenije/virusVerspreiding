//
// Created by vanlonden on 10/18/17.
//

#include <iostream>
#include "ResultWriter.h"

void ResultWriter::write(Scenario scenario, int iteration, std::vector<unsigned int> infectedVector) {
    unsigned int day = 0;
    for (auto &infected : infectedVector) {
        std::cout << std::to_string(scenario.getNumComputers()) << ','
                  << std::to_string(scenario.getNumProtected()) << ','
                  << std::to_string(iteration) << ','
		  << std::to_string(day++) << ','
                  << std::to_string(infected) << std::endl;
    }
}
