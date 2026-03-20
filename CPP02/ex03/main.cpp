#include <iostream>
#include "Point.hpp"

int main() {
    Point* a = new Point(0, 0);
    Point* b = new Point(5, 0);
    Point* c = new Point(0, 5);

    Point* inside  = new Point(1, 1);
    Point* outside = new Point(6, 6);
    Point* onEdge  = new Point(2, 0);

    std::cout << bsp(*inside,  *a, *b, *c) << "\n"; // 1
    std::cout << bsp(*outside, *a, *b, *c) << "\n"; // 0
    std::cout << bsp(*onEdge,  *a, *b, *c) << "\n"; // 0

    delete a;
    delete b;
    delete c;
    delete inside;
    delete outside;
    delete onEdge;
}