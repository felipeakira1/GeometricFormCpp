#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Coordinate.hpp"
#include "GeometricForm.hpp"

class Square : public GeometricForm{
    public:
        Square(Coordinate * topLeft, double side);
        double calculateArea() override;
        double calculatePerimeter() override;
    
    private:
        Coordinate * topLeft;
        double side;
};

#endif