#include <iostream>
#include <string>
#include "Car.h"
#include "Engine.h"
using namespace std;

int main(){

    string newCarMake;
    string newCarModel;
    string engineType;
    float engineDisplacement;
    char turbocharged;
    bool isTurbocharged;

    cout << "Enter the make of your car: ";
    getline(cin, newCarMake);
    cout << "Enter the model of your car: ";
    getline(cin, newCarModel);
    cout << "Enter the engine type: ";
    getline(cin, engineType);
    cout << "Enter the engine displacement: ";
    cin >> engineDisplacement;
    cin.ignore();
    cout << "Is the engine turbocharged [y/n]? ";
    cin.get(turbocharged);
    if(turbocharged == 'y'){
        isTurbocharged = true;
    }else{
        isTurbocharged = false;
    }

    Engine newCarEngine(engineType, engineDisplacement, isTurbocharged);

    Car myCar(newCarMake, newCarModel, newCarEngine);

    cout << "Congratulations on your new " << myCar.getMake() << " " << myCar.getModel() << "!" << endl;
    newCarEngine.printInfo();





    return 0;
}