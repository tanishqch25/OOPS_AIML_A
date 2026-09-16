#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int employeeId;
    string name;
    double salary;

public:
    Employee()
    {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, double s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(double s)
    {
        salary = s;
    }
};

int main()
{
    const Employee e1(101, "Rahul", 50000);

    e1.display();

    // e1.updateSalary(60000);  // Error: cannot call non-const function

    Employee e2(e1);

    cout << "\nCopied Employee:\n";
    e2.display();

    return 0;
}