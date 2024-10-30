#include "point.h"

#include <iostream>

Point::Point(double x_val, double y_val) : m_x(x_val), m_y(y_val) {}

double Point::get_x() const
{
    return m_x;
}

double Point::get_y() const
{
    return m_y;
}

void Point::set_x(double x_val)
{
    m_x = x_val;
}

void Point::set_y(double y_val)
{
    m_y = y_val;
}

void Point::display() const
{
    std::cout << "The point's coordinates are: (" << m_x << ", " << m_y << ")" << std::endl;
}
