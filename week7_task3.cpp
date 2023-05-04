#include <iostream>
#include <string>

using namespace std;

class ReverseString
{
protected:
    string str;

public:
    ReverseString(string s)
    {
        str = s;
    }

    void reverse()
    {
        int length = str.length();
        for (int i = length - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << endl;
    }
};

class Derived : public ReverseString
{
public:
    Derived(string s) : ReverseString(s) {}

    void print()
    {
        cout << "Original String: " << str << endl;
        cout << "Reversed String: ";
        reverse();
    }
};

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Derived d(s);
    d.print();

    return 0;
}
