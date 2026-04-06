#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num; // store original number

    while(num != 0) {
        remainder = num % 10;          // get last digit
        reverse = reverse * 10 + remainder; // build reverse
        num = num / 10;                // remove last digit
    }

    if(original == reverse) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }

    return 0;
}
