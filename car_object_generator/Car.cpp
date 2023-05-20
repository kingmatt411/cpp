#include "Car.h"
#include "Engine.h"
#include <iostream>
using namespace std;

Car::Car(string make, string model, Engine engine)
: carEngine(engine)
{
    carMake = make;
    carModel = model;
}

string Car::getModel(){
    return carModel;
}

void Car::printEngineInfo(){
    carEngine.printInfo();
}

