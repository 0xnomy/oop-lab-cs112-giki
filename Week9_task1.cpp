#include <iostream>

int main()
{
    float originalFloat = 3.14159;
    int originalInt = 42;

    std::cout << "Original float value: " << originalFloat << std::endl;
    std::cout << "Original integer value: " << originalInt << std::endl;

    int explicitInt = (int)originalFloat;

    std::cout << "Explicit type casting to integer: " << explicitInt << std::endl;

    float explicitFloat = (float)originalInt;

    std::cout << "Explicit type casting to float: " << explicitFloat << std::endl;

    return 0;
}
