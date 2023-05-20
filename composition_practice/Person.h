#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"


class Person{
    
    private:
        string name;
        Birthday bd;
    public:
        Person(string n, Birthday dateOfBirth);
        void printInfo();

};








#endif