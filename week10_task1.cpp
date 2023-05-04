#include <iostream>
using namespace std;

class Add
{
public:
    int sum, a, b;
    virtual void print(int a, int b)
    {
        sum = a + b;
        cout << "Addition: " << sum << endl;
    }
};

class Sub : public Add
{
public:
    int difference;
    void print(int a, int b)
    {
        difference = a - b;
        cout << "Subtraction: " << difference << endl;
    }
};

int main()
{
    Add *addpointer;
    Sub subt;

    addpointer = &subt;

    addpointer->print(10, 5);

    // Accessing the base class function using a base class pointer
    Add obj_add;
    addpointer = &obj_add;
    addpointer->print(10, 5);

    return 0;
}
