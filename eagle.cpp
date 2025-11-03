#include "eagle.h"
#include <iostream>

using namespace std;

Eagle::Eagle() : Bird("Eagle") {
    cry();
}

Eagle::~Eagle() {
    cry();
}

void Eagle::cry() {
    cout << "Screech!" << endl;
}

void Eagle::swim() {
    cout << "This bird can't swim." << endl;
}