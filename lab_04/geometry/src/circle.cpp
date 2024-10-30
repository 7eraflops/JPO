#include "Circle.hpp"

#include <cmath>
#include <iostream>

// Parametrized constructors
Circle::Circle(double r, const Point &p)
    : Figure(p, "Circle"), m_radius(r) {}

// Member functions
double Circle::area() const
{
    return M_PI * m_radius * m_radius;
}

void Circle::description() const
{
    std::cout << "I have a radius of length " << m_radius << std::endl;
    print_centre();
}

// Getter functions
double Circle::get_radius() const
{
    return m_radius;
}

// Setter functions
void Circle::set_radius(double value)
{
    if (value < 0)
    {
        throw std::invalid_argument("Radius cannot be negative");
    }
    m_radius = value;
}