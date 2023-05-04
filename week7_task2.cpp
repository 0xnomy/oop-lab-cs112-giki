#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int admissionNo;
    string name;
    int age;
    string address;

public:
    void getStudent(int no, string n, int a, string add)
    {
        admissionNo = no;
        name = n;
        age = a;
        address = add;
    }
};

class UndergraduateStudent : public Student
{
private:
    string degreeProgram;

public:
    UndergraduateStudent(int no, string n, int a, string add, string degProg) : degreeProgram(degProg)
    {
        getStudent(no, n, a, add);
    }
    void display() // con para
    {
        cout << "Admission No: " << admissionNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Degree Program: " << degreeProgram << endl;
    }
};

class GraduateStudent : public Student
{
private:
    string degreeProgram;

public:
    GraduateStudent(int no, string n, int a, string add, string degProg) : degreeProgram(degProg) // calling base class cons
    {
        getStudent(no, n, a, add);
    }
    void display()
    {
        cout << "Admission No: " << admissionNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Degree Program: " << degreeProgram << endl;
    }
};

int main()
{
    UndergraduateStudent u = UndergraduateStudent(123, "Ali", 20, "random addresss", "Bachelor of DS");

    GraduateStudent g = GraduateStudent(1234, "Nomy", 25, "random address", "MBA");

    u.display();
    cout << endl;
    g.display();

    return 0;
}
