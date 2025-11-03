#pragma once
#include "bird.h"
#include <iostream>

class Duck : public Bird {
public:
    Duck();
    ~Duck();

    void cry() override;
};

