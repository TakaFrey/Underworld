#ifndef STATE_H
#define STATE_H

#include "../Entities/Entity.h"


class State
{
    private:
    //--------Variables--------//

    protected:
    //--------Variables--------//
        RenderWindow* window;
        vector<Texture> textures;
        bool quit;
    public:
//--------Constructeur/Destructeur--------//

        State(RenderWindow* window);
        virtual ~State();


//--------Fonctions--------//
        const bool& getQuit() const;

        virtual void checkForQuit();

        virtual void endState() = 0;
        virtual void updateKeyBinds(const float& dt) = 0;
        virtual void update(const float& dt) = 0;
        virtual void render(RenderTarget* target = nullptr) = 0;

};




#endif
