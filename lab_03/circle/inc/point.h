#ifndef POINT_H
#define POINT_H

class Point
{
   private:
    double x;
    double y;

   public:
    Point(double x_val, double y_val);

    double get_x() const;
    double get_y() const;

    void set_x(double x_val);
    void set_y(double y_val);

    void display() const;
};

#endif  // POINT_H
