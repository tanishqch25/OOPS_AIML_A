#include <iostream>
using namespace std;

class rangebase {
public:
    int arr[5];

    rangebase() {
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    void input() {
        cout << "Enter 5 numbers:\n";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "The numbers are: ";
        for (auto val : arr) { 
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    rangebase r; 
    
    r.input();
    r.display();
    
    return 0;
}