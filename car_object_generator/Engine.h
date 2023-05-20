#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;

class Engine{
    public:
        Engine(string t, float d, bool tb);

        string getType(){
            return type;
        }

        float getDisplacement(){
            return displacement;
        }

        char isTurbocharged(){
            if(turbocharged){
                return 'Y';
            }else{
                return 'N';
            };
        }

        void printInfo();

    private:
        string type;
        float displacement;
        bool turbocharged;
};





#endif