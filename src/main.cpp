#include "AngleSensor.h"
#include "Configuration.h"
#include "Controller.h"
#include "DCMotor.h"
#include <iostream>
#include <memory>

int main(int, char**)
{
    auto dcMotor = std::make_unique<DCMotor>(0.0);

    return 0;
}
