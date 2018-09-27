//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_WOOD_H
#define ABSTRACTFACTORY_WOOD_H

#include <iostream>
#include "Plant.h"

using namespace std;

class Wood : public Plant {
public:
    Wood();

    ~Wood() override;

    void appear() override;

};


#endif //ABSTRACTFACTORY_WOOD_H
