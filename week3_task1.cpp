#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter arrayyay size;  " << endl;
    cin >> n;

    int *arrayy = new int[n]; // dynamically allocating array
    cout << "enter the elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arrayy[i];
    }

    int temp = arrayy[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arrayy[i] = arrayy[i - 1];
    }
    arrayy[0] = temp; // for sending the last elemene to the 0th index that is the first place

    cout << "new shifted array???  ";
    for (int i = 0; i < n; i++)
    {
        cout << arrayy[i] << "";
    }
    return 0;
}
