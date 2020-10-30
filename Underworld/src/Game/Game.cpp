#include "Game.h"


//--------Fonctions d'Initialisation--------//

void Game::initWindow()
{   
    ifstream ifs("Config/window.ini");
    string title = "None";
    VideoMode window_bounds(800,600);
    unsigned framerate_limit = 120;
    bool vertical_sync_enabled = false;
    ;
    if(ifs.is_open())
    {
        getline(ifs, title);
        ifs >> window_bounds.width >> window_bounds.height;
        ifs >> framerate_limit;
        ifs >> vertical_sync_enabled;
    }
    
    ifs.close();

    window = new RenderWindow(window_bounds, title);
    window->setFramerateLimit(framerate_limit);
    window->setVerticalSyncEnabled(vertical_sync_enabled);
}

void Game::initStates()
{
    states.push(new GameState(window));
}

//--------Constructeur/Destructeur--------//

Game::Game()
{
    initWindow();
    initStates();
}
Game::~Game()
{
    delete window;

    while (!(states.empty()))  
    {
        delete states.top();
        states.pop();
    }
    
}

//--------Fonctions--------//

void Game::endApplication()
{
    cout << "Ending Application !" << endl;
}

void Game::updateDT()
{
    dt = dtClock.restart().asSeconds(); /* MAJ dt*/

}

void Game::updateSFMLEvents()
{
    while (window->pollEvent(sfEvent))
    {
        // Evènement "fermeture demandée" : on ferme la fenêtre
        if (sfEvent.type == Event::Closed)
            window->close();
    }

}

void Game::update()
{
    updateSFMLEvents();

    if(!(states.empty()))
    {
        states.top()->update(dt);
        if(states.top()->getQuit())
        {
            /*Si on quitte alors tous les evenements possibles sont annulés*/
            states.top()->endState();
            delete states.top();
            states.pop();
        }
    }

    //Fin de l'application
    else
    {
        endApplication();
        window->close();
    }


}

void Game::render()
{
    window->clear();

    if(!(states.empty()))
    {
        states.top()->render();
    }
}

void Game::run()
{
    while (window->isOpen())
    {
        updateDT();
        update();
        render();
    }
}