#include "Segment.hpp"
#include "Coordinate.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Segment::Segment(Coordinate * point1, Coordinate * point2) {
    this->points[0] = point1;
    this->points[1] = point2;
}

float Segment::distance() {
    float deltax = this->points[0]->getX() - this->points[1]->getX();
    float deltay = this->points[0]->getY() - this->points[1]->getY();
    float deltaz = this->points[0]->getZ() - this->points[1]->getZ();
    return sqrt(pow(deltax, 2) + pow(deltay, 2) + pow(deltaz, 2));
}

void Segment::print() {
   
}