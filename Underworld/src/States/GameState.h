#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "State.h"

class GameState :
    public State
{
private:
//--------Variables--------//
    Entity Player;
public:
//--------Constructeur/Destructeur--------//

    GameState(RenderWindow* window);
    ~GameState();

//--------Fonctions--------//
    void endState();

    void updateKeyBinds(const float& dt);
    void update(const float& dt);
    void render(RenderTarget* target = nullptr);
};




#endif