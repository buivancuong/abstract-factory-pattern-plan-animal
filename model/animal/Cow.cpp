//
// Created by acsim on 9/27/2018.
//

#include "Cow.h"
#include <iostream>
using namespace std;

Cow::Cow() {
    cout << "Constructor of Cow." << endl;
}

Cow::~Cow() {
    cout << "Destructor of Cow." << endl;
}

void Cow::appear() {
    cout << "A Cow has appeared!" << endl;
}
