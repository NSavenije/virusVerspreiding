//
// Created by vanlonden on 10/18/17.
//

#ifndef VIRUS_SCENARIO_H
#define VIRUS_SCENARIO_H


class Scenario {
public:
    Scenario(unsigned int numProtected, unsigned int numComputers);

    unsigned int getNumProtected() const;

    unsigned int getNumComputers() const;

private:
    unsigned int numProtected;
    unsigned int numComputers;
};


#endif //VIRUS_SCENARIO_H
