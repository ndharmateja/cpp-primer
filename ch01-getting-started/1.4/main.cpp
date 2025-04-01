#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter 2 numbers:" << std::endl;
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << x << " x " << y << " = " << x * y << std::endl;
    return 0;
}
