// WEEK 4 - LECTURE ON CLASSES AND ENCAPSULATION

// Using getter and setter for Encapsulation

#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(100);
    cout << myObj.getSalary() << endl;
    return 0;
}