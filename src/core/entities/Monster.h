#ifndef MONSTER_H
#define MONSTER_H

#include "Entity.h"
#include "Position.h"

namespace Core
{
    namespace Entities
    {
        class Monster: public Entity {
            public:
                Position position;
                int health;
                int attacK;

                Monster(int x = 0, int y = 0, int health = 50, int attack = 8);

                void takeDamage(int amount) override;
                int getHealth() const override;
                void move(int dx, int dy) override;

                void attackTarget(Entity& target);             
        };
    } // namespace Entities
    
} // namespace Core


#endif // MONSTER_H