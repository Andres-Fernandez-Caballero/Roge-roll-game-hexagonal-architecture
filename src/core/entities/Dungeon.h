#ifndef DUNGEON_H
#define DUNGEON_H

#include <vector>
#include "Entity.h"


namespace Core
{
    namespace Entities
    {
        class Dungeon {
            public:
                Dungeon(int width, int height);

                void generateMap();
                void addEntity(Entity* entity, int x, int y);
                void removeEntity(Entity* entity);
                void moveEntity(Entity* entity);
                void update();
                void render() const;

            private:
                int width;
                int height;
                std::vector<std::vector<Entity*>> map; 
        };
    } // namespace Entities
    
} // namespace Core


#endif // DUNGEON_H