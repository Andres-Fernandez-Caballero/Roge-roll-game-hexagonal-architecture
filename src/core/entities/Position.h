#ifndef POSITION_H
#define POSITION_H

namespace Core {
    namespace Entities {
        
        struct Position {
            int x;
            int y;

            Position(int x, int y): x(x), y(y) {}

            void move(int dx, int dy){
                x += dx;
                y += dy;
            }
        };
    }
}

#endif // POSITION_H