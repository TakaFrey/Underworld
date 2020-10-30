#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <map>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;
using namespace sf;


class Entity
{
    private:
    //--------Variables--------//

    protected:
    //--------Variables--------//
        RectangleShape shape;
        float movementSpeed;

    public:
    //--------Constructeur/Destructeur--------//
        Entity();
        virtual ~Entity();


    //--------Fonctions--------//
        virtual void move(const float& dt, const float x, const float y);

        virtual void update(const float& dt);
        virtual void render(RenderTarget* target);
};

#endif