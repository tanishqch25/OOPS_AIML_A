#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;


    static int studentCount;

public:

    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        studentCount++;
    }

    static void showStudentCount()
    {
        cout << "Total Students: " << studentCount << endl;
    }

  
    friend void displayStudent(Student s);
};


int Student::studentCount = 0;

void displayStudent(Student s)
{

    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
}

int main()
{
    Student s1(101, "Tanmay");
    Student s2(102, "Shivam");
    Student s3(103, "Tanishq");

    cout << "Student Details:" << endl;

    displayStudent(s1);
    cout << endl;

    displayStudent(s2);
    cout << endl;

    displayStudent(s3);
    cout << endl;

 
    Student::showStudentCount();

    return 0;
}