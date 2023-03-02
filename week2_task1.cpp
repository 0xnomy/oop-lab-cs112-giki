// Write a c++ program to check if a given integer is a power of 2 using bitwise operator
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter ta postiivve integer" << endl;
    cin >> a;
    if ((a & (a - 1)) == 0)
        cout << a << " is the power of 2" << endl;
    else
        cout << a << " is not a power of 2" << endl;
    return 0;
}