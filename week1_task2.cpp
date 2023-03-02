#include <iostream>

using namespace std;

int main()
{
    int **arr, rows, column, i, j;
    cout << "Number of rowss:" << endl;
    cin >> rows;

    cout << "Number of columns:" << endl;
    cin >> column;

    arr = new int *[rows];
    for (i = 0; i < rows; i++)
    {
        arr[i] = new int[column];
    }

    cout << "Enter "
         << " elements of the array" << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "Enter the elements at rows " << i + 1 << " column " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }
    cout << "2D array is " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
