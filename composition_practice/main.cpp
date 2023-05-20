#include <iostream>
#include "Person.h"
#include "Birthday.h"
using namespace std;

int main(){

    Birthday mattsBirthday(26,8,1998);

    Person kingMatt("Matt the God", mattsBirthday);

    kingMatt.printInfo();






    return 0;
}