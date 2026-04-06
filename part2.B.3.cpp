#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input from user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Nested if to find largest
    if (a >= b) {
        if (a >= c) {
            cout << "Largest number is: " << a << endl;
        }
        else {
            cout << "Largest number is: " << c << endl;
        }
    }
    else {
        if (b >= c) {
            cout << "Largest number is: " << b << endl;
        }
        else {
            cout << "Largest number is: " << c << endl;
        }
    }

    return 0;
}
