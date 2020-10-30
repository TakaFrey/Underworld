#include "State.h"

//--------Constructeur/Destructeur--------//

State::State(RenderWindow* window)
{
    window = window;
    quit = false;
}

State::~State()
{

}
const bool& State::getQuit() const
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