#include <iostream>
#include "Simulator.h"
#include "ResultWriter.h"

int main(int argc, const char * argv[]) {
    auto randomNumberGenerator = RandomNumberGenerator();
    auto simulator = Simulator(randomNumberGenerator);
    auto writer = ResultWriter();

    auto arguments = std::vector<std::string>(&argv[0], &argv[argc]);
    
    if (arguments.size() == 3) {
        auto iterations = std::stoi(arguments[1]);
        auto max = std::stoi(arguments[2]);
        for (auto iteration = 0; iteration < iterations; iteration++) {
            auto number = randomNumberGenerator.genUnsignedInt(max);
            std::cout << std::to_string(number) << std::endl;
        }
    }

    if (arguments.size() < 4) {
        std::cerr << "usage: virus [computers] [step] [iterations]" << std::endl;
        return 0;
    }
    
    auto step = std::stoi(arguments[2]);
    auto computers = std::stoi(arguments[1]);
    auto iterations = std::stoi(arguments[3]);

    std::cout << "total,protected,iteration,day,infected" << std::endl;

    for (auto numProtected = 0; numProtected < computers; numProtected += step) {
        for (auto iteration = 0; iteration < iterations; iteration++) {
            Scenario scenario = Scenario(numProtected, computers);
            writer.write(scenario, iteration, simulator.run(scenario)); 
        }
    }

    return 0;
}
