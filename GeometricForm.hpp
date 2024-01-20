#ifndef GEOMETRICFORM_HPP
#define GEOMETRICFORM_HPP

// Interface
class GeometricForm {
    public:
        GeometricForm();
        virtual double calculateArea() = 0;
        virtual double calculatePerimeter() = 0;
};

#endif