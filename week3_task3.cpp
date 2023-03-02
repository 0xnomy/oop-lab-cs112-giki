#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number for element we want in the array:  ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "2nd lowest is: " << arr[1] << endl;
    cout << "2nd highest is: " << arr[n - 2] << endl;
    delete[] arr;
    return 0;
}