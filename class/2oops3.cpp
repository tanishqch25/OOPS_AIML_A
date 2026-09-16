// Call by Value and Call by Reference
#include <iostream>
using namespace std;

class call
{
public:
    void callbyvalue(int x)
    {
        x = 50;   
        cout << "Value of x in call by value : " << x << endl;
    }

    void callbyreference(int &x)
    {
        x = 50;
        cout << "Value of x in call by reference : " << x << endl;
    }
};

int main()
{
    call ob;
    int x;

    cout << "Enter the value of x : ";
    cin >> x;

    ob.callbyvalue(x);
    cout << "Value of x after call by value : " << x << endl;

    ob.callbyreference(x);
    cout << "Value of x after call by reference : " << x << endl;

    return 0;
}