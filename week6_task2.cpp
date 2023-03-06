#include <iostream>
using namespace std;

class Dimensions
{
    int length, width;

public:
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }

    friend class CostCalculator;
};

class CostCalculator
{

public:
    float calculateCost(Dimensions d)
    {
        float area = d.length * d.width;
        return area * 5;
    }
};

int main()
{
    int length, width;
    float costPerSqft;
    cout << "\t\t-------WELCOME TO CONSTRUCTION COST CALCULATOR!-------" << endl
         << endl;
    cout << "\t\t   The price /area is 5 Rupee, so area*5 = cost" << endl
         << endl;
    cout << "Enter the length of the room: ";
    cin >> length;

    cout << "Enter the width of the room: ";
    cin >> width;

    Dimensions d;
    d.setDimensions(length, width);

    CostCalculator c;
    float totalCost = c.calculateCost(d);
    cout << "The cost of room flooring is:  " << totalCost << endl;
    return 0;
}