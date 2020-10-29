#include "State.h"

//Constructeur/Destructeur

State::State(RenderWindow* window)
{
    window = window;
}

State::~State()
{
    
}

//Fonctions

const bool& State::getQuit()
{
    return quit;
}

void State::checkForQuit()
{
    if(Keyboard::isKeyPressed(Keyboard::Escape))
    {
        quit = true;
    }
}