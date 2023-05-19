#include "Dog.h"
#include <iostream>
using namespace std;

void Dog::setName(string dogName){
    name = dogName;
}

void Dog::setBreed(string dogBreed){
    breed = dogBreed;
}

void Dog::introduceMyself(){
    cout << "Hi, my name is " << name << ". I'm a " << breed << ". Woof!" << endl;
}
