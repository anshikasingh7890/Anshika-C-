#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input from user
    cout << "Enter a character: ";
    cin >> ch;

    // Check character type
    if (ch >= 'A' && ch <= 'Z') {
        cout << "It is an Uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "It is a Lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "It is a Digit." << endl;
    }
    else {
        cout << "It is a Special character." << endl;
    }

    return 0;
}
