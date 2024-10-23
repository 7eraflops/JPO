#include "circle.h"

#include <cmath>
#include <stdexcept>

Circle::Circle(double r, Point c) : radius(new double(r)), center(c)
{
    if (r < 0)  // Check if the initial radius is negative
    {
        throw std::invalid_argument("Radius cannot be negative.");
    }
}

Circle::~Circle()
{
    delete radius;
}

double Circle::get_radius() const
{
    return *radius;
}

void Circle::set_radius(double r)
{
    if (r < 0)  // Check for negative radius
    {
        throw std::invalid_argument("Radius cannot be negative.");
    }
    *radius = r;
}

Point Circle::get_center() const
{
    return center;
}

void Circle::set_center(Point c)
{
    center = c;
}

void Circle::set_center(double x, double y)
{
    center.set_x(x);  // Set the x coordinate
    center.set_y(y);  // Set the y coordinate
}

double Circle::area() const
{
    return M_PI * (*radius) * (*radius);
}