#ifndef GAME_H
#define GAME_H

#include "../States/GameState.h"
class Game
{
    private :
//--------Variables--------//

        RenderWindow *window;
        Event sfEvent;

        Clock dtClock;
        float dt;

        stack<State*> states; /*Sert à la gestion de ce qui est à montré dans la fenêtre.*/
        

//--------Initialisation--------//

        void initWindow();
        void initStates();

    public :
//--------Constructeur/Destructeur--------//

        Game();
        virtual ~Game();

//--------Fonctions--------//

        //Regular

        void endApplication();

        //Update

        void updateDT();
        void updateSFMLEvents();
        void update();

        //Render

        void render();

        //Core

        void run();
    

};

#endif
