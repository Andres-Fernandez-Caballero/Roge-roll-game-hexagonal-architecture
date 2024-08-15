#ifndef PLAYER_H
#define PLAYER_H

#include "Position.h"
#include "Entity.h"

namespace Core
{
    namespace Entities
    {
        
        class Player: public Entity {
            public:
                Position position;
                int health;
                int attack;

                Player(int x = 0, int y = 0, int health = 100, int attack = 10);
                
                void takeDamage(int amount) override;
                int getHealth() const override;
                void move(int   dx, int dy) override;
                void attackTarget(Entity& target);
        };

    } // namespace Entities
} // namespace Core


#endif // PLAYER_H