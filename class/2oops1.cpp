#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int add(int a, int b = 10) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Square: " << square(5) << endl;
    cout << "Default Argument: " << add(5) << endl;
    cout << "Overloading: " << add(5, 10, 15) << endl;

    return 0;
}