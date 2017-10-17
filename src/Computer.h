//
// Created by vanlonden on 10/17/17.
//

#ifndef VIRUS_COMPUTER_H
#define VIRUS_COMPUTER_H

class Computer {
    friend class Model;

public:
    Computer();

private:
    bool updated;
    bool infected;

};

#endif //VIRUS_COMPUTER_H
