//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_PIG_H
#define ABSTRACTFACTORY_PIG_H

#include "Animal.h"


class Pig : public Animal {
public:
    Pig();

    ~Pig() override;

    void appear() override;
};


#endif //ABSTRACTFACTORY_PIG_H
