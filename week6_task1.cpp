#include <iostream>
using namespace std;

class Numbers
{
    int nums[5];

public:
    void getNumbers()
    {
        cout << "Enter five different numbers: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> nums[i];
        }
    }

    friend void friendfunc1(Numbers n);
    friend void friendfunc2(Numbers n);
};

void friendfunc1(Numbers n)
{
    double avg = (n.nums[0] + n.nums[1]) / 2.0;
    cout << "Average of number at indexes " << 0 << " and " << 1 << ": " << avg << endl;
}

void friendfunc2(Numbers n)
{
    double avg = (n.nums[2] + n.nums[3] + n.nums[4]) / 3.0;
    cout << "Average of number at indexes " << 2 << ", " << 3 << " and " << 4 << ": " << avg << endl;
}

int main()
{
    Numbers obj;
    obj.getNumbers();
    friendfunc1(obj);
    friendfunc2(obj);
    return 0;
}
