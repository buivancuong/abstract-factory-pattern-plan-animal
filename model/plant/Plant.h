//
// Created by acsim on 9/27/2018.
//

#ifndef ABSTRACTFACTORY_PLANT_H
#define ABSTRACTFACTORY_PLANT_H

class Plant {
public:
    Plant() = default;

    virtual ~Plant() = default;

    virtual void appear() = 0;
};

#endif //ABSTRACTFACTORY_PLANT_H
