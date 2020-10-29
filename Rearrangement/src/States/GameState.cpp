#include "GameState.h"

//Constructeur/Destructeur

GameState::GameState(RenderWindow* window)
    : State(window)
{

}

GameState::~GameState()
{

}

//Fonctions

void GameState::endState()
{
    cout << "Ending GameState !" << endl;
}

void GameState::updateKeyBinds(const float& dt)
{
    checkForQuit();
}

void GameState::update(const float& dt)
{
    updateKeyBinds(dt);
    if(Keyboard::isKeyPressed(Keyboard::A))
    {
        cout << "A" << endl;
    }
}

void GameState::render(RenderTarget* target)
{

}
