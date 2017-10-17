//
// Created by vanlonden on 10/16/17.
//

#ifndef VIRUS_VERSPREIDING_GENERATOR_H
#define VIRUS_VERSPREIDING_GENERATOR_H

#include <random>

class RandomNumberGenerator {

public:
    RandomNumberGenerator();
    explicit RandomNumberGenerator(unsigned int seed);

    bool genBool(double chance);

    unsigned int genUnsignedInt(unsigned int max);
    unsigned long genUnsignedLong(unsigned long max);

    double genDouble(double min, double max);
    double genDouble();


private:
    unsigned int seed;
    std::mt19937 mt19937;

    void init(unsigned int seed);

};


#endif //VIRUS_VERSPREIDING_GENERATOR_H
