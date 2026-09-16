#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function to add two objects
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;   // Returning an object
    }

    // Function to display the complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    // Creating objects
    Complex c1(r1, i1);
    Complex c2(r2, i2);

    // Passing object as argument and receiving returned object
    Complex result = c1.add(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    result.display();

    return 0;
}