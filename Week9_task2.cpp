#include <iostream>
using namespace std;

int main()
{
    int first;
    cout << "Enter Value for first variable: ";
    cin >> first;

    int second = first;

    int third;
    cout << "Enter value for third variable: ";
    cin >> third;

    char fourth;
    cout << "Enter value for fourth variable: ";
    cin >> fourth;

    char fifth;
    cout << "Enter value for fifth variable: ";
    cin >> fifth;

    int sum = third + fourth;

    float result = third + fifth;

    cout << "First Variable: " << first << endl;
    cout << "Second Variable: " << second << endl;
    cout << "Type casting char to int data type(Third + Fourth) = " << sum << endl;
    cout << "Type casting from int data to float type (Third + fifth): " << result << endl;

    return 0;
}
