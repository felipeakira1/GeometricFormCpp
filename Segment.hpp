#ifndef SEGMENT_HPP
#include "Coordinate.hpp"

#define SEGMENT_HPP
class Segment {
    public:
        Segment(Coordinate * point1, Coordinate * point2);
        float distance();
        void print();
    private:
        Coordinate * points[2];
};

#endif