#include <iostream>
using namespace std;

int main()
{
    float original_float;
    cout << "Enter a float value: ";
    cin >> original_float;

    int original_int;
    cout << "Enter an integer value: ";
    cin >> original_int;

    cout << "Original float value: " << original_float << endl;
    cout << "Original integer value: " << original_int << endl;

    int new_int = static_cast<int>(original_float);
    cout << "Explicit type casting to integer: " << new_int << endl;

    float new_float = static_cast<float>(original_int);
    cout << "Explicit type casting to float: " << new_float << endl;

    return 0;
}
