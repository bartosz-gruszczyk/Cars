#pragma once
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    // PetrolCar(PetrolEngine* engine);
    PetrolCar(Engine* engine);
    ~PetrolCar();
    // void turnLeft();
    // void turnRight();
    // void brake();
    // void accelerate(int speed);
    void refill() override;

private:
    void refuel();
    // PetrolEngine* engine_;
    Engine* engine_;
};

