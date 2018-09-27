//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_FOOD_H
#define ABSTRACTFACTORY_FOOD_H


#include "Plant.h"
#include <iostream>
using namespace std;

class Food : public Plant {
public:
    Food();

    ~Food() override;

    void appear() override;

};


#endif //ABSTRACTFACTORY_FOOD_H
