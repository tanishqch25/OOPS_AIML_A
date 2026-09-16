#include <bits/stdc++.h>
using namespace std;

class Student
{

    string name;
    int age;

public:

    Student()
    {
        name = "";
        age = 0;
        cout << "Default Constructor called" << endl;
    }


    Student(string n, int a)
    {        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }

//"?""?"/
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    cout << "Creating object using default constructor:" << endl;
    Student s1;
    s1.display();

    cout << "Creating object using parameterized constructor:" << endl;
    Student s2("Tanishq", 20);
    s2.display();

    cout << "Creating object using copy constructor:" << endl;
    Student s3(s2);
    s3.display();

   

    return 0;
}