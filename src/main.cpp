

#include <array>
#include "Application.h"


int main() {
    auto generator = RandomNumberGenerator();
    auto application = Application(generator);

    unsigned int computers = 1000000;
    unsigned int steps = 100;
    double chance = 0.05;

    auto model = Model(computers, steps, chance);


    int runs = 20;
    std::vector<unsigned int> results(runs);
    for (int i = 0; i < runs; i++) {
         results[i] = application.run(model);
    }
    
    return 0;
}