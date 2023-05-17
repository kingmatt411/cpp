#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Prototypes
void getInput(string& userInput);

int main(){
    int seed = time(0);
    srand(seed);

    string options[3] = {"rock", "paper", "scissors"};

    while(true){
    string computerChoice = options[rand()%3];
    string userChoice;

   do{
    getInput(userChoice);
   }while(userChoice != "rock" && userChoice != "paper" && userChoice != "scissors" && userChoice != "-1");
           
    if(userChoice == "-1"){
        break;
    }

    cout << "Computer chose " << computerChoice << ". ";

    if(userChoice == computerChoice){
        cout << "It's a draw." << endl;
    }else if(userChoice == "rock" && computerChoice == "scissors" || userChoice == "paper" && computerChoice == "rock"
    || userChoice == "scissors" && computerChoice == "paper"){
        cout << "You win." << endl;
    }else{
        cout << "Computer wins." << endl;
    }

    }

}

void getInput(string& userInput){
    cout << "Enter rock, paper, scissors or -1 to exit: ";
    getline(cin, userInput);
}