
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    // Input from user
    cout << "Enter the value of n: ";
    cin >> n;

    // While loop to calculate sum
    while (i <= n) {
        sum = sum + i;
        i++;
    }

    // Output result
    cout << "Sum of first " << n << " natural numbers = " << sum << endl;

    return 0;
}
