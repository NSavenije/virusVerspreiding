

#include <array>
#include <iostream>
#include "Application.h"


int main() {
    auto generator = RandomNumberGenerator();
    auto application = Application(generator);

    unsigned int computers = 1000000;
    unsigned int steps = 100;
    double chance = 0.05;

    auto model = Model(computers, steps, chance);

    std::vector<Statistics> days = application.run(model);
    
    std::cout << "day,infections,infected,updated\n";
    for (int i = 0; i < days.size(); i++) {
        Statistics &day = days[i];
        std::cout << std::to_string(i) << ','
                  << std::to_string(day.getInfections()) << ','
                  << std::to_string(day.getInfected()) << ','
                  << std::to_string(day.getUpdated()) << std::endl;
    }
    
    return 0;
}