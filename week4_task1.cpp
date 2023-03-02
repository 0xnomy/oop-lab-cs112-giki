#include <iostream>
using namespace std;
class CubeFind
{
public:
    int num;
    void setNum(int n)
    {
        num = n;
    }
    int getCube()
    {
        return num * num * num;
    }
};
void cube(CubeFind c)
{
    int output = c.getCube();
    cout << "Cube of " << c.num << " is " << output << endl;
}
int main()
{
    CubeFind c;
    int n;
    cout << "enter number please: ";
    cin >> n;
    c.setNum(n);
    cube(c);
}
