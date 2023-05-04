// #include <iostream>
// using namespace std;

// class Time
// {
// private:
//     int hour;
//     int minutes;
//     int seconds;

//     friend ostream &operator<<(ostream &output, Time &T)
//     {
//         output << T.hour << ":"
//                << T.minutes << ":" << T.seconds;
//         return output;
//     }
//     friend istream &operator>>(istream &input, Time &T)
//     {
//         input >> T.hour >> T.minutes >> T.seconds;
//         return input;
//     }
// };

// int main()
// {
//     Time tim;
//     cin >> tim;

//     cout << "Current time: ";
//     cout << tim;
// }

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minutes;
    int seconds;

    friend ostream &operator<<(ostream &output, const Time &T)
    {
        output << T.hour << ":" << T.minutes << ":" << T.seconds;
        return output;
    }

    friend istream &operator>>(istream &input, Time &T)
    {
        input >> T.hour >> T.minutes >> T.seconds;
        return input;
    }
};

int main()
{
    Time tim;
    cin >> tim;

    cout << "Current time: ";
    cout << tim << endl;

    return 0;
}
