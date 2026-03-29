#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item curr, total;

    // Read the first item
    if (std::cin >> total)
    {
    }
    else
    {
        std::cerr << "No data!" << std::endl;
        return EXIT_FAILURE;
    }

    // Read each item one by one starting from the second one
    while (std::cin >> curr)
    {
        if (curr.isbn() == total.isbn())
            total += curr;
        else
        {
            std::cout << total << std::endl;
            total = curr;
        }
    }
    std::cout << total << std::endl;

    // Return success
    return EXIT_SUCCESS;
}