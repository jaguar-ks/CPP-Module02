#include "Point.hpp"


int main(void)
{
    Point a;
    Point b(3.0, 0.0);
    Point c(0.0, 3.0);
    Point point(1.0, 1.0);
    std::cout << bsp(a, b, c, point) << std::endl;
    return 0;
}
