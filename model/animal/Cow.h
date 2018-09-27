//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_COW_H
#define ABSTRACTFACTORY_COW_H


#include "Animal.h"

class Cow : public Animal {
public:
    Cow();

    ~Cow() override;

    void appear() override;

};


#endif //ABSTRACTFACTORY_COW_H
