#include <iostream>
#include <string>
using namespace std;

struct address
{
    string city = "Peshawar";
    int street = 12;
    int postal_code = 25000;
};

// void initialize_address()

int main()
{
    address ad;
    cout << "City Name: " << ad.city << endl;
    cout << "Street: " << ad.street << endl;
    cout << "Postal Address: " << ad.postal_code << endl;
}
#include <iostream