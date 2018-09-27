//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H

enum ePlant {Food, Wood, Plant_COUNT};
enum eAnimal {Chicken, Cow, Pig, Animal_COUNT};

#include <iostream>
#include "../model/plant/Plant.h"
#include "../model/animal/Animal.h"

using namespace std;

class AbstractFactory {
public:
    AbstractFactory();

    ~AbstractFactory();

    Plant *createPlant(ePlant plant);

    Animal *createAnimal(eAnimal animal);
};


#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
