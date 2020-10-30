#include "GameState.h"

//--------Constructeur/Destructeur--------//

GameState::GameState(RenderWindow* window)
    : State(window)
{
    
}

GameState::~GameState()
{

}

//--------Fonctions--------//
void GameState::endState()
{
    cout << "Ending GameState" << endl;
}

void GameState::updateKeyBinds(const float& dt)
{
    checkForQuit();
}

void GameState::update(const float& dt)
{
    updateKeyBinds(dt);

    Player.update(dt);
}

void GameState::render(RenderTarget* target)
{
    Player.render(window);
}