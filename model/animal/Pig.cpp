//
// Created by acsim on 9/27/2018.
//

#include "Pig.h"
#include <iostream>
using namespace std;

Pig::Pig() {
    cout << "Constructor of Pig." << endl;
}

Pig::~Pig() {
    cout << "Destructor of Pig." << endl;
}

void Pig::appear() {
    cout << "A Pig has appeared!" << endl;
}
