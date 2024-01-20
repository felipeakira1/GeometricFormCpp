#ifndef RECTANGLE_HPP
#include "Coordinate.hpp"
#include "GeometricForm.hpp"
#define RECTANGLE_HPP

class Rectangle : public GeometricForm {
    public:
        Rectangle(Coordinate * c1, Coordinate * c2);
        double calculateArea();
        double calculatePerimeter();
    
    private:
        Coordinate * vertices[2];
        double heigth;
        double width; 
};
#endif