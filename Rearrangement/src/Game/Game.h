#pragma once

#include "../States/GameState.h"

class Game
{
    private:

        //Variables

        RenderWindow *window;
        Event sfEvent;
    
        Clock dtClock;
        float dt;

        stack<State*> states; //Sert à la gestion de ce qui est à montré dans la fenêtre.


        //Initialisation

        void initWindow();
        void initStates();

    public:

    //Constructeur/Destructeur
    
        Game();
        virtual ~Game();

    //Fonctions
    
        void updateDT();
        void updateSFMLEvents();
        void update();
        void render();
        void run();

};
