#include "penguin.h"
#include <iostream>

using namespace std;

Penguin::Penguin() : Bird("Penguin") {
    cry();
}

Penguin::~Penguin() {
    cry();
}

void Penguin::cry() {
    cout << "Squawk!" << endl;
}

void Penguin::fly() {
    cout << "This bird can't fly." << endl;
}