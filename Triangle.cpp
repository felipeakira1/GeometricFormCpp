#include "Triangle.hpp"
#include "Coordinate.hpp"
#include "Segment.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(Coordinate * vertex1, Coordinate * vertex2, Coordinate * vertex3) {
    this->vertices[0] = vertex1;
    this->vertices[1] = vertex2;
    this->vertices[2] = vertex3;
}

double Triangle::calculateArea() {
    Segment * s1 = new Segment(this->vertices[0],this->vertices[1]);
    Segment * s2 = new Segment(this->vertices[1],this->vertices[2]);
    Segment * s3 = new Segment(this->vertices[0],this->vertices[2]);
    float s = this->calculatePerimeter()/2;
    return sqrt(s * (s - s1->distance()) * (s - s2->distance()) * (s - s3->distance()));
}

double Triangle::calculatePerimeter() {
    Segment * s1 = new Segment(this->vertices[0],this->vertices[1]);
    Segment * s2 = new Segment(this->vertices[1],this->vertices[2]);
    Segment * s3 = new Segment(this->vertices[0],this->vertices[2]);
    return s1->distance() + s2->distance() + s3->distance();
}

void Triangle::print() {
    
}