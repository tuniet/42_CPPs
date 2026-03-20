#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
    Point();
    Point(const Point& other);
    Point(const Fixed& x, const Fixed& y);
    Point(const float x, const float y);
    ~Point();
    Point& operator=(const Point& other);
    Fixed getX() const;
    Fixed getY() const;
private:
    const Fixed x;
    const Fixed y;
};

bool bsp(Point p, Point a, Point b, Point c);

#endif