#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "/*";
    std::cout << std::endl;

    std::cout << "*/";
    std::cout << std::endl;

    // std::cout << /* "*/ " */;
    // fixed it by adding a double quote at the end
    std::cout << /* "*/ " */";
    std::cout << std::endl;

    // std::cout << /* "*/ " /* " /*" */;
    // Nothing to fix as " /* " gets printed
    std::cout << /* "*/ " /* " /*" */;
    std::cout << std::endl;

    return 0;
}
