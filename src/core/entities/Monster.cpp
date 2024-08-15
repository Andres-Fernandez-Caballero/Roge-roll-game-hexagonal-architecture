#include "Monster.h"

namespace Core
{
    namespace Entities
    {
        Monster::Monster(int x, int y, int health, int attack)
            : position(x, y), health(health), attacK(attacK) {}

        void Monster::takeDamage(int amount) {
            health -= amount;
        }

        int Monster::getHealth() const {
            return health;
        }

        void Monster::move(int dx, int dy) {
            position.move(dx, dy);
        }

        void Monster::attackTarget(Entity& target){
            target.takeDamage(attacK);
        }
        
    } // namespace Entities
    
} // namespace Core
