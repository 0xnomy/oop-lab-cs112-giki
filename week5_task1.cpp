#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void displayTime()
    {
        cout << "Time" << endl
             << hour << ":" << minute << ":" << second << endl;
    }
    void addTime(Time x, Time y)
    {
        int temp = 0;
        second = x.second + y.second + temp;
        if (second > 59)
        {
            second -= 59;
            temp++;
        }
        minute = x.minute + y.minute + temp;
        temp = 0;
        if (minute > 59)
        {
            minute -= 59;
            temp++;
        }
        hour = x.hour + y.hour + temp;
        temp = 0;
        if (hour > 24)
        {
            hour -= 24;
            temp++;
        }
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time time1(7, 11, 06);
    Time time2(5, 12, 07);
    cout << "------------------------------------" << endl;
    time1.displayTime();
    cout << endl;
    time2.displayTime();
    cout << endl;
    cout << "After adding: ";
    time1.addTime(time1, time2);
    cout << "------------------------------------" << endl;
    return 0;
}