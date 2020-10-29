#pragma once

#include "State.h"

class GameState :
    public State
    {
    private:

    public:
    //Constructeur/Destructeur

        GameState(RenderWindow *window);
        virtual ~GameState();

    //Fonctions
        void endState();

        void updateKeyBinds(const float& dt);
        void update(const float& dt);
        void render(RenderTarget* target = nullptr);
    };


