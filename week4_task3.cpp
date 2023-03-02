#include <iostream>

using namespace std;
class perfectNum
{
private:
    int start, end, i, sum, num;

public:
    void input()
    {
        cout << "\t\t\t ______________________________________________\n\n";
        cout << "Starting number: ";
        cin >> start;
        cout << "Ending number: ";
        cin >> end;
    }
    void display()
    {
        for (num = start; num <= end; num++)
        {
            i = 1, sum = 0;
            while (i < num)
            {
                if (num % i == 0)
                    sum = sum + i;
                i++;
            }
            if (sum == num)
                cout << "Perfect number for the range is: " << num << endl;
        }
    }
};
int main()
{
    perfectNum obj;
    obj.input();
    obj.display();
}
