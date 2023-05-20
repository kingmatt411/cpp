#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Engine.h"
using namespace std;

class Car{
    public:
        Car(string, string, Engine);

        string getMake(){
            return carMake;
        }

        string getModel();

        void printEngineInfo();

    private:
        string carMake;
        string carModel;
        Engine carEngine;
};





#endif