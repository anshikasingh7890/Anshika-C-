include <iostream>
using namespace std;

int main() {
    int i, j;

    cout << "Prime numbers between 1 and 100 are:\n";

    for(i = 2; i <= 100; i++) {   // outer loop from 2 to 100
        int isPrime = 1;          // assume number is prime

        for(j = 2; j <= i / 2; j++) {  // inner loop to check factors
            if(i % j == 0) {
                isPrime = 0;      // not prime
                break;
            }
        }

        if(isPrime == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
