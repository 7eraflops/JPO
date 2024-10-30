#include "Square.hpp"

// Parametrized constructor
Square::Square(double a, const Point &p) 
    : Rectangle::Rectangle(a, a, p, "Square") {}