#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    // Check for numbers less than 2
    if (num <= 1) {
        isPrime = false;
    } else {
        // Loop to check divisibility
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        cout << num << " is a Prime number.";
    else
        cout << num << " is not a Prime number.";

    return 0;
}
