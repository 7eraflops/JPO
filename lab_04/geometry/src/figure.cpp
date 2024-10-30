#include "Figure.hpp"

#include <iostream>

// Parameterized constructor
Figure::Figure(const Point &p, std::string name)
    : m_centre(p), m_name(std::move(name)) {}

// Member functions
void Figure::print_centre() const
{
    std::cout << "My centre is (" << m_centre.get_x() << ", "
              << m_centre.get_y() << ")" << std::endl;
}

void Figure::introduce() const
{
    std::cout << "I'm a " << m_name << std::endl;
}

// Getter functions
Point Figure::get_centre() const
{
    return m_centre;
}

// Setter functions
void Figure::set_centre(Point p)
{
    m_centre = p;
}
