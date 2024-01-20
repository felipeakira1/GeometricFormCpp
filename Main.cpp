#include "Coordinate.hpp"
#include "Segment.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"
#include "Polygon.hpp"
#include <iostream>
using namespace std;

int main() {
    // Create coordinates
    Coordinate * coord1 = new Coordinate(0.0, 0.0, 0.0);
    Coordinate * coord2 = new Coordinate(10.0, 0.0, 0.0);
    Coordinate * coord3 = new Coordinate(5.0, 10.0, 0.0);

    // Create instances of geometric shapes
    Triangle* triangle = new Triangle(coord1, coord2, coord3);
    Circle* circle = new Circle(coord1, 10.0);
    Square* square = new Square(coord1, 10.0);
    Rectangle* rectangle = new Rectangle(coord1, coord2);

    // Create a polygon with vertices
    vector<Coordinate*> polygonVertices = {coord1, coord2, coord3};
    Polygon* polygon = new Polygon(polygonVertices);

    // Calculate and print areas and perimeters
    cout << "Triangle - Area: " << triangle->calculateArea() << ", Perimeter: " << triangle->calculatePerimeter() << endl;
    cout << "Circle - Area: " << circle->calculateArea() << ", Perimeter: " << circle->calculatePerimeter() << endl;
    cout << "Square - Area: " << square->calculateArea() << ", Perimeter: " << square->calculatePerimeter() << endl;
    cout << "Rectangle - Area: " << rectangle->calculateArea() << ", Perimeter: " << rectangle->calculatePerimeter() << endl;
    cout << "Polygon - Area: " << polygon->calculateArea() << ", Perimeter: " << polygon->calculatePerimeter() << endl;

    // Clean up memory
    delete triangle;
    delete circle;
    delete square;
    delete rectangle;
    delete polygon;

    // Clean up coordinates
    delete coord1;
    delete coord2;
    delete coord3;

    return 0;
}