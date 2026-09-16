#include <iostream>
using namespace std ; 
class student {
    public  :
    string name ;
    int rollno; 
    void display(string name) 
    {
        cout<<"Name : "<<name<<endl ;
    }
    void display(int rollno)
    {
        cout<<"Roll No : "<<rollno<<endl ;
    }
    void display(char grade)
    {
        cout<<"Grade : "<<grade<<endl ;
    }

};
int main()
{
    student s ;
    s.name = "John cena" ;
    s.rollno = 101 ;
    s.display(s.name);
    s.display(s.rollno);
    s.display('A');
}