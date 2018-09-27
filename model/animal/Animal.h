//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_ANIMAL_H
#define ABSTRACTFACTORY_ANIMAL_H

class Animal {
public:
    Animal() = default;

    virtual ~Animal() = default;

    virtual void appear() = 0;
};

#endif //ABSTRACTFACTORY_ANIMAL_H
