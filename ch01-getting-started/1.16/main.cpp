#include <iostream>

int main()
{
    int value, sum = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "sum: " << sum << std::endl;
    return 0;
}