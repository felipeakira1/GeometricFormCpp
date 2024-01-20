#ifndef POLYGON_HPP
#define POLYGON_HPP
#include "Coordinate.hpp"
#include "GeometricForm.hpp"
#include <vector>
using namespace std;

class Polygon : public GeometricForm {
    public:
        Polygon(const vector<Coordinate*>& vertices);
        double calculateArea() override;
        double calculatePerimeter() override;
    
    private:
        vector<Coordinate*> vertices;
};

#endif