#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative number
    if (num < 0) {
        num = -num;
    }

    // Special case when number is 0
    if (num == 0) {
        count = 1;
    }
    else {
        // Count digits using while loop
        while (num > 0) {
            num = num / 10;
            count++;
        }
    }

    // Output result
    cout << "Number of digits = " << count << endl;

    return 0;
}
