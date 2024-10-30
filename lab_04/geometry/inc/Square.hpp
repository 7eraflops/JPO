#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
   public:
    // Parametrized constructor
    Square(double a, const Point &p);
};