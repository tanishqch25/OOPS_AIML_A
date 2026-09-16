#include <iostream>
using namespace std ;
inline int add(int a , int b)
{
    return a+b ;
}
void datta(string name="Student")
{
    cout<<name<<endl;
}
int main()
{
    int a , b ;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"Sum of a and b is : "<<add(a,b);
    datta();
    datta("tanishq");
}
