// #include "Car.hpp"
#include "HybridCar.hpp"
#include <iostream>

// HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
HybridCar::HybridCar(Engine* petrolEng, Engine* electricEng)
    : PetrolCar(petrolEng)
    , ElectricCar(electricEng)
    // , electricEngine_(electricEng)
{
    std::cout << __FUNCTION__ << std::endl;
}

HybridCar::~HybridCar()       { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::turnLeft()      { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::turnRight()     { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::brake()         { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::accelerate(int) { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::charge()        { std::cout << __FUNCTION__ << std::endl; }
// void HybridCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }

void HybridCar::refill() {  
    ElectricCar::refill();   //!! nie charge... nie ma dostepu do charge
    PetrolCar::refill();
}

 

