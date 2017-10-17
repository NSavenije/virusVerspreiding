//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_COMPUTER_H
#define VIRUS_COMPUTER_H


class Computer {
public:
    void infect() {
        this->infected = true;
    }

    void shield() {
        this->shielded = true;
    }

    bool isInfected() const {
        return infected;
    }

    bool isShielded() const {
        return shielded;
    }


private:
    bool infected;
    bool shielded;
};


#endif //VIRUS_COMPUTER_H
