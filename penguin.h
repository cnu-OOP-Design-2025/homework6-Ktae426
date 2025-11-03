#pragma once
#include "bird.h"
#include <iostream>

class Penguin : public Bird {
public:
    Penguin();
    ~Penguin();

    void cry() override;
    void fly() override;
};

