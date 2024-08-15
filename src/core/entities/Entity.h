#ifndef ENTITY_H
#define ENTITY_H

namespace Core
{
    namespace Entities
    {
        
        class Entity
        {
        private:
            /* data */
        public:
            virtual ~Entity() = default;
            virtual void takeDamage(int amount) = 0;
            virtual int getHealth() const = 0;
            virtual void move(int dx, int dy) = 0;
        };
         
    } // namespace Entities
    
} // namespace Core



#endif // ENTITY_H