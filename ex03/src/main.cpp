#include "Point.hpp"


int main(void)
{
    Point a(1,1);
    Point b(3, 1);
    Point c(1, 3);
    Point point(2, 2);
    bsp(a, b, c, point) == true ? std::cout << "True" << std::endl : std::cout << "Flase" << std::endl;
    return 0;
}
