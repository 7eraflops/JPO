#include "Point.hpp"

// Parameterized constructor
Point::Point(int x, int y) 
    : m_x(x), m_y(y) {}

// Getter functions
int Point::get_x() const
{
    return m_x;
}

int Point::get_y() const
{
    return m_y;
}

// Setter functions
void Point::set_x(int value)
{
    m_x = value;
}

void Point::set_y(int value)
{
    m_y = value;
}


