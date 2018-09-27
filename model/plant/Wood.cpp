//
// Created by acsim on 9/27/2018.
//

#include "Wood.h"
#include <iostream>
using namespace std;

Wood::Wood() {
    cout << "Constructor of Wood." << endl;
}

Wood::~Wood() {
    cout << "Destructor of Wood." << endl;
}

void Wood::appear() {
    cout << "A Wood Plant has appeared!" << endl;
}
