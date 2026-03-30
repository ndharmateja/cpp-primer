#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; // Both i and ri will be 5
    std::cout << i << " " << ri << std::endl;

    ri = 10; // Both i and ri will be 10
    std::cout << i << " " << ri << std::endl;

    return EXIT_SUCCESS;
}