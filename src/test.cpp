//
// Created by vanlonden on 10/18/17.
//

#include <cassert>
#include "Model.h"

int main() {

    auto model = Model(3);

    auto & computer0 = model.getComputer(0);
    auto & computer1 = model.getComputer(1);
    auto & computer2 = model.getComputer(2);

    model.protectComputer(computer0);

    model.infectComputer(computer0);
    model.infectComputer(computer1);
    model.infectComputer(computer2);

    assert(model.getNumInfected() == 2);
    assert(model.getNumProtected() == 1);

    model.protectComputer(computer0);
    model.protectComputer(computer1);

    assert(model.getNumInfected() == 2);
    assert(model.getNumProtected() == 2);

}