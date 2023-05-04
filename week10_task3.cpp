#include <iostream>
using namespace std;

class Shape
{
protected:
    double area;
    double volume;

public:
    virtual double findArea() = 0;
    virtual double findVolume() = 0;
    virtual void display() const = 0;
};

class Point : public Shape
{
protected:
    double x, y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    double findArea()
    {
        return 0;
    }

    double findVolume()
    {
        return 0;
    }

    void display() const
    {
        cout << "Point (" << x << ", " << y << ")" << endl;
    }
};

class Cylinder : public Circle
{
protected:
    double height;

public:
    Cylinder() : Circle(), height(1) {}
    Cylinder(double x, double y, double radius, double height) : Circle(x, y, radius), height(height) {}

    double findArea() override
    {
        return 2 * 3.14159 * radius * (radius + height);
    }

    double findArea() override
    {
        return 3.14159 * radius * radius * height;
    }

    void display() const override
    {
        std::cout << "Cylinder at (" << x << ", " << y << ") with radius " << radius << " and height " << height << std::endl;
    }
};

class Circle : public Point
{
protected:
    double radius;

public:
    Circle() : Point(), radius(1) {}
    Circle(double x, double y, double radius) : Point(x, y), radius(radius) {}

    double findArea()
    {
        return 3.14159 * radius * radius;
    }

    double findVolume()
    {
        return 0;
    }

    void display()
    {
        cout << "Circle at (" << x << ", " << y << ") with radius " << radius << endl;
    }
};

int main()
{
    Shape *shapes[4];

    // shapes[0] = new Point(1, 2);
    // shapes[1] = new Circle(3, 4, 5);
    // shapes[3] = new Point;

    // for (int i = 0; i < 4; ++i)

    shapes[1]->display();
    cout << "Area: " << shapes[1]->findArea() << endl;
    cout << "Volume: " << shapes[1]->findVolume() << endl;
    cout << endl;
    delete shapes[1];

    return 0;
}
