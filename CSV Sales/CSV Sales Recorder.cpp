#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream outputFile;
    outputFile.open("/Users/mattpatchava/Desktop/sales.csv");

    double sales;
    int weeks;

    do{cout << "Enter the number of weeks to record (up to 10): ";
    cin >> weeks;
    }while(weeks < 1 || weeks > 10);

    string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for(int day = 0; day < 7; day++){
        outputFile << daysOfWeek[day];
        if(day < 6){
            outputFile << ",";
        }
    }
    outputFile << endl;

    for(int week = 1; week <= weeks; week++){
        for(int day = 1; day <= 7; day++){
            cout << "Week " << week << " day " << day << " sales: ";
            cin >> sales;
            outputFile << sales;
            if(day < 7){
            outputFile << ",";
            }
        }
        outputFile << endl;
    }

    outputFile.close();

    return 0;
}