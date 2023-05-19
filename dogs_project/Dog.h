#ifndef DOG_H
#define DOG_H
#include <iostream>
using namespace std;

class Dog{
    private:
        string name;
        string breed;

    public:
        void setName(string);
        void setBreed(string);
        void introduceMyself();
        
};


#endif