#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int admissionNo, age;
    string name, address;

public:
    void getStudent(string add, string n, int a, int no)
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
    void setDegreeProgram(string degreePro)
    {
        degreeProgram = degreePro;
    }
    void show_degreePro()
    {
        cout << "Admission No: " << admissionNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Degree Program: " << degreeProgram << endl;
    }
    void
};

int main()
{
    UndergraduateStudent u;
    u.setDegreeProgram("2022479");
    u.setDegreeProgram("Nomy");
    u.setDegreeProgram(21);
    u.setDegreeProgram("123 GIKI");
    u.setDegreeProgram("Bachelor of Science in Data Science");
}