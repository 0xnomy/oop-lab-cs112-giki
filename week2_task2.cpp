// Define a macro nameed cube that acts as a fucntion which returns the cube of a variable

#include <iostream>
using namespace std;

#define CUBE(i) (i * i * i)

int main()
{
    int i, cube;
    cout << "Enter integer: ";
    cin >> i;
    cube = CUBE(i * i * i);
    cout << cube;
    return 0;
}

/* The expression (a & (a - 1)) performs a bitwise AND operation on the binary representation of 'a' and 'a-1'.
If the result is 0, it means 'a' is a power of 2. */