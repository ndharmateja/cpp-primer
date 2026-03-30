#include <iostream>

int i = 42;
int main()
{
    int n = i; // n has value 42
    std::cout << "n: " << n << std::endl;

    int i = 100;
    int j = i; // j has value 100 as we redefined i in an inner scope
    std::cout << "j: " << j << std::endl;

    int k = ::i; // k has value 42 as we are using the global scope
    std::cout << "k: " << k << std::endl;

    return EXIT_SUCCESS;
}