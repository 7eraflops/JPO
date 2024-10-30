#pragma once

#include "Figure.hpp"

class Circle : public Figure
{
   private:
    double m_radius;

   public:
    // Parametrized constructors
    Circle(double r, const Point &p);

    // Member functions
    double area() const override;
    void description() const override;

    // Getter functions
    double get_radius() const;

    // Setter functions
    void set_radius(double value);
};