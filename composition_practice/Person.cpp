#include "Person.h"

Person::Person(string n, Birthday dateOfBirth)
: name(n), bd(dateOfBirth)
{
}

void Person::printInfo(){
    cout << name << " was born on ";
    bd.printBirthday();
}