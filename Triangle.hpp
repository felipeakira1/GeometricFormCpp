#ifndef TRIANGLE_HPP
#include "Coordinate.hpp"
#include "GeometricForm.hpp"
#define TRIANGLE_HPP

class Triangle : public GeometricForm {
    public:
        Triangle(Coordinate * vertex1, Coordinate * vertex2, Coordinate * vertex3);
        double calculateArea() override;
        double calculatePerimeter() override;
        void print();

    private:
        Coordinate * vertices[3];
};

#endif