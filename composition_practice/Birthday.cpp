#include "Birthday.h"

Birthday::Birthday(int d, int m, int y)
: day(d), month(m), year(y)
{
}

void Birthday::printBirthday(){
    
    cout << day << "/" << month << "/" << year << endl;
        
}