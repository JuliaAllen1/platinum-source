#include <string>
#ifndef MATH_H
#define MATH_H
namespace math
{
    class Vector2
    {
    public:
        Vector2(){} //default constructor
        Vector2(int x, int y) //x and y constructor
        {
            this->x = x;
            this->y = y;
        }
        int x;
        int y;
    };

    class Vector3{
    public:
        Vector3(){} //default constructor
        Vector3(int x, int y, int z) //xyz contructor
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
        int x;
        int y;
        int z;
    };

}
#endif