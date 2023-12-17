#include <iostream>
#include "lib.h"
#include "foo.h"

int main()
{
    std::cout << getService() << std::endl;
    std::cout << "Hello CMake" << getData() << std::endl;
}