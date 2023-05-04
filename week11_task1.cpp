#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
vector<T> merge_sorted_arrays(const T *arr1, size_t size1, const T *arr2, size_t size2)
{
    vector<T> result(size1 + size2);
    merge(arr1, arr1 + size1, arr2, arr2 + size2, result.begin());
    return result;
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    double arr3[] = {1.5, 3.2, 5.1};
    double arr4[] = {2.7, 4.6, 6.8};

    vector<int> merged_ints = merge_sorted_arrays(arr1, 3, arr2, 3);
    vector<double> merged_doubles = merge_sorted_arrays(arr3, 3, arr4, 3);
    cout << "First Array: 1, 3, 5, 7 \nSecond Array: 2, 4, 6, 8";
    cout << endl
         << "Merged ints: ";
    for (const auto &i : merged_ints)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
    cout << "First double array: 1.5, 3.2, 5.1 \nSecond double array 2.7, 4.6, 6.8";
    cout << endl
         << "Merged doubles: ";
    for (const auto &d : merged_doubles)
    {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
