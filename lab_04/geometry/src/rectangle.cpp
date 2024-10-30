#include "Rectangle.hpp"

#include <iostream>
#include <stdexcept>

// Parametrized constructors
Rectangle::Rectangle(double a, double b, const Point &p, std::string name)
    : Figure::Figure(p, name), m_a(a), m_b(b) {}

Rectangle::Rectangle(double a, double b, const Point &p)
    : Rectangle::Rectangle(a, b, p, "rectangle") {}

// Member functions
double Rectangle::area() const
{
    return m_a * m_b;
}

void Rectangle::description() const
{
    std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
    print_centre();
}

// Getter functions
double Rectangle::get_a() const
{
    return m_a;
}

double Rectangle::get_b() const
{
    return m_b;
}

// Setter functions
void Rectangle::set_a(double value)
{
    if (value < 0)
    {
        throw std::invalid_argument("Side length 'a' cannot be negative");
    }
    m_a = value;
}

void Rectangle::set_b(double value)
{
    if (value < 0)
    {
        throw std::invalid_argument("Side length 'b' cannot be negative");
    }
    m_b = value;
}