#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input from user
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    // Check triangle type using nested if
    if (a == b) {
        if (b == c) {
            cout << "Triangle is Equilateral." << endl;
        }
        else {
            cout << "Triangle is Isosceles." << endl;
        }
    }
    else {
        if (b == c || a == c) {
            cout << "Triangle is Isosceles." << endl;
        }
        else {
            cout << "Triangle is Scalene." << endl;
        }
    }

    return 0;
}
