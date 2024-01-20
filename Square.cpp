#include "Square.hpp"

Square::Square(Coordinate * topLeft, double side) : topLeft(topLeft), side(side) {}

double Square::calculateArea() {
    return side * side;
}

double Square::calculatePerimeter() {
    return 4 * side;
}