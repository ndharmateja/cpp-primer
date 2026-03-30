#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    std::cout << "i: " << i << ", r1: " << r1 << std::endl;
    std::cout << "d: " << d << ", r2: " << r2 << std::endl;

    r2 = 3.14159; // both r2 and d now are 3.14159
    std::cout << "d: " << d << ", r2: " << r2 << std::endl;

    r2 = r1; // both r2 and d now are 0
    std::cout << "d: " << d << ", r2: " << r2 << std::endl;

    i = r2; // both i and r1 now are 0
    std::cout << "i: " << i << ", r1: " << r1 << std::endl;

    r1 = d; // both i and r1 now are 0
    std::cout << "i: " << i << ", r1: " << r1 << std::endl;

    return 0;
}