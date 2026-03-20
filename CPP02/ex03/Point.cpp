#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::~Point() {}

Point& Point::operator=(const Point& other) {
        if (this != &other) {
            
        }
    return *this;
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
