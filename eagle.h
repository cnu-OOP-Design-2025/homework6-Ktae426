#pragma once
#include "bird.h"
#include <iostream>

class Eagle : public Bird {
public:
    Eagle();
    ~Eagle();

    void cry() override;
    void swim() override;
};

