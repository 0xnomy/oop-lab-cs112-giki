#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
    string input;
    float celsius, fahrenheit;

    cout << "Enter a temperature in Celsius: ";
    getline(cin, input);

    stringstream ss(input);
    ss >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << fixed << setprecision(2);
    cout << "Celsius temperature: " << celsius << endl;
    cout << "Fahrenheit temperature: " << fahrenheit << endl;

    return 0;
}