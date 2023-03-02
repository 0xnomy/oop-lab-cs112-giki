// A program to take roll numer and percnetage from user as private obj in student class and mae 2 punclic funciton read and print

#include <iostream>
using namespace std;

class DataCal
{
private:
    int roll = 0;
    float perc = 0;

public:
    void read()
    {
        cout << "Enter roll: " << endl;
        cin >> roll;
        cout << "Perc: " << endl;
        cin >> perc;
    }
    void print()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Perc: " << perc << "%" << endl;
    }
};

int main()
{
    DataCal dc;
    dc.read();
    dc.print();
}