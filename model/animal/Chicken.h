//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_CHICKEN_H
#define ABSTRACTFACTORY_CHICKEN_H


#include "Animal.h"

class Chicken : public Animal {
public:
    Chicken();

    ~Chicken() override;

    void appear() override;

};


#endif //ABSTRACTFACTORY_CHICKEN_H
