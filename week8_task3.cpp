#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int ft, int in)
    {
        feet = ft;
        inches = in;
    }

    void showDistance()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    Distance operator+(const Distance &d2)
    {
        int totalInches = inches + d2.inches;
        int totalFeet = feet + d2.feet;

        if (totalInches >= 12)
        {
            totalFeet++;
            totalInches -= 12;
        }

        return Distance(totalFeet, totalInches);
    }

    void operator+=(int ft)
    {
        feet += ft;
    }
};

int main()
{
    Distance d1(2, 10);
    Distance d2(3, 6);

    Distance d3 = d1 + d2;

    cout << "Sum of d1 and d2: ";
    d3.showDistance();

    d1 += 1;

    cout << "d1 after incrementing by 1 foot: ";
    d1.showDistance();

    return 0;
}
