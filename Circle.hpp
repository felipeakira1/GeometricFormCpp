#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Coordinate.hpp"
#include "GeometricForm.hpp"

class Circle : public GeometricForm {
    public:
        Circle(Coordinate * center, double radius);
        double calculateArea() override;
        double calculatePerimeter() override;
    
    private:
        Coordinate * center;
        double radius;
};

#endif