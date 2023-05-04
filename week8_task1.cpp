#include <iostream>
using namespace std;

class Coordinates
{
private:
    int xcor, ycor;

public:
    Coordinates(int r = 0, int i = 0)
    {
        xcor = r;
        ycor = i;
    }

    Coordinates operator+(Coordinates const &obj)
    {
        Coordinates cor;
        cor.xcor = xcor + obj.xcor;
        cor.ycor = ycor + obj.ycor;
        return cor;
    }

    friend istream &operator>>(istream &input, Coordinates &cor)
    {
        cout << "Enter x-coordinate: ";
        input >> cor.xcor;
        cout << "Enter y-coordinate: ";
        input >> cor.ycor;
        return input;
    }

    void print()
    {
        cout << "New Position is " << xcor << " " << ycor << endl;
    }
};

int main()
{
    Coordinates cor1, cor2;
    cin >> cor1;
    cin >> cor2;
    Coordinates cor3 = cor1 + cor2;
    cor3.print();
}