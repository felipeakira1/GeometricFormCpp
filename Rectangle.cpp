#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(Coordinate * c1, Coordinate * c2) {
    this->vertices[0] = c1;
    this->vertices[1] = c2;
    this->width = c1->getX() - c2->getX();
    this->heigth = c1->getY() - c2->getY();
}

double Rectangle::calculateArea() {
    return width * heigth;
}

double Rectangle::calculatePerimeter() {
    return 2 * (width + heigth);
}