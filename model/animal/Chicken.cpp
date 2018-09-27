//
// Created by acsim on 9/27/2018.
//

#include "Chicken.h"
#include <iostream>
using namespace std;

Chicken::Chicken() {
    cout << "Constructor of Chicken." << endl;
}

Chicken::~Chicken() {
    cout << "Destructor of Chicken." << endl;
}

void Chicken::appear() {
    cout << "A Chicken has appeared!" << endl;
}
