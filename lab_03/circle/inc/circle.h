#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle
{
   private:
    double* radius;
    Point center;

   public:
    Circle(double r, Point c);
    ~Circle();

    double get_radius() const;
    void set_radius(double r);

    Point get_center() const;
    void set_center(Point c);
    void set_center(double x, double y);

    double area() const;
};

#endif  // CIRCLE_H
