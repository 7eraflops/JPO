#include <iostream>

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

int main()
{
    Rectangle rectangle(4, 5, Point(12, 14));
    rectangle.introduce();
    rectangle.description();
    std::cout << "Area of rectangle is: " << rectangle.area() << std::endl;

    Square square(6, Point(30, 40));
    square.introduce();
    square.description();
    std::cout << "Area of square is: " << square.area() << std::endl;

    Rectangle rectangle2 = rectangle;
    rectangle2.set_centre(Point(21, 37));
    rectangle2.set_a(10);
    try
    {
        rectangle2.set_b(-5);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    rectangle2.introduce();
    rectangle2.description();
    std::cout << "Area of rectangle is: " << rectangle2.area() << std::endl;

    Circle circle(7, Point(2, 5));
    circle.introduce();
    circle.description();
    circle.set_centre(Point(-5, -3));
    try
    {
        circle.set_radius(-2);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    circle.set_radius(19);
    circle.description();
    std::cout << "Area of circle is: " << circle.area() << std::endl;

    return 0;
}