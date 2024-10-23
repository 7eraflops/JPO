#include "point.h"

int main()
{
    Point p(3.5, 2.5);

    p.display();

    p.set_x(10.0);
    p.set_y(15.0);

    p.display();

    return 0;
}
