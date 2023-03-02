#include <iostream>
using namespace std;

class tollBooth
{
private:
    int totalCars;
    double totalCash;

public:
    tollBooth()
    {
        totalCars = 0;
        totalCash = 0;
    }
    void payingCar()
    {
        totalCars++;
        totalCash += 50.0;
    }
    void nopayCar()
    {
        totalCars++;
    }
    void display()
    {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: " << totalCash << " Rupees" << endl;
    }
};

int main()
{
    tollBooth booth;
    char choice;
    cout << "P = Paying Car, N = NonPaying Car, Q = quit" << endl;
    do
    {
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'p':
            booth.payingCar();
            cout << "Paying car counted." << endl;
            break;
        case 'n':
            booth.nopayCar();
            cout << "Nonpaying car counted." << endl;
            break;
        case 'q':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }

        booth.display();
    } while (choice != 'q');

    return 0;
}
