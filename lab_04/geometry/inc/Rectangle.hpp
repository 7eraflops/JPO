#pragma once

#include "Figure.hpp"

class Rectangle : public Figure
{
   private:
    double m_a;
    double m_b;

   protected:
    // parametrized constructor (why this one is protected?) -> because the class square inherits from Rectangle
    Rectangle(double a, double b, const Point &p, std::string name);

   public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p);

    // Member functions
    double area() const override;
    void description() const override;

    // Getter functions
    double get_a() const;
    double get_b() const;

    // Setter functions
    void set_a(double value);
    void set_b(double value);
};