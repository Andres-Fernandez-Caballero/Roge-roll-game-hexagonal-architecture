#include "Player.h"

namespace Core
{
    namespace Entities
    {
        Player::Player(int x = 0, int y = 0 ,int health = 100, int attack = 10) : position(x, y), health(health), attack(attack) {}

        void Player::move(int dx, int dy) {
            position.move(dx, dy);
        }

        void Player::takeDamage(int amount) {
            health -= amount;
        }

        int Player::getHealth() const {
            return health;
        }

        void Player::attackTarget(Entity& target) {
            target.takeDamage(attack);
        }
    } // namespace Entities

} // namespace Core
