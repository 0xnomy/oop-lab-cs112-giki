#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int *arr = new int[size]; // dynamic allocation of array??????
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl << arr[i] << endl;
    }
}
