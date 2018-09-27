//
// Created by acsim on 9/27/2018.
//

#include "AbstractFactory.h"
#include "../model/plant/Food.h"
#include "../model/animal/Chicken.h"
#include "../model/plant/Wood.h"
#include "../model/animal/Cow.h"
#include "../model/animal/Pig.h"

AbstractFactory::AbstractFactory() {
    cout << "Constructor of Abstract Factory." << endl;
}

AbstractFactory::~AbstractFactory() {
    cout << "Destructor of Abstract Factory." << endl;
}

Plant *getPlant(ePlant plant) {
    switch (plant) {
        case Food: {
            return new class Food();
            break;
        }
        case Wood: {
            return new class Wood();
            break;
        }
        default:
            break;
    }
}

Animal *getAnimal(eAnimal animal) {
    switch (animal) {
        case Chicken:{
            return new class Chicken();
            break;
        }
        case Cow: {
            return new class Cow();
            break;
        }
        case Pig: {
            return new class Pig();
            break;
        }
        default:
            break;
    }
}

Plant *AbstractFactory::createPlant(ePlant plant) {
    return getPlant(plant);
}

Animal *AbstractFactory::createAnimal(eAnimal animal) {
    return getAnimal(animal);
}

