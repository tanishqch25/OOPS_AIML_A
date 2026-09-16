#include <bits/stdc++.h>
using namespace std;

class ResultAnalyzer;

class StudentResult
{
    int rollNo;
    string name;
    int marks[3];
    static int totalStudents;

public:
    StudentResult(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalStudents++;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult()
    {
        cout << "Student object destroyed" << endl;
    }
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer
{
public:
    void analyze(const StudentResult &s)
    {
        int total = s.marks[0] + s.marks[1] + s.marks[2];
        float percentage = total / 3.0;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    StudentResult s1(101, "Rahul", 80, 75, 90);

    ResultAnalyzer r;
    r.analyze(s1);

    StudentResult::showTotalStudents();

    return 0;
}