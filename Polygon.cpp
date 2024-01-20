#include "Polygon.hpp"
#include <iostream>
#include <cmath>

Polygon::Polygon(const vector<Coordinate*>& vertices) : vertices(vertices) {}

double Polygon::calculateArea() {
    int n = vertices.size();
    double area = 0.0;

    for(int i = 0; i < n; i++) {
        area += (vertices[i]->getX() * vertices[(i + 1) % n]->getY()) -
                (vertices[(i + 1) % n]->getX() * vertices[i]->getY());
    }

    return abs(area) / 2.0;
}

double Polygon::calculatePerimeter() {
    int n = vertices.size();
    double perimeter = 0.0;

    for (int i = 0; i < n; ++i) {
        double dx = vertices[i]->getX() - vertices[(i + 1) % n]->getX();
        double dy = vertices[i]->getY() - vertices[(i + 1) % n]->getY();
        perimeter += std::sqrt(dx * dx + dy * dy);
    }

    return perimeter;
}