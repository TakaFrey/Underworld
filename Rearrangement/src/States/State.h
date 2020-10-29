#pragma once

#include <sstream>
#include <fstream>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <stack>
#include <map>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


using namespace sf;
using namespace std;

class State
{
    private:
        //Variables
        RenderWindow *window;
        vector<Texture> textures;
        bool quit;



    public:

    //Constructeur/Destructeur
        State(RenderWindow* window);
        virtual ~State();

    //Fonctions

        const bool& getQuit();

        virtual void checkForQuit();

        virtual void endState() = 0;
        virtual void updateKeyBinds(const float& dt) = 0;
        virtual void update(const float& dt) = 0;
        virtual void render(RenderTarget* target = nullptr) = 0; //Si rien de spécifique n'est demandé à être afficher, affiche la fenêtre
    };
