#include "../math/math.h"
#ifndef PANEL_HPP
#define PANEL_HPP
namespace pgui{

    class Panel{
        public:
            Panel(){} //default constructor
            Panel(int x, int y){  //position constructor
                this->position = math::Vector2(x, y);
            }
        math::Vector2 position;
    };


}
#endif