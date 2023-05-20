#include "Engine.h"

Engine::Engine(string t, float d, bool tb)
: type(t), displacement(d), turbocharged(tb)
{
}

void Engine::printInfo(){
    cout << "Engine type: "  << type << endl
    << "Displacement: " << displacement << "L" << endl
    << "Turbocharged: " << isTurbocharged();
}
