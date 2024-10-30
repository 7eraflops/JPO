#include "circle.h"

#include <cmath>
#include <stdexcept>

Circle::Circle(double r, Point c) : m_radius(new double(r)), m_center(c)
{
    if (r < 0) 
    {
        throw std::invalid_argument("Radius cannot be negative.");
    }
}

Circle::Circle(double r, double x, double y) : m_radius(new double(r)), m_center(x, y)
{
    if (r < 0)
    {
        throw std::invalid_argument("Radius cannot be negative.");
    }
}

Circle::~Circle()
{
    delete m_radius;
}

double Circle::get_radius() const
{
    return *m_radius;
}

void Circle::set_radius(double r)
{
    if (r < 0)
    {
        throw std::invalid_argument("Radius cannot be negative.");
    }
    *m_radius = r;
}

Point Circle::get_center() const
{
    return m_center;
}

void Circle::set_center(Point c)
{
    m_center = c;
}

void Circle::set_center(double x, double y)
{
    m_center.set_x(x);
    m_center.set_y(y);
}

double Circle::area() const
{
    return M_PI * (*m_radius) * (*m_radius);
}