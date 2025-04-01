#include <iostream>

int main(int argc, char const *argv[])
{
    int val = 50;
    int sum = 0;
    while (val <= 100)
        sum += val++;
    std::cout << sum << std::endl;
    return 0;
}
