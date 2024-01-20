#include "Coordinate.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Coordinate::Coordinate() {
    
}

Coordinate::Coordinate(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

float Coordinate::getX() {
    return this->x;
}

float Coordinate::getY() {
    return this->y;
}

float Coordinate::getZ() {
    return this->z;
}

float Coordinate::setX(float x) {
    this->x += x;
}

float Coordinate::setY(float y) {
    this->y += y;
}

float Coordinate::setZ(float z) {
    this->z += z;
}

// ostream& operator << (ostream& os, Coordinate& obj) {
//     os << "(" << obj.getX() << ", " << obj.getY() << ", " << obj.getZ() << ")";
//     return os;
// }

void Coordinate::display() {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

Coordinate Coordinate::operator+(Coordinate& other) {
    Coordinate temp(this->x + other.getX(), this->y + other.getY(), this->z + other.getZ());
    return temp;
}