#pragma once

#include <string>

#include "Point.hpp"

class Figure
{
   private:
    Point m_centre;
    std::string m_name;

   public:
    // Parameterized constructor
    Figure(const Point &p, std::string name);

    // Pure virtual functions
    virtual double area() const = 0;
    virtual void description() const = 0;

    // Member functions
    void print_centre() const;
    void introduce() const;

    // Getter functions
    Point get_centre() const;

    // Setter functions
    void set_centre(Point p);
};
