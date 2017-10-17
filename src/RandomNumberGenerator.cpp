//
// Created by vanlonden on 10/16/17.
//

#include "RandomNumberGenerator.h"

void RandomNumberGenerator::init(unsigned int seed) {
    this->seed = seed;
    this->mt19937 = std::mt19937(this->seed);
}

RandomNumberGenerator::RandomNumberGenerator(unsigned int seed) {
    init(seed);
}

RandomNumberGenerator::RandomNumberGenerator() {
    std::random_device randomDevice;
    init(randomDevice());
}

unsigned int RandomNumberGenerator::genUnsignedInt(unsigned int max) {
    std::uniform_int_distribution<unsigned int> distribution(0, max);
    return distribution(this->mt19937);
}

unsigned long RandomNumberGenerator::genUnsignedLong(unsigned long max) {
    std::uniform_int_distribution<unsigned long> distribution(0, max);
    return distribution(this->mt19937);
}

double RandomNumberGenerator::genDouble(double min, double max) {
    std::uniform_real_distribution<double> distribution(min, max);
    return distribution(this->mt19937);
}

bool RandomNumberGenerator::genBool(double chance) {
    return this->genDouble() <= chance;
}

double RandomNumberGenerator::genDouble() {
    return this->genDouble(0.0, 1.0);
}
