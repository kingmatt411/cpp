#include <iostream>
#include "Dog.h"
using namespace std;

int main(){

    // A new dog is created and worked with using a dog object directly

    Dog dog1;
    string dog1Name;
    string dog1Breed;

    cout << "Enter the name of dog #1: ";
    cin >> dog1Name;
    cin.ignore();
    cout << "Enter the breed of dog #1: ";
    getline(cin, dog1Breed);

    dog1.setName(dog1Name);
    dog1.setBreed(dog1Breed);

    dog1.introduceMyself();

    Dog dog2;
    Dog* ptrToDog2 = &dog2;
    string dog2Name;
    string dog2Breed;

    cout << "Enter the name of dog #2: ";
    cin >> dog2Name;
    cin.ignore();
    cout << "Enter the breed of dog #2: ";
    getline(cin, dog2Breed);

    ptrToDog2->setName(dog2Name);
    ptrToDog2->setBreed(dog2Breed);

    ptrToDog2 -> introduceMyself();

    


    
    
    return 0;
}