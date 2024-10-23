#include <iostream>

#include "circle.h"
#include "point.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double center_x{}, center_y{}, radius{};

    Point center(0.0, 0.0);

    Circle circle(1, center);

    cout << "The circle's center coordinates are: (" << circle.get_center().get_x() << ", " << circle.get_center().get_y() << ")" << endl;

    cout << "The circle's radius is: " << circle.get_radius() << endl;

    cout << "The area of the circle is: " << circle.area() << endl;

    cout << "Enter the circle's center coordinates: " << endl;
    cin >> center_x >> center_y;
    cout << "Enter the circle's radius: " << endl;
    cin >> radius;

    circle.set_center(center_x, center_y);
    circle.set_radius(radius);

    cout << "The circle's new center coordinates are: (" << circle.get_center().get_x() << ", " << circle.get_center().get_y() << ")" << endl;

    cout << "The circle's new radius is: " << circle.get_radius() << endl;

    cout << "The area of the circle is: " << circle.area() << endl;

    return 0;
}
