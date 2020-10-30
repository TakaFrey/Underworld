#include "../src/Game/Game.h"



int main()
{
    Game game;

    game.run();

    return 0;

/*
    //Bone

    Texture boneTex;
    Sprite bone;

    if(!boneTex.loadFromFile("Images/bone.png"))
    {
        throw "Could not load bone.png !";
    }

    bone.setTexture(boneTex);
    bone.setScale(Vector2f(0.1f, 0.1f)); //réduction de la taille de l'image

    int boneSpawnTimer = 10;
    vector<Sprite> bones;

    bones.push_back(Sprite(bone));


    
    // Vertex line[] = { Vertex(Vector2f(100.f, 400.f)), Vertex(Vector2f(50.f, 100.f)) };

    

    float dt;
    Clock dt_clock;

    const float gridSize = 32.f;


    
    //Player_combat
    const float movementSpeed = 250.f;
    Vector2f velocity;

    Texture heartTex;
    Sprite heart;

    if(!heartTex.loadFromFile("Images/heart.png"))
    {
        throw "Could not load heart.png !";
    }

    heart.setTexture(heartTex);
    heart.setScale(Vector2f(1.5f, 1.5f)); //réduction de la taille de l'image
    

    RectangleShape Player;
    Player.setFillColor(Color::Red);
    Player.setSize(Vector2f(gridSize, gridSize));
    
    // on fait tourner le programme jusqu'à ce que la fenêtre soit fermée
    
    while (window.isOpen())
    {
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        Event event;
        dt = dt_clock.restart().asSeconds();
        while (window.pollEvent(event))
        {
            // évènement "fermeture demandée" : on ferme la fenêtre
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                window.close();
        }



    //Player Movements
    
    velocity.y = 0.f;
    velocity.x = 0.f;


    if (Keyboard::isKeyPressed(Keyboard::Up))
    {
        velocity.y += -movementSpeed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Down))
    {
        velocity.y += movementSpeed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        velocity.x += -movementSpeed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        velocity.x += movementSpeed * dt;
    }

    
    heart.move(velocity);


    //update
        // Controls(heart);
        // Controls(heart);

        //Collision Screen
            //Left Collision
        if (heart.getPosition().x < 0.f)
        {
            heart.setPosition(0.f, heart.getPosition().y);
        }

            //Top Collision
        if (heart.getPosition().y < 0.f)
        {
            heart.setPosition(heart.getPosition().x, 0.f);
        }

            //Right Collision
        if (heart.getPosition().x + heart.getGlobalBounds().width > WINDOW_WIDTH)
        {
            heart.setPosition(WINDOW_WIDTH - heart.getGlobalBounds().width, heart.getPosition().y);
        }
        
            //Bottom Collision
         if(heart.getPosition().y + heart.getGlobalBounds().height > WINDOW_HEIGHT)
        {
            heart.setPosition(heart.getPosition().x, WINDOW_HEIGHT - heart.getGlobalBounds().height);
        }

        
        // RANDOM BONE SPAWN (R to L)
        
        for (size_t i = 0; i < bones.size(); i++)
        {
            bones[i].move(-8.f, 0.f);
        }

        if (boneSpawnTimer < 15)
        {
            boneSpawnTimer++;
        }

        if (boneSpawnTimer >= 15)
        {
            bone.setPosition(window.getSize().x, rand()%int(window.getSize().y - bone.getGlobalBounds().height));
            bones.push_back(Sprite(bone));
            boneSpawnTimer = 0;
        }   
        
          // Draw
          
        window.clear();

        window.draw(heart);
        
        
        for (size_t i = 0; i < bones.size(); i++)
        {
            window.draw(bones[i]);
        }
        
        

        window.display();
    }
*/
    return 0;
}

