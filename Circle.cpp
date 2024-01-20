#include "Coordinate.hpp"
#include "Circle.hpp"
#include <cmath>
using namespace std;

Circle::Circle(Coordinate * center, double radius) : center(center), radius(radius) {}

double Circle::calculateArea() {
    return M_PI * pow(radius, 2);
}

double Circle::calculatePerimeter() {
    return 2 * M_PI * radius;
}
