#ifndef Coordinate_hpp
#define Coordinate_hpp
#include <iostream>
using namespace std;
class Coordinate {
    public:
        Coordinate();
        Coordinate(float x, float y, float z);
        float getX();
        float getY();
        float getZ();
        float setX(float x);
        float setY(float y);
        float setZ(float y);
        // friend ostream& operator<<(ostream& os, const Coordinate& obj);
        void display();
        Coordinate operator+(Coordinate& other);
        
    private:
        float x;
        float y;
        float z;
};



#endif