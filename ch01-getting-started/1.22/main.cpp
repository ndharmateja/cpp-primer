#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;
    if (std::cin >> sum)
    {
        Sales_item item;
        while (std::cin >> item)
        {
            sum += item;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}