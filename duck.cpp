#include "duck.h"
#include <iostream>

using namespace std;

Duck::Duck() : Bird("Duck") {
    cry();
}

Duck::~Duck() {
    cry();
}

void Duck::cry() {
    cout << "Quack!" << endl;
}