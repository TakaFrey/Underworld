#include "Entity.h"

//--------Constructeur/Destructeur--------//

Entity::Entity()
{
    shape.setSize(Vector2f(50.f, 50.f));
    shape.setFillColor(Color::White);
    movementSpeed = 100.f;
}

Entity::~Entity()
{

}

 //--------Fonctions--------//
void Entity::move(const float& dt, const float dir_x, const float dir_y)
{
    shape.move(dir_x * movementSpeed * dt ,dir_y * movementSpeed * dt);
}

void Entity::update(const float& dt)
{
    if(Keyboard::isKeyPressed(Keyboard::Left))
    {
        move(dt, -1.f, 0.f);
    }
    if(Keyboard::isKeyPressed(Keyboard::Right))
    {
        move(dt, 1.f, 0.f);
    }
    if(Keyboard::isKeyPressed(Keyboard::Up))
    {
        move(dt, 0.f, -1.f);
    }
    if(Keyboard::isKeyPressed(Keyboard::Down))
    {
        move(dt, 0.f, 1.f);
    }
}

void Entity::render(RenderTarget* target)
{
    target->draw(shape);
}
