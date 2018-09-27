//
// Created by acsim on 9/27/2018.
//

#include <iostream>
#include "../factory/AbstractFactory.h"

using namespace std;

int main() {
    auto *abstractFactory = new AbstractFactory();

    auto randomPlantType = ePlant (rand() % ePlant::Plant_COUNT);
    auto randomAnimalType = eAnimal (rand() % eAnimal::Animal_COUNT);

    Plant *plant = abstractFactory->createPlant(randomPlantType);
    Animal *animal = abstractFactory->createAnimal(randomAnimalType);

    plant->appear();
    animal->appear();

    return 0;
}
