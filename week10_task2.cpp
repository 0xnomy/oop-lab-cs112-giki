#include <iostream>
using namespace std;

class Polygon
{
public:
    virtual void show()
    {
        cout << "I'm a polygon" << endl;
    }
};

class Pentagon : public Polygon
{
    virtual void show()
    {
        cout << "I'm Pentagon with 6 sided polygon" << endl;
    }
};

class Hexagon : public Polygon
{
    virtual void show()
    {
        cout << "I'm Haxagon 5 sided polygon" << endl;
    }
};

int main()
{
    Polygon *Polyptr;
    Hexagon heaxgonobj;
    Pentagon pentagonobj;

    Polyptr = &heaxgonobj;
    Polyptr->show();

    Polyptr = &pentagonobj;
    Polyptr->show();
}