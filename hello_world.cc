#include <iostream>

#include "math/lib.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    sayHello();
    std::cout << add(1, 2) << std::endl;
    std::cout << minus(1, 2) << std::endl;
    return 0;
}