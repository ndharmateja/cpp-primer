#include <iostream>

int main()
{
    // Hex
    std::cout << "\x32\x4D\x0A";     // "2M\n"
    std::cout << "\x32\x09\x4D\x0A"; // "2\tM\n"

    // Oct
    std::cout << "\62\115\12";    // "2M\n"
    std::cout << "\62\11\115\12"; // "2\tM\n"

    return EXIT_SUCCESS;
}