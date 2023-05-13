#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Declare the outputFile object and link it to the sales.csv file
    ofstream outputFile;
    outputFile.open("/Users/mattpatchava/Desktop/sales.csv");

    double sales;
    int weeks;

    // Validate user input for number of weeks (1 to 10 allowed)
    do{cout << "Enter the number of weeks to record (up to 10): ";
    cin >> weeks;
    }while(weeks < 1 || weeks > 10);

    string daysOfWeek[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Total"};

    // Append header columns to the table
    for(int day = 0; day < 8; day++){
        outputFile << daysOfWeek[day];
        if(day < 7){
            outputFile << ",";
        }
    }
    outputFile << endl;


    for(int week = 1; week <= weeks; week++){
        
        // Initialise weeklyTotal and reset to 0 for each new row
        double weeklyTotal = 0;
        
        for(int day = 1; day <= 8; day++){
            
            // Get daily sales, append to CSV data and add to weekly total

            if(day <= 7){
            cout << "Week " << week << " day " << day << " sales: ";
            cin >> sales;
            outputFile << sales;
            weeklyTotal += sales;
    
            outputFile << ",";
            }

            // Append weekly total to total column

            if(day == 8){
                outputFile << weeklyTotal;
            }
        }
        // Start new row in table
        outputFile << endl;
    }

    outputFile.close();

    return 0;
}