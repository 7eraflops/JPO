#pragma once

class Point
{
   private:
    int m_x;
    int m_y;

   public:
    // Parameterized constructor
    Point(int x, int y);

    // Getter functions
    int get_x() const;
    int get_y() const;

    // Setter functions
    void set_x(int value);
    void set_y(int value);
};
